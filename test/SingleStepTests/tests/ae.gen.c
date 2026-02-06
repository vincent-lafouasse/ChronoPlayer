#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_AE, _AE_0000) {
    const struct CPU_State initial_cpu = {.pc=0x97bd, .a=0xf5, .x=0xa0, .y=0x36, .sp=0xa9, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x9e}, {.addr=0x97bd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x97be, .a=0x9e, .x=0xa0, .y=0x36, .sp=0xaa, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x9e}, {.addr=0x97bd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x97bd, .value=0xae, .type=IO_READ},
        {.addr=0x97be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2ec0, .a=0x88, .x=0x94, .y=0x29, .sp=0x84, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x6d}, {.addr=0x2ec0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2ec1, .a=0x6d, .x=0x94, .y=0x29, .sp=0x85, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x6d}, {.addr=0x2ec0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2ec0, .value=0xae, .type=IO_READ},
        {.addr=0x2ec1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0002) {
    const struct CPU_State initial_cpu = {.pc=0xe39c, .a=0x61, .x=0x79, .y=0xec, .sp=0x81, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x45}, {.addr=0xe39c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe39d, .a=0x45, .x=0x79, .y=0xec, .sp=0x82, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x45}, {.addr=0xe39c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe39c, .value=0xae, .type=IO_READ},
        {.addr=0xe39d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0003) {
    const struct CPU_State initial_cpu = {.pc=0x36d7, .a=0xbd, .x=0x56, .y=0x92, .sp=0x7f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xf6}, {.addr=0x36d7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x36d8, .a=0xf6, .x=0x56, .y=0x92, .sp=0x80, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xf6}, {.addr=0x36d7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x36d7, .value=0xae, .type=IO_READ},
        {.addr=0x36d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0004) {
    const struct CPU_State initial_cpu = {.pc=0x34c6, .a=0x1f, .x=0x21, .y=0x9d, .sp=0x12, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x0e}, {.addr=0x34c6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x34c7, .a=0x0e, .x=0x21, .y=0x9d, .sp=0x13, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x0e}, {.addr=0x34c6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x34c6, .value=0xae, .type=IO_READ},
        {.addr=0x34c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0005) {
    const struct CPU_State initial_cpu = {.pc=0x84d0, .a=0x26, .x=0x11, .y=0xb4, .sp=0x8d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0x84d0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x84d1, .a=0x69, .x=0x11, .y=0xb4, .sp=0x8e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0x84d0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x84d0, .value=0xae, .type=IO_READ},
        {.addr=0x84d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0006) {
    const struct CPU_State initial_cpu = {.pc=0x66fa, .a=0xf2, .x=0x77, .y=0xef, .sp=0x0b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x01}, {.addr=0x66fa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x66fb, .a=0x01, .x=0x77, .y=0xef, .sp=0x0c, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x01}, {.addr=0x66fa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x66fa, .value=0xae, .type=IO_READ},
        {.addr=0x66fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0007) {
    const struct CPU_State initial_cpu = {.pc=0x1fd4, .a=0x33, .x=0x3a, .y=0x7f, .sp=0x1f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x56}, {.addr=0x1fd4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1fd5, .a=0x56, .x=0x3a, .y=0x7f, .sp=0x20, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x56}, {.addr=0x1fd4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1fd4, .value=0xae, .type=IO_READ},
        {.addr=0x1fd5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0008) {
    const struct CPU_State initial_cpu = {.pc=0xf140, .a=0xa8, .x=0x54, .y=0x33, .sp=0x71, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x35}, {.addr=0xf140, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf141, .a=0x35, .x=0x54, .y=0x33, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x35}, {.addr=0xf140, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf140, .value=0xae, .type=IO_READ},
        {.addr=0xf141, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0009) {
    const struct CPU_State initial_cpu = {.pc=0xd03f, .a=0x40, .x=0xeb, .y=0x94, .sp=0x4f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xb6}, {.addr=0xd03f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd040, .a=0xb6, .x=0xeb, .y=0x94, .sp=0x50, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xb6}, {.addr=0xd03f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd03f, .value=0xae, .type=IO_READ},
        {.addr=0xd040, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000A) {
    const struct CPU_State initial_cpu = {.pc=0x1185, .a=0x6c, .x=0x4f, .y=0x48, .sp=0xe1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xe3}, {.addr=0x1185, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1186, .a=0xe3, .x=0x4f, .y=0x48, .sp=0xe2, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xe3}, {.addr=0x1185, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1185, .value=0xae, .type=IO_READ},
        {.addr=0x1186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000B) {
    const struct CPU_State initial_cpu = {.pc=0xa2e4, .a=0xe3, .x=0x37, .y=0x5c, .sp=0xd4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x29}, {.addr=0xa2e4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa2e5, .a=0x29, .x=0x37, .y=0x5c, .sp=0xd5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x29}, {.addr=0xa2e4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa2e4, .value=0xae, .type=IO_READ},
        {.addr=0xa2e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000C) {
    const struct CPU_State initial_cpu = {.pc=0x8b6a, .a=0x02, .x=0xab, .y=0xf3, .sp=0xcb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x4a}, {.addr=0x8b6a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b6b, .a=0x4a, .x=0xab, .y=0xf3, .sp=0xcc, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x4a}, {.addr=0x8b6a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b6a, .value=0xae, .type=IO_READ},
        {.addr=0x8b6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000D) {
    const struct CPU_State initial_cpu = {.pc=0xf35f, .a=0x2e, .x=0x0b, .y=0x49, .sp=0x84, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x41}, {.addr=0xf35f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf360, .a=0x41, .x=0x0b, .y=0x49, .sp=0x85, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x41}, {.addr=0xf35f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf35f, .value=0xae, .type=IO_READ},
        {.addr=0xf360, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000E) {
    const struct CPU_State initial_cpu = {.pc=0x1b6a, .a=0x5f, .x=0xe5, .y=0xa2, .sp=0x97, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xb0}, {.addr=0x1b6a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1b6b, .a=0xb0, .x=0xe5, .y=0xa2, .sp=0x98, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xb0}, {.addr=0x1b6a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1b6a, .value=0xae, .type=IO_READ},
        {.addr=0x1b6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_000F) {
    const struct CPU_State initial_cpu = {.pc=0x983e, .a=0x31, .x=0xa1, .y=0x62, .sp=0xec, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x66}, {.addr=0x983e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x983f, .a=0x66, .x=0xa1, .y=0x62, .sp=0xed, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x66}, {.addr=0x983e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x983e, .value=0xae, .type=IO_READ},
        {.addr=0x983f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0010) {
    const struct CPU_State initial_cpu = {.pc=0xe21f, .a=0x17, .x=0xaa, .y=0x98, .sp=0xbe, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xe0}, {.addr=0xe21f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe220, .a=0xe0, .x=0xaa, .y=0x98, .sp=0xbf, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xe0}, {.addr=0xe21f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe21f, .value=0xae, .type=IO_READ},
        {.addr=0xe220, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0011) {
    const struct CPU_State initial_cpu = {.pc=0x164c, .a=0xbd, .x=0x23, .y=0x7a, .sp=0x6b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x25}, {.addr=0x164c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x164d, .a=0x25, .x=0x23, .y=0x7a, .sp=0x6c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x25}, {.addr=0x164c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x164c, .value=0xae, .type=IO_READ},
        {.addr=0x164d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0012) {
    const struct CPU_State initial_cpu = {.pc=0x8eae, .a=0x7a, .x=0xac, .y=0x6b, .sp=0x71, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x7d}, {.addr=0x8eae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8eaf, .a=0x7d, .x=0xac, .y=0x6b, .sp=0x72, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x7d}, {.addr=0x8eae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8eae, .value=0xae, .type=IO_READ},
        {.addr=0x8eaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0013) {
    const struct CPU_State initial_cpu = {.pc=0x5981, .a=0xa6, .x=0x67, .y=0x78, .sp=0x42, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xa2}, {.addr=0x5981, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5982, .a=0xa2, .x=0x67, .y=0x78, .sp=0x43, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xa2}, {.addr=0x5981, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5981, .value=0xae, .type=IO_READ},
        {.addr=0x5982, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0014) {
    const struct CPU_State initial_cpu = {.pc=0xad04, .a=0x1d, .x=0x2d, .y=0xa2, .sp=0x4b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x8f}, {.addr=0xad04, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xad05, .a=0x8f, .x=0x2d, .y=0xa2, .sp=0x4c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x8f}, {.addr=0xad04, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xad04, .value=0xae, .type=IO_READ},
        {.addr=0xad05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5559, .a=0x63, .x=0x2d, .y=0x7e, .sp=0x2c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x8b}, {.addr=0x5559, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x555a, .a=0x8b, .x=0x2d, .y=0x7e, .sp=0x2d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x8b}, {.addr=0x5559, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5559, .value=0xae, .type=IO_READ},
        {.addr=0x555a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0016) {
    const struct CPU_State initial_cpu = {.pc=0xda2b, .a=0xb1, .x=0x3c, .y=0x91, .sp=0x31, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x87}, {.addr=0xda2b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xda2c, .a=0x87, .x=0x3c, .y=0x91, .sp=0x32, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x87}, {.addr=0xda2b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xda2b, .value=0xae, .type=IO_READ},
        {.addr=0xda2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0017) {
    const struct CPU_State initial_cpu = {.pc=0x508f, .a=0x5b, .x=0xcd, .y=0x0b, .sp=0x27, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x08}, {.addr=0x508f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5090, .a=0x08, .x=0xcd, .y=0x0b, .sp=0x28, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x08}, {.addr=0x508f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x508f, .value=0xae, .type=IO_READ},
        {.addr=0x5090, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0018) {
    const struct CPU_State initial_cpu = {.pc=0x3ea2, .a=0xd2, .x=0x97, .y=0x16, .sp=0x2a, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x6c}, {.addr=0x3ea2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3ea3, .a=0x6c, .x=0x97, .y=0x16, .sp=0x2b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x6c}, {.addr=0x3ea2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3ea2, .value=0xae, .type=IO_READ},
        {.addr=0x3ea3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1332, .a=0xbd, .x=0x64, .y=0x59, .sp=0x4d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xe8}, {.addr=0x1332, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1333, .a=0xe8, .x=0x64, .y=0x59, .sp=0x4e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xe8}, {.addr=0x1332, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1332, .value=0xae, .type=IO_READ},
        {.addr=0x1333, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001A) {
    const struct CPU_State initial_cpu = {.pc=0x684e, .a=0xba, .x=0x43, .y=0x64, .sp=0xda, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x33}, {.addr=0x684e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x684f, .a=0x33, .x=0x43, .y=0x64, .sp=0xdb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x33}, {.addr=0x684e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x684e, .value=0xae, .type=IO_READ},
        {.addr=0x684f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001B) {
    const struct CPU_State initial_cpu = {.pc=0xfa82, .a=0x6d, .x=0xae, .y=0x50, .sp=0x5c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xde}, {.addr=0xfa82, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfa83, .a=0xde, .x=0xae, .y=0x50, .sp=0x5d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xde}, {.addr=0xfa82, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfa82, .value=0xae, .type=IO_READ},
        {.addr=0xfa83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001C) {
    const struct CPU_State initial_cpu = {.pc=0x8dc9, .a=0x45, .x=0xf5, .y=0x97, .sp=0x59, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xb1}, {.addr=0x8dc9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8dca, .a=0xb1, .x=0xf5, .y=0x97, .sp=0x5a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xb1}, {.addr=0x8dc9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8dc9, .value=0xae, .type=IO_READ},
        {.addr=0x8dca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001D) {
    const struct CPU_State initial_cpu = {.pc=0x486d, .a=0x7b, .x=0x2d, .y=0x1a, .sp=0x1c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x5e}, {.addr=0x486d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x486e, .a=0x5e, .x=0x2d, .y=0x1a, .sp=0x1d, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x5e}, {.addr=0x486d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x486d, .value=0xae, .type=IO_READ},
        {.addr=0x486e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001E) {
    const struct CPU_State initial_cpu = {.pc=0x9e1f, .a=0x60, .x=0x04, .y=0xaa, .sp=0x1e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x76}, {.addr=0x9e1f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9e20, .a=0x76, .x=0x04, .y=0xaa, .sp=0x1f, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x76}, {.addr=0x9e1f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9e1f, .value=0xae, .type=IO_READ},
        {.addr=0x9e20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_001F) {
    const struct CPU_State initial_cpu = {.pc=0xd590, .a=0xb7, .x=0xe3, .y=0xcb, .sp=0xdb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x86}, {.addr=0xd590, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd591, .a=0x86, .x=0xe3, .y=0xcb, .sp=0xdc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x86}, {.addr=0xd590, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd590, .value=0xae, .type=IO_READ},
        {.addr=0xd591, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0020) {
    const struct CPU_State initial_cpu = {.pc=0x8142, .a=0xec, .x=0xc3, .y=0x32, .sp=0xe9, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x1c}, {.addr=0x8142, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8143, .a=0x1c, .x=0xc3, .y=0x32, .sp=0xea, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x1c}, {.addr=0x8142, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8142, .value=0xae, .type=IO_READ},
        {.addr=0x8143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0021) {
    const struct CPU_State initial_cpu = {.pc=0x01dc, .a=0x1c, .x=0xb0, .y=0x68, .sp=0x10, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xdd}, {.addr=0x01dc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x01dd, .a=0xdd, .x=0xb0, .y=0x68, .sp=0x11, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xdd}, {.addr=0x01dc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x01dc, .value=0xae, .type=IO_READ},
        {.addr=0x01dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0022) {
    const struct CPU_State initial_cpu = {.pc=0x890b, .a=0x01, .x=0x4f, .y=0xd3, .sp=0x8e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x20}, {.addr=0x890b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x890c, .a=0x20, .x=0x4f, .y=0xd3, .sp=0x8f, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x20}, {.addr=0x890b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x890b, .value=0xae, .type=IO_READ},
        {.addr=0x890c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0023) {
    const struct CPU_State initial_cpu = {.pc=0x7a3e, .a=0x61, .x=0xff, .y=0xb2, .sp=0x93, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x06}, {.addr=0x7a3e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7a3f, .a=0x06, .x=0xff, .y=0xb2, .sp=0x94, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x06}, {.addr=0x7a3e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7a3e, .value=0xae, .type=IO_READ},
        {.addr=0x7a3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0024) {
    const struct CPU_State initial_cpu = {.pc=0x33af, .a=0x3b, .x=0x7a, .y=0xc5, .sp=0xa3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x46}, {.addr=0x33af, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x33b0, .a=0x46, .x=0x7a, .y=0xc5, .sp=0xa4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x46}, {.addr=0x33af, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x33af, .value=0xae, .type=IO_READ},
        {.addr=0x33b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0025) {
    const struct CPU_State initial_cpu = {.pc=0x1185, .a=0xfe, .x=0xcc, .y=0x97, .sp=0x07, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xf1}, {.addr=0x1185, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1186, .a=0xf1, .x=0xcc, .y=0x97, .sp=0x08, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xf1}, {.addr=0x1185, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1185, .value=0xae, .type=IO_READ},
        {.addr=0x1186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4ef4, .a=0x4e, .x=0x6a, .y=0xf1, .sp=0x39, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x08}, {.addr=0x4ef4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4ef5, .a=0x08, .x=0x6a, .y=0xf1, .sp=0x3a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x08}, {.addr=0x4ef4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4ef4, .value=0xae, .type=IO_READ},
        {.addr=0x4ef5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0027) {
    const struct CPU_State initial_cpu = {.pc=0x77bb, .a=0x9b, .x=0x8f, .y=0x00, .sp=0x30, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x77}, {.addr=0x77bb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x77bc, .a=0x77, .x=0x8f, .y=0x00, .sp=0x31, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x77}, {.addr=0x77bb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x77bb, .value=0xae, .type=IO_READ},
        {.addr=0x77bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0028) {
    const struct CPU_State initial_cpu = {.pc=0xdda4, .a=0xc9, .x=0xbb, .y=0x8f, .sp=0x92, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xc7}, {.addr=0xdda4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdda5, .a=0xc7, .x=0xbb, .y=0x8f, .sp=0x93, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xc7}, {.addr=0xdda4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdda4, .value=0xae, .type=IO_READ},
        {.addr=0xdda5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0029) {
    const struct CPU_State initial_cpu = {.pc=0x764a, .a=0xa3, .x=0x01, .y=0xe7, .sp=0xa2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x77}, {.addr=0x764a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x764b, .a=0x77, .x=0x01, .y=0xe7, .sp=0xa3, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x77}, {.addr=0x764a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x764a, .value=0xae, .type=IO_READ},
        {.addr=0x764b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002A) {
    const struct CPU_State initial_cpu = {.pc=0xa41c, .a=0x7d, .x=0xe2, .y=0x09, .sp=0xab, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x09}, {.addr=0xa41c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa41d, .a=0x09, .x=0xe2, .y=0x09, .sp=0xac, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x09}, {.addr=0xa41c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa41c, .value=0xae, .type=IO_READ},
        {.addr=0xa41d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002B) {
    const struct CPU_State initial_cpu = {.pc=0x8728, .a=0x7c, .x=0x73, .y=0x82, .sp=0x14, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xa0}, {.addr=0x8728, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8729, .a=0xa0, .x=0x73, .y=0x82, .sp=0x15, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xa0}, {.addr=0x8728, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8728, .value=0xae, .type=IO_READ},
        {.addr=0x8729, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002C) {
    const struct CPU_State initial_cpu = {.pc=0xbced, .a=0x5d, .x=0x00, .y=0x3b, .sp=0xcf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x80}, {.addr=0xbced, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbcee, .a=0x80, .x=0x00, .y=0x3b, .sp=0xd0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x80}, {.addr=0xbced, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbced, .value=0xae, .type=IO_READ},
        {.addr=0xbcee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9106, .a=0x46, .x=0xe3, .y=0x0b, .sp=0x03, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xcf}, {.addr=0x9106, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9107, .a=0xcf, .x=0xe3, .y=0x0b, .sp=0x04, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xcf}, {.addr=0x9106, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9106, .value=0xae, .type=IO_READ},
        {.addr=0x9107, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002E) {
    const struct CPU_State initial_cpu = {.pc=0x38a7, .a=0x27, .x=0xa3, .y=0xa0, .sp=0x52, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x47}, {.addr=0x38a7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x38a8, .a=0x47, .x=0xa3, .y=0xa0, .sp=0x53, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x47}, {.addr=0x38a7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x38a7, .value=0xae, .type=IO_READ},
        {.addr=0x38a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_002F) {
    const struct CPU_State initial_cpu = {.pc=0x5f44, .a=0x8e, .x=0x5e, .y=0x35, .sp=0x79, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x52}, {.addr=0x5f44, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5f45, .a=0x52, .x=0x5e, .y=0x35, .sp=0x7a, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x52}, {.addr=0x5f44, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5f44, .value=0xae, .type=IO_READ},
        {.addr=0x5f45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0030) {
    const struct CPU_State initial_cpu = {.pc=0x95cb, .a=0x9f, .x=0x90, .y=0x15, .sp=0xc3, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x02}, {.addr=0x95cb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x95cc, .a=0x02, .x=0x90, .y=0x15, .sp=0xc4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x02}, {.addr=0x95cb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x95cb, .value=0xae, .type=IO_READ},
        {.addr=0x95cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0031) {
    const struct CPU_State initial_cpu = {.pc=0x938c, .a=0x4e, .x=0x0c, .y=0x3f, .sp=0x6d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x52}, {.addr=0x938c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x938d, .a=0x52, .x=0x0c, .y=0x3f, .sp=0x6e, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x52}, {.addr=0x938c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x938c, .value=0xae, .type=IO_READ},
        {.addr=0x938d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0032) {
    const struct CPU_State initial_cpu = {.pc=0x952c, .a=0x69, .x=0x14, .y=0x7f, .sp=0x94, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xa0}, {.addr=0x952c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x952d, .a=0xa0, .x=0x14, .y=0x7f, .sp=0x95, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xa0}, {.addr=0x952c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x952c, .value=0xae, .type=IO_READ},
        {.addr=0x952d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0033) {
    const struct CPU_State initial_cpu = {.pc=0x3dc4, .a=0x29, .x=0xc8, .y=0x9e, .sp=0xb3, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x7b}, {.addr=0x3dc4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3dc5, .a=0x7b, .x=0xc8, .y=0x9e, .sp=0xb4, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x7b}, {.addr=0x3dc4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3dc4, .value=0xae, .type=IO_READ},
        {.addr=0x3dc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0034) {
    const struct CPU_State initial_cpu = {.pc=0x74de, .a=0xd7, .x=0xf2, .y=0x0f, .sp=0xe5, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x9b}, {.addr=0x74de, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x74df, .a=0x9b, .x=0xf2, .y=0x0f, .sp=0xe6, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x9b}, {.addr=0x74de, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x74de, .value=0xae, .type=IO_READ},
        {.addr=0x74df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0035) {
    const struct CPU_State initial_cpu = {.pc=0x1657, .a=0xf9, .x=0xb4, .y=0xd8, .sp=0x1f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xd0}, {.addr=0x1657, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1658, .a=0xd0, .x=0xb4, .y=0xd8, .sp=0x20, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xd0}, {.addr=0x1657, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1657, .value=0xae, .type=IO_READ},
        {.addr=0x1658, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0036) {
    const struct CPU_State initial_cpu = {.pc=0x489b, .a=0xc0, .x=0x20, .y=0xbb, .sp=0xe7, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xdc}, {.addr=0x489b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x489c, .a=0xdc, .x=0x20, .y=0xbb, .sp=0xe8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xdc}, {.addr=0x489b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x489b, .value=0xae, .type=IO_READ},
        {.addr=0x489c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0037) {
    const struct CPU_State initial_cpu = {.pc=0xee98, .a=0x6a, .x=0xcb, .y=0xd1, .sp=0x54, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x80}, {.addr=0xee98, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xee99, .a=0x80, .x=0xcb, .y=0xd1, .sp=0x55, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x80}, {.addr=0xee98, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xee98, .value=0xae, .type=IO_READ},
        {.addr=0xee99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0038) {
    const struct CPU_State initial_cpu = {.pc=0xb0f7, .a=0x34, .x=0x4b, .y=0x5b, .sp=0xa5, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x17}, {.addr=0xb0f7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb0f8, .a=0x17, .x=0x4b, .y=0x5b, .sp=0xa6, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x17}, {.addr=0xb0f7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb0f7, .value=0xae, .type=IO_READ},
        {.addr=0xb0f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0039) {
    const struct CPU_State initial_cpu = {.pc=0xea53, .a=0xc4, .x=0x92, .y=0xf7, .sp=0xa2, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xd8}, {.addr=0xea53, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xea54, .a=0xd8, .x=0x92, .y=0xf7, .sp=0xa3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xd8}, {.addr=0xea53, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xea53, .value=0xae, .type=IO_READ},
        {.addr=0xea54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2985, .a=0x69, .x=0x45, .y=0x36, .sp=0x61, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x21}, {.addr=0x2985, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2986, .a=0x21, .x=0x45, .y=0x36, .sp=0x62, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x21}, {.addr=0x2985, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2985, .value=0xae, .type=IO_READ},
        {.addr=0x2986, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003B) {
    const struct CPU_State initial_cpu = {.pc=0xc01a, .a=0x25, .x=0x72, .y=0xca, .sp=0x29, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xa2}, {.addr=0xc01a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc01b, .a=0xa2, .x=0x72, .y=0xca, .sp=0x2a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xa2}, {.addr=0xc01a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc01a, .value=0xae, .type=IO_READ},
        {.addr=0xc01b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003C) {
    const struct CPU_State initial_cpu = {.pc=0xbd02, .a=0x55, .x=0xc4, .y=0xa3, .sp=0xee, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x28}, {.addr=0xbd02, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd03, .a=0x28, .x=0xc4, .y=0xa3, .sp=0xef, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x28}, {.addr=0xbd02, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd02, .value=0xae, .type=IO_READ},
        {.addr=0xbd03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003D) {
    const struct CPU_State initial_cpu = {.pc=0x2d6b, .a=0x1a, .x=0xe2, .y=0xb6, .sp=0x11, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xb0}, {.addr=0x2d6b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2d6c, .a=0xb0, .x=0xe2, .y=0xb6, .sp=0x12, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xb0}, {.addr=0x2d6b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2d6b, .value=0xae, .type=IO_READ},
        {.addr=0x2d6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003E) {
    const struct CPU_State initial_cpu = {.pc=0xed19, .a=0xa7, .x=0x2b, .y=0x89, .sp=0x40, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x47}, {.addr=0xed19, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xed1a, .a=0x47, .x=0x2b, .y=0x89, .sp=0x41, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x47}, {.addr=0xed19, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xed19, .value=0xae, .type=IO_READ},
        {.addr=0xed1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_003F) {
    const struct CPU_State initial_cpu = {.pc=0x6538, .a=0xf0, .x=0x93, .y=0x91, .sp=0x61, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xde}, {.addr=0x6538, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6539, .a=0xde, .x=0x93, .y=0x91, .sp=0x62, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xde}, {.addr=0x6538, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6538, .value=0xae, .type=IO_READ},
        {.addr=0x6539, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0040) {
    const struct CPU_State initial_cpu = {.pc=0xd538, .a=0x93, .x=0xbc, .y=0xb9, .sp=0xda, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xe2}, {.addr=0xd538, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd539, .a=0xe2, .x=0xbc, .y=0xb9, .sp=0xdb, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xe2}, {.addr=0xd538, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd538, .value=0xae, .type=IO_READ},
        {.addr=0xd539, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0041) {
    const struct CPU_State initial_cpu = {.pc=0x95d1, .a=0x17, .x=0xdd, .y=0x7c, .sp=0xb2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x89}, {.addr=0x95d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x95d2, .a=0x89, .x=0xdd, .y=0x7c, .sp=0xb3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x89}, {.addr=0x95d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x95d1, .value=0xae, .type=IO_READ},
        {.addr=0x95d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0042) {
    const struct CPU_State initial_cpu = {.pc=0xa88d, .a=0xeb, .x=0x87, .y=0x77, .sp=0x52, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xa88d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa88e, .a=0x00, .x=0x87, .y=0x77, .sp=0x53, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xa88d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa88d, .value=0xae, .type=IO_READ},
        {.addr=0xa88e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0043) {
    const struct CPU_State initial_cpu = {.pc=0x137e, .a=0x67, .x=0x9c, .y=0x83, .sp=0x78, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x13}, {.addr=0x137e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x137f, .a=0x13, .x=0x9c, .y=0x83, .sp=0x79, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x13}, {.addr=0x137e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x137e, .value=0xae, .type=IO_READ},
        {.addr=0x137f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0044) {
    const struct CPU_State initial_cpu = {.pc=0xa392, .a=0x22, .x=0xc9, .y=0x63, .sp=0x87, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xf0}, {.addr=0xa392, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa393, .a=0xf0, .x=0xc9, .y=0x63, .sp=0x88, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xf0}, {.addr=0xa392, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa392, .value=0xae, .type=IO_READ},
        {.addr=0xa393, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0045) {
    const struct CPU_State initial_cpu = {.pc=0xf604, .a=0xe1, .x=0xdd, .y=0x2a, .sp=0x7d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xaa}, {.addr=0xf604, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf605, .a=0xaa, .x=0xdd, .y=0x2a, .sp=0x7e, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xaa}, {.addr=0xf604, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf604, .value=0xae, .type=IO_READ},
        {.addr=0xf605, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0046) {
    const struct CPU_State initial_cpu = {.pc=0x60f9, .a=0x2f, .x=0xe5, .y=0x25, .sp=0xab, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x4e}, {.addr=0x60f9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x60fa, .a=0x4e, .x=0xe5, .y=0x25, .sp=0xac, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x4e}, {.addr=0x60f9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x60f9, .value=0xae, .type=IO_READ},
        {.addr=0x60fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0047) {
    const struct CPU_State initial_cpu = {.pc=0x319d, .a=0x2d, .x=0x96, .y=0xdb, .sp=0x65, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xac}, {.addr=0x319d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x319e, .a=0xac, .x=0x96, .y=0xdb, .sp=0x66, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xac}, {.addr=0x319d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x319d, .value=0xae, .type=IO_READ},
        {.addr=0x319e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0048) {
    const struct CPU_State initial_cpu = {.pc=0x8e42, .a=0x9b, .x=0xdc, .y=0x6b, .sp=0xd1, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x9e}, {.addr=0x8e42, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8e43, .a=0x9e, .x=0xdc, .y=0x6b, .sp=0xd2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x9e}, {.addr=0x8e42, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8e42, .value=0xae, .type=IO_READ},
        {.addr=0x8e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0049) {
    const struct CPU_State initial_cpu = {.pc=0x63ee, .a=0xdf, .x=0x53, .y=0x45, .sp=0x16, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xd5}, {.addr=0x63ee, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63ef, .a=0xd5, .x=0x53, .y=0x45, .sp=0x17, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xd5}, {.addr=0x63ee, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63ee, .value=0xae, .type=IO_READ},
        {.addr=0x63ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004A) {
    const struct CPU_State initial_cpu = {.pc=0x6889, .a=0x70, .x=0x0b, .y=0xfa, .sp=0x72, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x42}, {.addr=0x6889, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x688a, .a=0x42, .x=0x0b, .y=0xfa, .sp=0x73, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x42}, {.addr=0x6889, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6889, .value=0xae, .type=IO_READ},
        {.addr=0x688a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004B) {
    const struct CPU_State initial_cpu = {.pc=0xc5de, .a=0x95, .x=0x5f, .y=0x55, .sp=0xcd, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x62}, {.addr=0xc5de, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc5df, .a=0x62, .x=0x5f, .y=0x55, .sp=0xce, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x62}, {.addr=0xc5de, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc5de, .value=0xae, .type=IO_READ},
        {.addr=0xc5df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004C) {
    const struct CPU_State initial_cpu = {.pc=0xe2e2, .a=0x77, .x=0xa0, .y=0xcf, .sp=0xe5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x1c}, {.addr=0xe2e2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe2e3, .a=0x1c, .x=0xa0, .y=0xcf, .sp=0xe6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x1c}, {.addr=0xe2e2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe2e2, .value=0xae, .type=IO_READ},
        {.addr=0xe2e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004D) {
    const struct CPU_State initial_cpu = {.pc=0xbd49, .a=0x6e, .x=0x6b, .y=0x1c, .sp=0x78, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x81}, {.addr=0xbd49, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd4a, .a=0x81, .x=0x6b, .y=0x1c, .sp=0x79, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x81}, {.addr=0xbd49, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd49, .value=0xae, .type=IO_READ},
        {.addr=0xbd4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb485, .a=0x5a, .x=0xa3, .y=0xe5, .sp=0x12, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x34}, {.addr=0xb485, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb486, .a=0x34, .x=0xa3, .y=0xe5, .sp=0x13, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x34}, {.addr=0xb485, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb485, .value=0xae, .type=IO_READ},
        {.addr=0xb486, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_004F) {
    const struct CPU_State initial_cpu = {.pc=0x091c, .a=0x18, .x=0xad, .y=0x95, .sp=0x5e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x21}, {.addr=0x091c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x091d, .a=0x21, .x=0xad, .y=0x95, .sp=0x5f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x21}, {.addr=0x091c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x091c, .value=0xae, .type=IO_READ},
        {.addr=0x091d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0050) {
    const struct CPU_State initial_cpu = {.pc=0x64e0, .a=0xc4, .x=0x21, .y=0x08, .sp=0x84, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x69}, {.addr=0x64e0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x64e1, .a=0x69, .x=0x21, .y=0x08, .sp=0x85, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x69}, {.addr=0x64e0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x64e0, .value=0xae, .type=IO_READ},
        {.addr=0x64e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0051) {
    const struct CPU_State initial_cpu = {.pc=0x4dc1, .a=0x64, .x=0x6b, .y=0xf3, .sp=0xed, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xf7}, {.addr=0x4dc1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4dc2, .a=0xf7, .x=0x6b, .y=0xf3, .sp=0xee, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xf7}, {.addr=0x4dc1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4dc1, .value=0xae, .type=IO_READ},
        {.addr=0x4dc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0052) {
    const struct CPU_State initial_cpu = {.pc=0x1d10, .a=0x8a, .x=0x2e, .y=0x84, .sp=0x7d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xb4}, {.addr=0x1d10, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1d11, .a=0xb4, .x=0x2e, .y=0x84, .sp=0x7e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xb4}, {.addr=0x1d10, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1d10, .value=0xae, .type=IO_READ},
        {.addr=0x1d11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0053) {
    const struct CPU_State initial_cpu = {.pc=0xdab7, .a=0x0e, .x=0x50, .y=0xd9, .sp=0x08, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xd6}, {.addr=0xdab7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdab8, .a=0xd6, .x=0x50, .y=0xd9, .sp=0x09, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xd6}, {.addr=0xdab7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdab7, .value=0xae, .type=IO_READ},
        {.addr=0xdab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf1ba, .a=0x68, .x=0x2c, .y=0x43, .sp=0xfc, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x16}, {.addr=0xf1ba, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf1bb, .a=0x16, .x=0x2c, .y=0x43, .sp=0xfd, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x16}, {.addr=0xf1ba, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf1ba, .value=0xae, .type=IO_READ},
        {.addr=0xf1bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0055) {
    const struct CPU_State initial_cpu = {.pc=0x26bb, .a=0x21, .x=0x2b, .y=0xbd, .sp=0x26, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x9d}, {.addr=0x26bb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x26bc, .a=0x9d, .x=0x2b, .y=0xbd, .sp=0x27, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x9d}, {.addr=0x26bb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x26bb, .value=0xae, .type=IO_READ},
        {.addr=0x26bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0056) {
    const struct CPU_State initial_cpu = {.pc=0xfcaa, .a=0x50, .x=0x07, .y=0xdf, .sp=0x2c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x91}, {.addr=0xfcaa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfcab, .a=0x91, .x=0x07, .y=0xdf, .sp=0x2d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x91}, {.addr=0xfcaa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfcaa, .value=0xae, .type=IO_READ},
        {.addr=0xfcab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0057) {
    const struct CPU_State initial_cpu = {.pc=0x56ab, .a=0xec, .x=0x9d, .y=0x79, .sp=0x20, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x37}, {.addr=0x56ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x56ac, .a=0x37, .x=0x9d, .y=0x79, .sp=0x21, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x37}, {.addr=0x56ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x56ab, .value=0xae, .type=IO_READ},
        {.addr=0x56ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9555, .a=0x71, .x=0x42, .y=0xd7, .sp=0xf5, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xf7}, {.addr=0x9555, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9556, .a=0xf7, .x=0x42, .y=0xd7, .sp=0xf6, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xf7}, {.addr=0x9555, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9555, .value=0xae, .type=IO_READ},
        {.addr=0x9556, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0059) {
    const struct CPU_State initial_cpu = {.pc=0x2711, .a=0x3c, .x=0x30, .y=0x0a, .sp=0xd5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x42}, {.addr=0x2711, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2712, .a=0x42, .x=0x30, .y=0x0a, .sp=0xd6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x42}, {.addr=0x2711, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2711, .value=0xae, .type=IO_READ},
        {.addr=0x2712, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1db4, .a=0x4a, .x=0x06, .y=0x29, .sp=0xd5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x59}, {.addr=0x1db4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1db5, .a=0x59, .x=0x06, .y=0x29, .sp=0xd6, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x59}, {.addr=0x1db4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1db4, .value=0xae, .type=IO_READ},
        {.addr=0x1db5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005B) {
    const struct CPU_State initial_cpu = {.pc=0x592e, .a=0x10, .x=0xbd, .y=0x5a, .sp=0x4e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x16}, {.addr=0x592e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x592f, .a=0x16, .x=0xbd, .y=0x5a, .sp=0x4f, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x16}, {.addr=0x592e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x592e, .value=0xae, .type=IO_READ},
        {.addr=0x592f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005C) {
    const struct CPU_State initial_cpu = {.pc=0xf610, .a=0xaa, .x=0x9c, .y=0x4d, .sp=0xc1, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x21}, {.addr=0xf610, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf611, .a=0x21, .x=0x9c, .y=0x4d, .sp=0xc2, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x21}, {.addr=0xf610, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf610, .value=0xae, .type=IO_READ},
        {.addr=0xf611, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005D) {
    const struct CPU_State initial_cpu = {.pc=0x5eb5, .a=0x8f, .x=0x55, .y=0xe4, .sp=0x71, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xe8}, {.addr=0x5eb5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5eb6, .a=0xe8, .x=0x55, .y=0xe4, .sp=0x72, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xe8}, {.addr=0x5eb5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5eb5, .value=0xae, .type=IO_READ},
        {.addr=0x5eb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005E) {
    const struct CPU_State initial_cpu = {.pc=0xfe78, .a=0xe4, .x=0xe1, .y=0xf8, .sp=0xe8, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x68}, {.addr=0xfe78, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfe79, .a=0x68, .x=0xe1, .y=0xf8, .sp=0xe9, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x68}, {.addr=0xfe78, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfe78, .value=0xae, .type=IO_READ},
        {.addr=0xfe79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_005F) {
    const struct CPU_State initial_cpu = {.pc=0xc2b1, .a=0x8c, .x=0x66, .y=0xc2, .sp=0x0d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xd4}, {.addr=0xc2b1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc2b2, .a=0xd4, .x=0x66, .y=0xc2, .sp=0x0e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xd4}, {.addr=0xc2b1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc2b1, .value=0xae, .type=IO_READ},
        {.addr=0xc2b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0060) {
    const struct CPU_State initial_cpu = {.pc=0x1449, .a=0x98, .x=0xb4, .y=0x9d, .sp=0x4d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xf7}, {.addr=0x1449, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x144a, .a=0xf7, .x=0xb4, .y=0x9d, .sp=0x4e, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xf7}, {.addr=0x1449, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1449, .value=0xae, .type=IO_READ},
        {.addr=0x144a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0061) {
    const struct CPU_State initial_cpu = {.pc=0xe84f, .a=0x5d, .x=0xa9, .y=0x9b, .sp=0x1e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x5e}, {.addr=0xe84f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe850, .a=0x5e, .x=0xa9, .y=0x9b, .sp=0x1f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x5e}, {.addr=0xe84f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe84f, .value=0xae, .type=IO_READ},
        {.addr=0xe850, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0062) {
    const struct CPU_State initial_cpu = {.pc=0x5215, .a=0x36, .x=0xe3, .y=0xac, .sp=0xec, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x72}, {.addr=0x5215, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5216, .a=0x72, .x=0xe3, .y=0xac, .sp=0xed, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x72}, {.addr=0x5215, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5215, .value=0xae, .type=IO_READ},
        {.addr=0x5216, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0063) {
    const struct CPU_State initial_cpu = {.pc=0xb2a7, .a=0xed, .x=0x47, .y=0x33, .sp=0x4a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xaa}, {.addr=0xb2a7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb2a8, .a=0xaa, .x=0x47, .y=0x33, .sp=0x4b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xaa}, {.addr=0xb2a7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb2a7, .value=0xae, .type=IO_READ},
        {.addr=0xb2a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0064) {
    const struct CPU_State initial_cpu = {.pc=0x7cb3, .a=0x88, .x=0x54, .y=0xf7, .sp=0x68, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x6a}, {.addr=0x7cb3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7cb4, .a=0x6a, .x=0x54, .y=0xf7, .sp=0x69, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x6a}, {.addr=0x7cb3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7cb3, .value=0xae, .type=IO_READ},
        {.addr=0x7cb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0065) {
    const struct CPU_State initial_cpu = {.pc=0xbc65, .a=0x3f, .x=0xd9, .y=0xb5, .sp=0xb7, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x47}, {.addr=0xbc65, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbc66, .a=0x47, .x=0xd9, .y=0xb5, .sp=0xb8, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x47}, {.addr=0xbc65, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbc65, .value=0xae, .type=IO_READ},
        {.addr=0xbc66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0066) {
    const struct CPU_State initial_cpu = {.pc=0xde68, .a=0x97, .x=0xff, .y=0xcc, .sp=0x78, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x74}, {.addr=0xde68, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xde69, .a=0x74, .x=0xff, .y=0xcc, .sp=0x79, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x74}, {.addr=0xde68, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xde68, .value=0xae, .type=IO_READ},
        {.addr=0xde69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0067) {
    const struct CPU_State initial_cpu = {.pc=0x26b1, .a=0xec, .x=0x66, .y=0x09, .sp=0xc9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xd7}, {.addr=0x26b1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x26b2, .a=0xd7, .x=0x66, .y=0x09, .sp=0xca, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xd7}, {.addr=0x26b1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x26b1, .value=0xae, .type=IO_READ},
        {.addr=0x26b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0068) {
    const struct CPU_State initial_cpu = {.pc=0xf356, .a=0x7c, .x=0x33, .y=0xc9, .sp=0x5a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x39}, {.addr=0xf356, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf357, .a=0x39, .x=0x33, .y=0xc9, .sp=0x5b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x39}, {.addr=0xf356, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf356, .value=0xae, .type=IO_READ},
        {.addr=0xf357, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0069) {
    const struct CPU_State initial_cpu = {.pc=0x9f3b, .a=0x1f, .x=0xfe, .y=0x7f, .sp=0x3f, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xa5}, {.addr=0x9f3b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f3c, .a=0xa5, .x=0xfe, .y=0x7f, .sp=0x40, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xa5}, {.addr=0x9f3b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f3b, .value=0xae, .type=IO_READ},
        {.addr=0x9f3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006A) {
    const struct CPU_State initial_cpu = {.pc=0x3993, .a=0x20, .x=0x6f, .y=0x6e, .sp=0x8f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xb3}, {.addr=0x3993, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3994, .a=0xb3, .x=0x6f, .y=0x6e, .sp=0x90, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xb3}, {.addr=0x3993, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3993, .value=0xae, .type=IO_READ},
        {.addr=0x3994, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006B) {
    const struct CPU_State initial_cpu = {.pc=0x6ab7, .a=0x1e, .x=0x78, .y=0x61, .sp=0x4b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xf4}, {.addr=0x6ab7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6ab8, .a=0xf4, .x=0x78, .y=0x61, .sp=0x4c, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xf4}, {.addr=0x6ab7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ab7, .value=0xae, .type=IO_READ},
        {.addr=0x6ab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006C) {
    const struct CPU_State initial_cpu = {.pc=0xf79d, .a=0x98, .x=0x0d, .y=0x26, .sp=0x44, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x8d}, {.addr=0xf79d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf79e, .a=0x8d, .x=0x0d, .y=0x26, .sp=0x45, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x8d}, {.addr=0xf79d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf79d, .value=0xae, .type=IO_READ},
        {.addr=0xf79e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006D) {
    const struct CPU_State initial_cpu = {.pc=0x6197, .a=0xa1, .x=0x12, .y=0x7c, .sp=0x8d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x1d}, {.addr=0x6197, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6198, .a=0x1d, .x=0x12, .y=0x7c, .sp=0x8e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x1d}, {.addr=0x6197, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6197, .value=0xae, .type=IO_READ},
        {.addr=0x6198, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006E) {
    const struct CPU_State initial_cpu = {.pc=0xe6e7, .a=0x3f, .x=0x4c, .y=0x99, .sp=0x19, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xda}, {.addr=0xe6e7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe6e8, .a=0xda, .x=0x4c, .y=0x99, .sp=0x1a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xda}, {.addr=0xe6e7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe6e7, .value=0xae, .type=IO_READ},
        {.addr=0xe6e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_006F) {
    const struct CPU_State initial_cpu = {.pc=0xbd45, .a=0xea, .x=0x71, .y=0xe9, .sp=0xd4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x27}, {.addr=0xbd45, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd46, .a=0x27, .x=0x71, .y=0xe9, .sp=0xd5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x27}, {.addr=0xbd45, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd45, .value=0xae, .type=IO_READ},
        {.addr=0xbd46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0070) {
    const struct CPU_State initial_cpu = {.pc=0x0920, .a=0x2c, .x=0x7a, .y=0xad, .sp=0x9a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xce}, {.addr=0x0920, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0921, .a=0xce, .x=0x7a, .y=0xad, .sp=0x9b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xce}, {.addr=0x0920, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0920, .value=0xae, .type=IO_READ},
        {.addr=0x0921, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0071) {
    const struct CPU_State initial_cpu = {.pc=0xa6a0, .a=0xb7, .x=0xce, .y=0x37, .sp=0xe1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x90}, {.addr=0xa6a0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa6a1, .a=0x90, .x=0xce, .y=0x37, .sp=0xe2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x90}, {.addr=0xa6a0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa6a0, .value=0xae, .type=IO_READ},
        {.addr=0xa6a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0d1b, .a=0x01, .x=0xab, .y=0xf5, .sp=0x6a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x37}, {.addr=0x0d1b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0d1c, .a=0x37, .x=0xab, .y=0xf5, .sp=0x6b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x37}, {.addr=0x0d1b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0d1b, .value=0xae, .type=IO_READ},
        {.addr=0x0d1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0073) {
    const struct CPU_State initial_cpu = {.pc=0xfb04, .a=0xc2, .x=0x16, .y=0xca, .sp=0x10, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x09}, {.addr=0xfb04, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfb05, .a=0x09, .x=0x16, .y=0xca, .sp=0x11, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x09}, {.addr=0xfb04, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfb04, .value=0xae, .type=IO_READ},
        {.addr=0xfb05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7068, .a=0x18, .x=0xd7, .y=0xb4, .sp=0x8a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x2c}, {.addr=0x7068, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7069, .a=0x2c, .x=0xd7, .y=0xb4, .sp=0x8b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x2c}, {.addr=0x7068, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7068, .value=0xae, .type=IO_READ},
        {.addr=0x7069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0075) {
    const struct CPU_State initial_cpu = {.pc=0xcb18, .a=0x5b, .x=0xa4, .y=0x32, .sp=0x9d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xe7}, {.addr=0xcb18, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcb19, .a=0xe7, .x=0xa4, .y=0x32, .sp=0x9e, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe7}, {.addr=0xcb18, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcb18, .value=0xae, .type=IO_READ},
        {.addr=0xcb19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0076) {
    const struct CPU_State initial_cpu = {.pc=0x5cac, .a=0xa5, .x=0x90, .y=0x08, .sp=0xb6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x83}, {.addr=0x5cac, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5cad, .a=0x83, .x=0x90, .y=0x08, .sp=0xb7, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x83}, {.addr=0x5cac, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5cac, .value=0xae, .type=IO_READ},
        {.addr=0x5cad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0077) {
    const struct CPU_State initial_cpu = {.pc=0x2bd7, .a=0xaa, .x=0xff, .y=0x55, .sp=0x4d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xad}, {.addr=0x2bd7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2bd8, .a=0xad, .x=0xff, .y=0x55, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xad}, {.addr=0x2bd7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2bd7, .value=0xae, .type=IO_READ},
        {.addr=0x2bd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0078) {
    const struct CPU_State initial_cpu = {.pc=0xeaab, .a=0x17, .x=0xe6, .y=0x56, .sp=0xc1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xf2}, {.addr=0xeaab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xeaac, .a=0xf2, .x=0xe6, .y=0x56, .sp=0xc2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xf2}, {.addr=0xeaab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xeaab, .value=0xae, .type=IO_READ},
        {.addr=0xeaac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0079) {
    const struct CPU_State initial_cpu = {.pc=0x6243, .a=0x03, .x=0xa1, .y=0xb2, .sp=0x1d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x01}, {.addr=0x6243, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6244, .a=0x01, .x=0xa1, .y=0xb2, .sp=0x1e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x01}, {.addr=0x6243, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6243, .value=0xae, .type=IO_READ},
        {.addr=0x6244, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0856, .a=0x80, .x=0xf6, .y=0xbb, .sp=0x68, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xf3}, {.addr=0x0856, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0857, .a=0xf3, .x=0xf6, .y=0xbb, .sp=0x69, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xf3}, {.addr=0x0856, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0856, .value=0xae, .type=IO_READ},
        {.addr=0x0857, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007B) {
    const struct CPU_State initial_cpu = {.pc=0x9fd7, .a=0xc7, .x=0x20, .y=0xe4, .sp=0x8b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x46}, {.addr=0x9fd7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9fd8, .a=0x46, .x=0x20, .y=0xe4, .sp=0x8c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x46}, {.addr=0x9fd7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9fd7, .value=0xae, .type=IO_READ},
        {.addr=0x9fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007C) {
    const struct CPU_State initial_cpu = {.pc=0x7766, .a=0xfb, .x=0x18, .y=0x2b, .sp=0x60, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x57}, {.addr=0x7766, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7767, .a=0x57, .x=0x18, .y=0x2b, .sp=0x61, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x57}, {.addr=0x7766, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7766, .value=0xae, .type=IO_READ},
        {.addr=0x7767, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007D) {
    const struct CPU_State initial_cpu = {.pc=0x4ef9, .a=0x13, .x=0x08, .y=0xd8, .sp=0x6e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xf8}, {.addr=0x4ef9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4efa, .a=0xf8, .x=0x08, .y=0xd8, .sp=0x6f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xf8}, {.addr=0x4ef9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4ef9, .value=0xae, .type=IO_READ},
        {.addr=0x4efa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007E) {
    const struct CPU_State initial_cpu = {.pc=0x44a9, .a=0x69, .x=0x01, .y=0xb1, .sp=0x8a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xc8}, {.addr=0x44a9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x44aa, .a=0xc8, .x=0x01, .y=0xb1, .sp=0x8b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xc8}, {.addr=0x44a9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x44a9, .value=0xae, .type=IO_READ},
        {.addr=0x44aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_007F) {
    const struct CPU_State initial_cpu = {.pc=0xfd58, .a=0x3a, .x=0x28, .y=0x8d, .sp=0x83, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x27}, {.addr=0xfd58, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfd59, .a=0x27, .x=0x28, .y=0x8d, .sp=0x84, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x27}, {.addr=0xfd58, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfd58, .value=0xae, .type=IO_READ},
        {.addr=0xfd59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0080) {
    const struct CPU_State initial_cpu = {.pc=0x6dbe, .a=0xb9, .x=0xc4, .y=0x16, .sp=0x9d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xa4}, {.addr=0x6dbe, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6dbf, .a=0xa4, .x=0xc4, .y=0x16, .sp=0x9e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xa4}, {.addr=0x6dbe, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6dbe, .value=0xae, .type=IO_READ},
        {.addr=0x6dbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb61f, .a=0x0b, .x=0xb1, .y=0x89, .sp=0xda, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x1c}, {.addr=0xb61f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb620, .a=0x1c, .x=0xb1, .y=0x89, .sp=0xdb, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x1c}, {.addr=0xb61f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb61f, .value=0xae, .type=IO_READ},
        {.addr=0xb620, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0082) {
    const struct CPU_State initial_cpu = {.pc=0x015b, .a=0xfb, .x=0xc6, .y=0x03, .sp=0x6d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xae}, {.addr=0x016e, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x015c, .a=0x56, .x=0xc6, .y=0x03, .sp=0x6e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xae}, {.addr=0x016e, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x015b, .value=0xae, .type=IO_READ},
        {.addr=0x015c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0083) {
    const struct CPU_State initial_cpu = {.pc=0x8987, .a=0xe7, .x=0x58, .y=0xf5, .sp=0xda, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xda}, {.addr=0x8987, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8988, .a=0xda, .x=0x58, .y=0xf5, .sp=0xdb, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xda}, {.addr=0x8987, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8987, .value=0xae, .type=IO_READ},
        {.addr=0x8988, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0084) {
    const struct CPU_State initial_cpu = {.pc=0x8c8e, .a=0x29, .x=0x16, .y=0x80, .sp=0xd9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xa3}, {.addr=0x8c8e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8c8f, .a=0xa3, .x=0x16, .y=0x80, .sp=0xda, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xa3}, {.addr=0x8c8e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8c8e, .value=0xae, .type=IO_READ},
        {.addr=0x8c8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0085) {
    const struct CPU_State initial_cpu = {.pc=0x2385, .a=0xb9, .x=0x53, .y=0x64, .sp=0xa9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x52}, {.addr=0x2385, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2386, .a=0x52, .x=0x53, .y=0x64, .sp=0xaa, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x52}, {.addr=0x2385, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2385, .value=0xae, .type=IO_READ},
        {.addr=0x2386, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0086) {
    const struct CPU_State initial_cpu = {.pc=0x82da, .a=0x1b, .x=0xf7, .y=0x68, .sp=0x44, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xd4}, {.addr=0x82da, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82db, .a=0xd4, .x=0xf7, .y=0x68, .sp=0x45, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xd4}, {.addr=0x82da, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82da, .value=0xae, .type=IO_READ},
        {.addr=0x82db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0087) {
    const struct CPU_State initial_cpu = {.pc=0xf24b, .a=0x54, .x=0x75, .y=0x62, .sp=0x0c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xb3}, {.addr=0xf24b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf24c, .a=0xb3, .x=0x75, .y=0x62, .sp=0x0d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xb3}, {.addr=0xf24b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf24b, .value=0xae, .type=IO_READ},
        {.addr=0xf24c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0088) {
    const struct CPU_State initial_cpu = {.pc=0x00de, .a=0x7a, .x=0x89, .y=0xfe, .sp=0xb4, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0xae}, {.addr=0x01b5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x00df, .a=0x5c, .x=0x89, .y=0xfe, .sp=0xb5, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0xae}, {.addr=0x01b5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x00de, .value=0xae, .type=IO_READ},
        {.addr=0x00df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0089) {
    const struct CPU_State initial_cpu = {.pc=0x7e42, .a=0x72, .x=0xeb, .y=0x09, .sp=0xff, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x06}, {.addr=0x7e42, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7e43, .a=0x06, .x=0xeb, .y=0x09, .sp=0x00, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x06}, {.addr=0x7e42, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7e42, .value=0xae, .type=IO_READ},
        {.addr=0x7e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008A) {
    const struct CPU_State initial_cpu = {.pc=0xb239, .a=0x70, .x=0x31, .y=0x86, .sp=0x4f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x21}, {.addr=0xb239, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb23a, .a=0x21, .x=0x31, .y=0x86, .sp=0x50, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x21}, {.addr=0xb239, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb239, .value=0xae, .type=IO_READ},
        {.addr=0xb23a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008B) {
    const struct CPU_State initial_cpu = {.pc=0xd6f2, .a=0x07, .x=0xc4, .y=0xe3, .sp=0xa6, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x10}, {.addr=0xd6f2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd6f3, .a=0x10, .x=0xc4, .y=0xe3, .sp=0xa7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x10}, {.addr=0xd6f2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd6f2, .value=0xae, .type=IO_READ},
        {.addr=0xd6f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008C) {
    const struct CPU_State initial_cpu = {.pc=0x262d, .a=0x62, .x=0xbb, .y=0xec, .sp=0x8d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xfa}, {.addr=0x262d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x262e, .a=0xfa, .x=0xbb, .y=0xec, .sp=0x8e, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xfa}, {.addr=0x262d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x262d, .value=0xae, .type=IO_READ},
        {.addr=0x262e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008D) {
    const struct CPU_State initial_cpu = {.pc=0xb4bf, .a=0xf8, .x=0x40, .y=0x5e, .sp=0x0e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x79}, {.addr=0xb4bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb4c0, .a=0x79, .x=0x40, .y=0x5e, .sp=0x0f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x79}, {.addr=0xb4bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb4bf, .value=0xae, .type=IO_READ},
        {.addr=0xb4c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6b3a, .a=0x4c, .x=0xbc, .y=0xc7, .sp=0xf6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x33}, {.addr=0x6b3a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6b3b, .a=0x33, .x=0xbc, .y=0xc7, .sp=0xf7, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x33}, {.addr=0x6b3a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6b3a, .value=0xae, .type=IO_READ},
        {.addr=0x6b3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_008F) {
    const struct CPU_State initial_cpu = {.pc=0x408d, .a=0xe6, .x=0x4b, .y=0x37, .sp=0xce, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x3f}, {.addr=0x408d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x408e, .a=0x3f, .x=0x4b, .y=0x37, .sp=0xcf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x3f}, {.addr=0x408d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x408d, .value=0xae, .type=IO_READ},
        {.addr=0x408e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0090) {
    const struct CPU_State initial_cpu = {.pc=0x3c84, .a=0x43, .x=0x0a, .y=0xe5, .sp=0x43, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x15}, {.addr=0x3c84, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3c85, .a=0x15, .x=0x0a, .y=0xe5, .sp=0x44, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x15}, {.addr=0x3c84, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3c84, .value=0xae, .type=IO_READ},
        {.addr=0x3c85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0091) {
    const struct CPU_State initial_cpu = {.pc=0x2178, .a=0xa4, .x=0x46, .y=0xaa, .sp=0x98, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xc5}, {.addr=0x2178, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2179, .a=0xc5, .x=0x46, .y=0xaa, .sp=0x99, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xc5}, {.addr=0x2178, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2178, .value=0xae, .type=IO_READ},
        {.addr=0x2179, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0092) {
    const struct CPU_State initial_cpu = {.pc=0xed4b, .a=0x13, .x=0x9d, .y=0x0d, .sp=0x13, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x52}, {.addr=0xed4b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xed4c, .a=0x52, .x=0x9d, .y=0x0d, .sp=0x14, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x52}, {.addr=0xed4b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xed4b, .value=0xae, .type=IO_READ},
        {.addr=0xed4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0093) {
    const struct CPU_State initial_cpu = {.pc=0x9b23, .a=0x92, .x=0x21, .y=0xa7, .sp=0x80, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xf8}, {.addr=0x9b23, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9b24, .a=0xf8, .x=0x21, .y=0xa7, .sp=0x81, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xf8}, {.addr=0x9b23, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9b23, .value=0xae, .type=IO_READ},
        {.addr=0x9b24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0094) {
    const struct CPU_State initial_cpu = {.pc=0x4915, .a=0xe6, .x=0x9b, .y=0x28, .sp=0x64, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x8f}, {.addr=0x4915, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4916, .a=0x8f, .x=0x9b, .y=0x28, .sp=0x65, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x8f}, {.addr=0x4915, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4915, .value=0xae, .type=IO_READ},
        {.addr=0x4916, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0095) {
    const struct CPU_State initial_cpu = {.pc=0x6cfd, .a=0x31, .x=0xd9, .y=0xd2, .sp=0x14, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x69}, {.addr=0x6cfd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6cfe, .a=0x69, .x=0xd9, .y=0xd2, .sp=0x15, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x69}, {.addr=0x6cfd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6cfd, .value=0xae, .type=IO_READ},
        {.addr=0x6cfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0096) {
    const struct CPU_State initial_cpu = {.pc=0xeeef, .a=0x51, .x=0xe6, .y=0xca, .sp=0xc2, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x70}, {.addr=0xeeef, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xeef0, .a=0x70, .x=0xe6, .y=0xca, .sp=0xc3, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x70}, {.addr=0xeeef, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xeeef, .value=0xae, .type=IO_READ},
        {.addr=0xeef0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0097) {
    const struct CPU_State initial_cpu = {.pc=0xa9af, .a=0x09, .x=0x78, .y=0x16, .sp=0xc4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x45}, {.addr=0xa9af, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa9b0, .a=0x45, .x=0x78, .y=0x16, .sp=0xc5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x45}, {.addr=0xa9af, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa9af, .value=0xae, .type=IO_READ},
        {.addr=0xa9b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0098) {
    const struct CPU_State initial_cpu = {.pc=0xb93b, .a=0xaa, .x=0x46, .y=0x13, .sp=0xa1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x0e}, {.addr=0xb93b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb93c, .a=0x0e, .x=0x46, .y=0x13, .sp=0xa2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x0e}, {.addr=0xb93b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb93b, .value=0xae, .type=IO_READ},
        {.addr=0xb93c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0099) {
    const struct CPU_State initial_cpu = {.pc=0x6df1, .a=0x1b, .x=0x65, .y=0x98, .sp=0xc2, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xe8}, {.addr=0x6df1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6df2, .a=0xe8, .x=0x65, .y=0x98, .sp=0xc3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xe8}, {.addr=0x6df1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6df1, .value=0xae, .type=IO_READ},
        {.addr=0x6df2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009A) {
    const struct CPU_State initial_cpu = {.pc=0x4fa6, .a=0xba, .x=0x7d, .y=0xdd, .sp=0x56, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xe1}, {.addr=0x4fa6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4fa7, .a=0xe1, .x=0x7d, .y=0xdd, .sp=0x57, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xe1}, {.addr=0x4fa6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4fa6, .value=0xae, .type=IO_READ},
        {.addr=0x4fa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009B) {
    const struct CPU_State initial_cpu = {.pc=0x9cf5, .a=0xea, .x=0x41, .y=0x49, .sp=0x68, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xda}, {.addr=0x9cf5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9cf6, .a=0xda, .x=0x41, .y=0x49, .sp=0x69, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xda}, {.addr=0x9cf5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9cf5, .value=0xae, .type=IO_READ},
        {.addr=0x9cf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009C) {
    const struct CPU_State initial_cpu = {.pc=0x88fa, .a=0x75, .x=0xb8, .y=0x6c, .sp=0x2e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xdb}, {.addr=0x88fa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x88fb, .a=0xdb, .x=0xb8, .y=0x6c, .sp=0x2f, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xdb}, {.addr=0x88fa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x88fa, .value=0xae, .type=IO_READ},
        {.addr=0x88fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009D) {
    const struct CPU_State initial_cpu = {.pc=0x7326, .a=0x6f, .x=0xcc, .y=0xea, .sp=0x17, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xdd}, {.addr=0x7326, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7327, .a=0xdd, .x=0xcc, .y=0xea, .sp=0x18, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xdd}, {.addr=0x7326, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7326, .value=0xae, .type=IO_READ},
        {.addr=0x7327, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009E) {
    const struct CPU_State initial_cpu = {.pc=0x580c, .a=0xd5, .x=0x07, .y=0x4a, .sp=0xda, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x0d}, {.addr=0x580c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x580d, .a=0x0d, .x=0x07, .y=0x4a, .sp=0xdb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x0d}, {.addr=0x580c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x580c, .value=0xae, .type=IO_READ},
        {.addr=0x580d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_009F) {
    const struct CPU_State initial_cpu = {.pc=0x33e9, .a=0x22, .x=0x26, .y=0xc6, .sp=0x83, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x34}, {.addr=0x33e9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x33ea, .a=0x34, .x=0x26, .y=0xc6, .sp=0x84, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x34}, {.addr=0x33e9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x33e9, .value=0xae, .type=IO_READ},
        {.addr=0x33ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x79e2, .a=0x91, .x=0xb0, .y=0xaf, .sp=0x34, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xe7}, {.addr=0x79e2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x79e3, .a=0xe7, .x=0xb0, .y=0xaf, .sp=0x35, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xe7}, {.addr=0x79e2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x79e2, .value=0xae, .type=IO_READ},
        {.addr=0x79e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x5dde, .a=0x57, .x=0x33, .y=0xe9, .sp=0x7d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x15}, {.addr=0x5dde, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5ddf, .a=0x15, .x=0x33, .y=0xe9, .sp=0x7e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x15}, {.addr=0x5dde, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5dde, .value=0xae, .type=IO_READ},
        {.addr=0x5ddf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x24a9, .a=0x59, .x=0x2a, .y=0x9e, .sp=0x76, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x3d}, {.addr=0x24a9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x24aa, .a=0x3d, .x=0x2a, .y=0x9e, .sp=0x77, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x3d}, {.addr=0x24a9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x24a9, .value=0xae, .type=IO_READ},
        {.addr=0x24aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x31ad, .a=0xab, .x=0xa9, .y=0x0b, .sp=0xa3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x0b}, {.addr=0x31ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x31ae, .a=0x0b, .x=0xa9, .y=0x0b, .sp=0xa4, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x0b}, {.addr=0x31ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x31ad, .value=0xae, .type=IO_READ},
        {.addr=0x31ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x71d7, .a=0xf9, .x=0x69, .y=0xef, .sp=0x8e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0x71d7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x71d8, .a=0xb1, .x=0x69, .y=0xef, .sp=0x8f, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0x71d7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x71d7, .value=0xae, .type=IO_READ},
        {.addr=0x71d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x89a6, .a=0x4c, .x=0x56, .y=0x66, .sp=0x0c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xf7}, {.addr=0x89a6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x89a7, .a=0xf7, .x=0x56, .y=0x66, .sp=0x0d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xf7}, {.addr=0x89a6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x89a6, .value=0xae, .type=IO_READ},
        {.addr=0x89a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x8126, .a=0x9f, .x=0x18, .y=0x19, .sp=0xbb, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xde}, {.addr=0x8126, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8127, .a=0xde, .x=0x18, .y=0x19, .sp=0xbc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xde}, {.addr=0x8126, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8126, .value=0xae, .type=IO_READ},
        {.addr=0x8127, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x17bc, .a=0xbc, .x=0xf0, .y=0x49, .sp=0x4b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x24}, {.addr=0x17bc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x17bd, .a=0x24, .x=0xf0, .y=0x49, .sp=0x4c, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x24}, {.addr=0x17bc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x17bc, .value=0xae, .type=IO_READ},
        {.addr=0x17bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x9839, .a=0x4f, .x=0xa8, .y=0x31, .sp=0x21, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x13}, {.addr=0x9839, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x983a, .a=0x13, .x=0xa8, .y=0x31, .sp=0x22, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x13}, {.addr=0x9839, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9839, .value=0xae, .type=IO_READ},
        {.addr=0x983a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x0deb, .a=0x06, .x=0x54, .y=0x63, .sp=0x1f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xbf}, {.addr=0x0deb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0dec, .a=0xbf, .x=0x54, .y=0x63, .sp=0x20, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xbf}, {.addr=0x0deb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0deb, .value=0xae, .type=IO_READ},
        {.addr=0x0dec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x1372, .a=0x02, .x=0x6e, .y=0x8d, .sp=0x62, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x3b}, {.addr=0x1372, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1373, .a=0x3b, .x=0x6e, .y=0x8d, .sp=0x63, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x3b}, {.addr=0x1372, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1372, .value=0xae, .type=IO_READ},
        {.addr=0x1373, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x128c, .a=0xc9, .x=0xd6, .y=0x4c, .sp=0x0d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x1f}, {.addr=0x128c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x128d, .a=0x1f, .x=0xd6, .y=0x4c, .sp=0x0e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x1f}, {.addr=0x128c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x128c, .value=0xae, .type=IO_READ},
        {.addr=0x128d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xc331, .a=0x59, .x=0x6a, .y=0xdc, .sp=0x1e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x85}, {.addr=0xc331, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc332, .a=0x85, .x=0x6a, .y=0xdc, .sp=0x1f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x85}, {.addr=0xc331, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc331, .value=0xae, .type=IO_READ},
        {.addr=0xc332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x717b, .a=0xb9, .x=0xe8, .y=0x15, .sp=0x5e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x7b}, {.addr=0x717b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x717c, .a=0x7b, .x=0xe8, .y=0x15, .sp=0x5f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x7b}, {.addr=0x717b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x717b, .value=0xae, .type=IO_READ},
        {.addr=0x717c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2ba3, .a=0x85, .x=0x02, .y=0x6c, .sp=0xfe, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x50}, {.addr=0x2ba3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2ba4, .a=0x50, .x=0x02, .y=0x6c, .sp=0xff, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x50}, {.addr=0x2ba3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2ba3, .value=0xae, .type=IO_READ},
        {.addr=0x2ba4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x2ee7, .a=0x3b, .x=0x78, .y=0xd9, .sp=0xb7, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xfe}, {.addr=0x2ee7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2ee8, .a=0xfe, .x=0x78, .y=0xd9, .sp=0xb8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xfe}, {.addr=0x2ee7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2ee7, .value=0xae, .type=IO_READ},
        {.addr=0x2ee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xa500, .a=0x82, .x=0xc0, .y=0xdf, .sp=0xc8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xee}, {.addr=0xa500, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa501, .a=0xee, .x=0xc0, .y=0xdf, .sp=0xc9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xee}, {.addr=0xa500, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa500, .value=0xae, .type=IO_READ},
        {.addr=0xa501, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x37c0, .a=0x73, .x=0xe2, .y=0x46, .sp=0x02, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x70}, {.addr=0x37c0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x37c1, .a=0x70, .x=0xe2, .y=0x46, .sp=0x03, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x70}, {.addr=0x37c0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x37c0, .value=0xae, .type=IO_READ},
        {.addr=0x37c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xcd69, .a=0xb0, .x=0x11, .y=0xa0, .sp=0xec, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x80}, {.addr=0xcd69, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcd6a, .a=0x80, .x=0x11, .y=0xa0, .sp=0xed, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x80}, {.addr=0xcd69, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcd69, .value=0xae, .type=IO_READ},
        {.addr=0xcd6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7acd, .a=0x0f, .x=0x1c, .y=0xf1, .sp=0x81, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x22}, {.addr=0x7acd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7ace, .a=0x22, .x=0x1c, .y=0xf1, .sp=0x82, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x22}, {.addr=0x7acd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7acd, .value=0xae, .type=IO_READ},
        {.addr=0x7ace, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xcb65, .a=0xfe, .x=0x64, .y=0x65, .sp=0x81, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x54}, {.addr=0xcb65, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcb66, .a=0x54, .x=0x64, .y=0x65, .sp=0x82, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x54}, {.addr=0xcb65, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcb65, .value=0xae, .type=IO_READ},
        {.addr=0xcb66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xa144, .a=0xf0, .x=0x13, .y=0x01, .sp=0xfa, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x6d}, {.addr=0xa144, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa145, .a=0x6d, .x=0x13, .y=0x01, .sp=0xfb, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x6d}, {.addr=0xa144, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa144, .value=0xae, .type=IO_READ},
        {.addr=0xa145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x37dc, .a=0x1d, .x=0x34, .y=0x9a, .sp=0x41, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xc0}, {.addr=0x37dc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x37dd, .a=0xc0, .x=0x34, .y=0x9a, .sp=0x42, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xc0}, {.addr=0x37dc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x37dc, .value=0xae, .type=IO_READ},
        {.addr=0x37dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x88c6, .a=0x4c, .x=0x57, .y=0x7c, .sp=0x5e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x12}, {.addr=0x88c6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x88c7, .a=0x12, .x=0x57, .y=0x7c, .sp=0x5f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x12}, {.addr=0x88c6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x88c6, .value=0xae, .type=IO_READ},
        {.addr=0x88c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xbd10, .a=0x7f, .x=0x39, .y=0x26, .sp=0xb1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x9c}, {.addr=0xbd10, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd11, .a=0x9c, .x=0x39, .y=0x26, .sp=0xb2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x9c}, {.addr=0xbd10, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd10, .value=0xae, .type=IO_READ},
        {.addr=0xbd11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x20be, .a=0xba, .x=0xdb, .y=0x9a, .sp=0xb4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x86}, {.addr=0x20be, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x20bf, .a=0x86, .x=0xdb, .y=0x9a, .sp=0xb5, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x86}, {.addr=0x20be, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x20be, .value=0xae, .type=IO_READ},
        {.addr=0x20bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xbe94, .a=0xee, .x=0xcc, .y=0x54, .sp=0xe1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x86}, {.addr=0xbe94, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbe95, .a=0x86, .x=0xcc, .y=0x54, .sp=0xe2, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x86}, {.addr=0xbe94, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbe94, .value=0xae, .type=IO_READ},
        {.addr=0xbe95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x8599, .a=0x96, .x=0xf6, .y=0x2a, .sp=0xac, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x4a}, {.addr=0x8599, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x859a, .a=0x4a, .x=0xf6, .y=0x2a, .sp=0xad, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x4a}, {.addr=0x8599, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8599, .value=0xae, .type=IO_READ},
        {.addr=0x859a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xacb9, .a=0x2b, .x=0x92, .y=0x26, .sp=0x25, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x20}, {.addr=0xacb9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xacba, .a=0x20, .x=0x92, .y=0x26, .sp=0x26, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x20}, {.addr=0xacb9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xacb9, .value=0xae, .type=IO_READ},
        {.addr=0xacba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x6b4d, .a=0xb9, .x=0x95, .y=0xd0, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x52}, {.addr=0x6b4d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6b4e, .a=0x52, .x=0x95, .y=0xd0, .sp=0x9f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x52}, {.addr=0x6b4d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6b4d, .value=0xae, .type=IO_READ},
        {.addr=0x6b4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xad82, .a=0x74, .x=0x73, .y=0x04, .sp=0xb4, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x15}, {.addr=0xad82, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xad83, .a=0x15, .x=0x73, .y=0x04, .sp=0xb5, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x15}, {.addr=0xad82, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xad82, .value=0xae, .type=IO_READ},
        {.addr=0xad83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x621c, .a=0xe5, .x=0xc2, .y=0xfe, .sp=0xbe, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x87}, {.addr=0x621c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x621d, .a=0x87, .x=0xc2, .y=0xfe, .sp=0xbf, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x87}, {.addr=0x621c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x621c, .value=0xae, .type=IO_READ},
        {.addr=0x621d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x470d, .a=0x1f, .x=0x3f, .y=0xf7, .sp=0x45, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xbb}, {.addr=0x470d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x470e, .a=0xbb, .x=0x3f, .y=0xf7, .sp=0x46, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xbb}, {.addr=0x470d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x470d, .value=0xae, .type=IO_READ},
        {.addr=0x470e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd2d1, .a=0x82, .x=0x6a, .y=0x57, .sp=0x84, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x62}, {.addr=0xd2d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd2d2, .a=0x62, .x=0x6a, .y=0x57, .sp=0x85, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x62}, {.addr=0xd2d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd2d1, .value=0xae, .type=IO_READ},
        {.addr=0xd2d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xefbe, .a=0x5a, .x=0x32, .y=0xad, .sp=0xb7, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xd3}, {.addr=0xefbe, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xefbf, .a=0xd3, .x=0x32, .y=0xad, .sp=0xb8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xd3}, {.addr=0xefbe, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xefbe, .value=0xae, .type=IO_READ},
        {.addr=0xefbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xf358, .a=0x88, .x=0x64, .y=0x0e, .sp=0xda, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x55}, {.addr=0xf358, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf359, .a=0x55, .x=0x64, .y=0x0e, .sp=0xdb, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x55}, {.addr=0xf358, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf358, .value=0xae, .type=IO_READ},
        {.addr=0xf359, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x4f4f, .a=0x08, .x=0x55, .y=0x68, .sp=0xcb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x42}, {.addr=0x4f4f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4f50, .a=0x42, .x=0x55, .y=0x68, .sp=0xcc, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x42}, {.addr=0x4f4f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4f4f, .value=0xae, .type=IO_READ},
        {.addr=0x4f50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x7d8c, .a=0xdb, .x=0x47, .y=0x44, .sp=0x34, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x05}, {.addr=0x7d8c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7d8d, .a=0x05, .x=0x47, .y=0x44, .sp=0x35, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x05}, {.addr=0x7d8c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7d8c, .value=0xae, .type=IO_READ},
        {.addr=0x7d8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x4ac6, .a=0x09, .x=0xb1, .y=0x0c, .sp=0xd0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x94}, {.addr=0x4ac6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4ac7, .a=0x94, .x=0xb1, .y=0x0c, .sp=0xd1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x94}, {.addr=0x4ac6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4ac6, .value=0xae, .type=IO_READ},
        {.addr=0x4ac7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x3374, .a=0x64, .x=0xfa, .y=0x06, .sp=0x4f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x53}, {.addr=0x3374, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3375, .a=0x53, .x=0xfa, .y=0x06, .sp=0x50, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x53}, {.addr=0x3374, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3374, .value=0xae, .type=IO_READ},
        {.addr=0x3375, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xf14f, .a=0x82, .x=0xab, .y=0x59, .sp=0xfc, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xad}, {.addr=0xf14f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf150, .a=0xad, .x=0xab, .y=0x59, .sp=0xfd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xad}, {.addr=0xf14f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf14f, .value=0xae, .type=IO_READ},
        {.addr=0xf150, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xaf31, .a=0xcd, .x=0xe4, .y=0xdf, .sp=0x87, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x94}, {.addr=0xaf31, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaf32, .a=0x94, .x=0xe4, .y=0xdf, .sp=0x88, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x94}, {.addr=0xaf31, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaf31, .value=0xae, .type=IO_READ},
        {.addr=0xaf32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa2f7, .a=0x87, .x=0x94, .y=0x7b, .sp=0x82, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xb2}, {.addr=0xa2f7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa2f8, .a=0xb2, .x=0x94, .y=0x7b, .sp=0x83, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xb2}, {.addr=0xa2f7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa2f7, .value=0xae, .type=IO_READ},
        {.addr=0xa2f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x9e7b, .a=0xbd, .x=0x37, .y=0x8c, .sp=0x23, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x3c}, {.addr=0x9e7b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9e7c, .a=0x3c, .x=0x37, .y=0x8c, .sp=0x24, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x3c}, {.addr=0x9e7b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9e7b, .value=0xae, .type=IO_READ},
        {.addr=0x9e7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa33a, .a=0x54, .x=0x3b, .y=0x5d, .sp=0x98, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xf5}, {.addr=0xa33a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa33b, .a=0xf5, .x=0x3b, .y=0x5d, .sp=0x99, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xf5}, {.addr=0xa33a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa33a, .value=0xae, .type=IO_READ},
        {.addr=0xa33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf4ca, .a=0x57, .x=0x10, .y=0xcc, .sp=0xa4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xf3}, {.addr=0xf4ca, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf4cb, .a=0xf3, .x=0x10, .y=0xcc, .sp=0xa5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xf3}, {.addr=0xf4ca, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf4ca, .value=0xae, .type=IO_READ},
        {.addr=0xf4cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x70ed, .a=0x10, .x=0x49, .y=0x84, .sp=0xde, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xb8}, {.addr=0x70ed, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x70ee, .a=0xb8, .x=0x49, .y=0x84, .sp=0xdf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xb8}, {.addr=0x70ed, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x70ed, .value=0xae, .type=IO_READ},
        {.addr=0x70ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xc0ea, .a=0xeb, .x=0x13, .y=0x37, .sp=0xf5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xfb}, {.addr=0xc0ea, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc0eb, .a=0xfb, .x=0x13, .y=0x37, .sp=0xf6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xfb}, {.addr=0xc0ea, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc0ea, .value=0xae, .type=IO_READ},
        {.addr=0xc0eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xa315, .a=0xf9, .x=0x08, .y=0xf6, .sp=0x34, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x92}, {.addr=0xa315, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa316, .a=0x92, .x=0x08, .y=0xf6, .sp=0x35, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x92}, {.addr=0xa315, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa315, .value=0xae, .type=IO_READ},
        {.addr=0xa316, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xcb75, .a=0xc1, .x=0xa8, .y=0x3b, .sp=0x6d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x14}, {.addr=0xcb75, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcb76, .a=0x14, .x=0xa8, .y=0x3b, .sp=0x6e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x14}, {.addr=0xcb75, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcb75, .value=0xae, .type=IO_READ},
        {.addr=0xcb76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9083, .a=0x48, .x=0x54, .y=0x6e, .sp=0xe3, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x13}, {.addr=0x9083, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9084, .a=0x13, .x=0x54, .y=0x6e, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x13}, {.addr=0x9083, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9083, .value=0xae, .type=IO_READ},
        {.addr=0x9084, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x4a81, .a=0xa6, .x=0xd1, .y=0x85, .sp=0x28, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x13}, {.addr=0x4a81, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4a82, .a=0x13, .x=0xd1, .y=0x85, .sp=0x29, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x13}, {.addr=0x4a81, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4a81, .value=0xae, .type=IO_READ},
        {.addr=0x4a82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x0be5, .a=0x2d, .x=0x96, .y=0xb4, .sp=0x39, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x32}, {.addr=0x0be5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0be6, .a=0x32, .x=0x96, .y=0xb4, .sp=0x3a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x32}, {.addr=0x0be5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0be5, .value=0xae, .type=IO_READ},
        {.addr=0x0be6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xae35, .a=0x92, .x=0x49, .y=0xb0, .sp=0x99, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x97}, {.addr=0xae35, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xae36, .a=0x97, .x=0x49, .y=0xb0, .sp=0x9a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x97}, {.addr=0xae35, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xae35, .value=0xae, .type=IO_READ},
        {.addr=0xae36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xf63b, .a=0x3f, .x=0x50, .y=0x4b, .sp=0xa5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x34}, {.addr=0xf63b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf63c, .a=0x34, .x=0x50, .y=0x4b, .sp=0xa6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x34}, {.addr=0xf63b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf63b, .value=0xae, .type=IO_READ},
        {.addr=0xf63c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x9f2b, .a=0x0e, .x=0xd0, .y=0x56, .sp=0x8a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x3d}, {.addr=0x9f2b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f2c, .a=0x3d, .x=0xd0, .y=0x56, .sp=0x8b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x3d}, {.addr=0x9f2b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f2b, .value=0xae, .type=IO_READ},
        {.addr=0x9f2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa9ad, .a=0x88, .x=0x46, .y=0xb8, .sp=0x70, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x13}, {.addr=0xa9ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa9ae, .a=0x13, .x=0x46, .y=0xb8, .sp=0x71, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x13}, {.addr=0xa9ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa9ad, .value=0xae, .type=IO_READ},
        {.addr=0xa9ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xac8d, .a=0x71, .x=0xb9, .y=0x13, .sp=0xc7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x35}, {.addr=0xac8d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xac8e, .a=0x35, .x=0xb9, .y=0x13, .sp=0xc8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x35}, {.addr=0xac8d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xac8d, .value=0xae, .type=IO_READ},
        {.addr=0xac8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb09e, .a=0x08, .x=0xba, .y=0x6d, .sp=0x90, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xcc}, {.addr=0xb09e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb09f, .a=0xcc, .x=0xba, .y=0x6d, .sp=0x91, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xcc}, {.addr=0xb09e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb09e, .value=0xae, .type=IO_READ},
        {.addr=0xb09f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x041b, .a=0x0d, .x=0x39, .y=0x2c, .sp=0xeb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xbd}, {.addr=0x041b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x041c, .a=0xbd, .x=0x39, .y=0x2c, .sp=0xec, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xbd}, {.addr=0x041b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x041b, .value=0xae, .type=IO_READ},
        {.addr=0x041c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xc053, .a=0x16, .x=0x24, .y=0x1d, .sp=0xfc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x0a}, {.addr=0xc053, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc054, .a=0x0a, .x=0x24, .y=0x1d, .sp=0xfd, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x0a}, {.addr=0xc053, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc053, .value=0xae, .type=IO_READ},
        {.addr=0xc054, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x760d, .a=0x26, .x=0x4e, .y=0x52, .sp=0xb2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x8b}, {.addr=0x760d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x760e, .a=0x8b, .x=0x4e, .y=0x52, .sp=0xb3, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x8b}, {.addr=0x760d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x760d, .value=0xae, .type=IO_READ},
        {.addr=0x760e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x1ef8, .a=0x80, .x=0x43, .y=0x72, .sp=0xe7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xce}, {.addr=0x1ef8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1ef9, .a=0xce, .x=0x43, .y=0x72, .sp=0xe8, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xce}, {.addr=0x1ef8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1ef8, .value=0xae, .type=IO_READ},
        {.addr=0x1ef9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xa855, .a=0x62, .x=0x6f, .y=0xa8, .sp=0x6a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x61}, {.addr=0xa855, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa856, .a=0x61, .x=0x6f, .y=0xa8, .sp=0x6b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x61}, {.addr=0xa855, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa855, .value=0xae, .type=IO_READ},
        {.addr=0xa856, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x26c9, .a=0x3b, .x=0x5e, .y=0xa5, .sp=0x67, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x4d}, {.addr=0x26c9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x26ca, .a=0x4d, .x=0x5e, .y=0xa5, .sp=0x68, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x4d}, {.addr=0x26c9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x26c9, .value=0xae, .type=IO_READ},
        {.addr=0x26ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xb09b, .a=0xea, .x=0x97, .y=0xe1, .sp=0x2d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xf4}, {.addr=0xb09b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb09c, .a=0xf4, .x=0x97, .y=0xe1, .sp=0x2e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xf4}, {.addr=0xb09b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb09b, .value=0xae, .type=IO_READ},
        {.addr=0xb09c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x9881, .a=0xe5, .x=0xd3, .y=0xbd, .sp=0x59, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x79}, {.addr=0x9881, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9882, .a=0x79, .x=0xd3, .y=0xbd, .sp=0x5a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x79}, {.addr=0x9881, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9881, .value=0xae, .type=IO_READ},
        {.addr=0x9882, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x4f7c, .a=0xcb, .x=0x91, .y=0x43, .sp=0xac, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x83}, {.addr=0x4f7c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4f7d, .a=0x83, .x=0x91, .y=0x43, .sp=0xad, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x83}, {.addr=0x4f7c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4f7c, .value=0xae, .type=IO_READ},
        {.addr=0x4f7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x2126, .a=0xda, .x=0xfa, .y=0xdd, .sp=0x2e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x9b}, {.addr=0x2126, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2127, .a=0x9b, .x=0xfa, .y=0xdd, .sp=0x2f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x9b}, {.addr=0x2126, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2126, .value=0xae, .type=IO_READ},
        {.addr=0x2127, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa6ba, .a=0xee, .x=0x22, .y=0x2d, .sp=0x59, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x03}, {.addr=0xa6ba, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa6bb, .a=0x03, .x=0x22, .y=0x2d, .sp=0x5a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x03}, {.addr=0xa6ba, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa6ba, .value=0xae, .type=IO_READ},
        {.addr=0xa6bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x256e, .a=0x5a, .x=0xf7, .y=0x71, .sp=0x27, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x84}, {.addr=0x256e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x256f, .a=0x84, .x=0xf7, .y=0x71, .sp=0x28, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x84}, {.addr=0x256e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x256e, .value=0xae, .type=IO_READ},
        {.addr=0x256f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xfc40, .a=0x72, .x=0x2e, .y=0x8c, .sp=0x51, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xb3}, {.addr=0xfc40, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfc41, .a=0xb3, .x=0x2e, .y=0x8c, .sp=0x52, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xb3}, {.addr=0xfc40, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfc40, .value=0xae, .type=IO_READ},
        {.addr=0xfc41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xb953, .a=0xe4, .x=0xc0, .y=0xd4, .sp=0xea, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xb953, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb954, .a=0x00, .x=0xc0, .y=0xd4, .sp=0xeb, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xb953, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb953, .value=0xae, .type=IO_READ},
        {.addr=0xb954, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x75df, .a=0x88, .x=0xa3, .y=0x00, .sp=0x0c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xff}, {.addr=0x75df, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x75e0, .a=0xff, .x=0xa3, .y=0x00, .sp=0x0d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xff}, {.addr=0x75df, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x75df, .value=0xae, .type=IO_READ},
        {.addr=0x75e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x710d, .a=0x33, .x=0xc2, .y=0x4d, .sp=0xeb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x27}, {.addr=0x710d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x710e, .a=0x27, .x=0xc2, .y=0x4d, .sp=0xec, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x27}, {.addr=0x710d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x710d, .value=0xae, .type=IO_READ},
        {.addr=0x710e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x3a47, .a=0x26, .x=0xd1, .y=0x0e, .sp=0xfb, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xbc}, {.addr=0x3a47, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3a48, .a=0xbc, .x=0xd1, .y=0x0e, .sp=0xfc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xbc}, {.addr=0x3a47, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3a47, .value=0xae, .type=IO_READ},
        {.addr=0x3a48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x56e7, .a=0x8a, .x=0xdf, .y=0x30, .sp=0x84, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xa6}, {.addr=0x56e7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x56e8, .a=0xa6, .x=0xdf, .y=0x30, .sp=0x85, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xa6}, {.addr=0x56e7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x56e7, .value=0xae, .type=IO_READ},
        {.addr=0x56e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x93c9, .a=0x41, .x=0xaf, .y=0x38, .sp=0xa6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x36}, {.addr=0x93c9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x93ca, .a=0x36, .x=0xaf, .y=0x38, .sp=0xa7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x36}, {.addr=0x93c9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x93c9, .value=0xae, .type=IO_READ},
        {.addr=0x93ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x46ce, .a=0xef, .x=0xb4, .y=0xfa, .sp=0x0d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x64}, {.addr=0x46ce, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x46cf, .a=0x64, .x=0xb4, .y=0xfa, .sp=0x0e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x64}, {.addr=0x46ce, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x46ce, .value=0xae, .type=IO_READ},
        {.addr=0x46cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xd9bf, .a=0x52, .x=0x47, .y=0x58, .sp=0x2e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x1c}, {.addr=0xd9bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd9c0, .a=0x1c, .x=0x47, .y=0x58, .sp=0x2f, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x1c}, {.addr=0xd9bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd9bf, .value=0xae, .type=IO_READ},
        {.addr=0xd9c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x56d2, .a=0x32, .x=0x15, .y=0xdd, .sp=0xae, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x2b}, {.addr=0x56d2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x56d3, .a=0x2b, .x=0x15, .y=0xdd, .sp=0xaf, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x2b}, {.addr=0x56d2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x56d2, .value=0xae, .type=IO_READ},
        {.addr=0x56d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0a7a, .a=0x24, .x=0x31, .y=0x16, .sp=0xcb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x4d}, {.addr=0x0a7a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0a7b, .a=0x4d, .x=0x31, .y=0x16, .sp=0xcc, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x4d}, {.addr=0x0a7a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0a7a, .value=0xae, .type=IO_READ},
        {.addr=0x0a7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xe7a7, .a=0x74, .x=0x9d, .y=0x35, .sp=0x56, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x7f}, {.addr=0xe7a7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe7a8, .a=0x7f, .x=0x9d, .y=0x35, .sp=0x57, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x7f}, {.addr=0xe7a7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe7a7, .value=0xae, .type=IO_READ},
        {.addr=0xe7a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc5cc, .a=0xc2, .x=0x39, .y=0xbf, .sp=0xa9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x26}, {.addr=0xc5cc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc5cd, .a=0x26, .x=0x39, .y=0xbf, .sp=0xaa, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x26}, {.addr=0xc5cc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc5cc, .value=0xae, .type=IO_READ},
        {.addr=0xc5cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x0c0c, .a=0xb7, .x=0x42, .y=0x31, .sp=0x8c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xc6}, {.addr=0x0c0c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0c0d, .a=0xc6, .x=0x42, .y=0x31, .sp=0x8d, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xc6}, {.addr=0x0c0c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0c0c, .value=0xae, .type=IO_READ},
        {.addr=0x0c0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xc41c, .a=0x49, .x=0x04, .y=0xfc, .sp=0xca, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x04}, {.addr=0xc41c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc41d, .a=0x04, .x=0x04, .y=0xfc, .sp=0xcb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x04}, {.addr=0xc41c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc41c, .value=0xae, .type=IO_READ},
        {.addr=0xc41d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xbb4a, .a=0xde, .x=0xf1, .y=0x0e, .sp=0x2f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xe3}, {.addr=0xbb4a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbb4b, .a=0xe3, .x=0xf1, .y=0x0e, .sp=0x30, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xe3}, {.addr=0xbb4a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbb4a, .value=0xae, .type=IO_READ},
        {.addr=0xbb4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x7b10, .a=0xc8, .x=0xc8, .y=0x02, .sp=0xe2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x6e}, {.addr=0x7b10, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7b11, .a=0x6e, .x=0xc8, .y=0x02, .sp=0xe3, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x6e}, {.addr=0x7b10, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7b10, .value=0xae, .type=IO_READ},
        {.addr=0x7b11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8c65, .a=0x45, .x=0xc4, .y=0x20, .sp=0x08, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x8e}, {.addr=0x8c65, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8c66, .a=0x8e, .x=0xc4, .y=0x20, .sp=0x09, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x8e}, {.addr=0x8c65, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8c65, .value=0xae, .type=IO_READ},
        {.addr=0x8c66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x2f46, .a=0x63, .x=0xcb, .y=0xf2, .sp=0xb1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x4f}, {.addr=0x2f46, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2f47, .a=0x4f, .x=0xcb, .y=0xf2, .sp=0xb2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x4f}, {.addr=0x2f46, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2f46, .value=0xae, .type=IO_READ},
        {.addr=0x2f47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x36fc, .a=0x21, .x=0x65, .y=0xd9, .sp=0x92, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xee}, {.addr=0x36fc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x36fd, .a=0xee, .x=0x65, .y=0xd9, .sp=0x93, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xee}, {.addr=0x36fc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x36fc, .value=0xae, .type=IO_READ},
        {.addr=0x36fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xe9d1, .a=0xad, .x=0xc2, .y=0xe6, .sp=0x76, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x8f}, {.addr=0xe9d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe9d2, .a=0x8f, .x=0xc2, .y=0xe6, .sp=0x77, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x8f}, {.addr=0xe9d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe9d1, .value=0xae, .type=IO_READ},
        {.addr=0xe9d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x10e8, .a=0x87, .x=0x8b, .y=0xcd, .sp=0x00, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x1b}, {.addr=0x10e8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x10e9, .a=0x1b, .x=0x8b, .y=0xcd, .sp=0x01, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x1b}, {.addr=0x10e8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x10e8, .value=0xae, .type=IO_READ},
        {.addr=0x10e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xfce0, .a=0xc5, .x=0x0a, .y=0x19, .sp=0xe3, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x27}, {.addr=0xfce0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfce1, .a=0x27, .x=0x0a, .y=0x19, .sp=0xe4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x27}, {.addr=0xfce0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfce0, .value=0xae, .type=IO_READ},
        {.addr=0xfce1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x6dcf, .a=0x95, .x=0xf2, .y=0xa3, .sp=0xe7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xc1}, {.addr=0x6dcf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6dd0, .a=0xc1, .x=0xf2, .y=0xa3, .sp=0xe8, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xc1}, {.addr=0x6dcf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6dcf, .value=0xae, .type=IO_READ},
        {.addr=0x6dd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x9d58, .a=0x5b, .x=0x94, .y=0x6c, .sp=0x8f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x28}, {.addr=0x9d58, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9d59, .a=0x28, .x=0x94, .y=0x6c, .sp=0x90, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x28}, {.addr=0x9d58, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9d58, .value=0xae, .type=IO_READ},
        {.addr=0x9d59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0100) {
    const struct CPU_State initial_cpu = {.pc=0x63d3, .a=0x21, .x=0x51, .y=0xd3, .sp=0xf7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x2c}, {.addr=0x63d3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63d4, .a=0x2c, .x=0x51, .y=0xd3, .sp=0xf8, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x2c}, {.addr=0x63d3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63d3, .value=0xae, .type=IO_READ},
        {.addr=0x63d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0101) {
    const struct CPU_State initial_cpu = {.pc=0x14e7, .a=0xe3, .x=0x8e, .y=0xa9, .sp=0x83, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xec}, {.addr=0x14e7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x14e8, .a=0xec, .x=0x8e, .y=0xa9, .sp=0x84, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xec}, {.addr=0x14e7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x14e7, .value=0xae, .type=IO_READ},
        {.addr=0x14e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0102) {
    const struct CPU_State initial_cpu = {.pc=0xd042, .a=0x44, .x=0x48, .y=0x7f, .sp=0x4a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x29}, {.addr=0xd042, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd043, .a=0x29, .x=0x48, .y=0x7f, .sp=0x4b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x29}, {.addr=0xd042, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd042, .value=0xae, .type=IO_READ},
        {.addr=0xd043, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb315, .a=0xb7, .x=0x48, .y=0x60, .sp=0x8d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xe8}, {.addr=0xb315, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb316, .a=0xe8, .x=0x48, .y=0x60, .sp=0x8e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xe8}, {.addr=0xb315, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb315, .value=0xae, .type=IO_READ},
        {.addr=0xb316, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd1fd, .a=0xf5, .x=0x2e, .y=0x33, .sp=0x20, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xcd}, {.addr=0xd1fd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd1fe, .a=0xcd, .x=0x2e, .y=0x33, .sp=0x21, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xcd}, {.addr=0xd1fd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd1fd, .value=0xae, .type=IO_READ},
        {.addr=0xd1fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0105) {
    const struct CPU_State initial_cpu = {.pc=0x1e5c, .a=0xc2, .x=0x58, .y=0x5b, .sp=0x26, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xc3}, {.addr=0x1e5c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1e5d, .a=0xc3, .x=0x58, .y=0x5b, .sp=0x27, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xc3}, {.addr=0x1e5c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1e5c, .value=0xae, .type=IO_READ},
        {.addr=0x1e5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0106) {
    const struct CPU_State initial_cpu = {.pc=0x8df9, .a=0xfa, .x=0xef, .y=0xa8, .sp=0x36, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x9c}, {.addr=0x8df9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8dfa, .a=0x9c, .x=0xef, .y=0xa8, .sp=0x37, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x9c}, {.addr=0x8df9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8df9, .value=0xae, .type=IO_READ},
        {.addr=0x8dfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0107) {
    const struct CPU_State initial_cpu = {.pc=0xe732, .a=0x6f, .x=0xec, .y=0xa8, .sp=0xbc, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xed}, {.addr=0xe732, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe733, .a=0xed, .x=0xec, .y=0xa8, .sp=0xbd, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xed}, {.addr=0xe732, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe732, .value=0xae, .type=IO_READ},
        {.addr=0xe733, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7f86, .a=0x49, .x=0xea, .y=0x76, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x89}, {.addr=0x7f86, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7f87, .a=0x89, .x=0xea, .y=0x76, .sp=0xa5, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x89}, {.addr=0x7f86, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7f86, .value=0xae, .type=IO_READ},
        {.addr=0x7f87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0109) {
    const struct CPU_State initial_cpu = {.pc=0xf89a, .a=0xae, .x=0x79, .y=0x19, .sp=0xf5, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x9c}, {.addr=0xf89a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf89b, .a=0x9c, .x=0x79, .y=0x19, .sp=0xf6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x9c}, {.addr=0xf89a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf89a, .value=0xae, .type=IO_READ},
        {.addr=0xf89b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010A) {
    const struct CPU_State initial_cpu = {.pc=0x63f6, .a=0x5e, .x=0x19, .y=0x5b, .sp=0x1f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x05}, {.addr=0x63f6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63f7, .a=0x05, .x=0x19, .y=0x5b, .sp=0x20, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x05}, {.addr=0x63f6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63f6, .value=0xae, .type=IO_READ},
        {.addr=0x63f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010B) {
    const struct CPU_State initial_cpu = {.pc=0x96ba, .a=0xd3, .x=0x96, .y=0xac, .sp=0x18, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xdc}, {.addr=0x96ba, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x96bb, .a=0xdc, .x=0x96, .y=0xac, .sp=0x19, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xdc}, {.addr=0x96ba, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x96ba, .value=0xae, .type=IO_READ},
        {.addr=0x96bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010C) {
    const struct CPU_State initial_cpu = {.pc=0xadef, .a=0xce, .x=0x4c, .y=0x9f, .sp=0xb9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x5b}, {.addr=0xadef, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xadf0, .a=0x5b, .x=0x4c, .y=0x9f, .sp=0xba, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x5b}, {.addr=0xadef, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xadef, .value=0xae, .type=IO_READ},
        {.addr=0xadf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6c33, .a=0xbc, .x=0xde, .y=0xab, .sp=0xa9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xc5}, {.addr=0x6c33, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6c34, .a=0xc5, .x=0xde, .y=0xab, .sp=0xaa, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xc5}, {.addr=0x6c33, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6c33, .value=0xae, .type=IO_READ},
        {.addr=0x6c34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010E) {
    const struct CPU_State initial_cpu = {.pc=0x6cb6, .a=0xba, .x=0x36, .y=0x46, .sp=0x45, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x36}, {.addr=0x6cb6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6cb7, .a=0x36, .x=0x36, .y=0x46, .sp=0x46, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x36}, {.addr=0x6cb6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6cb6, .value=0xae, .type=IO_READ},
        {.addr=0x6cb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_010F) {
    const struct CPU_State initial_cpu = {.pc=0x34be, .a=0x44, .x=0xe2, .y=0x7e, .sp=0x34, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x87}, {.addr=0x34be, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x34bf, .a=0x87, .x=0xe2, .y=0x7e, .sp=0x35, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x87}, {.addr=0x34be, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x34be, .value=0xae, .type=IO_READ},
        {.addr=0x34bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0110) {
    const struct CPU_State initial_cpu = {.pc=0xca03, .a=0x99, .x=0x29, .y=0xbf, .sp=0x44, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x36}, {.addr=0xca03, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xca04, .a=0x36, .x=0x29, .y=0xbf, .sp=0x45, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x36}, {.addr=0xca03, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xca03, .value=0xae, .type=IO_READ},
        {.addr=0xca04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0111) {
    const struct CPU_State initial_cpu = {.pc=0x7420, .a=0xb4, .x=0x35, .y=0x80, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x1b}, {.addr=0x7420, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7421, .a=0x1b, .x=0x35, .y=0x80, .sp=0x7e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x1b}, {.addr=0x7420, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7420, .value=0xae, .type=IO_READ},
        {.addr=0x7421, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0112) {
    const struct CPU_State initial_cpu = {.pc=0xba7b, .a=0xc5, .x=0xbe, .y=0x5c, .sp=0x6f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x31}, {.addr=0xba7b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xba7c, .a=0x31, .x=0xbe, .y=0x5c, .sp=0x70, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x31}, {.addr=0xba7b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xba7b, .value=0xae, .type=IO_READ},
        {.addr=0xba7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0113) {
    const struct CPU_State initial_cpu = {.pc=0x87e9, .a=0x7a, .x=0xd1, .y=0x2e, .sp=0x01, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x3c}, {.addr=0x87e9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x87ea, .a=0x3c, .x=0xd1, .y=0x2e, .sp=0x02, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x3c}, {.addr=0x87e9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x87e9, .value=0xae, .type=IO_READ},
        {.addr=0x87ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0114) {
    const struct CPU_State initial_cpu = {.pc=0x65f0, .a=0xe5, .x=0x05, .y=0x4a, .sp=0x36, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x4c}, {.addr=0x65f0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x65f1, .a=0x4c, .x=0x05, .y=0x4a, .sp=0x37, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x4c}, {.addr=0x65f0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x65f0, .value=0xae, .type=IO_READ},
        {.addr=0x65f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0115) {
    const struct CPU_State initial_cpu = {.pc=0xbf3c, .a=0x2a, .x=0x7d, .y=0xe0, .sp=0x91, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x76}, {.addr=0xbf3c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf3d, .a=0x76, .x=0x7d, .y=0xe0, .sp=0x92, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x76}, {.addr=0xbf3c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf3c, .value=0xae, .type=IO_READ},
        {.addr=0xbf3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0116) {
    const struct CPU_State initial_cpu = {.pc=0x6dae, .a=0x78, .x=0x2a, .y=0x74, .sp=0x40, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x29}, {.addr=0x6dae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6daf, .a=0x29, .x=0x2a, .y=0x74, .sp=0x41, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x29}, {.addr=0x6dae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6dae, .value=0xae, .type=IO_READ},
        {.addr=0x6daf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0117) {
    const struct CPU_State initial_cpu = {.pc=0x5805, .a=0x61, .x=0x6e, .y=0xfe, .sp=0x7f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xa7}, {.addr=0x5805, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5806, .a=0xa7, .x=0x6e, .y=0xfe, .sp=0x80, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xa7}, {.addr=0x5805, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5805, .value=0xae, .type=IO_READ},
        {.addr=0x5806, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0118) {
    const struct CPU_State initial_cpu = {.pc=0xfc20, .a=0x0d, .x=0xaf, .y=0xf9, .sp=0x60, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xca}, {.addr=0xfc20, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfc21, .a=0xca, .x=0xaf, .y=0xf9, .sp=0x61, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xca}, {.addr=0xfc20, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfc20, .value=0xae, .type=IO_READ},
        {.addr=0xfc21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0119) {
    const struct CPU_State initial_cpu = {.pc=0x52d4, .a=0x87, .x=0x9c, .y=0xb7, .sp=0x7b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xc4}, {.addr=0x52d4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x52d5, .a=0xc4, .x=0x9c, .y=0xb7, .sp=0x7c, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xc4}, {.addr=0x52d4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x52d4, .value=0xae, .type=IO_READ},
        {.addr=0x52d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6370, .a=0x6f, .x=0xcf, .y=0x27, .sp=0x36, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x18}, {.addr=0x6370, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6371, .a=0x18, .x=0xcf, .y=0x27, .sp=0x37, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x18}, {.addr=0x6370, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6370, .value=0xae, .type=IO_READ},
        {.addr=0x6371, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011B) {
    const struct CPU_State initial_cpu = {.pc=0x2fb5, .a=0xda, .x=0xc3, .y=0xd8, .sp=0xb2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x55}, {.addr=0x2fb5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2fb6, .a=0x55, .x=0xc3, .y=0xd8, .sp=0xb3, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x55}, {.addr=0x2fb5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2fb5, .value=0xae, .type=IO_READ},
        {.addr=0x2fb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011C) {
    const struct CPU_State initial_cpu = {.pc=0x8700, .a=0xf1, .x=0xb6, .y=0x27, .sp=0x32, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xe8}, {.addr=0x8700, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8701, .a=0xe8, .x=0xb6, .y=0x27, .sp=0x33, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xe8}, {.addr=0x8700, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8700, .value=0xae, .type=IO_READ},
        {.addr=0x8701, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011D) {
    const struct CPU_State initial_cpu = {.pc=0x3ae1, .a=0xce, .x=0xaa, .y=0xf6, .sp=0xe3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x12}, {.addr=0x3ae1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3ae2, .a=0x12, .x=0xaa, .y=0xf6, .sp=0xe4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x12}, {.addr=0x3ae1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3ae1, .value=0xae, .type=IO_READ},
        {.addr=0x3ae2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011E) {
    const struct CPU_State initial_cpu = {.pc=0xd063, .a=0x34, .x=0x84, .y=0x20, .sp=0x31, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x0b}, {.addr=0xd063, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd064, .a=0x0b, .x=0x84, .y=0x20, .sp=0x32, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x0b}, {.addr=0xd063, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd063, .value=0xae, .type=IO_READ},
        {.addr=0xd064, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_011F) {
    const struct CPU_State initial_cpu = {.pc=0x520a, .a=0x25, .x=0x65, .y=0xb7, .sp=0x7b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xfd}, {.addr=0x520a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x520b, .a=0xfd, .x=0x65, .y=0xb7, .sp=0x7c, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xfd}, {.addr=0x520a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x520a, .value=0xae, .type=IO_READ},
        {.addr=0x520b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0120) {
    const struct CPU_State initial_cpu = {.pc=0x80e1, .a=0xc9, .x=0x25, .y=0x2c, .sp=0x02, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x0f}, {.addr=0x80e1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x80e2, .a=0x0f, .x=0x25, .y=0x2c, .sp=0x03, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x0f}, {.addr=0x80e1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x80e1, .value=0xae, .type=IO_READ},
        {.addr=0x80e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0121) {
    const struct CPU_State initial_cpu = {.pc=0x7264, .a=0x79, .x=0x9f, .y=0x3f, .sp=0x7f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xe6}, {.addr=0x7264, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7265, .a=0xe6, .x=0x9f, .y=0x3f, .sp=0x80, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xe6}, {.addr=0x7264, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7264, .value=0xae, .type=IO_READ},
        {.addr=0x7265, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0122) {
    const struct CPU_State initial_cpu = {.pc=0xd87f, .a=0x4c, .x=0xd0, .y=0x49, .sp=0x93, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xc8}, {.addr=0xd87f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd880, .a=0xc8, .x=0xd0, .y=0x49, .sp=0x94, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xc8}, {.addr=0xd87f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd87f, .value=0xae, .type=IO_READ},
        {.addr=0xd880, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0123) {
    const struct CPU_State initial_cpu = {.pc=0x3a3a, .a=0x3f, .x=0x81, .y=0xdc, .sp=0xe3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x20}, {.addr=0x3a3a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3a3b, .a=0x20, .x=0x81, .y=0xdc, .sp=0xe4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x20}, {.addr=0x3a3a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3a3a, .value=0xae, .type=IO_READ},
        {.addr=0x3a3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0124) {
    const struct CPU_State initial_cpu = {.pc=0x6ec4, .a=0xab, .x=0xf0, .y=0x35, .sp=0xd6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x46}, {.addr=0x6ec4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6ec5, .a=0x46, .x=0xf0, .y=0x35, .sp=0xd7, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x46}, {.addr=0x6ec4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ec4, .value=0xae, .type=IO_READ},
        {.addr=0x6ec5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0125) {
    const struct CPU_State initial_cpu = {.pc=0xf1d3, .a=0x3e, .x=0xdb, .y=0xd7, .sp=0xa0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xde}, {.addr=0xf1d3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf1d4, .a=0xde, .x=0xdb, .y=0xd7, .sp=0xa1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xde}, {.addr=0xf1d3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf1d3, .value=0xae, .type=IO_READ},
        {.addr=0xf1d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0025, .a=0x5b, .x=0x9e, .y=0x25, .sp=0x87, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xae}, {.addr=0x0188, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0026, .a=0x87, .x=0x9e, .y=0x25, .sp=0x88, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xae}, {.addr=0x0188, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0025, .value=0xae, .type=IO_READ},
        {.addr=0x0026, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0127) {
    const struct CPU_State initial_cpu = {.pc=0xcb25, .a=0x7b, .x=0x70, .y=0x8a, .sp=0x3d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x0c}, {.addr=0xcb25, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcb26, .a=0x0c, .x=0x70, .y=0x8a, .sp=0x3e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x0c}, {.addr=0xcb25, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcb25, .value=0xae, .type=IO_READ},
        {.addr=0xcb26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0128) {
    const struct CPU_State initial_cpu = {.pc=0xba10, .a=0x90, .x=0xd1, .y=0xee, .sp=0xd6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x3a}, {.addr=0xba10, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xba11, .a=0x3a, .x=0xd1, .y=0xee, .sp=0xd7, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x3a}, {.addr=0xba10, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xba10, .value=0xae, .type=IO_READ},
        {.addr=0xba11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0129) {
    const struct CPU_State initial_cpu = {.pc=0x0a7e, .a=0x68, .x=0xd9, .y=0x45, .sp=0x9f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x05}, {.addr=0x0a7e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0a7f, .a=0x05, .x=0xd9, .y=0x45, .sp=0xa0, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x05}, {.addr=0x0a7e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0a7e, .value=0xae, .type=IO_READ},
        {.addr=0x0a7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012A) {
    const struct CPU_State initial_cpu = {.pc=0x42ca, .a=0xc0, .x=0x5f, .y=0xcf, .sp=0xa7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x88}, {.addr=0x42ca, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x42cb, .a=0x88, .x=0x5f, .y=0xcf, .sp=0xa8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x88}, {.addr=0x42ca, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x42ca, .value=0xae, .type=IO_READ},
        {.addr=0x42cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4c05, .a=0x43, .x=0x8c, .y=0x43, .sp=0x49, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xad}, {.addr=0x4c05, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4c06, .a=0xad, .x=0x8c, .y=0x43, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xad}, {.addr=0x4c05, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4c05, .value=0xae, .type=IO_READ},
        {.addr=0x4c06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012C) {
    const struct CPU_State initial_cpu = {.pc=0xe746, .a=0xa3, .x=0x71, .y=0xa2, .sp=0x86, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x98}, {.addr=0xe746, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe747, .a=0x98, .x=0x71, .y=0xa2, .sp=0x87, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x98}, {.addr=0xe746, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe746, .value=0xae, .type=IO_READ},
        {.addr=0xe747, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3266, .a=0xc4, .x=0x8f, .y=0x74, .sp=0x9c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x10}, {.addr=0x3266, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3267, .a=0x10, .x=0x8f, .y=0x74, .sp=0x9d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x10}, {.addr=0x3266, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3266, .value=0xae, .type=IO_READ},
        {.addr=0x3267, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012E) {
    const struct CPU_State initial_cpu = {.pc=0xa0f4, .a=0xda, .x=0x0b, .y=0x5e, .sp=0x81, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xc0}, {.addr=0xa0f4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa0f5, .a=0xc0, .x=0x0b, .y=0x5e, .sp=0x82, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xc0}, {.addr=0xa0f4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa0f4, .value=0xae, .type=IO_READ},
        {.addr=0xa0f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_012F) {
    const struct CPU_State initial_cpu = {.pc=0xa8d0, .a=0xed, .x=0xec, .y=0xe3, .sp=0x12, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x9e}, {.addr=0xa8d0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa8d1, .a=0x9e, .x=0xec, .y=0xe3, .sp=0x13, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x9e}, {.addr=0xa8d0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa8d0, .value=0xae, .type=IO_READ},
        {.addr=0xa8d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0130) {
    const struct CPU_State initial_cpu = {.pc=0x41c1, .a=0xa9, .x=0xb3, .y=0xf4, .sp=0xce, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x53}, {.addr=0x41c1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x41c2, .a=0x53, .x=0xb3, .y=0xf4, .sp=0xcf, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x53}, {.addr=0x41c1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x41c1, .value=0xae, .type=IO_READ},
        {.addr=0x41c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0131) {
    const struct CPU_State initial_cpu = {.pc=0xd005, .a=0xd3, .x=0xed, .y=0xf8, .sp=0x4f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x8e}, {.addr=0xd005, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd006, .a=0x8e, .x=0xed, .y=0xf8, .sp=0x50, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x8e}, {.addr=0xd005, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd005, .value=0xae, .type=IO_READ},
        {.addr=0xd006, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0132) {
    const struct CPU_State initial_cpu = {.pc=0x0d2e, .a=0xcb, .x=0xe2, .y=0x64, .sp=0xdc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xb6}, {.addr=0x0d2e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0d2f, .a=0xb6, .x=0xe2, .y=0x64, .sp=0xdd, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xb6}, {.addr=0x0d2e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0d2e, .value=0xae, .type=IO_READ},
        {.addr=0x0d2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0133) {
    const struct CPU_State initial_cpu = {.pc=0xdbec, .a=0x5a, .x=0xf5, .y=0x21, .sp=0xe1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xaa}, {.addr=0xdbec, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdbed, .a=0xaa, .x=0xf5, .y=0x21, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xaa}, {.addr=0xdbec, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdbec, .value=0xae, .type=IO_READ},
        {.addr=0xdbed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0134) {
    const struct CPU_State initial_cpu = {.pc=0xa04a, .a=0x91, .x=0xc2, .y=0x98, .sp=0x99, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x1d}, {.addr=0xa04a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa04b, .a=0x1d, .x=0xc2, .y=0x98, .sp=0x9a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x1d}, {.addr=0xa04a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa04a, .value=0xae, .type=IO_READ},
        {.addr=0xa04b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0135) {
    const struct CPU_State initial_cpu = {.pc=0x3571, .a=0x81, .x=0x67, .y=0x42, .sp=0x4e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x8d}, {.addr=0x3571, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3572, .a=0x8d, .x=0x67, .y=0x42, .sp=0x4f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x8d}, {.addr=0x3571, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3571, .value=0xae, .type=IO_READ},
        {.addr=0x3572, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0136) {
    const struct CPU_State initial_cpu = {.pc=0xfd12, .a=0x00, .x=0x33, .y=0xed, .sp=0x19, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x54}, {.addr=0xfd12, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfd13, .a=0x54, .x=0x33, .y=0xed, .sp=0x1a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x54}, {.addr=0xfd12, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfd12, .value=0xae, .type=IO_READ},
        {.addr=0xfd13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0137) {
    const struct CPU_State initial_cpu = {.pc=0xf7fc, .a=0x2b, .x=0x76, .y=0xbf, .sp=0xa3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x30}, {.addr=0xf7fc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf7fd, .a=0x30, .x=0x76, .y=0xbf, .sp=0xa4, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x30}, {.addr=0xf7fc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf7fc, .value=0xae, .type=IO_READ},
        {.addr=0xf7fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0138) {
    const struct CPU_State initial_cpu = {.pc=0x3006, .a=0x78, .x=0xd2, .y=0x80, .sp=0x9c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x2d}, {.addr=0x3006, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3007, .a=0x2d, .x=0xd2, .y=0x80, .sp=0x9d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x2d}, {.addr=0x3006, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3006, .value=0xae, .type=IO_READ},
        {.addr=0x3007, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0139) {
    const struct CPU_State initial_cpu = {.pc=0x74d9, .a=0xb5, .x=0x8a, .y=0xa4, .sp=0x83, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x7c}, {.addr=0x74d9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x74da, .a=0x7c, .x=0x8a, .y=0xa4, .sp=0x84, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x7c}, {.addr=0x74d9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x74d9, .value=0xae, .type=IO_READ},
        {.addr=0x74da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013A) {
    const struct CPU_State initial_cpu = {.pc=0x8bc0, .a=0x7e, .x=0xe0, .y=0xb1, .sp=0xb9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x72}, {.addr=0x8bc0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8bc1, .a=0x72, .x=0xe0, .y=0xb1, .sp=0xba, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x72}, {.addr=0x8bc0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8bc0, .value=0xae, .type=IO_READ},
        {.addr=0x8bc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013B) {
    const struct CPU_State initial_cpu = {.pc=0xc76e, .a=0x14, .x=0x8a, .y=0x19, .sp=0x85, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x85}, {.addr=0xc76e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc76f, .a=0x85, .x=0x8a, .y=0x19, .sp=0x86, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x85}, {.addr=0xc76e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc76e, .value=0xae, .type=IO_READ},
        {.addr=0xc76f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013C) {
    const struct CPU_State initial_cpu = {.pc=0x02ad, .a=0xb0, .x=0xfa, .y=0xdb, .sp=0x85, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xf9}, {.addr=0x02ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x02ae, .a=0xf9, .x=0xfa, .y=0xdb, .sp=0x86, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xf9}, {.addr=0x02ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x02ad, .value=0xae, .type=IO_READ},
        {.addr=0x02ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013D) {
    const struct CPU_State initial_cpu = {.pc=0xec5d, .a=0xac, .x=0x32, .y=0xff, .sp=0x04, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x24}, {.addr=0xec5d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xec5e, .a=0x24, .x=0x32, .y=0xff, .sp=0x05, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x24}, {.addr=0xec5d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xec5d, .value=0xae, .type=IO_READ},
        {.addr=0xec5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013E) {
    const struct CPU_State initial_cpu = {.pc=0xe009, .a=0x79, .x=0xed, .y=0x1e, .sp=0x3e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x5f}, {.addr=0xe009, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe00a, .a=0x5f, .x=0xed, .y=0x1e, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x5f}, {.addr=0xe009, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe009, .value=0xae, .type=IO_READ},
        {.addr=0xe00a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_013F) {
    const struct CPU_State initial_cpu = {.pc=0x3289, .a=0x27, .x=0xad, .y=0xf4, .sp=0x2f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xcb}, {.addr=0x3289, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0xcb, .x=0xad, .y=0xf4, .sp=0x30, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xcb}, {.addr=0x3289, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3289, .value=0xae, .type=IO_READ},
        {.addr=0x328a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0916, .a=0x40, .x=0x27, .y=0x90, .sp=0xb1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xcb}, {.addr=0x0916, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0917, .a=0xcb, .x=0x27, .y=0x90, .sp=0xb2, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xcb}, {.addr=0x0916, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0916, .value=0xae, .type=IO_READ},
        {.addr=0x0917, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0141) {
    const struct CPU_State initial_cpu = {.pc=0x749a, .a=0x2d, .x=0x7c, .y=0xfd, .sp=0x41, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x5b}, {.addr=0x749a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x749b, .a=0x5b, .x=0x7c, .y=0xfd, .sp=0x42, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x5b}, {.addr=0x749a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x749a, .value=0xae, .type=IO_READ},
        {.addr=0x749b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0142) {
    const struct CPU_State initial_cpu = {.pc=0x03b3, .a=0x4f, .x=0x43, .y=0xd1, .sp=0xa2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x61}, {.addr=0x03b3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x03b4, .a=0x61, .x=0x43, .y=0xd1, .sp=0xa3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x61}, {.addr=0x03b3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x03b3, .value=0xae, .type=IO_READ},
        {.addr=0x03b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0143) {
    const struct CPU_State initial_cpu = {.pc=0xbe1a, .a=0x34, .x=0x50, .y=0x6e, .sp=0x1b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x0b}, {.addr=0xbe1a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbe1b, .a=0x0b, .x=0x50, .y=0x6e, .sp=0x1c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x0b}, {.addr=0xbe1a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbe1a, .value=0xae, .type=IO_READ},
        {.addr=0xbe1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0144) {
    const struct CPU_State initial_cpu = {.pc=0x4dc9, .a=0x9a, .x=0xf2, .y=0xc9, .sp=0xcb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xa0}, {.addr=0x4dc9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4dca, .a=0xa0, .x=0xf2, .y=0xc9, .sp=0xcc, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xa0}, {.addr=0x4dc9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4dc9, .value=0xae, .type=IO_READ},
        {.addr=0x4dca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0145) {
    const struct CPU_State initial_cpu = {.pc=0x104c, .a=0xfc, .x=0x1d, .y=0xee, .sp=0x32, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x09}, {.addr=0x104c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x104d, .a=0x09, .x=0x1d, .y=0xee, .sp=0x33, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x09}, {.addr=0x104c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x104c, .value=0xae, .type=IO_READ},
        {.addr=0x104d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0146) {
    const struct CPU_State initial_cpu = {.pc=0x77cf, .a=0x45, .x=0xb7, .y=0xf6, .sp=0xdd, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x8a}, {.addr=0x77cf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x77d0, .a=0x8a, .x=0xb7, .y=0xf6, .sp=0xde, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x8a}, {.addr=0x77cf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x77cf, .value=0xae, .type=IO_READ},
        {.addr=0x77d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa0ba, .a=0x78, .x=0x7d, .y=0x4b, .sp=0xd0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xf7}, {.addr=0xa0ba, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa0bb, .a=0xf7, .x=0x7d, .y=0x4b, .sp=0xd1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xf7}, {.addr=0xa0ba, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa0ba, .value=0xae, .type=IO_READ},
        {.addr=0xa0bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0148) {
    const struct CPU_State initial_cpu = {.pc=0xbf43, .a=0x18, .x=0x7d, .y=0x5d, .sp=0xe1, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xb8}, {.addr=0xbf43, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf44, .a=0xb8, .x=0x7d, .y=0x5d, .sp=0xe2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xb8}, {.addr=0xbf43, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf43, .value=0xae, .type=IO_READ},
        {.addr=0xbf44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0149) {
    const struct CPU_State initial_cpu = {.pc=0x8fe1, .a=0x49, .x=0x64, .y=0x00, .sp=0x89, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xa0}, {.addr=0x8fe1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8fe2, .a=0xa0, .x=0x64, .y=0x00, .sp=0x8a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xa0}, {.addr=0x8fe1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8fe1, .value=0xae, .type=IO_READ},
        {.addr=0x8fe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014A) {
    const struct CPU_State initial_cpu = {.pc=0x5a2f, .a=0x70, .x=0xd8, .y=0x63, .sp=0x1c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x8c}, {.addr=0x5a2f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5a30, .a=0x8c, .x=0xd8, .y=0x63, .sp=0x1d, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x8c}, {.addr=0x5a2f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5a2f, .value=0xae, .type=IO_READ},
        {.addr=0x5a30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014B) {
    const struct CPU_State initial_cpu = {.pc=0x5ab3, .a=0x00, .x=0x35, .y=0xef, .sp=0x40, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x98}, {.addr=0x5ab3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5ab4, .a=0x98, .x=0x35, .y=0xef, .sp=0x41, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x98}, {.addr=0x5ab3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5ab3, .value=0xae, .type=IO_READ},
        {.addr=0x5ab4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014C) {
    const struct CPU_State initial_cpu = {.pc=0x8fa0, .a=0x6a, .x=0xa5, .y=0xd0, .sp=0xa7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x6a}, {.addr=0x8fa0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8fa1, .a=0x6a, .x=0xa5, .y=0xd0, .sp=0xa8, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x6a}, {.addr=0x8fa0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8fa0, .value=0xae, .type=IO_READ},
        {.addr=0x8fa1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014D) {
    const struct CPU_State initial_cpu = {.pc=0x9172, .a=0xc9, .x=0x96, .y=0xa6, .sp=0xfd, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x0b}, {.addr=0x9172, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9173, .a=0x0b, .x=0x96, .y=0xa6, .sp=0xfe, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x0b}, {.addr=0x9172, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9172, .value=0xae, .type=IO_READ},
        {.addr=0x9173, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014E) {
    const struct CPU_State initial_cpu = {.pc=0xf379, .a=0x50, .x=0xbd, .y=0x5c, .sp=0x8b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x2b}, {.addr=0xf379, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf37a, .a=0x2b, .x=0xbd, .y=0x5c, .sp=0x8c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x2b}, {.addr=0xf379, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf379, .value=0xae, .type=IO_READ},
        {.addr=0xf37a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_014F) {
    const struct CPU_State initial_cpu = {.pc=0x76c2, .a=0x2c, .x=0xa3, .y=0x59, .sp=0x37, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x24}, {.addr=0x76c2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x76c3, .a=0x24, .x=0xa3, .y=0x59, .sp=0x38, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x24}, {.addr=0x76c2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x76c2, .value=0xae, .type=IO_READ},
        {.addr=0x76c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0150) {
    const struct CPU_State initial_cpu = {.pc=0x2032, .a=0x51, .x=0xb3, .y=0x63, .sp=0x86, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x48}, {.addr=0x2032, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2033, .a=0x48, .x=0xb3, .y=0x63, .sp=0x87, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x48}, {.addr=0x2032, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2032, .value=0xae, .type=IO_READ},
        {.addr=0x2033, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0151) {
    const struct CPU_State initial_cpu = {.pc=0x4f48, .a=0x9b, .x=0xbb, .y=0x66, .sp=0xed, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x52}, {.addr=0x4f48, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4f49, .a=0x52, .x=0xbb, .y=0x66, .sp=0xee, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x52}, {.addr=0x4f48, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4f48, .value=0xae, .type=IO_READ},
        {.addr=0x4f49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0152) {
    const struct CPU_State initial_cpu = {.pc=0xa100, .a=0xa7, .x=0xbc, .y=0x52, .sp=0xff, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x62}, {.addr=0xa100, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa101, .a=0x62, .x=0xbc, .y=0x52, .sp=0x00, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x62}, {.addr=0xa100, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa100, .value=0xae, .type=IO_READ},
        {.addr=0xa101, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0153) {
    const struct CPU_State initial_cpu = {.pc=0x3859, .a=0x85, .x=0x04, .y=0x4a, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x38}, {.addr=0x3859, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x385a, .a=0x38, .x=0x04, .y=0x4a, .sp=0xab, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x38}, {.addr=0x3859, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3859, .value=0xae, .type=IO_READ},
        {.addr=0x385a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0154) {
    const struct CPU_State initial_cpu = {.pc=0x9eab, .a=0x89, .x=0x27, .y=0x9c, .sp=0xdf, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x3e}, {.addr=0x9eab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9eac, .a=0x3e, .x=0x27, .y=0x9c, .sp=0xe0, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x3e}, {.addr=0x9eab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9eab, .value=0xae, .type=IO_READ},
        {.addr=0x9eac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1db6, .a=0x02, .x=0x10, .y=0x55, .sp=0x2f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xc9}, {.addr=0x1db6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1db7, .a=0xc9, .x=0x10, .y=0x55, .sp=0x30, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xc9}, {.addr=0x1db6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1db6, .value=0xae, .type=IO_READ},
        {.addr=0x1db7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0156) {
    const struct CPU_State initial_cpu = {.pc=0x39c1, .a=0x90, .x=0x32, .y=0xf3, .sp=0x55, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x28}, {.addr=0x39c1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x39c2, .a=0x28, .x=0x32, .y=0xf3, .sp=0x56, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x28}, {.addr=0x39c1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x39c1, .value=0xae, .type=IO_READ},
        {.addr=0x39c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0157) {
    const struct CPU_State initial_cpu = {.pc=0x8c40, .a=0xe1, .x=0xe1, .y=0xb9, .sp=0xa6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xf1}, {.addr=0x8c40, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8c41, .a=0xf1, .x=0xe1, .y=0xb9, .sp=0xa7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xf1}, {.addr=0x8c40, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8c40, .value=0xae, .type=IO_READ},
        {.addr=0x8c41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0158) {
    const struct CPU_State initial_cpu = {.pc=0xe21b, .a=0xf7, .x=0x00, .y=0x45, .sp=0x2c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x83}, {.addr=0xe21b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe21c, .a=0x83, .x=0x00, .y=0x45, .sp=0x2d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x83}, {.addr=0xe21b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe21b, .value=0xae, .type=IO_READ},
        {.addr=0xe21c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0159) {
    const struct CPU_State initial_cpu = {.pc=0xe8d9, .a=0x2c, .x=0xf2, .y=0x15, .sp=0x83, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xd7}, {.addr=0xe8d9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe8da, .a=0xd7, .x=0xf2, .y=0x15, .sp=0x84, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xd7}, {.addr=0xe8d9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe8d9, .value=0xae, .type=IO_READ},
        {.addr=0xe8da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6eb8, .a=0xee, .x=0xbc, .y=0xaf, .sp=0x96, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x96}, {.addr=0x6eb8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6eb9, .a=0x96, .x=0xbc, .y=0xaf, .sp=0x97, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x96}, {.addr=0x6eb8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6eb8, .value=0xae, .type=IO_READ},
        {.addr=0x6eb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015B) {
    const struct CPU_State initial_cpu = {.pc=0x20fb, .a=0xba, .x=0x82, .y=0xfe, .sp=0x80, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xc0}, {.addr=0x20fb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x20fc, .a=0xc0, .x=0x82, .y=0xfe, .sp=0x81, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc0}, {.addr=0x20fb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x20fb, .value=0xae, .type=IO_READ},
        {.addr=0x20fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015C) {
    const struct CPU_State initial_cpu = {.pc=0xe0db, .a=0x0c, .x=0x2f, .y=0xce, .sp=0x33, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x21}, {.addr=0xe0db, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe0dc, .a=0x21, .x=0x2f, .y=0xce, .sp=0x34, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x21}, {.addr=0xe0db, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe0db, .value=0xae, .type=IO_READ},
        {.addr=0xe0dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015D) {
    const struct CPU_State initial_cpu = {.pc=0xe97a, .a=0x27, .x=0xb4, .y=0x93, .sp=0xd1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xcf}, {.addr=0xe97a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe97b, .a=0xcf, .x=0xb4, .y=0x93, .sp=0xd2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xcf}, {.addr=0xe97a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe97a, .value=0xae, .type=IO_READ},
        {.addr=0xe97b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa760, .a=0x18, .x=0x8d, .y=0x3a, .sp=0x7d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x0e}, {.addr=0xa760, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa761, .a=0x0e, .x=0x8d, .y=0x3a, .sp=0x7e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x0e}, {.addr=0xa760, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa760, .value=0xae, .type=IO_READ},
        {.addr=0xa761, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_015F) {
    const struct CPU_State initial_cpu = {.pc=0x7533, .a=0xfa, .x=0x90, .y=0xf8, .sp=0x6f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xc9}, {.addr=0x7533, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7534, .a=0xc9, .x=0x90, .y=0xf8, .sp=0x70, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xc9}, {.addr=0x7533, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7533, .value=0xae, .type=IO_READ},
        {.addr=0x7534, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0x16, .x=0x87, .y=0x43, .sp=0x85, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xd3}, {.addr=0x1000, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1001, .a=0xd3, .x=0x87, .y=0x43, .sp=0x86, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xd3}, {.addr=0x1000, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0xae, .type=IO_READ},
        {.addr=0x1001, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0161) {
    const struct CPU_State initial_cpu = {.pc=0x88a6, .a=0x58, .x=0x60, .y=0x74, .sp=0x9f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xaa}, {.addr=0x88a6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x88a7, .a=0xaa, .x=0x60, .y=0x74, .sp=0xa0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xaa}, {.addr=0x88a6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x88a6, .value=0xae, .type=IO_READ},
        {.addr=0x88a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0162) {
    const struct CPU_State initial_cpu = {.pc=0xa76a, .a=0x05, .x=0x96, .y=0x51, .sp=0x77, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x24}, {.addr=0xa76a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa76b, .a=0x24, .x=0x96, .y=0x51, .sp=0x78, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x24}, {.addr=0xa76a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa76a, .value=0xae, .type=IO_READ},
        {.addr=0xa76b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0163) {
    const struct CPU_State initial_cpu = {.pc=0xd591, .a=0xd4, .x=0x2b, .y=0xc6, .sp=0xa9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x16}, {.addr=0xd591, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd592, .a=0x16, .x=0x2b, .y=0xc6, .sp=0xaa, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x16}, {.addr=0xd591, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd591, .value=0xae, .type=IO_READ},
        {.addr=0xd592, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0164) {
    const struct CPU_State initial_cpu = {.pc=0x43f5, .a=0x6a, .x=0x52, .y=0x23, .sp=0xbb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x93}, {.addr=0x43f5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x43f6, .a=0x93, .x=0x52, .y=0x23, .sp=0xbc, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x93}, {.addr=0x43f5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x43f5, .value=0xae, .type=IO_READ},
        {.addr=0x43f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0165) {
    const struct CPU_State initial_cpu = {.pc=0xe03e, .a=0x24, .x=0x6a, .y=0x60, .sp=0xd6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xb7}, {.addr=0xe03e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe03f, .a=0xb7, .x=0x6a, .y=0x60, .sp=0xd7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xb7}, {.addr=0xe03e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe03e, .value=0xae, .type=IO_READ},
        {.addr=0xe03f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0166) {
    const struct CPU_State initial_cpu = {.pc=0x5008, .a=0x77, .x=0xb1, .y=0x4e, .sp=0xeb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xb2}, {.addr=0x5008, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5009, .a=0xb2, .x=0xb1, .y=0x4e, .sp=0xec, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xb2}, {.addr=0x5008, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5008, .value=0xae, .type=IO_READ},
        {.addr=0x5009, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0167) {
    const struct CPU_State initial_cpu = {.pc=0xf21d, .a=0xd0, .x=0x1c, .y=0x62, .sp=0xcd, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x8c}, {.addr=0xf21d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf21e, .a=0x8c, .x=0x1c, .y=0x62, .sp=0xce, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x8c}, {.addr=0xf21d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf21d, .value=0xae, .type=IO_READ},
        {.addr=0xf21e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0168) {
    const struct CPU_State initial_cpu = {.pc=0x9d49, .a=0x21, .x=0x90, .y=0xd2, .sp=0x52, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xa5}, {.addr=0x9d49, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9d4a, .a=0xa5, .x=0x90, .y=0xd2, .sp=0x53, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xa5}, {.addr=0x9d49, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9d49, .value=0xae, .type=IO_READ},
        {.addr=0x9d4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0169) {
    const struct CPU_State initial_cpu = {.pc=0x229e, .a=0x8d, .x=0x38, .y=0xcc, .sp=0x4b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x7d}, {.addr=0x229e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x229f, .a=0x7d, .x=0x38, .y=0xcc, .sp=0x4c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x7d}, {.addr=0x229e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x229e, .value=0xae, .type=IO_READ},
        {.addr=0x229f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016A) {
    const struct CPU_State initial_cpu = {.pc=0xbed9, .a=0xba, .x=0xff, .y=0xd3, .sp=0x94, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xea}, {.addr=0xbed9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbeda, .a=0xea, .x=0xff, .y=0xd3, .sp=0x95, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xea}, {.addr=0xbed9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbed9, .value=0xae, .type=IO_READ},
        {.addr=0xbeda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016B) {
    const struct CPU_State initial_cpu = {.pc=0xc587, .a=0xd8, .x=0x8e, .y=0xff, .sp=0x1c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x6b}, {.addr=0xc587, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc588, .a=0x6b, .x=0x8e, .y=0xff, .sp=0x1d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x6b}, {.addr=0xc587, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc587, .value=0xae, .type=IO_READ},
        {.addr=0xc588, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016C) {
    const struct CPU_State initial_cpu = {.pc=0x82c3, .a=0x3e, .x=0xbc, .y=0xe5, .sp=0xd8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x2e}, {.addr=0x82c3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82c4, .a=0x2e, .x=0xbc, .y=0xe5, .sp=0xd9, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x2e}, {.addr=0x82c3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82c3, .value=0xae, .type=IO_READ},
        {.addr=0x82c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016D) {
    const struct CPU_State initial_cpu = {.pc=0xd527, .a=0xc1, .x=0x9e, .y=0xc2, .sp=0xc5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xa9}, {.addr=0xd527, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd528, .a=0xa9, .x=0x9e, .y=0xc2, .sp=0xc6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xa9}, {.addr=0xd527, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd527, .value=0xae, .type=IO_READ},
        {.addr=0xd528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016E) {
    const struct CPU_State initial_cpu = {.pc=0xbb44, .a=0x86, .x=0xbb, .y=0x06, .sp=0x62, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x86}, {.addr=0xbb44, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbb45, .a=0x86, .x=0xbb, .y=0x06, .sp=0x63, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x86}, {.addr=0xbb44, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbb44, .value=0xae, .type=IO_READ},
        {.addr=0xbb45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa6df, .a=0x45, .x=0xc5, .y=0x1f, .sp=0x09, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x87}, {.addr=0xa6df, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa6e0, .a=0x87, .x=0xc5, .y=0x1f, .sp=0x0a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x87}, {.addr=0xa6df, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa6df, .value=0xae, .type=IO_READ},
        {.addr=0xa6e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7f43, .a=0xd3, .x=0xab, .y=0x16, .sp=0x96, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xa9}, {.addr=0x7f43, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7f44, .a=0xa9, .x=0xab, .y=0x16, .sp=0x97, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xa9}, {.addr=0x7f43, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7f43, .value=0xae, .type=IO_READ},
        {.addr=0x7f44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0171) {
    const struct CPU_State initial_cpu = {.pc=0xa366, .a=0x78, .x=0x08, .y=0x0b, .sp=0xf6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xe5}, {.addr=0xa366, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa367, .a=0xe5, .x=0x08, .y=0x0b, .sp=0xf7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xe5}, {.addr=0xa366, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa366, .value=0xae, .type=IO_READ},
        {.addr=0xa367, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0172) {
    const struct CPU_State initial_cpu = {.pc=0x8da6, .a=0x2e, .x=0x56, .y=0xae, .sp=0x20, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x0c}, {.addr=0x8da6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8da7, .a=0x0c, .x=0x56, .y=0xae, .sp=0x21, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x0c}, {.addr=0x8da6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8da6, .value=0xae, .type=IO_READ},
        {.addr=0x8da7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0173) {
    const struct CPU_State initial_cpu = {.pc=0x89c3, .a=0x16, .x=0x70, .y=0x7d, .sp=0xdc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x29}, {.addr=0x89c3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x89c4, .a=0x29, .x=0x70, .y=0x7d, .sp=0xdd, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x29}, {.addr=0x89c3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x89c3, .value=0xae, .type=IO_READ},
        {.addr=0x89c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0174) {
    const struct CPU_State initial_cpu = {.pc=0x6a76, .a=0xa7, .x=0xdf, .y=0xcb, .sp=0x89, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xfe}, {.addr=0x6a76, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6a77, .a=0xfe, .x=0xdf, .y=0xcb, .sp=0x8a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xfe}, {.addr=0x6a76, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6a76, .value=0xae, .type=IO_READ},
        {.addr=0x6a77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0175) {
    const struct CPU_State initial_cpu = {.pc=0x0884, .a=0xa1, .x=0x04, .y=0xb9, .sp=0xeb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x9a}, {.addr=0x0884, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0885, .a=0x9a, .x=0x04, .y=0xb9, .sp=0xec, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x9a}, {.addr=0x0884, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0884, .value=0xae, .type=IO_READ},
        {.addr=0x0885, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0176) {
    const struct CPU_State initial_cpu = {.pc=0xe790, .a=0x8c, .x=0xcc, .y=0xaa, .sp=0x19, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x56}, {.addr=0xe790, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe791, .a=0x56, .x=0xcc, .y=0xaa, .sp=0x1a, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x56}, {.addr=0xe790, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe790, .value=0xae, .type=IO_READ},
        {.addr=0xe791, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0177) {
    const struct CPU_State initial_cpu = {.pc=0x125a, .a=0xf2, .x=0x73, .y=0x80, .sp=0x0a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x2e}, {.addr=0x125a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x125b, .a=0x2e, .x=0x73, .y=0x80, .sp=0x0b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x2e}, {.addr=0x125a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x125a, .value=0xae, .type=IO_READ},
        {.addr=0x125b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0178) {
    const struct CPU_State initial_cpu = {.pc=0xcab5, .a=0xe7, .x=0x4d, .y=0x7a, .sp=0xc6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x79}, {.addr=0xcab5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcab6, .a=0x79, .x=0x4d, .y=0x7a, .sp=0xc7, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x79}, {.addr=0xcab5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcab5, .value=0xae, .type=IO_READ},
        {.addr=0xcab6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe2fb, .a=0x1d, .x=0x53, .y=0x64, .sp=0x86, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x8b}, {.addr=0xe2fb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe2fc, .a=0x8b, .x=0x53, .y=0x64, .sp=0x87, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x8b}, {.addr=0xe2fb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe2fb, .value=0xae, .type=IO_READ},
        {.addr=0xe2fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017A) {
    const struct CPU_State initial_cpu = {.pc=0xa08c, .a=0x6b, .x=0x5e, .y=0xcc, .sp=0xf7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x16}, {.addr=0xa08c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa08d, .a=0x16, .x=0x5e, .y=0xcc, .sp=0xf8, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x16}, {.addr=0xa08c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa08c, .value=0xae, .type=IO_READ},
        {.addr=0xa08d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8994, .a=0x6e, .x=0x41, .y=0x05, .sp=0x4e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x94}, {.addr=0x8994, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8995, .a=0x94, .x=0x41, .y=0x05, .sp=0x4f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x94}, {.addr=0x8994, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8994, .value=0xae, .type=IO_READ},
        {.addr=0x8995, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017C) {
    const struct CPU_State initial_cpu = {.pc=0x8737, .a=0x7e, .x=0x9f, .y=0x32, .sp=0x1f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xdd}, {.addr=0x8737, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8738, .a=0xdd, .x=0x9f, .y=0x32, .sp=0x20, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xdd}, {.addr=0x8737, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8737, .value=0xae, .type=IO_READ},
        {.addr=0x8738, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017D) {
    const struct CPU_State initial_cpu = {.pc=0x15b0, .a=0x56, .x=0x31, .y=0x7d, .sp=0xb2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xbf}, {.addr=0x15b0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x15b1, .a=0xbf, .x=0x31, .y=0x7d, .sp=0xb3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xbf}, {.addr=0x15b0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x15b0, .value=0xae, .type=IO_READ},
        {.addr=0x15b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4a66, .a=0x63, .x=0x39, .y=0x62, .sp=0x60, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x3a}, {.addr=0x4a66, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4a67, .a=0x3a, .x=0x39, .y=0x62, .sp=0x61, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x3a}, {.addr=0x4a66, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4a66, .value=0xae, .type=IO_READ},
        {.addr=0x4a67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_017F) {
    const struct CPU_State initial_cpu = {.pc=0xffa2, .a=0x22, .x=0x24, .y=0x58, .sp=0xe2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x78}, {.addr=0xffa2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xffa3, .a=0x78, .x=0x24, .y=0x58, .sp=0xe3, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x78}, {.addr=0xffa2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xffa2, .value=0xae, .type=IO_READ},
        {.addr=0xffa3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0180) {
    const struct CPU_State initial_cpu = {.pc=0xf2c3, .a=0x43, .x=0xc8, .y=0x60, .sp=0xf0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x5a}, {.addr=0xf2c3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf2c4, .a=0x5a, .x=0xc8, .y=0x60, .sp=0xf1, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x5a}, {.addr=0xf2c3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf2c3, .value=0xae, .type=IO_READ},
        {.addr=0xf2c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9145, .a=0x56, .x=0xa0, .y=0xa8, .sp=0xae, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x96}, {.addr=0x9145, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9146, .a=0x96, .x=0xa0, .y=0xa8, .sp=0xaf, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x96}, {.addr=0x9145, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9145, .value=0xae, .type=IO_READ},
        {.addr=0x9146, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0182) {
    const struct CPU_State initial_cpu = {.pc=0x9185, .a=0xc7, .x=0x2e, .y=0xcc, .sp=0x1f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xf9}, {.addr=0x9185, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9186, .a=0xf9, .x=0x2e, .y=0xcc, .sp=0x20, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xf9}, {.addr=0x9185, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9185, .value=0xae, .type=IO_READ},
        {.addr=0x9186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0183) {
    const struct CPU_State initial_cpu = {.pc=0xc4f7, .a=0x34, .x=0x06, .y=0xb6, .sp=0xe5, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xda}, {.addr=0xc4f7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc4f8, .a=0xda, .x=0x06, .y=0xb6, .sp=0xe6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xda}, {.addr=0xc4f7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc4f7, .value=0xae, .type=IO_READ},
        {.addr=0xc4f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0184) {
    const struct CPU_State initial_cpu = {.pc=0xb065, .a=0x5a, .x=0x41, .y=0x8f, .sp=0x84, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xdc}, {.addr=0xb065, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb066, .a=0xdc, .x=0x41, .y=0x8f, .sp=0x85, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xdc}, {.addr=0xb065, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb065, .value=0xae, .type=IO_READ},
        {.addr=0xb066, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0185) {
    const struct CPU_State initial_cpu = {.pc=0x5389, .a=0x6c, .x=0xfa, .y=0xfc, .sp=0x2a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xde}, {.addr=0x5389, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x538a, .a=0xde, .x=0xfa, .y=0xfc, .sp=0x2b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xde}, {.addr=0x5389, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5389, .value=0xae, .type=IO_READ},
        {.addr=0x538a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0186) {
    const struct CPU_State initial_cpu = {.pc=0x35ad, .a=0x67, .x=0x05, .y=0x39, .sp=0x7e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x51}, {.addr=0x35ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x35ae, .a=0x51, .x=0x05, .y=0x39, .sp=0x7f, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x51}, {.addr=0x35ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x35ad, .value=0xae, .type=IO_READ},
        {.addr=0x35ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0187) {
    const struct CPU_State initial_cpu = {.pc=0xce4e, .a=0x82, .x=0x40, .y=0x91, .sp=0x27, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xa5}, {.addr=0xce4e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xce4f, .a=0xa5, .x=0x40, .y=0x91, .sp=0x28, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xa5}, {.addr=0xce4e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xce4e, .value=0xae, .type=IO_READ},
        {.addr=0xce4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0188) {
    const struct CPU_State initial_cpu = {.pc=0x3148, .a=0x5c, .x=0xe6, .y=0x8d, .sp=0xe1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xd8}, {.addr=0x3148, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3149, .a=0xd8, .x=0xe6, .y=0x8d, .sp=0xe2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xd8}, {.addr=0x3148, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3148, .value=0xae, .type=IO_READ},
        {.addr=0x3149, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4b6c, .a=0xee, .x=0x04, .y=0xb9, .sp=0xa0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xaa}, {.addr=0x4b6c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4b6d, .a=0xaa, .x=0x04, .y=0xb9, .sp=0xa1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xaa}, {.addr=0x4b6c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4b6c, .value=0xae, .type=IO_READ},
        {.addr=0x4b6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018A) {
    const struct CPU_State initial_cpu = {.pc=0xd61f, .a=0x26, .x=0x2e, .y=0x25, .sp=0x3a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xd61f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd620, .a=0xc2, .x=0x2e, .y=0x25, .sp=0x3b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xd61f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd61f, .value=0xae, .type=IO_READ},
        {.addr=0xd620, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018B) {
    const struct CPU_State initial_cpu = {.pc=0xb62b, .a=0xab, .x=0xf1, .y=0x20, .sp=0xf0, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x82}, {.addr=0xb62b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb62c, .a=0x82, .x=0xf1, .y=0x20, .sp=0xf1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x82}, {.addr=0xb62b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb62b, .value=0xae, .type=IO_READ},
        {.addr=0xb62c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018C) {
    const struct CPU_State initial_cpu = {.pc=0x0874, .a=0xaa, .x=0x88, .y=0x63, .sp=0x8e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xe2}, {.addr=0x0874, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0875, .a=0xe2, .x=0x88, .y=0x63, .sp=0x8f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xe2}, {.addr=0x0874, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0874, .value=0xae, .type=IO_READ},
        {.addr=0x0875, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018D) {
    const struct CPU_State initial_cpu = {.pc=0x1769, .a=0x80, .x=0x39, .y=0x91, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x47}, {.addr=0x1769, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x176a, .a=0x47, .x=0x39, .y=0x91, .sp=0x58, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x47}, {.addr=0x1769, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1769, .value=0xae, .type=IO_READ},
        {.addr=0x176a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0f9a, .a=0xbb, .x=0xf4, .y=0x29, .sp=0xf6, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xa1}, {.addr=0x0f9a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0f9b, .a=0xa1, .x=0xf4, .y=0x29, .sp=0xf7, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xa1}, {.addr=0x0f9a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0f9a, .value=0xae, .type=IO_READ},
        {.addr=0x0f9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_018F) {
    const struct CPU_State initial_cpu = {.pc=0x669b, .a=0xe9, .x=0xac, .y=0x4e, .sp=0xc8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x0c}, {.addr=0x669b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x669c, .a=0x0c, .x=0xac, .y=0x4e, .sp=0xc9, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x0c}, {.addr=0x669b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x669b, .value=0xae, .type=IO_READ},
        {.addr=0x669c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5aa7, .a=0x0c, .x=0x26, .y=0x03, .sp=0x5a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xaa}, {.addr=0x5aa7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5aa8, .a=0xaa, .x=0x26, .y=0x03, .sp=0x5b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xaa}, {.addr=0x5aa7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5aa7, .value=0xae, .type=IO_READ},
        {.addr=0x5aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0191) {
    const struct CPU_State initial_cpu = {.pc=0x747a, .a=0xa7, .x=0x11, .y=0x89, .sp=0x4d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x14}, {.addr=0x747a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x747b, .a=0x14, .x=0x11, .y=0x89, .sp=0x4e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x14}, {.addr=0x747a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x747a, .value=0xae, .type=IO_READ},
        {.addr=0x747b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0192) {
    const struct CPU_State initial_cpu = {.pc=0xfbb5, .a=0x91, .x=0xdb, .y=0x61, .sp=0x38, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x20}, {.addr=0xfbb5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfbb6, .a=0x20, .x=0xdb, .y=0x61, .sp=0x39, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x20}, {.addr=0xfbb5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfbb5, .value=0xae, .type=IO_READ},
        {.addr=0xfbb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0193) {
    const struct CPU_State initial_cpu = {.pc=0x37a3, .a=0x91, .x=0x08, .y=0x2c, .sp=0x76, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0xbb}, {.addr=0x37a3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x37a4, .a=0xbb, .x=0x08, .y=0x2c, .sp=0x77, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xbb}, {.addr=0x37a3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x37a3, .value=0xae, .type=IO_READ},
        {.addr=0x37a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0194) {
    const struct CPU_State initial_cpu = {.pc=0x700e, .a=0xf7, .x=0x2d, .y=0xcb, .sp=0xc5, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x72}, {.addr=0x700e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x700f, .a=0x72, .x=0x2d, .y=0xcb, .sp=0xc6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x72}, {.addr=0x700e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x700e, .value=0xae, .type=IO_READ},
        {.addr=0x700f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0195) {
    const struct CPU_State initial_cpu = {.pc=0x5e03, .a=0xfb, .x=0x14, .y=0xa7, .sp=0x92, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x75}, {.addr=0x5e03, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5e04, .a=0x75, .x=0x14, .y=0xa7, .sp=0x93, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x75}, {.addr=0x5e03, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5e03, .value=0xae, .type=IO_READ},
        {.addr=0x5e04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0196) {
    const struct CPU_State initial_cpu = {.pc=0x17e6, .a=0xce, .x=0x82, .y=0xb9, .sp=0xcc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x0e}, {.addr=0x17e6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x17e7, .a=0x0e, .x=0x82, .y=0xb9, .sp=0xcd, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x0e}, {.addr=0x17e6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x17e6, .value=0xae, .type=IO_READ},
        {.addr=0x17e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb023, .a=0xfa, .x=0x5d, .y=0x4a, .sp=0xb1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x7e}, {.addr=0xb023, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb024, .a=0x7e, .x=0x5d, .y=0x4a, .sp=0xb2, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x7e}, {.addr=0xb023, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb023, .value=0xae, .type=IO_READ},
        {.addr=0xb024, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0198) {
    const struct CPU_State initial_cpu = {.pc=0x0bb3, .a=0xcc, .x=0x70, .y=0x08, .sp=0x33, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x9a}, {.addr=0x0bb3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0bb4, .a=0x9a, .x=0x70, .y=0x08, .sp=0x34, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x9a}, {.addr=0x0bb3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0bb3, .value=0xae, .type=IO_READ},
        {.addr=0x0bb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0199) {
    const struct CPU_State initial_cpu = {.pc=0x2039, .a=0x05, .x=0x98, .y=0x95, .sp=0xbb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x96}, {.addr=0x2039, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x203a, .a=0x96, .x=0x98, .y=0x95, .sp=0xbc, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x96}, {.addr=0x2039, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2039, .value=0xae, .type=IO_READ},
        {.addr=0x203a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019A) {
    const struct CPU_State initial_cpu = {.pc=0xd0e4, .a=0x8f, .x=0xfd, .y=0xe4, .sp=0xf9, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xb2}, {.addr=0xd0e4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd0e5, .a=0xb2, .x=0xfd, .y=0xe4, .sp=0xfa, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xb2}, {.addr=0xd0e4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd0e4, .value=0xae, .type=IO_READ},
        {.addr=0xd0e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019B) {
    const struct CPU_State initial_cpu = {.pc=0x35f2, .a=0xef, .x=0x01, .y=0x04, .sp=0x1c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x28}, {.addr=0x35f2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x35f3, .a=0x28, .x=0x01, .y=0x04, .sp=0x1d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x28}, {.addr=0x35f2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x35f2, .value=0xae, .type=IO_READ},
        {.addr=0x35f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019C) {
    const struct CPU_State initial_cpu = {.pc=0x51db, .a=0x4c, .x=0x51, .y=0xd3, .sp=0x11, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xe4}, {.addr=0x51db, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x51dc, .a=0xe4, .x=0x51, .y=0xd3, .sp=0x12, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xe4}, {.addr=0x51db, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x51db, .value=0xae, .type=IO_READ},
        {.addr=0x51dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019D) {
    const struct CPU_State initial_cpu = {.pc=0x555d, .a=0x1e, .x=0x04, .y=0x30, .sp=0x43, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xb0}, {.addr=0x555d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x555e, .a=0xb0, .x=0x04, .y=0x30, .sp=0x44, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xb0}, {.addr=0x555d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x555d, .value=0xae, .type=IO_READ},
        {.addr=0x555e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019E) {
    const struct CPU_State initial_cpu = {.pc=0xe7dd, .a=0x1e, .x=0x3c, .y=0x99, .sp=0xc6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xc1}, {.addr=0xe7dd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe7de, .a=0xc1, .x=0x3c, .y=0x99, .sp=0xc7, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xc1}, {.addr=0xe7dd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe7dd, .value=0xae, .type=IO_READ},
        {.addr=0xe7de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_019F) {
    const struct CPU_State initial_cpu = {.pc=0x3c01, .a=0x5b, .x=0x1c, .y=0x92, .sp=0xda, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x64}, {.addr=0x3c01, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3c02, .a=0x64, .x=0x1c, .y=0x92, .sp=0xdb, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x64}, {.addr=0x3c01, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3c01, .value=0xae, .type=IO_READ},
        {.addr=0x3c02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6e41, .a=0x06, .x=0x9b, .y=0x57, .sp=0x09, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x4d}, {.addr=0x6e41, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6e42, .a=0x4d, .x=0x9b, .y=0x57, .sp=0x0a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x4d}, {.addr=0x6e41, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6e41, .value=0xae, .type=IO_READ},
        {.addr=0x6e42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5452, .a=0x81, .x=0x48, .y=0x2d, .sp=0x12, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x67}, {.addr=0x5452, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5453, .a=0x67, .x=0x48, .y=0x2d, .sp=0x13, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x67}, {.addr=0x5452, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5452, .value=0xae, .type=IO_READ},
        {.addr=0x5453, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xcc42, .a=0x42, .x=0xe8, .y=0x35, .sp=0xdb, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x7b}, {.addr=0xcc42, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcc43, .a=0x7b, .x=0xe8, .y=0x35, .sp=0xdc, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x7b}, {.addr=0xcc42, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcc42, .value=0xae, .type=IO_READ},
        {.addr=0xcc43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x4e25, .a=0x56, .x=0xdd, .y=0x74, .sp=0xcb, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x65}, {.addr=0x4e25, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4e26, .a=0x65, .x=0xdd, .y=0x74, .sp=0xcc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x65}, {.addr=0x4e25, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4e25, .value=0xae, .type=IO_READ},
        {.addr=0x4e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x5fb0, .a=0xd5, .x=0x29, .y=0xa2, .sp=0x17, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xce}, {.addr=0x5fb0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5fb1, .a=0xce, .x=0x29, .y=0xa2, .sp=0x18, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xce}, {.addr=0x5fb0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5fb0, .value=0xae, .type=IO_READ},
        {.addr=0x5fb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xbf70, .a=0x21, .x=0x80, .y=0x62, .sp=0x50, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xd5}, {.addr=0xbf70, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf71, .a=0xd5, .x=0x80, .y=0x62, .sp=0x51, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xd5}, {.addr=0xbf70, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf70, .value=0xae, .type=IO_READ},
        {.addr=0xbf71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xe01a, .a=0x7b, .x=0x9f, .y=0xb9, .sp=0x62, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xd7}, {.addr=0xe01a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe01b, .a=0xd7, .x=0x9f, .y=0xb9, .sp=0x63, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd7}, {.addr=0xe01a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe01a, .value=0xae, .type=IO_READ},
        {.addr=0xe01b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x4daf, .a=0x83, .x=0x31, .y=0xd0, .sp=0x36, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x72}, {.addr=0x4daf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4db0, .a=0x72, .x=0x31, .y=0xd0, .sp=0x37, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x72}, {.addr=0x4daf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4daf, .value=0xae, .type=IO_READ},
        {.addr=0x4db0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xa269, .a=0x21, .x=0x04, .y=0xef, .sp=0x02, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x4d}, {.addr=0xa269, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa26a, .a=0x4d, .x=0x04, .y=0xef, .sp=0x03, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x4d}, {.addr=0xa269, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa269, .value=0xae, .type=IO_READ},
        {.addr=0xa26a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xd7f2, .a=0xff, .x=0xcd, .y=0x0f, .sp=0x9d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x9a}, {.addr=0xd7f2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd7f3, .a=0x9a, .x=0xcd, .y=0x0f, .sp=0x9e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x9a}, {.addr=0xd7f2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd7f2, .value=0xae, .type=IO_READ},
        {.addr=0xd7f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x0e7b, .a=0x8c, .x=0xa2, .y=0xa1, .sp=0xe1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xd6}, {.addr=0x0e7b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0e7c, .a=0xd6, .x=0xa2, .y=0xa1, .sp=0xe2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xd6}, {.addr=0x0e7b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0e7b, .value=0xae, .type=IO_READ},
        {.addr=0x0e7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x88db, .a=0xe4, .x=0xa2, .y=0x76, .sp=0x46, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x94}, {.addr=0x88db, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x88dc, .a=0x94, .x=0xa2, .y=0x76, .sp=0x47, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x94}, {.addr=0x88db, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x88db, .value=0xae, .type=IO_READ},
        {.addr=0x88dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xe412, .a=0x02, .x=0xdc, .y=0x6f, .sp=0x29, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xaa}, {.addr=0xe412, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe413, .a=0xaa, .x=0xdc, .y=0x6f, .sp=0x2a, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xaa}, {.addr=0xe412, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe412, .value=0xae, .type=IO_READ},
        {.addr=0xe413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x8b03, .a=0x2e, .x=0x88, .y=0xcf, .sp=0x13, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x95}, {.addr=0x8b03, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b04, .a=0x95, .x=0x88, .y=0xcf, .sp=0x14, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x95}, {.addr=0x8b03, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b03, .value=0xae, .type=IO_READ},
        {.addr=0x8b04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xb41c, .a=0x6f, .x=0x56, .y=0xc2, .sp=0x23, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xb9}, {.addr=0xb41c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb41d, .a=0xb9, .x=0x56, .y=0xc2, .sp=0x24, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xb9}, {.addr=0xb41c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb41c, .value=0xae, .type=IO_READ},
        {.addr=0xb41d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xbca9, .a=0xc2, .x=0x79, .y=0x92, .sp=0xd8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x1f}, {.addr=0xbca9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbcaa, .a=0x1f, .x=0x79, .y=0x92, .sp=0xd9, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x1f}, {.addr=0xbca9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbca9, .value=0xae, .type=IO_READ},
        {.addr=0xbcaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x139e, .a=0x29, .x=0xeb, .y=0xca, .sp=0x91, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xef}, {.addr=0x139e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x139f, .a=0xef, .x=0xeb, .y=0xca, .sp=0x92, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xef}, {.addr=0x139e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x139e, .value=0xae, .type=IO_READ},
        {.addr=0x139f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x21e3, .a=0x4f, .x=0x8c, .y=0xd8, .sp=0xa0, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xbb}, {.addr=0x21e3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x21e4, .a=0xbb, .x=0x8c, .y=0xd8, .sp=0xa1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xbb}, {.addr=0x21e3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x21e3, .value=0xae, .type=IO_READ},
        {.addr=0x21e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4743, .a=0xe8, .x=0x9d, .y=0xe5, .sp=0x3e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x39}, {.addr=0x4743, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4744, .a=0x39, .x=0x9d, .y=0xe5, .sp=0x3f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x39}, {.addr=0x4743, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4743, .value=0xae, .type=IO_READ},
        {.addr=0x4744, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xfa02, .a=0x6f, .x=0x37, .y=0x75, .sp=0xfd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x9e}, {.addr=0xfa02, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfa03, .a=0x9e, .x=0x37, .y=0x75, .sp=0xfe, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x9e}, {.addr=0xfa02, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfa02, .value=0xae, .type=IO_READ},
        {.addr=0xfa03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xdddb, .a=0x52, .x=0xa9, .y=0xac, .sp=0x1f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x51}, {.addr=0xdddb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdddc, .a=0x51, .x=0xa9, .y=0xac, .sp=0x20, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x51}, {.addr=0xdddb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdddb, .value=0xae, .type=IO_READ},
        {.addr=0xdddc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x9a73, .a=0xda, .x=0x3c, .y=0xe8, .sp=0x7e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x60}, {.addr=0x9a73, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9a74, .a=0x60, .x=0x3c, .y=0xe8, .sp=0x7f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x60}, {.addr=0x9a73, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9a73, .value=0xae, .type=IO_READ},
        {.addr=0x9a74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xb8a3, .a=0x75, .x=0xd1, .y=0xc1, .sp=0xa9, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x87}, {.addr=0xb8a3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb8a4, .a=0x87, .x=0xd1, .y=0xc1, .sp=0xaa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x87}, {.addr=0xb8a3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb8a3, .value=0xae, .type=IO_READ},
        {.addr=0xb8a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xbe3c, .a=0x84, .x=0xd6, .y=0xf5, .sp=0x19, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x5a}, {.addr=0xbe3c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbe3d, .a=0x5a, .x=0xd6, .y=0xf5, .sp=0x1a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x5a}, {.addr=0xbe3c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbe3c, .value=0xae, .type=IO_READ},
        {.addr=0xbe3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xa3e3, .a=0x31, .x=0xb9, .y=0x6e, .sp=0xa8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xee}, {.addr=0xa3e3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa3e4, .a=0xee, .x=0xb9, .y=0x6e, .sp=0xa9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xee}, {.addr=0xa3e3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa3e3, .value=0xae, .type=IO_READ},
        {.addr=0xa3e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x475d, .a=0xd9, .x=0xbc, .y=0x65, .sp=0x27, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x14}, {.addr=0x475d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0x14, .x=0xbc, .y=0x65, .sp=0x28, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x14}, {.addr=0x475d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x475d, .value=0xae, .type=IO_READ},
        {.addr=0x475e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x4352, .a=0x46, .x=0xdf, .y=0x47, .sp=0xdb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x24}, {.addr=0x4352, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4353, .a=0x24, .x=0xdf, .y=0x47, .sp=0xdc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x24}, {.addr=0x4352, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4352, .value=0xae, .type=IO_READ},
        {.addr=0x4353, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xb3c9, .a=0x4b, .x=0xc3, .y=0x7a, .sp=0xe6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x47}, {.addr=0xb3c9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb3ca, .a=0x47, .x=0xc3, .y=0x7a, .sp=0xe7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x47}, {.addr=0xb3c9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb3c9, .value=0xae, .type=IO_READ},
        {.addr=0xb3ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xf1fd, .a=0x09, .x=0xb6, .y=0x47, .sp=0x13, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x5a}, {.addr=0xf1fd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf1fe, .a=0x5a, .x=0xb6, .y=0x47, .sp=0x14, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x5a}, {.addr=0xf1fd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf1fd, .value=0xae, .type=IO_READ},
        {.addr=0xf1fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x8672, .a=0x23, .x=0x66, .y=0xfa, .sp=0x64, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xee}, {.addr=0x8672, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8673, .a=0xee, .x=0x66, .y=0xfa, .sp=0x65, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xee}, {.addr=0x8672, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8672, .value=0xae, .type=IO_READ},
        {.addr=0x8673, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xfbde, .a=0x1a, .x=0x32, .y=0x0c, .sp=0x48, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xe4}, {.addr=0xfbde, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfbdf, .a=0xe4, .x=0x32, .y=0x0c, .sp=0x49, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xe4}, {.addr=0xfbde, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfbde, .value=0xae, .type=IO_READ},
        {.addr=0xfbdf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x4043, .a=0xfe, .x=0x1c, .y=0xc8, .sp=0x0a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xf8}, {.addr=0x4043, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4044, .a=0xf8, .x=0x1c, .y=0xc8, .sp=0x0b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xf8}, {.addr=0x4043, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4043, .value=0xae, .type=IO_READ},
        {.addr=0x4044, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x750e, .a=0xaa, .x=0x8f, .y=0xf5, .sp=0x40, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xe5}, {.addr=0x750e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x750f, .a=0xe5, .x=0x8f, .y=0xf5, .sp=0x41, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xe5}, {.addr=0x750e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x750e, .value=0xae, .type=IO_READ},
        {.addr=0x750f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xddb1, .a=0x05, .x=0xe1, .y=0xe5, .sp=0xca, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x44}, {.addr=0xddb1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xddb2, .a=0x44, .x=0xe1, .y=0xe5, .sp=0xcb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x44}, {.addr=0xddb1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xddb1, .value=0xae, .type=IO_READ},
        {.addr=0xddb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4a14, .a=0x76, .x=0xc0, .y=0xb6, .sp=0x66, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x17}, {.addr=0x4a14, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4a15, .a=0x17, .x=0xc0, .y=0xb6, .sp=0x67, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x17}, {.addr=0x4a14, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4a14, .value=0xae, .type=IO_READ},
        {.addr=0x4a15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x29ab, .a=0x7d, .x=0xa9, .y=0x35, .sp=0x53, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x06}, {.addr=0x29ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x29ac, .a=0x06, .x=0xa9, .y=0x35, .sp=0x54, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x06}, {.addr=0x29ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x29ab, .value=0xae, .type=IO_READ},
        {.addr=0x29ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xc0ee, .a=0x3e, .x=0x95, .y=0xd2, .sp=0xbc, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xbd}, {.addr=0xc0ee, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc0ef, .a=0xbd, .x=0x95, .y=0xd2, .sp=0xbd, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xbd}, {.addr=0xc0ee, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc0ee, .value=0xae, .type=IO_READ},
        {.addr=0xc0ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x7bb8, .a=0x73, .x=0x68, .y=0x16, .sp=0x4d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x91}, {.addr=0x7bb8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7bb9, .a=0x91, .x=0x68, .y=0x16, .sp=0x4e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x91}, {.addr=0x7bb8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7bb8, .value=0xae, .type=IO_READ},
        {.addr=0x7bb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xfec3, .a=0x1e, .x=0xa6, .y=0x73, .sp=0xde, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xd6}, {.addr=0xfec3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfec4, .a=0xd6, .x=0xa6, .y=0x73, .sp=0xdf, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd6}, {.addr=0xfec3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfec3, .value=0xae, .type=IO_READ},
        {.addr=0xfec4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xb9a3, .a=0x05, .x=0xe9, .y=0x7c, .sp=0x08, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x89}, {.addr=0xb9a3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb9a4, .a=0x89, .x=0xe9, .y=0x7c, .sp=0x09, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x89}, {.addr=0xb9a3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb9a3, .value=0xae, .type=IO_READ},
        {.addr=0xb9a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8ce8, .a=0x8f, .x=0x4e, .y=0x20, .sp=0x39, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x78}, {.addr=0x8ce8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8ce9, .a=0x78, .x=0x4e, .y=0x20, .sp=0x3a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x78}, {.addr=0x8ce8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8ce8, .value=0xae, .type=IO_READ},
        {.addr=0x8ce9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x6ec7, .a=0x0b, .x=0x67, .y=0x97, .sp=0x49, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x67}, {.addr=0x6ec7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6ec8, .a=0x67, .x=0x67, .y=0x97, .sp=0x4a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x67}, {.addr=0x6ec7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ec7, .value=0xae, .type=IO_READ},
        {.addr=0x6ec8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xaf77, .a=0xc6, .x=0xe7, .y=0x67, .sp=0x64, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xf1}, {.addr=0xaf77, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaf78, .a=0xf1, .x=0xe7, .y=0x67, .sp=0x65, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xf1}, {.addr=0xaf77, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaf77, .value=0xae, .type=IO_READ},
        {.addr=0xaf78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0xa9, .x=0x0b, .y=0xa2, .sp=0xa1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xcc}, {.addr=0xcf47, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcf48, .a=0xcc, .x=0x0b, .y=0xa2, .sp=0xa2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xcc}, {.addr=0xcf47, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0xae, .type=IO_READ},
        {.addr=0xcf48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x8e3a, .a=0x51, .x=0xb1, .y=0x17, .sp=0x6c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x1b}, {.addr=0x8e3a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8e3b, .a=0x1b, .x=0xb1, .y=0x17, .sp=0x6d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x1b}, {.addr=0x8e3a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8e3a, .value=0xae, .type=IO_READ},
        {.addr=0x8e3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x05c7, .a=0xb6, .x=0xc5, .y=0x2b, .sp=0xb8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xe2}, {.addr=0x05c7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x05c8, .a=0xe2, .x=0xc5, .y=0x2b, .sp=0xb9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xe2}, {.addr=0x05c7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x05c7, .value=0xae, .type=IO_READ},
        {.addr=0x05c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xc282, .a=0xc7, .x=0x8f, .y=0xb4, .sp=0x0c, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x60}, {.addr=0xc282, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc283, .a=0x60, .x=0x8f, .y=0xb4, .sp=0x0d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x60}, {.addr=0xc282, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc282, .value=0xae, .type=IO_READ},
        {.addr=0xc283, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7146, .a=0xa8, .x=0x1c, .y=0x76, .sp=0xdd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x3b}, {.addr=0x7146, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7147, .a=0x3b, .x=0x1c, .y=0x76, .sp=0xde, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x3b}, {.addr=0x7146, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7146, .value=0xae, .type=IO_READ},
        {.addr=0x7147, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8b75, .a=0xde, .x=0x06, .y=0xb2, .sp=0x9c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x67}, {.addr=0x8b75, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b76, .a=0x67, .x=0x06, .y=0xb2, .sp=0x9d, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x67}, {.addr=0x8b75, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b75, .value=0xae, .type=IO_READ},
        {.addr=0x8b76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x4774, .a=0xa1, .x=0xd2, .y=0xfe, .sp=0x44, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xf3}, {.addr=0x4774, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4775, .a=0xf3, .x=0xd2, .y=0xfe, .sp=0x45, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xf3}, {.addr=0x4774, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4774, .value=0xae, .type=IO_READ},
        {.addr=0x4775, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xa876, .a=0x71, .x=0xd6, .y=0x48, .sp=0x6f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x1b}, {.addr=0xa876, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa877, .a=0x1b, .x=0xd6, .y=0x48, .sp=0x70, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x1b}, {.addr=0xa876, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa876, .value=0xae, .type=IO_READ},
        {.addr=0xa877, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x81ec, .a=0x52, .x=0x8b, .y=0x28, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x79}, {.addr=0x81ec, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x81ed, .a=0x79, .x=0x8b, .y=0x28, .sp=0xdd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x79}, {.addr=0x81ec, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x81ec, .value=0xae, .type=IO_READ},
        {.addr=0x81ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x8e04, .a=0x14, .x=0xd3, .y=0xbb, .sp=0xcc, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x35}, {.addr=0x8e04, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8e05, .a=0x35, .x=0xd3, .y=0xbb, .sp=0xcd, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x35}, {.addr=0x8e04, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8e04, .value=0xae, .type=IO_READ},
        {.addr=0x8e05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x1ed9, .a=0x54, .x=0x3c, .y=0xf2, .sp=0x93, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x79}, {.addr=0x1ed9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1eda, .a=0x79, .x=0x3c, .y=0xf2, .sp=0x94, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x79}, {.addr=0x1ed9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1ed9, .value=0xae, .type=IO_READ},
        {.addr=0x1eda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xc62e, .a=0xe8, .x=0xec, .y=0xdf, .sp=0xe9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x24}, {.addr=0xc62e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc62f, .a=0x24, .x=0xec, .y=0xdf, .sp=0xea, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x24}, {.addr=0xc62e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc62e, .value=0xae, .type=IO_READ},
        {.addr=0xc62f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x47df, .a=0x42, .x=0xb0, .y=0x6f, .sp=0xd6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x54}, {.addr=0x47df, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x47e0, .a=0x54, .x=0xb0, .y=0x6f, .sp=0xd7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x54}, {.addr=0x47df, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x47df, .value=0xae, .type=IO_READ},
        {.addr=0x47e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xbef5, .a=0x3d, .x=0xf1, .y=0x94, .sp=0x36, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x41}, {.addr=0xbef5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbef6, .a=0x41, .x=0xf1, .y=0x94, .sp=0x37, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x41}, {.addr=0xbef5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbef5, .value=0xae, .type=IO_READ},
        {.addr=0xbef6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x89ac, .a=0x64, .x=0x70, .y=0xe9, .sp=0x0c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x9a}, {.addr=0x89ac, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x89ad, .a=0x9a, .x=0x70, .y=0xe9, .sp=0x0d, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x9a}, {.addr=0x89ac, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x89ac, .value=0xae, .type=IO_READ},
        {.addr=0x89ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xc18a, .a=0x46, .x=0x11, .y=0x8b, .sp=0x9b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x96}, {.addr=0xc18a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc18b, .a=0x96, .x=0x11, .y=0x8b, .sp=0x9c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x96}, {.addr=0xc18a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc18a, .value=0xae, .type=IO_READ},
        {.addr=0xc18b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xe353, .a=0x87, .x=0xac, .y=0xa6, .sp=0xc3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x38}, {.addr=0xe353, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe354, .a=0x38, .x=0xac, .y=0xa6, .sp=0xc4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x38}, {.addr=0xe353, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe353, .value=0xae, .type=IO_READ},
        {.addr=0xe354, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x9f2f, .a=0x2b, .x=0xf2, .y=0x0f, .sp=0x54, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x6b}, {.addr=0x9f2f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f30, .a=0x6b, .x=0xf2, .y=0x0f, .sp=0x55, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x6b}, {.addr=0x9f2f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f2f, .value=0xae, .type=IO_READ},
        {.addr=0x9f30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0357, .a=0x40, .x=0xf3, .y=0xf5, .sp=0x69, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xea}, {.addr=0x0357, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0358, .a=0xea, .x=0xf3, .y=0xf5, .sp=0x6a, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xea}, {.addr=0x0357, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0357, .value=0xae, .type=IO_READ},
        {.addr=0x0358, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x05a5, .a=0xf9, .x=0xe0, .y=0xd9, .sp=0x37, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x1c}, {.addr=0x05a5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x05a6, .a=0x1c, .x=0xe0, .y=0xd9, .sp=0x38, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x1c}, {.addr=0x05a5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x05a5, .value=0xae, .type=IO_READ},
        {.addr=0x05a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x677a, .a=0xfc, .x=0x44, .y=0x94, .sp=0xb1, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x11}, {.addr=0x677a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x677b, .a=0x11, .x=0x44, .y=0x94, .sp=0xb2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x11}, {.addr=0x677a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x677a, .value=0xae, .type=IO_READ},
        {.addr=0x677b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xf0b6, .a=0xb4, .x=0x62, .y=0x02, .sp=0xcb, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x6f}, {.addr=0xf0b6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf0b7, .a=0x6f, .x=0x62, .y=0x02, .sp=0xcc, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x6f}, {.addr=0xf0b6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf0b6, .value=0xae, .type=IO_READ},
        {.addr=0xf0b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x1ee1, .a=0x61, .x=0x09, .y=0x5f, .sp=0xf8, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x3b}, {.addr=0x1ee1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1ee2, .a=0x3b, .x=0x09, .y=0x5f, .sp=0xf9, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x3b}, {.addr=0x1ee1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1ee1, .value=0xae, .type=IO_READ},
        {.addr=0x1ee2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xc050, .a=0x7d, .x=0x51, .y=0x3e, .sp=0x73, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x1c}, {.addr=0xc050, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc051, .a=0x1c, .x=0x51, .y=0x3e, .sp=0x74, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x1c}, {.addr=0xc050, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc050, .value=0xae, .type=IO_READ},
        {.addr=0xc051, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xcce2, .a=0xd1, .x=0x49, .y=0x27, .sp=0x11, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x97}, {.addr=0xcce2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcce3, .a=0x97, .x=0x49, .y=0x27, .sp=0x12, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x97}, {.addr=0xcce2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcce2, .value=0xae, .type=IO_READ},
        {.addr=0xcce3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xbef8, .a=0x7b, .x=0x05, .y=0x04, .sp=0xe6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x9f}, {.addr=0xbef8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbef9, .a=0x9f, .x=0x05, .y=0x04, .sp=0xe7, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x9f}, {.addr=0xbef8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbef8, .value=0xae, .type=IO_READ},
        {.addr=0xbef9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3fe4, .a=0x71, .x=0x52, .y=0x83, .sp=0x09, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xc0}, {.addr=0x3fe4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3fe5, .a=0xc0, .x=0x52, .y=0x83, .sp=0x0a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xc0}, {.addr=0x3fe4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3fe4, .value=0xae, .type=IO_READ},
        {.addr=0x3fe5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x6953, .a=0x78, .x=0xb1, .y=0xc2, .sp=0x7d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x02}, {.addr=0x6953, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6954, .a=0x02, .x=0xb1, .y=0xc2, .sp=0x7e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x02}, {.addr=0x6953, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6953, .value=0xae, .type=IO_READ},
        {.addr=0x6954, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x6df2, .a=0xbb, .x=0x1b, .y=0xae, .sp=0xa2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x2a}, {.addr=0x6df2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6df3, .a=0x2a, .x=0x1b, .y=0xae, .sp=0xa3, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x2a}, {.addr=0x6df2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6df2, .value=0xae, .type=IO_READ},
        {.addr=0x6df3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x6dce, .a=0xc2, .x=0xe7, .y=0xbf, .sp=0x3e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x80}, {.addr=0x6dce, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6dcf, .a=0x80, .x=0xe7, .y=0xbf, .sp=0x3f, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x80}, {.addr=0x6dce, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6dce, .value=0xae, .type=IO_READ},
        {.addr=0x6dcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x11eb, .a=0x41, .x=0x6d, .y=0xcf, .sp=0xfb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x65}, {.addr=0x11eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x11ec, .a=0x65, .x=0x6d, .y=0xcf, .sp=0xfc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x65}, {.addr=0x11eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x11eb, .value=0xae, .type=IO_READ},
        {.addr=0x11ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x901d, .a=0xfe, .x=0x5b, .y=0xf0, .sp=0xf9, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xa6}, {.addr=0x901d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x901e, .a=0xa6, .x=0x5b, .y=0xf0, .sp=0xfa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xa6}, {.addr=0x901d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x901d, .value=0xae, .type=IO_READ},
        {.addr=0x901e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x6a39, .a=0x25, .x=0xa2, .y=0x36, .sp=0xe2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xab}, {.addr=0x6a39, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6a3a, .a=0xab, .x=0xa2, .y=0x36, .sp=0xe3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xab}, {.addr=0x6a39, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6a39, .value=0xae, .type=IO_READ},
        {.addr=0x6a3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x39f7, .a=0x85, .x=0x8c, .y=0x9a, .sp=0xed, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x3a}, {.addr=0x39f7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x39f8, .a=0x3a, .x=0x8c, .y=0x9a, .sp=0xee, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x3a}, {.addr=0x39f7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x39f7, .value=0xae, .type=IO_READ},
        {.addr=0x39f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x1af3, .a=0xc8, .x=0x26, .y=0x64, .sp=0xe9, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x32}, {.addr=0x1af3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1af4, .a=0x32, .x=0x26, .y=0x64, .sp=0xea, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x32}, {.addr=0x1af3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1af3, .value=0xae, .type=IO_READ},
        {.addr=0x1af4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x909f, .a=0x42, .x=0xa0, .y=0xa1, .sp=0x45, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x8c}, {.addr=0x909f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x90a0, .a=0x8c, .x=0xa0, .y=0xa1, .sp=0x46, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x8c}, {.addr=0x909f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x909f, .value=0xae, .type=IO_READ},
        {.addr=0x90a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x45b2, .a=0xdc, .x=0x3d, .y=0x18, .sp=0x11, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x27}, {.addr=0x45b2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x45b3, .a=0x27, .x=0x3d, .y=0x18, .sp=0x12, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x27}, {.addr=0x45b2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x45b2, .value=0xae, .type=IO_READ},
        {.addr=0x45b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x897c, .a=0x79, .x=0xd1, .y=0xeb, .sp=0xa6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xec}, {.addr=0x897c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x897d, .a=0xec, .x=0xd1, .y=0xeb, .sp=0xa7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xec}, {.addr=0x897c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x897c, .value=0xae, .type=IO_READ},
        {.addr=0x897d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x36c4, .a=0x43, .x=0x51, .y=0x2c, .sp=0xaf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc7}, {.addr=0x36c4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x36c5, .a=0xc7, .x=0x51, .y=0x2c, .sp=0xb0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc7}, {.addr=0x36c4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x36c4, .value=0xae, .type=IO_READ},
        {.addr=0x36c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xdb7a, .a=0x75, .x=0xe6, .y=0x0b, .sp=0x05, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x60}, {.addr=0xdb7a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb7b, .a=0x60, .x=0xe6, .y=0x0b, .sp=0x06, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x60}, {.addr=0xdb7a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb7a, .value=0xae, .type=IO_READ},
        {.addr=0xdb7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x4922, .a=0x8e, .x=0xc3, .y=0x54, .sp=0x7f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x0c}, {.addr=0x4922, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4923, .a=0x0c, .x=0xc3, .y=0x54, .sp=0x80, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x0c}, {.addr=0x4922, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4922, .value=0xae, .type=IO_READ},
        {.addr=0x4923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xdde0, .a=0xee, .x=0x07, .y=0xd9, .sp=0x5c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x34}, {.addr=0xdde0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdde1, .a=0x34, .x=0x07, .y=0xd9, .sp=0x5d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x34}, {.addr=0xdde0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdde0, .value=0xae, .type=IO_READ},
        {.addr=0xdde1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x7c49, .a=0x03, .x=0x42, .y=0x51, .sp=0x09, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xbc}, {.addr=0x7c49, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7c4a, .a=0xbc, .x=0x42, .y=0x51, .sp=0x0a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xbc}, {.addr=0x7c49, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7c49, .value=0xae, .type=IO_READ},
        {.addr=0x7c4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x4ba7, .a=0x71, .x=0xf9, .y=0x00, .sp=0x3a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x94}, {.addr=0x4ba7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4ba8, .a=0x94, .x=0xf9, .y=0x00, .sp=0x3b, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x94}, {.addr=0x4ba7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4ba7, .value=0xae, .type=IO_READ},
        {.addr=0x4ba8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xb1a5, .a=0x95, .x=0x40, .y=0x5e, .sp=0xed, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x6b}, {.addr=0xb1a5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb1a6, .a=0x6b, .x=0x40, .y=0x5e, .sp=0xee, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x6b}, {.addr=0xb1a5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb1a5, .value=0xae, .type=IO_READ},
        {.addr=0xb1a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x3190, .a=0xd7, .x=0x70, .y=0xb6, .sp=0xff, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x3190, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3191, .a=0xc2, .x=0x70, .y=0xb6, .sp=0x00, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x3190, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3190, .value=0xae, .type=IO_READ},
        {.addr=0x3191, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x1280, .a=0x38, .x=0x1a, .y=0x67, .sp=0xaf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc4}, {.addr=0x1280, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1281, .a=0xc4, .x=0x1a, .y=0x67, .sp=0xb0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc4}, {.addr=0x1280, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1280, .value=0xae, .type=IO_READ},
        {.addr=0x1281, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xb386, .a=0xd1, .x=0x34, .y=0x0d, .sp=0x10, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x78}, {.addr=0xb386, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb387, .a=0x78, .x=0x34, .y=0x0d, .sp=0x11, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x78}, {.addr=0xb386, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb386, .value=0xae, .type=IO_READ},
        {.addr=0xb387, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xa24b, .a=0x8b, .x=0xac, .y=0x9d, .sp=0x4d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xa1}, {.addr=0xa24b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa24c, .a=0xa1, .x=0xac, .y=0x9d, .sp=0x4e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa1}, {.addr=0xa24b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa24b, .value=0xae, .type=IO_READ},
        {.addr=0xa24c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xa559, .a=0x0c, .x=0xc0, .y=0xae, .sp=0x83, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x1e}, {.addr=0xa559, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa55a, .a=0x1e, .x=0xc0, .y=0xae, .sp=0x84, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x1e}, {.addr=0xa559, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa559, .value=0xae, .type=IO_READ},
        {.addr=0xa55a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xc18f, .a=0x2c, .x=0x45, .y=0xfc, .sp=0x0b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x72}, {.addr=0xc18f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc190, .a=0x72, .x=0x45, .y=0xfc, .sp=0x0c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x72}, {.addr=0xc18f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc18f, .value=0xae, .type=IO_READ},
        {.addr=0xc190, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb07c, .a=0xe3, .x=0x96, .y=0x2e, .sp=0xe1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xb3}, {.addr=0xb07c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb07d, .a=0xb3, .x=0x96, .y=0x2e, .sp=0xe2, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xb3}, {.addr=0xb07c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb07c, .value=0xae, .type=IO_READ},
        {.addr=0xb07d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xb7eb, .a=0x22, .x=0x88, .y=0x16, .sp=0xec, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x9f}, {.addr=0xb7eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb7ec, .a=0x9f, .x=0x88, .y=0x16, .sp=0xed, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x9f}, {.addr=0xb7eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb7eb, .value=0xae, .type=IO_READ},
        {.addr=0xb7ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0200) {
    const struct CPU_State initial_cpu = {.pc=0xc587, .a=0xb9, .x=0xf5, .y=0xe5, .sp=0x66, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xf1}, {.addr=0xc587, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc588, .a=0xf1, .x=0xf5, .y=0xe5, .sp=0x67, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xf1}, {.addr=0xc587, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc587, .value=0xae, .type=IO_READ},
        {.addr=0xc588, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0201) {
    const struct CPU_State initial_cpu = {.pc=0x0d39, .a=0xa8, .x=0xc5, .y=0xe4, .sp=0x93, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x09}, {.addr=0x0d39, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0d3a, .a=0x09, .x=0xc5, .y=0xe4, .sp=0x94, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x09}, {.addr=0x0d39, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0d39, .value=0xae, .type=IO_READ},
        {.addr=0x0d3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa41e, .a=0xec, .x=0x08, .y=0x02, .sp=0xbd, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xd9}, {.addr=0xa41e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa41f, .a=0xd9, .x=0x08, .y=0x02, .sp=0xbe, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xd9}, {.addr=0xa41e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa41e, .value=0xae, .type=IO_READ},
        {.addr=0xa41f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0203) {
    const struct CPU_State initial_cpu = {.pc=0x7281, .a=0x98, .x=0x99, .y=0xa4, .sp=0x16, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x51}, {.addr=0x7281, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7282, .a=0x51, .x=0x99, .y=0xa4, .sp=0x17, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x51}, {.addr=0x7281, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7281, .value=0xae, .type=IO_READ},
        {.addr=0x7282, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0204) {
    const struct CPU_State initial_cpu = {.pc=0xd507, .a=0x1c, .x=0x8e, .y=0xfc, .sp=0xb4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x3f}, {.addr=0xd507, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd508, .a=0x3f, .x=0x8e, .y=0xfc, .sp=0xb5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x3f}, {.addr=0xd507, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd507, .value=0xae, .type=IO_READ},
        {.addr=0xd508, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0205) {
    const struct CPU_State initial_cpu = {.pc=0x99ef, .a=0x89, .x=0xf5, .y=0x81, .sp=0x5e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x18}, {.addr=0x99ef, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x99f0, .a=0x18, .x=0xf5, .y=0x81, .sp=0x5f, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x18}, {.addr=0x99ef, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x99ef, .value=0xae, .type=IO_READ},
        {.addr=0x99f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0206) {
    const struct CPU_State initial_cpu = {.pc=0x32b6, .a=0x98, .x=0xf5, .y=0x4e, .sp=0x22, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x28}, {.addr=0x32b6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x32b7, .a=0x28, .x=0xf5, .y=0x4e, .sp=0x23, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x28}, {.addr=0x32b6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x32b6, .value=0xae, .type=IO_READ},
        {.addr=0x32b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0207) {
    const struct CPU_State initial_cpu = {.pc=0x67f0, .a=0x4f, .x=0xd0, .y=0xd4, .sp=0x06, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x55}, {.addr=0x67f0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x67f1, .a=0x55, .x=0xd0, .y=0xd4, .sp=0x07, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x55}, {.addr=0x67f0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x67f0, .value=0xae, .type=IO_READ},
        {.addr=0x67f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0208) {
    const struct CPU_State initial_cpu = {.pc=0x374e, .a=0x3b, .x=0x2b, .y=0x8e, .sp=0x09, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x34}, {.addr=0x374e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x374f, .a=0x34, .x=0x2b, .y=0x8e, .sp=0x0a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x34}, {.addr=0x374e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x374e, .value=0xae, .type=IO_READ},
        {.addr=0x374f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0209) {
    const struct CPU_State initial_cpu = {.pc=0x3e68, .a=0x5b, .x=0x4e, .y=0x43, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x6d}, {.addr=0x3e68, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3e69, .a=0x6d, .x=0x4e, .y=0x43, .sp=0x20, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x6d}, {.addr=0x3e68, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3e68, .value=0xae, .type=IO_READ},
        {.addr=0x3e69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb3e7, .a=0xdc, .x=0x16, .y=0x89, .sp=0x11, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x9c}, {.addr=0xb3e7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb3e8, .a=0x9c, .x=0x16, .y=0x89, .sp=0x12, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x9c}, {.addr=0xb3e7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb3e7, .value=0xae, .type=IO_READ},
        {.addr=0xb3e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020B) {
    const struct CPU_State initial_cpu = {.pc=0x843e, .a=0xfd, .x=0x15, .y=0x10, .sp=0xcd, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x06}, {.addr=0x843e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x843f, .a=0x06, .x=0x15, .y=0x10, .sp=0xce, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x06}, {.addr=0x843e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x843e, .value=0xae, .type=IO_READ},
        {.addr=0x843f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020C) {
    const struct CPU_State initial_cpu = {.pc=0x1d2f, .a=0x26, .x=0x91, .y=0x45, .sp=0x0f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xf5}, {.addr=0x1d2f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1d30, .a=0xf5, .x=0x91, .y=0x45, .sp=0x10, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xf5}, {.addr=0x1d2f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1d2f, .value=0xae, .type=IO_READ},
        {.addr=0x1d30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020D) {
    const struct CPU_State initial_cpu = {.pc=0xa4a5, .a=0x4b, .x=0x1c, .y=0x6f, .sp=0x6a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x6b}, {.addr=0xa4a5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa4a6, .a=0x6b, .x=0x1c, .y=0x6f, .sp=0x6b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x6b}, {.addr=0xa4a5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa4a5, .value=0xae, .type=IO_READ},
        {.addr=0xa4a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020E) {
    const struct CPU_State initial_cpu = {.pc=0xc395, .a=0x74, .x=0x18, .y=0x36, .sp=0x27, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xfc}, {.addr=0xc395, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc396, .a=0xfc, .x=0x18, .y=0x36, .sp=0x28, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xfc}, {.addr=0xc395, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc395, .value=0xae, .type=IO_READ},
        {.addr=0xc396, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_020F) {
    const struct CPU_State initial_cpu = {.pc=0xc5af, .a=0xc0, .x=0x00, .y=0x7f, .sp=0x50, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xa5}, {.addr=0xc5af, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc5b0, .a=0xa5, .x=0x00, .y=0x7f, .sp=0x51, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xa5}, {.addr=0xc5af, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc5af, .value=0xae, .type=IO_READ},
        {.addr=0xc5b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4a45, .a=0xe9, .x=0xac, .y=0x6a, .sp=0xe8, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x12}, {.addr=0x4a45, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4a46, .a=0x12, .x=0xac, .y=0x6a, .sp=0xe9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x12}, {.addr=0x4a45, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4a45, .value=0xae, .type=IO_READ},
        {.addr=0x4a46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0211) {
    const struct CPU_State initial_cpu = {.pc=0x1eca, .a=0x8d, .x=0x80, .y=0x72, .sp=0x5d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x02}, {.addr=0x1eca, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1ecb, .a=0x02, .x=0x80, .y=0x72, .sp=0x5e, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x02}, {.addr=0x1eca, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1eca, .value=0xae, .type=IO_READ},
        {.addr=0x1ecb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf1ad, .a=0x22, .x=0x4b, .y=0x21, .sp=0x3e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x8c}, {.addr=0xf1ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf1ae, .a=0x8c, .x=0x4b, .y=0x21, .sp=0x3f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x8c}, {.addr=0xf1ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf1ad, .value=0xae, .type=IO_READ},
        {.addr=0xf1ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0213) {
    const struct CPU_State initial_cpu = {.pc=0x76e6, .a=0x62, .x=0xa9, .y=0xf7, .sp=0x54, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x9d}, {.addr=0x76e6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x76e7, .a=0x9d, .x=0xa9, .y=0xf7, .sp=0x55, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x9d}, {.addr=0x76e6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x76e6, .value=0xae, .type=IO_READ},
        {.addr=0x76e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0214) {
    const struct CPU_State initial_cpu = {.pc=0x75bf, .a=0x93, .x=0x76, .y=0xe2, .sp=0xdb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xbc}, {.addr=0x75bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x75c0, .a=0xbc, .x=0x76, .y=0xe2, .sp=0xdc, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xbc}, {.addr=0x75bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x75bf, .value=0xae, .type=IO_READ},
        {.addr=0x75c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0215) {
    const struct CPU_State initial_cpu = {.pc=0x504a, .a=0x1b, .x=0x0c, .y=0x96, .sp=0x22, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xf9}, {.addr=0x504a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x504b, .a=0xf9, .x=0x0c, .y=0x96, .sp=0x23, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xf9}, {.addr=0x504a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x504a, .value=0xae, .type=IO_READ},
        {.addr=0x504b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0216) {
    const struct CPU_State initial_cpu = {.pc=0xecd3, .a=0x80, .x=0xe6, .y=0xea, .sp=0xcc, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xfe}, {.addr=0xecd3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xecd4, .a=0xfe, .x=0xe6, .y=0xea, .sp=0xcd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xfe}, {.addr=0xecd3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xecd3, .value=0xae, .type=IO_READ},
        {.addr=0xecd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0217) {
    const struct CPU_State initial_cpu = {.pc=0x78f5, .a=0xa5, .x=0x85, .y=0x0a, .sp=0x9d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x34}, {.addr=0x78f5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x78f6, .a=0x34, .x=0x85, .y=0x0a, .sp=0x9e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x34}, {.addr=0x78f5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x78f5, .value=0xae, .type=IO_READ},
        {.addr=0x78f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0218) {
    const struct CPU_State initial_cpu = {.pc=0x3b2d, .a=0xd4, .x=0xe9, .y=0xb9, .sp=0x07, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x14}, {.addr=0x3b2d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3b2e, .a=0x14, .x=0xe9, .y=0xb9, .sp=0x08, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x14}, {.addr=0x3b2d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3b2d, .value=0xae, .type=IO_READ},
        {.addr=0x3b2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0219) {
    const struct CPU_State initial_cpu = {.pc=0xbf96, .a=0x70, .x=0x52, .y=0x07, .sp=0xf9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x0c}, {.addr=0xbf96, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf97, .a=0x0c, .x=0x52, .y=0x07, .sp=0xfa, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x0c}, {.addr=0xbf96, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf96, .value=0xae, .type=IO_READ},
        {.addr=0xbf97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021A) {
    const struct CPU_State initial_cpu = {.pc=0xee0a, .a=0xf4, .x=0x4c, .y=0xf3, .sp=0x63, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x9f}, {.addr=0xee0a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xee0b, .a=0x9f, .x=0x4c, .y=0xf3, .sp=0x64, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x9f}, {.addr=0xee0a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xee0a, .value=0xae, .type=IO_READ},
        {.addr=0xee0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021B) {
    const struct CPU_State initial_cpu = {.pc=0xc9f6, .a=0x94, .x=0x29, .y=0x23, .sp=0xc4, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xe4}, {.addr=0xc9f6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc9f7, .a=0xe4, .x=0x29, .y=0x23, .sp=0xc5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xe4}, {.addr=0xc9f6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc9f6, .value=0xae, .type=IO_READ},
        {.addr=0xc9f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021C) {
    const struct CPU_State initial_cpu = {.pc=0x99a4, .a=0x7b, .x=0x06, .y=0x71, .sp=0x85, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xf6}, {.addr=0x99a4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x99a5, .a=0xf6, .x=0x06, .y=0x71, .sp=0x86, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xf6}, {.addr=0x99a4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x99a4, .value=0xae, .type=IO_READ},
        {.addr=0x99a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021D) {
    const struct CPU_State initial_cpu = {.pc=0x92fd, .a=0xf9, .x=0x73, .y=0xbb, .sp=0xa6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x68}, {.addr=0x92fd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x92fe, .a=0x68, .x=0x73, .y=0xbb, .sp=0xa7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x68}, {.addr=0x92fd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x92fd, .value=0xae, .type=IO_READ},
        {.addr=0x92fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021E) {
    const struct CPU_State initial_cpu = {.pc=0x2c79, .a=0x1d, .x=0xf6, .y=0x94, .sp=0xeb, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xc0}, {.addr=0x2c79, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2c7a, .a=0xc0, .x=0xf6, .y=0x94, .sp=0xec, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xc0}, {.addr=0x2c79, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2c79, .value=0xae, .type=IO_READ},
        {.addr=0x2c7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_021F) {
    const struct CPU_State initial_cpu = {.pc=0x7b8e, .a=0xe2, .x=0xee, .y=0x77, .sp=0xb9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xaa}, {.addr=0x7b8e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7b8f, .a=0xaa, .x=0xee, .y=0x77, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xaa}, {.addr=0x7b8e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7b8e, .value=0xae, .type=IO_READ},
        {.addr=0x7b8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0220) {
    const struct CPU_State initial_cpu = {.pc=0x68ab, .a=0x31, .x=0xf9, .y=0xc4, .sp=0x18, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xee}, {.addr=0x68ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x68ac, .a=0xee, .x=0xf9, .y=0xc4, .sp=0x19, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xee}, {.addr=0x68ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x68ab, .value=0xae, .type=IO_READ},
        {.addr=0x68ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0221) {
    const struct CPU_State initial_cpu = {.pc=0x98c3, .a=0xf6, .x=0x77, .y=0xc0, .sp=0x6e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xa1}, {.addr=0x98c3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x98c4, .a=0xa1, .x=0x77, .y=0xc0, .sp=0x6f, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xa1}, {.addr=0x98c3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x98c3, .value=0xae, .type=IO_READ},
        {.addr=0x98c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0222) {
    const struct CPU_State initial_cpu = {.pc=0xf241, .a=0x70, .x=0x43, .y=0xee, .sp=0x38, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x99}, {.addr=0xf241, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf242, .a=0x99, .x=0x43, .y=0xee, .sp=0x39, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x99}, {.addr=0xf241, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf241, .value=0xae, .type=IO_READ},
        {.addr=0xf242, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0223) {
    const struct CPU_State initial_cpu = {.pc=0xb51c, .a=0x57, .x=0x2a, .y=0xa4, .sp=0x0d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x42}, {.addr=0xb51c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb51d, .a=0x42, .x=0x2a, .y=0xa4, .sp=0x0e, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x42}, {.addr=0xb51c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb51c, .value=0xae, .type=IO_READ},
        {.addr=0xb51d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe377, .a=0x92, .x=0x7e, .y=0x5a, .sp=0x67, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xb5}, {.addr=0xe377, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe378, .a=0xb5, .x=0x7e, .y=0x5a, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xb5}, {.addr=0xe377, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe377, .value=0xae, .type=IO_READ},
        {.addr=0xe378, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0225) {
    const struct CPU_State initial_cpu = {.pc=0x3e40, .a=0x0a, .x=0xf4, .y=0x7c, .sp=0xee, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xfc}, {.addr=0x3e40, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3e41, .a=0xfc, .x=0xf4, .y=0x7c, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xfc}, {.addr=0x3e40, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3e40, .value=0xae, .type=IO_READ},
        {.addr=0x3e41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6e00, .a=0xd2, .x=0xfa, .y=0x0b, .sp=0x1b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xc3}, {.addr=0x6e00, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6e01, .a=0xc3, .x=0xfa, .y=0x0b, .sp=0x1c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xc3}, {.addr=0x6e00, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6e00, .value=0xae, .type=IO_READ},
        {.addr=0x6e01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0227) {
    const struct CPU_State initial_cpu = {.pc=0x93cb, .a=0xf8, .x=0xe6, .y=0x47, .sp=0xef, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf1}, {.addr=0x93cb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x93cc, .a=0xf1, .x=0xe6, .y=0x47, .sp=0xf0, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf1}, {.addr=0x93cb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x93cb, .value=0xae, .type=IO_READ},
        {.addr=0x93cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0228) {
    const struct CPU_State initial_cpu = {.pc=0x6171, .a=0x66, .x=0xf2, .y=0x98, .sp=0x80, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xbd}, {.addr=0x6171, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6172, .a=0xbd, .x=0xf2, .y=0x98, .sp=0x81, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xbd}, {.addr=0x6171, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6171, .value=0xae, .type=IO_READ},
        {.addr=0x6172, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0229) {
    const struct CPU_State initial_cpu = {.pc=0xf5cb, .a=0xd2, .x=0x45, .y=0x11, .sp=0xf9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x34}, {.addr=0xf5cb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf5cc, .a=0x34, .x=0x45, .y=0x11, .sp=0xfa, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x34}, {.addr=0xf5cb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf5cb, .value=0xae, .type=IO_READ},
        {.addr=0xf5cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022A) {
    const struct CPU_State initial_cpu = {.pc=0xd5b8, .a=0xe6, .x=0x9b, .y=0xba, .sp=0x56, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xc9}, {.addr=0xd5b8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd5b9, .a=0xc9, .x=0x9b, .y=0xba, .sp=0x57, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xc9}, {.addr=0xd5b8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd5b8, .value=0xae, .type=IO_READ},
        {.addr=0xd5b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022B) {
    const struct CPU_State initial_cpu = {.pc=0x5b47, .a=0x7b, .x=0xc2, .y=0x3d, .sp=0xda, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x06}, {.addr=0x5b47, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5b48, .a=0x06, .x=0xc2, .y=0x3d, .sp=0xdb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x06}, {.addr=0x5b47, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5b47, .value=0xae, .type=IO_READ},
        {.addr=0x5b48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7661, .a=0x9b, .x=0xd6, .y=0xc8, .sp=0x19, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xee}, {.addr=0x7661, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7662, .a=0xee, .x=0xd6, .y=0xc8, .sp=0x1a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xee}, {.addr=0x7661, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7661, .value=0xae, .type=IO_READ},
        {.addr=0x7662, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022D) {
    const struct CPU_State initial_cpu = {.pc=0x9f32, .a=0x57, .x=0xb1, .y=0xc8, .sp=0xfe, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xf3}, {.addr=0x9f32, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f33, .a=0xf3, .x=0xb1, .y=0xc8, .sp=0xff, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xf3}, {.addr=0x9f32, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f32, .value=0xae, .type=IO_READ},
        {.addr=0x9f33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022E) {
    const struct CPU_State initial_cpu = {.pc=0x5402, .a=0xe0, .x=0xc5, .y=0xf9, .sp=0x0c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x8d}, {.addr=0x5402, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5403, .a=0x8d, .x=0xc5, .y=0xf9, .sp=0x0d, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x8d}, {.addr=0x5402, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5402, .value=0xae, .type=IO_READ},
        {.addr=0x5403, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa622, .a=0x27, .x=0xcd, .y=0xd6, .sp=0xaa, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0xa622, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa623, .a=0xb7, .x=0xcd, .y=0xd6, .sp=0xab, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0xa622, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa622, .value=0xae, .type=IO_READ},
        {.addr=0xa623, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0230) {
    const struct CPU_State initial_cpu = {.pc=0xa165, .a=0xe5, .x=0x89, .y=0xa4, .sp=0xe0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x6d}, {.addr=0xa165, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa166, .a=0x6d, .x=0x89, .y=0xa4, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x6d}, {.addr=0xa165, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa165, .value=0xae, .type=IO_READ},
        {.addr=0xa166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0231) {
    const struct CPU_State initial_cpu = {.pc=0x929e, .a=0xd2, .x=0x59, .y=0xab, .sp=0xea, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x25}, {.addr=0x929e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x929f, .a=0x25, .x=0x59, .y=0xab, .sp=0xeb, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x25}, {.addr=0x929e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x929e, .value=0xae, .type=IO_READ},
        {.addr=0x929f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0232) {
    const struct CPU_State initial_cpu = {.pc=0xd836, .a=0xb0, .x=0x37, .y=0x79, .sp=0x76, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x3a}, {.addr=0xd836, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd837, .a=0x3a, .x=0x37, .y=0x79, .sp=0x77, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x3a}, {.addr=0xd836, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd836, .value=0xae, .type=IO_READ},
        {.addr=0xd837, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0233) {
    const struct CPU_State initial_cpu = {.pc=0x3c14, .a=0x84, .x=0xd5, .y=0x12, .sp=0x5a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x2e}, {.addr=0x3c14, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3c15, .a=0x2e, .x=0xd5, .y=0x12, .sp=0x5b, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x2e}, {.addr=0x3c14, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3c14, .value=0xae, .type=IO_READ},
        {.addr=0x3c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0234) {
    const struct CPU_State initial_cpu = {.pc=0x8497, .a=0x6e, .x=0x69, .y=0x2a, .sp=0xe2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xb0}, {.addr=0x8497, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8498, .a=0xb0, .x=0x69, .y=0x2a, .sp=0xe3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xb0}, {.addr=0x8497, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8497, .value=0xae, .type=IO_READ},
        {.addr=0x8498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0235) {
    const struct CPU_State initial_cpu = {.pc=0xda15, .a=0xe9, .x=0x61, .y=0xe8, .sp=0x2f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xc7}, {.addr=0xda15, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xda16, .a=0xc7, .x=0x61, .y=0xe8, .sp=0x30, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xc7}, {.addr=0xda15, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xda15, .value=0xae, .type=IO_READ},
        {.addr=0xda16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0236) {
    const struct CPU_State initial_cpu = {.pc=0xabf7, .a=0x62, .x=0x46, .y=0xf8, .sp=0x72, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xb4}, {.addr=0xabf7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xabf8, .a=0xb4, .x=0x46, .y=0xf8, .sp=0x73, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xb4}, {.addr=0xabf7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xabf7, .value=0xae, .type=IO_READ},
        {.addr=0xabf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0237) {
    const struct CPU_State initial_cpu = {.pc=0x21ec, .a=0xb2, .x=0x6b, .y=0x06, .sp=0xda, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xd6}, {.addr=0x21ec, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x21ed, .a=0xd6, .x=0x6b, .y=0x06, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xd6}, {.addr=0x21ec, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x21ec, .value=0xae, .type=IO_READ},
        {.addr=0x21ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0238) {
    const struct CPU_State initial_cpu = {.pc=0x0604, .a=0xf2, .x=0x28, .y=0x6d, .sp=0x07, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xc6}, {.addr=0x0604, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0605, .a=0xc6, .x=0x28, .y=0x6d, .sp=0x08, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xc6}, {.addr=0x0604, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0604, .value=0xae, .type=IO_READ},
        {.addr=0x0605, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0239) {
    const struct CPU_State initial_cpu = {.pc=0xed46, .a=0x54, .x=0xeb, .y=0x2f, .sp=0x46, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x0b}, {.addr=0xed46, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xed47, .a=0x0b, .x=0xeb, .y=0x2f, .sp=0x47, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x0b}, {.addr=0xed46, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xed46, .value=0xae, .type=IO_READ},
        {.addr=0xed47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023A) {
    const struct CPU_State initial_cpu = {.pc=0xed84, .a=0x6e, .x=0xdf, .y=0xa0, .sp=0x63, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x7e}, {.addr=0xed84, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xed85, .a=0x7e, .x=0xdf, .y=0xa0, .sp=0x64, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x7e}, {.addr=0xed84, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xed84, .value=0xae, .type=IO_READ},
        {.addr=0xed85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0738, .a=0xa0, .x=0x21, .y=0x74, .sp=0x23, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xf8}, {.addr=0x0738, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0739, .a=0xf8, .x=0x21, .y=0x74, .sp=0x24, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xf8}, {.addr=0x0738, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0738, .value=0xae, .type=IO_READ},
        {.addr=0x0739, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023C) {
    const struct CPU_State initial_cpu = {.pc=0x7f80, .a=0xc0, .x=0x0d, .y=0x11, .sp=0x74, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x5a}, {.addr=0x7f80, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7f81, .a=0x5a, .x=0x0d, .y=0x11, .sp=0x75, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x5a}, {.addr=0x7f80, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7f80, .value=0xae, .type=IO_READ},
        {.addr=0x7f81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023D) {
    const struct CPU_State initial_cpu = {.pc=0x0343, .a=0x2a, .x=0xfe, .y=0xf1, .sp=0x91, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x1a}, {.addr=0x0343, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0344, .a=0x1a, .x=0xfe, .y=0xf1, .sp=0x92, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x1a}, {.addr=0x0343, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0343, .value=0xae, .type=IO_READ},
        {.addr=0x0344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023E) {
    const struct CPU_State initial_cpu = {.pc=0x5f50, .a=0x8c, .x=0x9d, .y=0x05, .sp=0x97, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x52}, {.addr=0x5f50, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5f51, .a=0x52, .x=0x9d, .y=0x05, .sp=0x98, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x52}, {.addr=0x5f50, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5f50, .value=0xae, .type=IO_READ},
        {.addr=0x5f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_023F) {
    const struct CPU_State initial_cpu = {.pc=0x499a, .a=0x32, .x=0x8f, .y=0x07, .sp=0xdc, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xc3}, {.addr=0x499a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x499b, .a=0xc3, .x=0x8f, .y=0x07, .sp=0xdd, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xc3}, {.addr=0x499a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x499a, .value=0xae, .type=IO_READ},
        {.addr=0x499b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0240) {
    const struct CPU_State initial_cpu = {.pc=0xec7f, .a=0xcd, .x=0x32, .y=0xd6, .sp=0xd5, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x64}, {.addr=0xec7f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xec80, .a=0x64, .x=0x32, .y=0xd6, .sp=0xd6, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x64}, {.addr=0xec7f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xec7f, .value=0xae, .type=IO_READ},
        {.addr=0xec80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0241) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0xba, .x=0xaf, .y=0x16, .sp=0xfe, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x7a}, {.addr=0x6965, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6966, .a=0x7a, .x=0xaf, .y=0x16, .sp=0xff, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x7a}, {.addr=0x6965, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0xae, .type=IO_READ},
        {.addr=0x6966, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0242) {
    const struct CPU_State initial_cpu = {.pc=0xfad7, .a=0x0b, .x=0xdc, .y=0x31, .sp=0xb6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x45}, {.addr=0xfad7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfad8, .a=0x45, .x=0xdc, .y=0x31, .sp=0xb7, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x45}, {.addr=0xfad7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfad7, .value=0xae, .type=IO_READ},
        {.addr=0xfad8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3738, .a=0x66, .x=0x6d, .y=0x60, .sp=0xe6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xe8}, {.addr=0x3738, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3739, .a=0xe8, .x=0x6d, .y=0x60, .sp=0xe7, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xe8}, {.addr=0x3738, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3738, .value=0xae, .type=IO_READ},
        {.addr=0x3739, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0244) {
    const struct CPU_State initial_cpu = {.pc=0xc6c8, .a=0xf0, .x=0xf0, .y=0x42, .sp=0x78, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xf2}, {.addr=0xc6c8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc6c9, .a=0xf2, .x=0xf0, .y=0x42, .sp=0x79, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xf2}, {.addr=0xc6c8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc6c8, .value=0xae, .type=IO_READ},
        {.addr=0xc6c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0245) {
    const struct CPU_State initial_cpu = {.pc=0x3fd0, .a=0x8b, .x=0xeb, .y=0xa2, .sp=0x18, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xd6}, {.addr=0x3fd0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3fd1, .a=0xd6, .x=0xeb, .y=0xa2, .sp=0x19, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xd6}, {.addr=0x3fd0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3fd0, .value=0xae, .type=IO_READ},
        {.addr=0x3fd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0246) {
    const struct CPU_State initial_cpu = {.pc=0x0372, .a=0xd2, .x=0x5c, .y=0x94, .sp=0x0a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xde}, {.addr=0x0372, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0373, .a=0xde, .x=0x5c, .y=0x94, .sp=0x0b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xde}, {.addr=0x0372, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0372, .value=0xae, .type=IO_READ},
        {.addr=0x0373, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0247) {
    const struct CPU_State initial_cpu = {.pc=0x7dfe, .a=0x62, .x=0xcb, .y=0xe4, .sp=0x57, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x0b}, {.addr=0x7dfe, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7dff, .a=0x0b, .x=0xcb, .y=0xe4, .sp=0x58, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x0b}, {.addr=0x7dfe, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7dfe, .value=0xae, .type=IO_READ},
        {.addr=0x7dff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0248) {
    const struct CPU_State initial_cpu = {.pc=0x54dc, .a=0xb2, .x=0xf5, .y=0x94, .sp=0xaa, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xd6}, {.addr=0x54dc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x54dd, .a=0xd6, .x=0xf5, .y=0x94, .sp=0xab, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xd6}, {.addr=0x54dc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x54dc, .value=0xae, .type=IO_READ},
        {.addr=0x54dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0249) {
    const struct CPU_State initial_cpu = {.pc=0xfc9f, .a=0xfd, .x=0x60, .y=0x54, .sp=0x66, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xd1}, {.addr=0xfc9f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfca0, .a=0xd1, .x=0x60, .y=0x54, .sp=0x67, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xd1}, {.addr=0xfc9f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfc9f, .value=0xae, .type=IO_READ},
        {.addr=0xfca0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024A) {
    const struct CPU_State initial_cpu = {.pc=0x1a43, .a=0x22, .x=0x13, .y=0x59, .sp=0xea, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xa4}, {.addr=0x1a43, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1a44, .a=0xa4, .x=0x13, .y=0x59, .sp=0xeb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xa4}, {.addr=0x1a43, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1a43, .value=0xae, .type=IO_READ},
        {.addr=0x1a44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024B) {
    const struct CPU_State initial_cpu = {.pc=0xb78c, .a=0x7a, .x=0xd0, .y=0x29, .sp=0x2d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0xb78c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb78d, .a=0xc7, .x=0xd0, .y=0x29, .sp=0x2e, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0xb78c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb78c, .value=0xae, .type=IO_READ},
        {.addr=0xb78d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024C) {
    const struct CPU_State initial_cpu = {.pc=0xc7cd, .a=0x0e, .x=0x7d, .y=0xfa, .sp=0x4e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x31}, {.addr=0xc7cd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc7ce, .a=0x31, .x=0x7d, .y=0xfa, .sp=0x4f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x31}, {.addr=0xc7cd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc7cd, .value=0xae, .type=IO_READ},
        {.addr=0xc7ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024D) {
    const struct CPU_State initial_cpu = {.pc=0x810e, .a=0x3c, .x=0x4a, .y=0x9c, .sp=0x7b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xed}, {.addr=0x810e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x810f, .a=0xed, .x=0x4a, .y=0x9c, .sp=0x7c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xed}, {.addr=0x810e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x810e, .value=0xae, .type=IO_READ},
        {.addr=0x810f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024E) {
    const struct CPU_State initial_cpu = {.pc=0xabc6, .a=0xb4, .x=0x41, .y=0x51, .sp=0xba, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xc1}, {.addr=0xabc6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xabc7, .a=0xc1, .x=0x41, .y=0x51, .sp=0xbb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xc1}, {.addr=0xabc6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xabc6, .value=0xae, .type=IO_READ},
        {.addr=0xabc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_024F) {
    const struct CPU_State initial_cpu = {.pc=0x67ed, .a=0xa8, .x=0x09, .y=0xd6, .sp=0x86, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xb4}, {.addr=0x67ed, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x67ee, .a=0xb4, .x=0x09, .y=0xd6, .sp=0x87, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xb4}, {.addr=0x67ed, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x67ed, .value=0xae, .type=IO_READ},
        {.addr=0x67ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0250) {
    const struct CPU_State initial_cpu = {.pc=0x2205, .a=0x7f, .x=0x0e, .y=0x40, .sp=0x26, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x7f}, {.addr=0x2205, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2206, .a=0x7f, .x=0x0e, .y=0x40, .sp=0x27, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x7f}, {.addr=0x2205, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2205, .value=0xae, .type=IO_READ},
        {.addr=0x2206, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0251) {
    const struct CPU_State initial_cpu = {.pc=0x09a2, .a=0x6b, .x=0xb3, .y=0x64, .sp=0x2d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x97}, {.addr=0x09a2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x09a3, .a=0x97, .x=0xb3, .y=0x64, .sp=0x2e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x97}, {.addr=0x09a2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x09a2, .value=0xae, .type=IO_READ},
        {.addr=0x09a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0252) {
    const struct CPU_State initial_cpu = {.pc=0x4f4e, .a=0x39, .x=0x0b, .y=0xce, .sp=0x7f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x9b}, {.addr=0x4f4e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4f4f, .a=0x9b, .x=0x0b, .y=0xce, .sp=0x80, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x9b}, {.addr=0x4f4e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4f4e, .value=0xae, .type=IO_READ},
        {.addr=0x4f4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7cc9, .a=0xb9, .x=0xfb, .y=0x9c, .sp=0x39, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x1f}, {.addr=0x7cc9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7cca, .a=0x1f, .x=0xfb, .y=0x9c, .sp=0x3a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x1f}, {.addr=0x7cc9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7cc9, .value=0xae, .type=IO_READ},
        {.addr=0x7cca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0254) {
    const struct CPU_State initial_cpu = {.pc=0x1009, .a=0x0b, .x=0xb4, .y=0x67, .sp=0xd7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x69}, {.addr=0x1009, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x100a, .a=0x69, .x=0xb4, .y=0x67, .sp=0xd8, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x69}, {.addr=0x1009, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1009, .value=0xae, .type=IO_READ},
        {.addr=0x100a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0255) {
    const struct CPU_State initial_cpu = {.pc=0xb35d, .a=0x3f, .x=0xc7, .y=0x30, .sp=0x34, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x08}, {.addr=0xb35d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb35e, .a=0x08, .x=0xc7, .y=0x30, .sp=0x35, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x08}, {.addr=0xb35d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb35d, .value=0xae, .type=IO_READ},
        {.addr=0xb35e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb0e1, .a=0x27, .x=0x47, .y=0xb8, .sp=0xb4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x10}, {.addr=0xb0e1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb0e2, .a=0x10, .x=0x47, .y=0xb8, .sp=0xb5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x10}, {.addr=0xb0e1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb0e1, .value=0xae, .type=IO_READ},
        {.addr=0xb0e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0257) {
    const struct CPU_State initial_cpu = {.pc=0xe8e1, .a=0x6e, .x=0xa6, .y=0x26, .sp=0xb4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xca}, {.addr=0xe8e1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe8e2, .a=0xca, .x=0xa6, .y=0x26, .sp=0xb5, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xca}, {.addr=0xe8e1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe8e1, .value=0xae, .type=IO_READ},
        {.addr=0xe8e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9cf9, .a=0x29, .x=0xa4, .y=0x87, .sp=0x0b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x85}, {.addr=0x9cf9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9cfa, .a=0x85, .x=0xa4, .y=0x87, .sp=0x0c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x85}, {.addr=0x9cf9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9cf9, .value=0xae, .type=IO_READ},
        {.addr=0x9cfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0259) {
    const struct CPU_State initial_cpu = {.pc=0xc4c1, .a=0x24, .x=0x34, .y=0xfc, .sp=0x70, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xf7}, {.addr=0xc4c1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc4c2, .a=0xf7, .x=0x34, .y=0xfc, .sp=0x71, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xf7}, {.addr=0xc4c1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc4c1, .value=0xae, .type=IO_READ},
        {.addr=0xc4c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025A) {
    const struct CPU_State initial_cpu = {.pc=0x1028, .a=0x1b, .x=0x81, .y=0x83, .sp=0x03, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xbb}, {.addr=0x1028, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1029, .a=0xbb, .x=0x81, .y=0x83, .sp=0x04, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xbb}, {.addr=0x1028, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1028, .value=0xae, .type=IO_READ},
        {.addr=0x1029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025B) {
    const struct CPU_State initial_cpu = {.pc=0x5d10, .a=0x71, .x=0x14, .y=0x55, .sp=0x23, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x1c}, {.addr=0x5d10, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5d11, .a=0x1c, .x=0x14, .y=0x55, .sp=0x24, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x1c}, {.addr=0x5d10, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5d10, .value=0xae, .type=IO_READ},
        {.addr=0x5d11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025C) {
    const struct CPU_State initial_cpu = {.pc=0x77d5, .a=0x4a, .x=0x95, .y=0x6c, .sp=0x09, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xfb}, {.addr=0x77d5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0xfb, .x=0x95, .y=0x6c, .sp=0x0a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xfb}, {.addr=0x77d5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x77d5, .value=0xae, .type=IO_READ},
        {.addr=0x77d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025D) {
    const struct CPU_State initial_cpu = {.pc=0x4025, .a=0x5d, .x=0x18, .y=0xeb, .sp=0x45, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x07}, {.addr=0x4025, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4026, .a=0x07, .x=0x18, .y=0xeb, .sp=0x46, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x07}, {.addr=0x4025, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4025, .value=0xae, .type=IO_READ},
        {.addr=0x4026, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025E) {
    const struct CPU_State initial_cpu = {.pc=0x268f, .a=0x45, .x=0xa6, .y=0x57, .sp=0x7f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xd9}, {.addr=0x268f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2690, .a=0xd9, .x=0xa6, .y=0x57, .sp=0x80, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xd9}, {.addr=0x268f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x268f, .value=0xae, .type=IO_READ},
        {.addr=0x2690, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_025F) {
    const struct CPU_State initial_cpu = {.pc=0x40d1, .a=0x50, .x=0xd5, .y=0xcb, .sp=0x6b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x10}, {.addr=0x40d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x40d2, .a=0x10, .x=0xd5, .y=0xcb, .sp=0x6c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x10}, {.addr=0x40d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x40d1, .value=0xae, .type=IO_READ},
        {.addr=0x40d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0260) {
    const struct CPU_State initial_cpu = {.pc=0x13a5, .a=0x91, .x=0xaa, .y=0xa6, .sp=0xc7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x18}, {.addr=0x13a5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x13a6, .a=0x18, .x=0xaa, .y=0xa6, .sp=0xc8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x18}, {.addr=0x13a5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x13a5, .value=0xae, .type=IO_READ},
        {.addr=0x13a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1130, .a=0x8e, .x=0x52, .y=0x62, .sp=0xb5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xb1}, {.addr=0x1130, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1131, .a=0xb1, .x=0x52, .y=0x62, .sp=0xb6, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xb1}, {.addr=0x1130, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1130, .value=0xae, .type=IO_READ},
        {.addr=0x1131, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0262) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0x13, .x=0xb1, .y=0xa4, .sp=0xe5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x93}, {.addr=0x9357, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9358, .a=0x93, .x=0xb1, .y=0xa4, .sp=0xe6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x93}, {.addr=0x9357, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0xae, .type=IO_READ},
        {.addr=0x9358, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb999, .a=0xb6, .x=0xc6, .y=0x83, .sp=0xa2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xbc}, {.addr=0xb999, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb99a, .a=0xbc, .x=0xc6, .y=0x83, .sp=0xa3, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xbc}, {.addr=0xb999, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb999, .value=0xae, .type=IO_READ},
        {.addr=0xb99a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0264) {
    const struct CPU_State initial_cpu = {.pc=0x0069, .a=0x42, .x=0x98, .y=0x21, .sp=0xea, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0xae}, {.addr=0x01eb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x006a, .a=0x3d, .x=0x98, .y=0x21, .sp=0xeb, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xae}, {.addr=0x01eb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0069, .value=0xae, .type=IO_READ},
        {.addr=0x006a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0265) {
    const struct CPU_State initial_cpu = {.pc=0x04cf, .a=0x19, .x=0xc9, .y=0xe8, .sp=0xa1, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xb7}, {.addr=0x04cf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x04d0, .a=0xb7, .x=0xc9, .y=0xe8, .sp=0xa2, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xb7}, {.addr=0x04cf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x04cf, .value=0xae, .type=IO_READ},
        {.addr=0x04d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0266) {
    const struct CPU_State initial_cpu = {.pc=0xa11a, .a=0xc6, .x=0x0e, .y=0x44, .sp=0x8e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x54}, {.addr=0xa11a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa11b, .a=0x54, .x=0x0e, .y=0x44, .sp=0x8f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x54}, {.addr=0xa11a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa11a, .value=0xae, .type=IO_READ},
        {.addr=0xa11b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0267) {
    const struct CPU_State initial_cpu = {.pc=0x28c4, .a=0xeb, .x=0x33, .y=0x0e, .sp=0x62, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x29}, {.addr=0x28c4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x28c5, .a=0x29, .x=0x33, .y=0x0e, .sp=0x63, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x29}, {.addr=0x28c4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x28c4, .value=0xae, .type=IO_READ},
        {.addr=0x28c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0268) {
    const struct CPU_State initial_cpu = {.pc=0x5742, .a=0xc8, .x=0x56, .y=0xc0, .sp=0x6e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x81}, {.addr=0x5742, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5743, .a=0x81, .x=0x56, .y=0xc0, .sp=0x6f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x81}, {.addr=0x5742, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5742, .value=0xae, .type=IO_READ},
        {.addr=0x5743, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0269) {
    const struct CPU_State initial_cpu = {.pc=0x6cf4, .a=0xe3, .x=0x6a, .y=0x50, .sp=0x78, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xa4}, {.addr=0x6cf4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6cf5, .a=0xa4, .x=0x6a, .y=0x50, .sp=0x79, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xa4}, {.addr=0x6cf4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6cf4, .value=0xae, .type=IO_READ},
        {.addr=0x6cf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026A) {
    const struct CPU_State initial_cpu = {.pc=0xdb6f, .a=0x03, .x=0x00, .y=0xc7, .sp=0xfb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x03}, {.addr=0xdb6f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb70, .a=0x03, .x=0x00, .y=0xc7, .sp=0xfc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x03}, {.addr=0xdb6f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb6f, .value=0xae, .type=IO_READ},
        {.addr=0xdb70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe252, .a=0x50, .x=0x57, .y=0xa5, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x09}, {.addr=0xe252, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe253, .a=0x09, .x=0x57, .y=0xa5, .sp=0xfa, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x09}, {.addr=0xe252, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe252, .value=0xae, .type=IO_READ},
        {.addr=0xe253, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026C) {
    const struct CPU_State initial_cpu = {.pc=0xdffd, .a=0x24, .x=0x87, .y=0xca, .sp=0x8e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xed}, {.addr=0xdffd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdffe, .a=0xed, .x=0x87, .y=0xca, .sp=0x8f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xed}, {.addr=0xdffd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdffd, .value=0xae, .type=IO_READ},
        {.addr=0xdffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026D) {
    const struct CPU_State initial_cpu = {.pc=0x929e, .a=0xd8, .x=0x9a, .y=0x33, .sp=0xcf, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x9b}, {.addr=0x929e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x929f, .a=0x9b, .x=0x9a, .y=0x33, .sp=0xd0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x9b}, {.addr=0x929e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x929e, .value=0xae, .type=IO_READ},
        {.addr=0x929f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026E) {
    const struct CPU_State initial_cpu = {.pc=0x77b4, .a=0x15, .x=0x35, .y=0x33, .sp=0xde, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x5f}, {.addr=0x77b4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x77b5, .a=0x5f, .x=0x35, .y=0x33, .sp=0xdf, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x5f}, {.addr=0x77b4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x77b4, .value=0xae, .type=IO_READ},
        {.addr=0x77b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_026F) {
    const struct CPU_State initial_cpu = {.pc=0x778e, .a=0xe2, .x=0xc3, .y=0x78, .sp=0x75, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xb9}, {.addr=0x778e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x778f, .a=0xb9, .x=0xc3, .y=0x78, .sp=0x76, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xb9}, {.addr=0x778e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x778e, .value=0xae, .type=IO_READ},
        {.addr=0x778f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0270) {
    const struct CPU_State initial_cpu = {.pc=0xa5ad, .a=0xea, .x=0x5b, .y=0x7e, .sp=0xd3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xab}, {.addr=0xa5ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa5ae, .a=0xab, .x=0x5b, .y=0x7e, .sp=0xd4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xab}, {.addr=0xa5ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa5ad, .value=0xae, .type=IO_READ},
        {.addr=0xa5ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0271) {
    const struct CPU_State initial_cpu = {.pc=0xb0ae, .a=0x82, .x=0xa9, .y=0xbe, .sp=0xef, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x88}, {.addr=0xb0ae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb0af, .a=0x88, .x=0xa9, .y=0xbe, .sp=0xf0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x88}, {.addr=0xb0ae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb0ae, .value=0xae, .type=IO_READ},
        {.addr=0xb0af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0272) {
    const struct CPU_State initial_cpu = {.pc=0x0fc3, .a=0x22, .x=0x37, .y=0x2c, .sp=0x73, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xe7}, {.addr=0x0fc3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0fc4, .a=0xe7, .x=0x37, .y=0x2c, .sp=0x74, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xe7}, {.addr=0x0fc3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0fc3, .value=0xae, .type=IO_READ},
        {.addr=0x0fc4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0273) {
    const struct CPU_State initial_cpu = {.pc=0x75f8, .a=0xa2, .x=0x20, .y=0x15, .sp=0xa9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xf4}, {.addr=0x75f8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x75f9, .a=0xf4, .x=0x20, .y=0x15, .sp=0xaa, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xf4}, {.addr=0x75f8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x75f8, .value=0xae, .type=IO_READ},
        {.addr=0x75f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe6e5, .a=0x9f, .x=0xa5, .y=0x26, .sp=0x9d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xb0}, {.addr=0xe6e5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe6e6, .a=0xb0, .x=0xa5, .y=0x26, .sp=0x9e, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xb0}, {.addr=0xe6e5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe6e5, .value=0xae, .type=IO_READ},
        {.addr=0xe6e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7dfc, .a=0xd9, .x=0x20, .y=0x18, .sp=0x09, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x96}, {.addr=0x7dfc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7dfd, .a=0x96, .x=0x20, .y=0x18, .sp=0x0a, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x96}, {.addr=0x7dfc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7dfc, .value=0xae, .type=IO_READ},
        {.addr=0x7dfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0276) {
    const struct CPU_State initial_cpu = {.pc=0x550c, .a=0x9b, .x=0xe0, .y=0xd6, .sp=0x6e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x7c}, {.addr=0x550c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x550d, .a=0x7c, .x=0xe0, .y=0xd6, .sp=0x6f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x7c}, {.addr=0x550c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x550c, .value=0xae, .type=IO_READ},
        {.addr=0x550d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0277) {
    const struct CPU_State initial_cpu = {.pc=0x5482, .a=0xe6, .x=0xb7, .y=0x72, .sp=0xd3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xb1}, {.addr=0x5482, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5483, .a=0xb1, .x=0xb7, .y=0x72, .sp=0xd4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xb1}, {.addr=0x5482, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5482, .value=0xae, .type=IO_READ},
        {.addr=0x5483, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0278) {
    const struct CPU_State initial_cpu = {.pc=0x0af3, .a=0x6b, .x=0xdd, .y=0xa7, .sp=0x58, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x95}, {.addr=0x0af3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0af4, .a=0x95, .x=0xdd, .y=0xa7, .sp=0x59, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x95}, {.addr=0x0af3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0af3, .value=0xae, .type=IO_READ},
        {.addr=0x0af4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0279) {
    const struct CPU_State initial_cpu = {.pc=0xd048, .a=0x08, .x=0x1c, .y=0x90, .sp=0x4a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xb8}, {.addr=0xd048, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd049, .a=0xb8, .x=0x1c, .y=0x90, .sp=0x4b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xb8}, {.addr=0xd048, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd048, .value=0xae, .type=IO_READ},
        {.addr=0xd049, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027A) {
    const struct CPU_State initial_cpu = {.pc=0xa993, .a=0x28, .x=0x6b, .y=0x58, .sp=0xc4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x87}, {.addr=0xa993, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa994, .a=0x87, .x=0x6b, .y=0x58, .sp=0xc5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x87}, {.addr=0xa993, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa993, .value=0xae, .type=IO_READ},
        {.addr=0xa994, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027B) {
    const struct CPU_State initial_cpu = {.pc=0x36e8, .a=0xd1, .x=0xda, .y=0x11, .sp=0x50, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x72}, {.addr=0x36e8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x36e9, .a=0x72, .x=0xda, .y=0x11, .sp=0x51, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x72}, {.addr=0x36e8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x36e8, .value=0xae, .type=IO_READ},
        {.addr=0x36e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027C) {
    const struct CPU_State initial_cpu = {.pc=0x88a7, .a=0xe2, .x=0x5d, .y=0x54, .sp=0x79, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xee}, {.addr=0x88a7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x88a8, .a=0xee, .x=0x5d, .y=0x54, .sp=0x7a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xee}, {.addr=0x88a7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x88a7, .value=0xae, .type=IO_READ},
        {.addr=0x88a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027D) {
    const struct CPU_State initial_cpu = {.pc=0x42e0, .a=0x3d, .x=0x53, .y=0x6b, .sp=0x14, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xf1}, {.addr=0x42e0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x42e1, .a=0xf1, .x=0x53, .y=0x6b, .sp=0x15, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xf1}, {.addr=0x42e0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x42e0, .value=0xae, .type=IO_READ},
        {.addr=0x42e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027E) {
    const struct CPU_State initial_cpu = {.pc=0x3933, .a=0x71, .x=0x9c, .y=0xbb, .sp=0x35, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x39}, {.addr=0x3933, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3934, .a=0x39, .x=0x9c, .y=0xbb, .sp=0x36, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x39}, {.addr=0x3933, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3933, .value=0xae, .type=IO_READ},
        {.addr=0x3934, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_027F) {
    const struct CPU_State initial_cpu = {.pc=0xe558, .a=0x52, .x=0x7b, .y=0x88, .sp=0xe2, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xf4}, {.addr=0xe558, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe559, .a=0xf4, .x=0x7b, .y=0x88, .sp=0xe3, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xf4}, {.addr=0xe558, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe558, .value=0xae, .type=IO_READ},
        {.addr=0xe559, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0280) {
    const struct CPU_State initial_cpu = {.pc=0x50eb, .a=0xb6, .x=0x4a, .y=0x6c, .sp=0x94, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x1f}, {.addr=0x50eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x50ec, .a=0x1f, .x=0x4a, .y=0x6c, .sp=0x95, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x1f}, {.addr=0x50eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x50eb, .value=0xae, .type=IO_READ},
        {.addr=0x50ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe505, .a=0xb5, .x=0x2b, .y=0xa5, .sp=0x27, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x8e}, {.addr=0xe505, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe506, .a=0x8e, .x=0x2b, .y=0xa5, .sp=0x28, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x8e}, {.addr=0xe505, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe505, .value=0xae, .type=IO_READ},
        {.addr=0xe506, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0282) {
    const struct CPU_State initial_cpu = {.pc=0x17d5, .a=0x0b, .x=0x1e, .y=0xbf, .sp=0xba, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x1d}, {.addr=0x17d5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x17d6, .a=0x1d, .x=0x1e, .y=0xbf, .sp=0xbb, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x1d}, {.addr=0x17d5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x17d5, .value=0xae, .type=IO_READ},
        {.addr=0x17d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0283) {
    const struct CPU_State initial_cpu = {.pc=0xaaa5, .a=0x30, .x=0x8f, .y=0xea, .sp=0xb8, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x52}, {.addr=0xaaa5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaaa6, .a=0x52, .x=0x8f, .y=0xea, .sp=0xb9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x52}, {.addr=0xaaa5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaaa5, .value=0xae, .type=IO_READ},
        {.addr=0xaaa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0284) {
    const struct CPU_State initial_cpu = {.pc=0x3b0d, .a=0x3a, .x=0x90, .y=0x23, .sp=0x82, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xd6}, {.addr=0x3b0d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3b0e, .a=0xd6, .x=0x90, .y=0x23, .sp=0x83, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xd6}, {.addr=0x3b0d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3b0d, .value=0xae, .type=IO_READ},
        {.addr=0x3b0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0285) {
    const struct CPU_State initial_cpu = {.pc=0xd159, .a=0xce, .x=0xfc, .y=0xa7, .sp=0xcd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x54}, {.addr=0xd159, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd15a, .a=0x54, .x=0xfc, .y=0xa7, .sp=0xce, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x54}, {.addr=0xd159, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd159, .value=0xae, .type=IO_READ},
        {.addr=0xd15a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0286) {
    const struct CPU_State initial_cpu = {.pc=0xee04, .a=0x95, .x=0xc1, .y=0x55, .sp=0x85, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xc4}, {.addr=0xee04, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xee05, .a=0xc4, .x=0xc1, .y=0x55, .sp=0x86, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xc4}, {.addr=0xee04, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xee04, .value=0xae, .type=IO_READ},
        {.addr=0xee05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0287) {
    const struct CPU_State initial_cpu = {.pc=0xf75d, .a=0x98, .x=0x7e, .y=0x6f, .sp=0xd6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x68}, {.addr=0xf75d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf75e, .a=0x68, .x=0x7e, .y=0x6f, .sp=0xd7, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x68}, {.addr=0xf75d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf75d, .value=0xae, .type=IO_READ},
        {.addr=0xf75e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0288) {
    const struct CPU_State initial_cpu = {.pc=0x8ced, .a=0x7f, .x=0xb1, .y=0x21, .sp=0xfa, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xd2}, {.addr=0x8ced, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8cee, .a=0xd2, .x=0xb1, .y=0x21, .sp=0xfb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xd2}, {.addr=0x8ced, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8ced, .value=0xae, .type=IO_READ},
        {.addr=0x8cee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0289) {
    const struct CPU_State initial_cpu = {.pc=0xeb8f, .a=0x61, .x=0x89, .y=0xa6, .sp=0xc0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xef}, {.addr=0xeb8f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xeb90, .a=0xef, .x=0x89, .y=0xa6, .sp=0xc1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xef}, {.addr=0xeb8f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xeb8f, .value=0xae, .type=IO_READ},
        {.addr=0xeb90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe767, .a=0x0c, .x=0xb2, .y=0x38, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x03}, {.addr=0xe767, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe768, .a=0x03, .x=0xb2, .y=0x38, .sp=0x93, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x03}, {.addr=0xe767, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe767, .value=0xae, .type=IO_READ},
        {.addr=0xe768, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028B) {
    const struct CPU_State initial_cpu = {.pc=0x81da, .a=0x9a, .x=0x04, .y=0x7f, .sp=0x39, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xe4}, {.addr=0x81da, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x81db, .a=0xe4, .x=0x04, .y=0x7f, .sp=0x3a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xe4}, {.addr=0x81da, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x81da, .value=0xae, .type=IO_READ},
        {.addr=0x81db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028C) {
    const struct CPU_State initial_cpu = {.pc=0x01a7, .a=0x7b, .x=0x02, .y=0x28, .sp=0x1a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xae}, {.addr=0x01a7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x01a8, .a=0xae, .x=0x02, .y=0x28, .sp=0x1b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xae}, {.addr=0x01a7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x01a7, .value=0xae, .type=IO_READ},
        {.addr=0x01a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028D) {
    const struct CPU_State initial_cpu = {.pc=0x8cd8, .a=0xd6, .x=0x21, .y=0xdc, .sp=0xa2, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xf1}, {.addr=0x8cd8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8cd9, .a=0xf1, .x=0x21, .y=0xdc, .sp=0xa3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xf1}, {.addr=0x8cd8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8cd8, .value=0xae, .type=IO_READ},
        {.addr=0x8cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028E) {
    const struct CPU_State initial_cpu = {.pc=0x826d, .a=0xc2, .x=0xd8, .y=0xaa, .sp=0x09, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x63}, {.addr=0x826d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x826e, .a=0x63, .x=0xd8, .y=0xaa, .sp=0x0a, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x63}, {.addr=0x826d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x826d, .value=0xae, .type=IO_READ},
        {.addr=0x826e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_028F) {
    const struct CPU_State initial_cpu = {.pc=0xb9d2, .a=0x85, .x=0x46, .y=0xab, .sp=0xdd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xca}, {.addr=0xb9d2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb9d3, .a=0xca, .x=0x46, .y=0xab, .sp=0xde, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xca}, {.addr=0xb9d2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb9d2, .value=0xae, .type=IO_READ},
        {.addr=0xb9d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0290) {
    const struct CPU_State initial_cpu = {.pc=0x30d5, .a=0x5c, .x=0xdc, .y=0x79, .sp=0xb2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xd9}, {.addr=0x30d5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x30d6, .a=0xd9, .x=0xdc, .y=0x79, .sp=0xb3, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xd9}, {.addr=0x30d5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x30d5, .value=0xae, .type=IO_READ},
        {.addr=0x30d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0291) {
    const struct CPU_State initial_cpu = {.pc=0x36d0, .a=0xb2, .x=0x0a, .y=0x61, .sp=0xd6, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x67}, {.addr=0x36d0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x36d1, .a=0x67, .x=0x0a, .y=0x61, .sp=0xd7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x67}, {.addr=0x36d0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x36d0, .value=0xae, .type=IO_READ},
        {.addr=0x36d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0292) {
    const struct CPU_State initial_cpu = {.pc=0x064a, .a=0x43, .x=0x7d, .y=0x83, .sp=0x41, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xf8}, {.addr=0x064a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x064b, .a=0xf8, .x=0x7d, .y=0x83, .sp=0x42, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xf8}, {.addr=0x064a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x064a, .value=0xae, .type=IO_READ},
        {.addr=0x064b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1363, .a=0x80, .x=0x4c, .y=0xba, .sp=0x32, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x5e}, {.addr=0x1363, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1364, .a=0x5e, .x=0x4c, .y=0xba, .sp=0x33, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x5e}, {.addr=0x1363, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1363, .value=0xae, .type=IO_READ},
        {.addr=0x1364, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0294) {
    const struct CPU_State initial_cpu = {.pc=0xf126, .a=0x71, .x=0xbe, .y=0x5f, .sp=0xf6, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xf5}, {.addr=0xf126, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf127, .a=0xf5, .x=0xbe, .y=0x5f, .sp=0xf7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xf5}, {.addr=0xf126, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf126, .value=0xae, .type=IO_READ},
        {.addr=0xf127, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0295) {
    const struct CPU_State initial_cpu = {.pc=0xaca2, .a=0xbe, .x=0x78, .y=0xd6, .sp=0x59, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xb1}, {.addr=0xaca2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaca3, .a=0xb1, .x=0x78, .y=0xd6, .sp=0x5a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xb1}, {.addr=0xaca2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaca2, .value=0xae, .type=IO_READ},
        {.addr=0xaca3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0296) {
    const struct CPU_State initial_cpu = {.pc=0x48a8, .a=0xf0, .x=0xbb, .y=0x32, .sp=0x3b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x3f}, {.addr=0x48a8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x48a9, .a=0x3f, .x=0xbb, .y=0x32, .sp=0x3c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x3f}, {.addr=0x48a8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x48a8, .value=0xae, .type=IO_READ},
        {.addr=0x48a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0297) {
    const struct CPU_State initial_cpu = {.pc=0x72dd, .a=0x37, .x=0x4a, .y=0x8d, .sp=0x1d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x9a}, {.addr=0x72dd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x72de, .a=0x9a, .x=0x4a, .y=0x8d, .sp=0x1e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x9a}, {.addr=0x72dd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x72dd, .value=0xae, .type=IO_READ},
        {.addr=0x72de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0298) {
    const struct CPU_State initial_cpu = {.pc=0xa78d, .a=0x75, .x=0x24, .y=0x4b, .sp=0x6d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xd5}, {.addr=0xa78d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa78e, .a=0xd5, .x=0x24, .y=0x4b, .sp=0x6e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xd5}, {.addr=0xa78d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa78d, .value=0xae, .type=IO_READ},
        {.addr=0xa78e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0299) {
    const struct CPU_State initial_cpu = {.pc=0x0f22, .a=0xae, .x=0xd1, .y=0xe0, .sp=0xfe, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x62}, {.addr=0x0f22, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0f23, .a=0x62, .x=0xd1, .y=0xe0, .sp=0xff, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x62}, {.addr=0x0f22, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0f22, .value=0xae, .type=IO_READ},
        {.addr=0x0f23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029A) {
    const struct CPU_State initial_cpu = {.pc=0x5455, .a=0x62, .x=0xe5, .y=0xcb, .sp=0xc2, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xc1}, {.addr=0x5455, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5456, .a=0xc1, .x=0xe5, .y=0xcb, .sp=0xc3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xc1}, {.addr=0x5455, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5455, .value=0xae, .type=IO_READ},
        {.addr=0x5456, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029B) {
    const struct CPU_State initial_cpu = {.pc=0xb5bd, .a=0x5e, .x=0x36, .y=0x89, .sp=0xd9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xab}, {.addr=0xb5bd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb5be, .a=0xab, .x=0x36, .y=0x89, .sp=0xda, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xab}, {.addr=0xb5bd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb5bd, .value=0xae, .type=IO_READ},
        {.addr=0xb5be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc21b, .a=0x1c, .x=0xa9, .y=0xdf, .sp=0x52, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xc1}, {.addr=0xc21b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc21c, .a=0xc1, .x=0xa9, .y=0xdf, .sp=0x53, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xc1}, {.addr=0xc21b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc21b, .value=0xae, .type=IO_READ},
        {.addr=0xc21c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029D) {
    const struct CPU_State initial_cpu = {.pc=0x0f46, .a=0xa9, .x=0x76, .y=0xcc, .sp=0xc7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xc6}, {.addr=0x0f46, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0f47, .a=0xc6, .x=0x76, .y=0xcc, .sp=0xc8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xc6}, {.addr=0x0f46, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0f46, .value=0xae, .type=IO_READ},
        {.addr=0x0f47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029E) {
    const struct CPU_State initial_cpu = {.pc=0xb6a2, .a=0x42, .x=0x1c, .y=0x10, .sp=0xc1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x3c}, {.addr=0xb6a2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb6a3, .a=0x3c, .x=0x1c, .y=0x10, .sp=0xc2, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x3c}, {.addr=0xb6a2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb6a2, .value=0xae, .type=IO_READ},
        {.addr=0xb6a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_029F) {
    const struct CPU_State initial_cpu = {.pc=0x9e34, .a=0xc6, .x=0x23, .y=0x57, .sp=0xdf, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x39}, {.addr=0x9e34, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9e35, .a=0x39, .x=0x23, .y=0x57, .sp=0xe0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x39}, {.addr=0x9e34, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9e34, .value=0xae, .type=IO_READ},
        {.addr=0x9e35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xccb4, .a=0x66, .x=0x82, .y=0xbf, .sp=0x6a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xccb4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xccb5, .a=0x00, .x=0x82, .y=0xbf, .sp=0x6b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xccb4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xccb4, .value=0xae, .type=IO_READ},
        {.addr=0xccb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xf454, .a=0x6e, .x=0x94, .y=0xf8, .sp=0x7b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xab}, {.addr=0xf454, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf455, .a=0xab, .x=0x94, .y=0xf8, .sp=0x7c, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xab}, {.addr=0xf454, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf454, .value=0xae, .type=IO_READ},
        {.addr=0xf455, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xa9bf, .a=0x22, .x=0xf9, .y=0x43, .sp=0x57, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x53}, {.addr=0xa9bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa9c0, .a=0x53, .x=0xf9, .y=0x43, .sp=0x58, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x53}, {.addr=0xa9bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa9bf, .value=0xae, .type=IO_READ},
        {.addr=0xa9c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xc172, .a=0xd4, .x=0x5c, .y=0xed, .sp=0x94, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x57}, {.addr=0xc172, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc173, .a=0x57, .x=0x5c, .y=0xed, .sp=0x95, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x57}, {.addr=0xc172, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc172, .value=0xae, .type=IO_READ},
        {.addr=0xc173, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x0328, .a=0x33, .x=0xd0, .y=0x65, .sp=0xd5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x5a}, {.addr=0x0328, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0329, .a=0x5a, .x=0xd0, .y=0x65, .sp=0xd6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x5a}, {.addr=0x0328, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0328, .value=0xae, .type=IO_READ},
        {.addr=0x0329, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x9f3f, .a=0xc4, .x=0xdb, .y=0x27, .sp=0x20, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xd9}, {.addr=0x9f3f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f40, .a=0xd9, .x=0xdb, .y=0x27, .sp=0x21, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xd9}, {.addr=0x9f3f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f3f, .value=0xae, .type=IO_READ},
        {.addr=0x9f40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x913b, .a=0x90, .x=0xa6, .y=0x4a, .sp=0x1f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xab}, {.addr=0x913b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x913c, .a=0xab, .x=0xa6, .y=0x4a, .sp=0x20, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xab}, {.addr=0x913b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x913b, .value=0xae, .type=IO_READ},
        {.addr=0x913c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x383b, .a=0x72, .x=0xca, .y=0x63, .sp=0xa9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x25}, {.addr=0x383b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x383c, .a=0x25, .x=0xca, .y=0x63, .sp=0xaa, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x25}, {.addr=0x383b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x383b, .value=0xae, .type=IO_READ},
        {.addr=0x383c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xf386, .a=0x75, .x=0x9e, .y=0xf8, .sp=0x78, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xc2}, {.addr=0xf386, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf387, .a=0xc2, .x=0x9e, .y=0xf8, .sp=0x79, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xc2}, {.addr=0xf386, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf386, .value=0xae, .type=IO_READ},
        {.addr=0xf387, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xccc1, .a=0x23, .x=0x9b, .y=0x3c, .sp=0x98, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xef}, {.addr=0xccc1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xccc2, .a=0xef, .x=0x9b, .y=0x3c, .sp=0x99, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xef}, {.addr=0xccc1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xccc1, .value=0xae, .type=IO_READ},
        {.addr=0xccc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6085, .a=0xea, .x=0xe7, .y=0x7e, .sp=0xa1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x99}, {.addr=0x6085, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6086, .a=0x99, .x=0xe7, .y=0x7e, .sp=0xa2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x99}, {.addr=0x6085, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6085, .value=0xae, .type=IO_READ},
        {.addr=0x6086, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x8730, .a=0x91, .x=0x52, .y=0x3d, .sp=0x71, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xe4}, {.addr=0x8730, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8731, .a=0xe4, .x=0x52, .y=0x3d, .sp=0x72, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xe4}, {.addr=0x8730, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8730, .value=0xae, .type=IO_READ},
        {.addr=0x8731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x7332, .a=0xd6, .x=0x10, .y=0xf4, .sp=0x6a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x9c}, {.addr=0x7332, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7333, .a=0x9c, .x=0x10, .y=0xf4, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x9c}, {.addr=0x7332, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7332, .value=0xae, .type=IO_READ},
        {.addr=0x7333, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x8007, .a=0x71, .x=0x3e, .y=0xb1, .sp=0xde, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x84}, {.addr=0x8007, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8008, .a=0x84, .x=0x3e, .y=0xb1, .sp=0xdf, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x84}, {.addr=0x8007, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8007, .value=0xae, .type=IO_READ},
        {.addr=0x8008, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xbbff, .a=0xef, .x=0x5c, .y=0x97, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x10}, {.addr=0xbbff, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbc00, .a=0x10, .x=0x5c, .y=0x97, .sp=0xcb, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x10}, {.addr=0xbbff, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbbff, .value=0xae, .type=IO_READ},
        {.addr=0xbc00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x5f52, .a=0x2b, .x=0xa8, .y=0x0e, .sp=0xb4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x34}, {.addr=0x5f52, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5f53, .a=0x34, .x=0xa8, .y=0x0e, .sp=0xb5, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x34}, {.addr=0x5f52, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5f52, .value=0xae, .type=IO_READ},
        {.addr=0x5f53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xa06b, .a=0x22, .x=0x53, .y=0xd4, .sp=0x18, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x57}, {.addr=0xa06b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0x57, .x=0x53, .y=0xd4, .sp=0x19, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x57}, {.addr=0xa06b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa06b, .value=0xae, .type=IO_READ},
        {.addr=0xa06c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x3d91, .a=0x4f, .x=0x05, .y=0x3f, .sp=0x5d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x97}, {.addr=0x3d91, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3d92, .a=0x97, .x=0x05, .y=0x3f, .sp=0x5e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x97}, {.addr=0x3d91, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3d91, .value=0xae, .type=IO_READ},
        {.addr=0x3d92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xcc0c, .a=0x0c, .x=0x42, .y=0xaf, .sp=0x05, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x61}, {.addr=0xcc0c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcc0d, .a=0x61, .x=0x42, .y=0xaf, .sp=0x06, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x61}, {.addr=0xcc0c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcc0c, .value=0xae, .type=IO_READ},
        {.addr=0xcc0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xb84f, .a=0x18, .x=0x79, .y=0x24, .sp=0xcc, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x46}, {.addr=0xb84f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb850, .a=0x46, .x=0x79, .y=0x24, .sp=0xcd, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x46}, {.addr=0xb84f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb84f, .value=0xae, .type=IO_READ},
        {.addr=0xb850, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7ccc, .a=0xc1, .x=0x54, .y=0xea, .sp=0x19, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xb3}, {.addr=0x7ccc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7ccd, .a=0xb3, .x=0x54, .y=0xea, .sp=0x1a, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xb3}, {.addr=0x7ccc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7ccc, .value=0xae, .type=IO_READ},
        {.addr=0x7ccd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x20c9, .a=0x00, .x=0x92, .y=0x68, .sp=0x4a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x67}, {.addr=0x20c9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x20ca, .a=0x67, .x=0x92, .y=0x68, .sp=0x4b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x67}, {.addr=0x20c9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x20c9, .value=0xae, .type=IO_READ},
        {.addr=0x20ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x5231, .a=0x11, .x=0x5e, .y=0x2f, .sp=0xc2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xc5}, {.addr=0x5231, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5232, .a=0xc5, .x=0x5e, .y=0x2f, .sp=0xc3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xc5}, {.addr=0x5231, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5231, .value=0xae, .type=IO_READ},
        {.addr=0x5232, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x2d8d, .a=0x7e, .x=0xb2, .y=0xdc, .sp=0x11, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xa3}, {.addr=0x2d8d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2d8e, .a=0xa3, .x=0xb2, .y=0xdc, .sp=0x12, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xa3}, {.addr=0x2d8d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2d8d, .value=0xae, .type=IO_READ},
        {.addr=0x2d8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x5274, .a=0x41, .x=0x58, .y=0x12, .sp=0x60, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x27}, {.addr=0x5274, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5275, .a=0x27, .x=0x58, .y=0x12, .sp=0x61, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x27}, {.addr=0x5274, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5274, .value=0xae, .type=IO_READ},
        {.addr=0x5275, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xdded, .a=0x95, .x=0x3a, .y=0x67, .sp=0xb4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x29}, {.addr=0xdded, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xddee, .a=0x29, .x=0x3a, .y=0x67, .sp=0xb5, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x29}, {.addr=0xdded, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdded, .value=0xae, .type=IO_READ},
        {.addr=0xddee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x925b, .a=0x0d, .x=0xe0, .y=0x43, .sp=0x59, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x0a}, {.addr=0x925b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x925c, .a=0x0a, .x=0xe0, .y=0x43, .sp=0x5a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x0a}, {.addr=0x925b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x925b, .value=0xae, .type=IO_READ},
        {.addr=0x925c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x8880, .a=0x79, .x=0x06, .y=0x5b, .sp=0xcc, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x94}, {.addr=0x8880, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8881, .a=0x94, .x=0x06, .y=0x5b, .sp=0xcd, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x94}, {.addr=0x8880, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8880, .value=0xae, .type=IO_READ},
        {.addr=0x8881, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xf218, .a=0xc1, .x=0x23, .y=0x84, .sp=0x80, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x9f}, {.addr=0xf218, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf219, .a=0x9f, .x=0x23, .y=0x84, .sp=0x81, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x9f}, {.addr=0xf218, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf218, .value=0xae, .type=IO_READ},
        {.addr=0xf219, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc554, .a=0x9c, .x=0xde, .y=0xa3, .sp=0x98, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x14}, {.addr=0xc554, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc555, .a=0x14, .x=0xde, .y=0xa3, .sp=0x99, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x14}, {.addr=0xc554, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc554, .value=0xae, .type=IO_READ},
        {.addr=0xc555, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x17e7, .a=0x17, .x=0x0b, .y=0x42, .sp=0xea, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x71}, {.addr=0x17e7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x17e8, .a=0x71, .x=0x0b, .y=0x42, .sp=0xeb, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x71}, {.addr=0x17e7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x17e7, .value=0xae, .type=IO_READ},
        {.addr=0x17e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x94ae, .a=0x51, .x=0xe0, .y=0x1c, .sp=0x27, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x0b}, {.addr=0x94ae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x94af, .a=0x0b, .x=0xe0, .y=0x1c, .sp=0x28, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x0b}, {.addr=0x94ae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x94ae, .value=0xae, .type=IO_READ},
        {.addr=0x94af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x58a1, .a=0xb6, .x=0x79, .y=0xd5, .sp=0x5e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x3c}, {.addr=0x58a1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x58a2, .a=0x3c, .x=0x79, .y=0xd5, .sp=0x5f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x3c}, {.addr=0x58a1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x58a1, .value=0xae, .type=IO_READ},
        {.addr=0x58a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xef65, .a=0xd3, .x=0xdd, .y=0xc9, .sp=0xed, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xd5}, {.addr=0xef65, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xef66, .a=0xd5, .x=0xdd, .y=0xc9, .sp=0xee, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xd5}, {.addr=0xef65, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xef65, .value=0xae, .type=IO_READ},
        {.addr=0xef66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x0da6, .a=0x16, .x=0x7e, .y=0xbf, .sp=0x69, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x52}, {.addr=0x0da6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0da7, .a=0x52, .x=0x7e, .y=0xbf, .sp=0x6a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x52}, {.addr=0x0da6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0da6, .value=0xae, .type=IO_READ},
        {.addr=0x0da7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xc462, .a=0x27, .x=0x5e, .y=0x86, .sp=0xac, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xe1}, {.addr=0xc462, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc463, .a=0xe1, .x=0x5e, .y=0x86, .sp=0xad, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xe1}, {.addr=0xc462, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc462, .value=0xae, .type=IO_READ},
        {.addr=0xc463, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x804f, .a=0xac, .x=0x1b, .y=0x6d, .sp=0xce, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x29}, {.addr=0x804f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8050, .a=0x29, .x=0x1b, .y=0x6d, .sp=0xcf, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x29}, {.addr=0x804f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x804f, .value=0xae, .type=IO_READ},
        {.addr=0x8050, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x8ae8, .a=0xbd, .x=0xf8, .y=0xaf, .sp=0xda, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x3c}, {.addr=0x8ae8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8ae9, .a=0x3c, .x=0xf8, .y=0xaf, .sp=0xdb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x3c}, {.addr=0x8ae8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8ae8, .value=0xae, .type=IO_READ},
        {.addr=0x8ae9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xa55d, .a=0xba, .x=0xf7, .y=0x03, .sp=0xc8, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xd7}, {.addr=0xa55d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa55e, .a=0xd7, .x=0xf7, .y=0x03, .sp=0xc9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xd7}, {.addr=0xa55d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa55d, .value=0xae, .type=IO_READ},
        {.addr=0xa55e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x3a8f, .a=0xee, .x=0xb0, .y=0xd6, .sp=0x42, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x4b}, {.addr=0x3a8f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3a90, .a=0x4b, .x=0xb0, .y=0xd6, .sp=0x43, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x4b}, {.addr=0x3a8f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3a8f, .value=0xae, .type=IO_READ},
        {.addr=0x3a90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xd98c, .a=0x23, .x=0x7d, .y=0x77, .sp=0xf4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x42}, {.addr=0xd98c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd98d, .a=0x42, .x=0x7d, .y=0x77, .sp=0xf5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x42}, {.addr=0xd98c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd98c, .value=0xae, .type=IO_READ},
        {.addr=0xd98d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x7a30, .a=0xe4, .x=0x3a, .y=0x73, .sp=0x51, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x14}, {.addr=0x7a30, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7a31, .a=0x14, .x=0x3a, .y=0x73, .sp=0x52, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x14}, {.addr=0x7a30, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7a30, .value=0xae, .type=IO_READ},
        {.addr=0x7a31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x1e49, .a=0xdc, .x=0x72, .y=0x7f, .sp=0xee, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xf8}, {.addr=0x1e49, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1e4a, .a=0xf8, .x=0x72, .y=0x7f, .sp=0xef, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xf8}, {.addr=0x1e49, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1e49, .value=0xae, .type=IO_READ},
        {.addr=0x1e4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4772, .a=0x40, .x=0xa0, .y=0x88, .sp=0x2c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xc5}, {.addr=0x4772, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4773, .a=0xc5, .x=0xa0, .y=0x88, .sp=0x2d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xc5}, {.addr=0x4772, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4772, .value=0xae, .type=IO_READ},
        {.addr=0x4773, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x038c, .a=0x7c, .x=0xa8, .y=0x4f, .sp=0xd8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x9e}, {.addr=0x038c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x038d, .a=0x9e, .x=0xa8, .y=0x4f, .sp=0xd9, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x9e}, {.addr=0x038c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x038c, .value=0xae, .type=IO_READ},
        {.addr=0x038d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x31c9, .a=0x48, .x=0x53, .y=0x38, .sp=0xc9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x43}, {.addr=0x31c9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x31ca, .a=0x43, .x=0x53, .y=0x38, .sp=0xca, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x43}, {.addr=0x31c9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x31c9, .value=0xae, .type=IO_READ},
        {.addr=0x31ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x9062, .a=0x7b, .x=0x96, .y=0x4b, .sp=0x76, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x38}, {.addr=0x9062, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9063, .a=0x38, .x=0x96, .y=0x4b, .sp=0x77, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x38}, {.addr=0x9062, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9062, .value=0xae, .type=IO_READ},
        {.addr=0x9063, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x9132, .a=0x8d, .x=0x58, .y=0x11, .sp=0xfd, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xf2}, {.addr=0x9132, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9133, .a=0xf2, .x=0x58, .y=0x11, .sp=0xfe, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xf2}, {.addr=0x9132, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9132, .value=0xae, .type=IO_READ},
        {.addr=0x9133, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xc3d4, .a=0x98, .x=0x20, .y=0xcf, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x38}, {.addr=0xc3d4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc3d5, .a=0x38, .x=0x20, .y=0xcf, .sp=0x2f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x38}, {.addr=0xc3d4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc3d4, .value=0xae, .type=IO_READ},
        {.addr=0xc3d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x5174, .a=0xfa, .x=0x69, .y=0x7e, .sp=0x9b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x8d}, {.addr=0x5174, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5175, .a=0x8d, .x=0x69, .y=0x7e, .sp=0x9c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x8d}, {.addr=0x5174, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5174, .value=0xae, .type=IO_READ},
        {.addr=0x5175, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xc180, .a=0xca, .x=0x10, .y=0xe1, .sp=0xc7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xb7}, {.addr=0xc180, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc181, .a=0xb7, .x=0x10, .y=0xe1, .sp=0xc8, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xb7}, {.addr=0xc180, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc180, .value=0xae, .type=IO_READ},
        {.addr=0xc181, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x82f8, .a=0x65, .x=0x98, .y=0x79, .sp=0x0b, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x57}, {.addr=0x82f8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82f9, .a=0x57, .x=0x98, .y=0x79, .sp=0x0c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x57}, {.addr=0x82f8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82f8, .value=0xae, .type=IO_READ},
        {.addr=0x82f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x3d33, .a=0x62, .x=0x19, .y=0x0c, .sp=0xed, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x37}, {.addr=0x3d33, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3d34, .a=0x37, .x=0x19, .y=0x0c, .sp=0xee, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x37}, {.addr=0x3d33, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3d33, .value=0xae, .type=IO_READ},
        {.addr=0x3d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xad42, .a=0x80, .x=0xb7, .y=0x7c, .sp=0x72, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xd2}, {.addr=0xad42, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xad43, .a=0xd2, .x=0xb7, .y=0x7c, .sp=0x73, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xd2}, {.addr=0xad42, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xad42, .value=0xae, .type=IO_READ},
        {.addr=0xad43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xea38, .a=0xb8, .x=0xaf, .y=0xf2, .sp=0xdc, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x2d}, {.addr=0xea38, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xea39, .a=0x2d, .x=0xaf, .y=0xf2, .sp=0xdd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x2d}, {.addr=0xea38, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xea38, .value=0xae, .type=IO_READ},
        {.addr=0xea39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x2296, .a=0x8d, .x=0xb9, .y=0xf3, .sp=0x48, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xe8}, {.addr=0x2296, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2297, .a=0xe8, .x=0xb9, .y=0xf3, .sp=0x49, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xe8}, {.addr=0x2296, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2296, .value=0xae, .type=IO_READ},
        {.addr=0x2297, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x7328, .a=0xda, .x=0x34, .y=0x4c, .sp=0xfb, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xde}, {.addr=0x7328, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7329, .a=0xde, .x=0x34, .y=0x4c, .sp=0xfc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xde}, {.addr=0x7328, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7328, .value=0xae, .type=IO_READ},
        {.addr=0x7329, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x0dba, .a=0x63, .x=0xa7, .y=0x98, .sp=0x14, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x55}, {.addr=0x0dba, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0dbb, .a=0x55, .x=0xa7, .y=0x98, .sp=0x15, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x55}, {.addr=0x0dba, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0dba, .value=0xae, .type=IO_READ},
        {.addr=0x0dbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x2460, .a=0x7a, .x=0x7a, .y=0xc0, .sp=0xcd, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xd6}, {.addr=0x2460, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2461, .a=0xd6, .x=0x7a, .y=0xc0, .sp=0xce, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xd6}, {.addr=0x2460, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2460, .value=0xae, .type=IO_READ},
        {.addr=0x2461, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x8b3c, .a=0xcd, .x=0xdd, .y=0x13, .sp=0x9c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xa2}, {.addr=0x8b3c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b3d, .a=0xa2, .x=0xdd, .y=0x13, .sp=0x9d, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xa2}, {.addr=0x8b3c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b3c, .value=0xae, .type=IO_READ},
        {.addr=0x8b3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x1d5e, .a=0x29, .x=0xac, .y=0x6a, .sp=0xf3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xa8}, {.addr=0x1d5e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1d5f, .a=0xa8, .x=0xac, .y=0x6a, .sp=0xf4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xa8}, {.addr=0x1d5e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1d5e, .value=0xae, .type=IO_READ},
        {.addr=0x1d5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xfcbb, .a=0x59, .x=0xb2, .y=0x12, .sp=0x65, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xd1}, {.addr=0xfcbb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfcbc, .a=0xd1, .x=0xb2, .y=0x12, .sp=0x66, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd1}, {.addr=0xfcbb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfcbb, .value=0xae, .type=IO_READ},
        {.addr=0xfcbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xddcd, .a=0x79, .x=0x88, .y=0xf0, .sp=0x5b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xe5}, {.addr=0xddcd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xddce, .a=0xe5, .x=0x88, .y=0xf0, .sp=0x5c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xe5}, {.addr=0xddcd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xddcd, .value=0xae, .type=IO_READ},
        {.addr=0xddce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xa456, .a=0x7a, .x=0x0f, .y=0xc9, .sp=0x54, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x7b}, {.addr=0xa456, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa457, .a=0x7b, .x=0x0f, .y=0xc9, .sp=0x55, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x7b}, {.addr=0xa456, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa456, .value=0xae, .type=IO_READ},
        {.addr=0xa457, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x3a77, .a=0x8a, .x=0x3e, .y=0xac, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xbc}, {.addr=0x3a77, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3a78, .a=0xbc, .x=0x3e, .y=0xac, .sp=0xdc, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xbc}, {.addr=0x3a77, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3a77, .value=0xae, .type=IO_READ},
        {.addr=0x3a78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1f8e, .a=0xb8, .x=0xf5, .y=0xff, .sp=0x93, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xdf}, {.addr=0x1f8e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1f8f, .a=0xdf, .x=0xf5, .y=0xff, .sp=0x94, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xdf}, {.addr=0x1f8e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1f8e, .value=0xae, .type=IO_READ},
        {.addr=0x1f8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xdb09, .a=0xfd, .x=0x23, .y=0x96, .sp=0xad, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x2e}, {.addr=0xdb09, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb0a, .a=0x2e, .x=0x23, .y=0x96, .sp=0xae, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x2e}, {.addr=0xdb09, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb09, .value=0xae, .type=IO_READ},
        {.addr=0xdb0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x1373, .a=0x34, .x=0x35, .y=0x71, .sp=0x7c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xbe}, {.addr=0x1373, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1374, .a=0xbe, .x=0x35, .y=0x71, .sp=0x7d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xbe}, {.addr=0x1373, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1373, .value=0xae, .type=IO_READ},
        {.addr=0x1374, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x4d6b, .a=0xd2, .x=0xd3, .y=0xaf, .sp=0xaf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xa9}, {.addr=0x4d6b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4d6c, .a=0xa9, .x=0xd3, .y=0xaf, .sp=0xb0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xa9}, {.addr=0x4d6b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4d6b, .value=0xae, .type=IO_READ},
        {.addr=0x4d6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x0de9, .a=0x43, .x=0x62, .y=0xf4, .sp=0x83, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xc6}, {.addr=0x0de9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0dea, .a=0xc6, .x=0x62, .y=0xf4, .sp=0x84, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xc6}, {.addr=0x0de9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0de9, .value=0xae, .type=IO_READ},
        {.addr=0x0dea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x4a56, .a=0x53, .x=0x35, .y=0xa5, .sp=0xd7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xb0}, {.addr=0x4a56, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4a57, .a=0xb0, .x=0x35, .y=0xa5, .sp=0xd8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xb0}, {.addr=0x4a56, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4a56, .value=0xae, .type=IO_READ},
        {.addr=0x4a57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x90ee, .a=0xc9, .x=0xbd, .y=0x3d, .sp=0x5f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x9d}, {.addr=0x90ee, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x90ef, .a=0x9d, .x=0xbd, .y=0x3d, .sp=0x60, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x9d}, {.addr=0x90ee, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x90ee, .value=0xae, .type=IO_READ},
        {.addr=0x90ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x6ee7, .a=0x77, .x=0xae, .y=0x2a, .sp=0x17, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x7e}, {.addr=0x6ee7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6ee8, .a=0x7e, .x=0xae, .y=0x2a, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x7e}, {.addr=0x6ee7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ee7, .value=0xae, .type=IO_READ},
        {.addr=0x6ee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x9371, .a=0xb6, .x=0xd7, .y=0xe9, .sp=0x42, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xeb}, {.addr=0x9371, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9372, .a=0xeb, .x=0xd7, .y=0xe9, .sp=0x43, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xeb}, {.addr=0x9371, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9371, .value=0xae, .type=IO_READ},
        {.addr=0x9372, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x17eb, .a=0xd0, .x=0x1e, .y=0x8c, .sp=0x2c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x54}, {.addr=0x17eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x17ec, .a=0x54, .x=0x1e, .y=0x8c, .sp=0x2d, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x54}, {.addr=0x17eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x17eb, .value=0xae, .type=IO_READ},
        {.addr=0x17ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x6673, .a=0xe5, .x=0x01, .y=0x05, .sp=0xd0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xe4}, {.addr=0x6673, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6674, .a=0xe4, .x=0x01, .y=0x05, .sp=0xd1, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xe4}, {.addr=0x6673, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6673, .value=0xae, .type=IO_READ},
        {.addr=0x6674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfbf5, .a=0xc4, .x=0x74, .y=0xb3, .sp=0xfc, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x89}, {.addr=0xfbf5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfbf6, .a=0x89, .x=0x74, .y=0xb3, .sp=0xfd, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x89}, {.addr=0xfbf5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfbf5, .value=0xae, .type=IO_READ},
        {.addr=0xfbf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x7547, .a=0x7b, .x=0xa1, .y=0x5a, .sp=0x56, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x04}, {.addr=0x7547, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7548, .a=0x04, .x=0xa1, .y=0x5a, .sp=0x57, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x04}, {.addr=0x7547, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7547, .value=0xae, .type=IO_READ},
        {.addr=0x7548, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xfd1d, .a=0xca, .x=0xde, .y=0x1b, .sp=0xc5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x0e}, {.addr=0xfd1d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfd1e, .a=0x0e, .x=0xde, .y=0x1b, .sp=0xc6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x0e}, {.addr=0xfd1d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfd1d, .value=0xae, .type=IO_READ},
        {.addr=0xfd1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x8406, .a=0xf0, .x=0x7d, .y=0x55, .sp=0xa6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xb1}, {.addr=0x8406, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8407, .a=0xb1, .x=0x7d, .y=0x55, .sp=0xa7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xb1}, {.addr=0x8406, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8406, .value=0xae, .type=IO_READ},
        {.addr=0x8407, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x5dff, .a=0xd1, .x=0x3a, .y=0xe2, .sp=0x32, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x23}, {.addr=0x5dff, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5e00, .a=0x23, .x=0x3a, .y=0xe2, .sp=0x33, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x23}, {.addr=0x5dff, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5dff, .value=0xae, .type=IO_READ},
        {.addr=0x5e00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x78c5, .a=0x65, .x=0x04, .y=0xa8, .sp=0xdc, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xbb}, {.addr=0x78c5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x78c6, .a=0xbb, .x=0x04, .y=0xa8, .sp=0xdd, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xbb}, {.addr=0x78c5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x78c5, .value=0xae, .type=IO_READ},
        {.addr=0x78c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xbf99, .a=0xe2, .x=0x86, .y=0xb6, .sp=0x15, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x58}, {.addr=0xbf99, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf9a, .a=0x58, .x=0x86, .y=0xb6, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x58}, {.addr=0xbf99, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf99, .value=0xae, .type=IO_READ},
        {.addr=0xbf9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x6256, .a=0xa4, .x=0x07, .y=0xd8, .sp=0xd0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x6256, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6257, .a=0x00, .x=0x07, .y=0xd8, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x6256, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6256, .value=0xae, .type=IO_READ},
        {.addr=0x6257, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x6ae9, .a=0x4b, .x=0x3c, .y=0x1d, .sp=0x83, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x5c}, {.addr=0x6ae9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6aea, .a=0x5c, .x=0x3c, .y=0x1d, .sp=0x84, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x5c}, {.addr=0x6ae9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ae9, .value=0xae, .type=IO_READ},
        {.addr=0x6aea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xc230, .a=0x3b, .x=0xa9, .y=0x85, .sp=0x9b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xb4}, {.addr=0xc230, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc231, .a=0xb4, .x=0xa9, .y=0x85, .sp=0x9c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xb4}, {.addr=0xc230, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc230, .value=0xae, .type=IO_READ},
        {.addr=0xc231, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xf778, .a=0x77, .x=0xf6, .y=0x68, .sp=0x20, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x03}, {.addr=0xf778, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf779, .a=0x03, .x=0xf6, .y=0x68, .sp=0x21, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x03}, {.addr=0xf778, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf778, .value=0xae, .type=IO_READ},
        {.addr=0xf779, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x0100, .a=0x6b, .x=0x94, .y=0xe8, .sp=0x0b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xae}, {.addr=0x010c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0101, .a=0x0d, .x=0x94, .y=0xe8, .sp=0x0c, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xae}, {.addr=0x010c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0100, .value=0xae, .type=IO_READ},
        {.addr=0x0101, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x4848, .a=0x9a, .x=0x87, .y=0x27, .sp=0x11, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x0c}, {.addr=0x4848, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4849, .a=0x0c, .x=0x87, .y=0x27, .sp=0x12, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x0c}, {.addr=0x4848, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4848, .value=0xae, .type=IO_READ},
        {.addr=0x4849, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x4894, .a=0xe7, .x=0x56, .y=0x61, .sp=0x19, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x26}, {.addr=0x4894, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4895, .a=0x26, .x=0x56, .y=0x61, .sp=0x1a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x26}, {.addr=0x4894, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4894, .value=0xae, .type=IO_READ},
        {.addr=0x4895, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xb56b, .a=0x19, .x=0xc1, .y=0x2d, .sp=0xf8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0xfc}, {.addr=0xb56b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb56c, .a=0xfc, .x=0xc1, .y=0x2d, .sp=0xf9, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xfc}, {.addr=0xb56b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb56b, .value=0xae, .type=IO_READ},
        {.addr=0xb56c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xbd20, .a=0x4a, .x=0xe9, .y=0x2d, .sp=0x3e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x66}, {.addr=0xbd20, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd21, .a=0x66, .x=0xe9, .y=0x2d, .sp=0x3f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x66}, {.addr=0xbd20, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd20, .value=0xae, .type=IO_READ},
        {.addr=0xbd21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x1593, .a=0x0f, .x=0xa1, .y=0xde, .sp=0xf3, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xad}, {.addr=0x1593, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1594, .a=0xad, .x=0xa1, .y=0xde, .sp=0xf4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xad}, {.addr=0x1593, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1593, .value=0xae, .type=IO_READ},
        {.addr=0x1594, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xd085, .a=0xd4, .x=0x69, .y=0xfd, .sp=0x3c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x9a}, {.addr=0xd085, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd086, .a=0x9a, .x=0x69, .y=0xfd, .sp=0x3d, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x9a}, {.addr=0xd085, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd085, .value=0xae, .type=IO_READ},
        {.addr=0xd086, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x7db5, .a=0x5b, .x=0x80, .y=0x4b, .sp=0xab, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x7db5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7db6, .a=0x00, .x=0x80, .y=0x4b, .sp=0xac, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x7db5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7db5, .value=0xae, .type=IO_READ},
        {.addr=0x7db6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x9960, .a=0xd3, .x=0xdb, .y=0x62, .sp=0xb8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x2a}, {.addr=0x9960, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9961, .a=0x2a, .x=0xdb, .y=0x62, .sp=0xb9, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x2a}, {.addr=0x9960, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9960, .value=0xae, .type=IO_READ},
        {.addr=0x9961, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0300) {
    const struct CPU_State initial_cpu = {.pc=0x63c4, .a=0x8d, .x=0xdd, .y=0x80, .sp=0x98, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x7a}, {.addr=0x63c4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63c5, .a=0x7a, .x=0xdd, .y=0x80, .sp=0x99, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x7a}, {.addr=0x63c4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63c4, .value=0xae, .type=IO_READ},
        {.addr=0x63c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0301) {
    const struct CPU_State initial_cpu = {.pc=0xdffd, .a=0xec, .x=0xf2, .y=0xa8, .sp=0x63, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xa8}, {.addr=0xdffd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdffe, .a=0xa8, .x=0xf2, .y=0xa8, .sp=0x64, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa8}, {.addr=0xdffd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdffd, .value=0xae, .type=IO_READ},
        {.addr=0xdffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0302) {
    const struct CPU_State initial_cpu = {.pc=0xf563, .a=0x83, .x=0xc7, .y=0x0c, .sp=0xa7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x35}, {.addr=0xf563, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf564, .a=0x35, .x=0xc7, .y=0x0c, .sp=0xa8, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x35}, {.addr=0xf563, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf563, .value=0xae, .type=IO_READ},
        {.addr=0xf564, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0303) {
    const struct CPU_State initial_cpu = {.pc=0xe803, .a=0x50, .x=0xec, .y=0x3e, .sp=0x0a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xdc}, {.addr=0xe803, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe804, .a=0xdc, .x=0xec, .y=0x3e, .sp=0x0b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xdc}, {.addr=0xe803, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe803, .value=0xae, .type=IO_READ},
        {.addr=0xe804, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0304) {
    const struct CPU_State initial_cpu = {.pc=0x02f8, .a=0x92, .x=0xd3, .y=0x0e, .sp=0xdb, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xcf}, {.addr=0x02f8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x02f9, .a=0xcf, .x=0xd3, .y=0x0e, .sp=0xdc, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xcf}, {.addr=0x02f8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x02f8, .value=0xae, .type=IO_READ},
        {.addr=0x02f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0305) {
    const struct CPU_State initial_cpu = {.pc=0x5baa, .a=0x3c, .x=0xe8, .y=0xb5, .sp=0x8d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x0d}, {.addr=0x5baa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5bab, .a=0x0d, .x=0xe8, .y=0xb5, .sp=0x8e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x0d}, {.addr=0x5baa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5baa, .value=0xae, .type=IO_READ},
        {.addr=0x5bab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0306) {
    const struct CPU_State initial_cpu = {.pc=0xcc95, .a=0xf1, .x=0xf6, .y=0x61, .sp=0x64, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x72}, {.addr=0xcc95, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcc96, .a=0x72, .x=0xf6, .y=0x61, .sp=0x65, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x72}, {.addr=0xcc95, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcc95, .value=0xae, .type=IO_READ},
        {.addr=0xcc96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0307) {
    const struct CPU_State initial_cpu = {.pc=0x92d1, .a=0xc3, .x=0xf9, .y=0xdf, .sp=0x4c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xa7}, {.addr=0x92d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x92d2, .a=0xa7, .x=0xf9, .y=0xdf, .sp=0x4d, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xa7}, {.addr=0x92d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x92d1, .value=0xae, .type=IO_READ},
        {.addr=0x92d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0308) {
    const struct CPU_State initial_cpu = {.pc=0xe482, .a=0x8b, .x=0xdd, .y=0x40, .sp=0x02, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xa0}, {.addr=0xe482, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe483, .a=0xa0, .x=0xdd, .y=0x40, .sp=0x03, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xa0}, {.addr=0xe482, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe482, .value=0xae, .type=IO_READ},
        {.addr=0xe483, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0309) {
    const struct CPU_State initial_cpu = {.pc=0xec0c, .a=0x64, .x=0xbb, .y=0x71, .sp=0xe0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x81}, {.addr=0xec0c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xec0d, .a=0x81, .x=0xbb, .y=0x71, .sp=0xe1, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x81}, {.addr=0xec0c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xec0c, .value=0xae, .type=IO_READ},
        {.addr=0xec0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030A) {
    const struct CPU_State initial_cpu = {.pc=0x343f, .a=0xf1, .x=0xef, .y=0xb0, .sp=0xbc, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xa3}, {.addr=0x343f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3440, .a=0xa3, .x=0xef, .y=0xb0, .sp=0xbd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xa3}, {.addr=0x343f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x343f, .value=0xae, .type=IO_READ},
        {.addr=0x3440, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030B) {
    const struct CPU_State initial_cpu = {.pc=0x173b, .a=0x05, .x=0xb9, .y=0x0f, .sp=0x9d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x8e}, {.addr=0x173b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x173c, .a=0x8e, .x=0xb9, .y=0x0f, .sp=0x9e, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x8e}, {.addr=0x173b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x173b, .value=0xae, .type=IO_READ},
        {.addr=0x173c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030C) {
    const struct CPU_State initial_cpu = {.pc=0x3d9b, .a=0x2c, .x=0xbd, .y=0x4d, .sp=0xad, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xab}, {.addr=0x3d9b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3d9c, .a=0xab, .x=0xbd, .y=0x4d, .sp=0xae, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xab}, {.addr=0x3d9b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3d9b, .value=0xae, .type=IO_READ},
        {.addr=0x3d9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030D) {
    const struct CPU_State initial_cpu = {.pc=0xd2b7, .a=0xf1, .x=0x10, .y=0x11, .sp=0x87, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x4f}, {.addr=0xd2b7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd2b8, .a=0x4f, .x=0x10, .y=0x11, .sp=0x88, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x4f}, {.addr=0xd2b7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd2b7, .value=0xae, .type=IO_READ},
        {.addr=0xd2b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030E) {
    const struct CPU_State initial_cpu = {.pc=0x8a6e, .a=0x9f, .x=0x23, .y=0xeb, .sp=0xc2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xa9}, {.addr=0x8a6e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8a6f, .a=0xa9, .x=0x23, .y=0xeb, .sp=0xc3, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xa9}, {.addr=0x8a6e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8a6e, .value=0xae, .type=IO_READ},
        {.addr=0x8a6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_030F) {
    const struct CPU_State initial_cpu = {.pc=0x2b5e, .a=0xcd, .x=0x6d, .y=0xb0, .sp=0x10, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xbd}, {.addr=0x2b5e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2b5f, .a=0xbd, .x=0x6d, .y=0xb0, .sp=0x11, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xbd}, {.addr=0x2b5e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2b5e, .value=0xae, .type=IO_READ},
        {.addr=0x2b5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0310) {
    const struct CPU_State initial_cpu = {.pc=0x2570, .a=0xea, .x=0xf2, .y=0xaa, .sp=0x64, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xa2}, {.addr=0x2570, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2571, .a=0xa2, .x=0xf2, .y=0xaa, .sp=0x65, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xa2}, {.addr=0x2570, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2570, .value=0xae, .type=IO_READ},
        {.addr=0x2571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0311) {
    const struct CPU_State initial_cpu = {.pc=0x706d, .a=0xd4, .x=0x0b, .y=0x03, .sp=0x9a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x57}, {.addr=0x706d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0x57, .x=0x0b, .y=0x03, .sp=0x9b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x57}, {.addr=0x706d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x706d, .value=0xae, .type=IO_READ},
        {.addr=0x706e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0312) {
    const struct CPU_State initial_cpu = {.pc=0x933c, .a=0x6b, .x=0x2d, .y=0x19, .sp=0x1e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x1a}, {.addr=0x933c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x933d, .a=0x1a, .x=0x2d, .y=0x19, .sp=0x1f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x1a}, {.addr=0x933c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x933c, .value=0xae, .type=IO_READ},
        {.addr=0x933d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0313) {
    const struct CPU_State initial_cpu = {.pc=0x64c1, .a=0x78, .x=0x9b, .y=0x15, .sp=0xf9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xc8}, {.addr=0x64c1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x64c2, .a=0xc8, .x=0x9b, .y=0x15, .sp=0xfa, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xc8}, {.addr=0x64c1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x64c1, .value=0xae, .type=IO_READ},
        {.addr=0x64c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0314) {
    const struct CPU_State initial_cpu = {.pc=0x7ab1, .a=0xbd, .x=0x88, .y=0x89, .sp=0xb2, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xa7}, {.addr=0x7ab1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7ab2, .a=0xa7, .x=0x88, .y=0x89, .sp=0xb3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xa7}, {.addr=0x7ab1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7ab1, .value=0xae, .type=IO_READ},
        {.addr=0x7ab2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0315) {
    const struct CPU_State initial_cpu = {.pc=0xe487, .a=0xf8, .x=0x4f, .y=0x63, .sp=0x90, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xfc}, {.addr=0xe487, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe488, .a=0xfc, .x=0x4f, .y=0x63, .sp=0x91, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xfc}, {.addr=0xe487, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe487, .value=0xae, .type=IO_READ},
        {.addr=0xe488, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0316) {
    const struct CPU_State initial_cpu = {.pc=0x32ec, .a=0xc8, .x=0x44, .y=0xa5, .sp=0x58, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x6a}, {.addr=0x32ec, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x32ed, .a=0x6a, .x=0x44, .y=0xa5, .sp=0x59, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x6a}, {.addr=0x32ec, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x32ec, .value=0xae, .type=IO_READ},
        {.addr=0x32ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0317) {
    const struct CPU_State initial_cpu = {.pc=0xef9e, .a=0x5e, .x=0x98, .y=0xda, .sp=0xad, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xd7}, {.addr=0xef9e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xef9f, .a=0xd7, .x=0x98, .y=0xda, .sp=0xae, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xd7}, {.addr=0xef9e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xef9e, .value=0xae, .type=IO_READ},
        {.addr=0xef9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0318) {
    const struct CPU_State initial_cpu = {.pc=0x9f8e, .a=0x57, .x=0xb9, .y=0x78, .sp=0xf2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x5e}, {.addr=0x9f8e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9f8f, .a=0x5e, .x=0xb9, .y=0x78, .sp=0xf3, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x5e}, {.addr=0x9f8e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9f8e, .value=0xae, .type=IO_READ},
        {.addr=0x9f8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0319) {
    const struct CPU_State initial_cpu = {.pc=0x3b03, .a=0xcc, .x=0x98, .y=0x31, .sp=0x14, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x3c}, {.addr=0x3b03, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3b04, .a=0x3c, .x=0x98, .y=0x31, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x3c}, {.addr=0x3b03, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3b03, .value=0xae, .type=IO_READ},
        {.addr=0x3b04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031A) {
    const struct CPU_State initial_cpu = {.pc=0xaa75, .a=0x6f, .x=0xbf, .y=0xa3, .sp=0x4e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x6d}, {.addr=0xaa75, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaa76, .a=0x6d, .x=0xbf, .y=0xa3, .sp=0x4f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x6d}, {.addr=0xaa75, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaa75, .value=0xae, .type=IO_READ},
        {.addr=0xaa76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8dda, .a=0x5f, .x=0x59, .y=0x9f, .sp=0x36, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x70}, {.addr=0x8dda, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8ddb, .a=0x70, .x=0x59, .y=0x9f, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x70}, {.addr=0x8dda, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8dda, .value=0xae, .type=IO_READ},
        {.addr=0x8ddb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031C) {
    const struct CPU_State initial_cpu = {.pc=0x185b, .a=0xde, .x=0x7d, .y=0xb9, .sp=0x67, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xdc}, {.addr=0x185b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x185c, .a=0xdc, .x=0x7d, .y=0xb9, .sp=0x68, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xdc}, {.addr=0x185b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x185b, .value=0xae, .type=IO_READ},
        {.addr=0x185c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031D) {
    const struct CPU_State initial_cpu = {.pc=0x1343, .a=0x24, .x=0x67, .y=0x2b, .sp=0x20, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xd4}, {.addr=0x1343, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1344, .a=0xd4, .x=0x67, .y=0x2b, .sp=0x21, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xd4}, {.addr=0x1343, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1343, .value=0xae, .type=IO_READ},
        {.addr=0x1344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031E) {
    const struct CPU_State initial_cpu = {.pc=0xbd24, .a=0xa1, .x=0xc3, .y=0x90, .sp=0x5c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x32}, {.addr=0xbd24, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd25, .a=0x32, .x=0xc3, .y=0x90, .sp=0x5d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x32}, {.addr=0xbd24, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbd24, .value=0xae, .type=IO_READ},
        {.addr=0xbd25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_031F) {
    const struct CPU_State initial_cpu = {.pc=0x7a05, .a=0x79, .x=0x08, .y=0x81, .sp=0x58, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x35}, {.addr=0x7a05, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7a06, .a=0x35, .x=0x08, .y=0x81, .sp=0x59, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x35}, {.addr=0x7a05, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7a05, .value=0xae, .type=IO_READ},
        {.addr=0x7a06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0320) {
    const struct CPU_State initial_cpu = {.pc=0xf595, .a=0x8a, .x=0xba, .y=0x64, .sp=0xf7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x3c}, {.addr=0xf595, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf596, .a=0x3c, .x=0xba, .y=0x64, .sp=0xf8, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x3c}, {.addr=0xf595, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf595, .value=0xae, .type=IO_READ},
        {.addr=0xf596, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0321) {
    const struct CPU_State initial_cpu = {.pc=0x86ea, .a=0xa7, .x=0x7c, .y=0xa3, .sp=0xfe, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xc3}, {.addr=0x86ea, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x86eb, .a=0xc3, .x=0x7c, .y=0xa3, .sp=0xff, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xc3}, {.addr=0x86ea, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x86ea, .value=0xae, .type=IO_READ},
        {.addr=0x86eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0322) {
    const struct CPU_State initial_cpu = {.pc=0x5681, .a=0xed, .x=0x90, .y=0xd7, .sp=0x9a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xa7}, {.addr=0x5681, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5682, .a=0xa7, .x=0x90, .y=0xd7, .sp=0x9b, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xa7}, {.addr=0x5681, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5681, .value=0xae, .type=IO_READ},
        {.addr=0x5682, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0323) {
    const struct CPU_State initial_cpu = {.pc=0x941a, .a=0x38, .x=0x7b, .y=0x30, .sp=0x0d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x86}, {.addr=0x941a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x941b, .a=0x86, .x=0x7b, .y=0x30, .sp=0x0e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x86}, {.addr=0x941a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x941a, .value=0xae, .type=IO_READ},
        {.addr=0x941b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0324) {
    const struct CPU_State initial_cpu = {.pc=0x5b71, .a=0x03, .x=0xda, .y=0xbe, .sp=0x04, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x7e}, {.addr=0x5b71, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5b72, .a=0x7e, .x=0xda, .y=0xbe, .sp=0x05, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x7e}, {.addr=0x5b71, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5b71, .value=0xae, .type=IO_READ},
        {.addr=0x5b72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0325) {
    const struct CPU_State initial_cpu = {.pc=0x05fb, .a=0xc3, .x=0x88, .y=0xb4, .sp=0x1c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x4a}, {.addr=0x05fb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x05fc, .a=0x4a, .x=0x88, .y=0xb4, .sp=0x1d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x4a}, {.addr=0x05fb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x05fb, .value=0xae, .type=IO_READ},
        {.addr=0x05fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0326) {
    const struct CPU_State initial_cpu = {.pc=0x2476, .a=0x19, .x=0x2f, .y=0x97, .sp=0x81, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xec}, {.addr=0x2476, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2477, .a=0xec, .x=0x2f, .y=0x97, .sp=0x82, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xec}, {.addr=0x2476, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2476, .value=0xae, .type=IO_READ},
        {.addr=0x2477, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0327) {
    const struct CPU_State initial_cpu = {.pc=0xdfea, .a=0xae, .x=0xde, .y=0xe3, .sp=0x7b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x64}, {.addr=0xdfea, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdfeb, .a=0x64, .x=0xde, .y=0xe3, .sp=0x7c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x64}, {.addr=0xdfea, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdfea, .value=0xae, .type=IO_READ},
        {.addr=0xdfeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0328) {
    const struct CPU_State initial_cpu = {.pc=0x2535, .a=0x4a, .x=0x5c, .y=0x92, .sp=0xc2, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xbc}, {.addr=0x2535, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2536, .a=0xbc, .x=0x5c, .y=0x92, .sp=0xc3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xbc}, {.addr=0x2535, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2535, .value=0xae, .type=IO_READ},
        {.addr=0x2536, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0329) {
    const struct CPU_State initial_cpu = {.pc=0x5251, .a=0x27, .x=0xf9, .y=0x5f, .sp=0x79, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x9e}, {.addr=0x5251, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5252, .a=0x9e, .x=0xf9, .y=0x5f, .sp=0x7a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x9e}, {.addr=0x5251, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5251, .value=0xae, .type=IO_READ},
        {.addr=0x5252, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5630, .a=0xfe, .x=0xe0, .y=0xe4, .sp=0x7e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xd9}, {.addr=0x5630, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5631, .a=0xd9, .x=0xe0, .y=0xe4, .sp=0x7f, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xd9}, {.addr=0x5630, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5630, .value=0xae, .type=IO_READ},
        {.addr=0x5631, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032B) {
    const struct CPU_State initial_cpu = {.pc=0x5013, .a=0x50, .x=0x3e, .y=0x0e, .sp=0x49, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x6e}, {.addr=0x5013, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5014, .a=0x6e, .x=0x3e, .y=0x0e, .sp=0x4a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x6e}, {.addr=0x5013, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5013, .value=0xae, .type=IO_READ},
        {.addr=0x5014, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032C) {
    const struct CPU_State initial_cpu = {.pc=0x708d, .a=0xd2, .x=0x37, .y=0x55, .sp=0x26, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xea}, {.addr=0x708d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x708e, .a=0xea, .x=0x37, .y=0x55, .sp=0x27, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xea}, {.addr=0x708d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x708d, .value=0xae, .type=IO_READ},
        {.addr=0x708e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032D) {
    const struct CPU_State initial_cpu = {.pc=0xc3bd, .a=0x2a, .x=0xbe, .y=0x23, .sp=0xc8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xec}, {.addr=0xc3bd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc3be, .a=0xec, .x=0xbe, .y=0x23, .sp=0xc9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xec}, {.addr=0xc3bd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc3bd, .value=0xae, .type=IO_READ},
        {.addr=0xc3be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032E) {
    const struct CPU_State initial_cpu = {.pc=0xcc0e, .a=0xfa, .x=0x45, .y=0x69, .sp=0x4d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xee}, {.addr=0xcc0e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcc0f, .a=0xee, .x=0x45, .y=0x69, .sp=0x4e, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xee}, {.addr=0xcc0e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcc0e, .value=0xae, .type=IO_READ},
        {.addr=0xcc0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_032F) {
    const struct CPU_State initial_cpu = {.pc=0xe3bf, .a=0xcd, .x=0x54, .y=0x42, .sp=0x16, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xf1}, {.addr=0xe3bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe3c0, .a=0xf1, .x=0x54, .y=0x42, .sp=0x17, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xf1}, {.addr=0xe3bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe3bf, .value=0xae, .type=IO_READ},
        {.addr=0xe3c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2fc6, .a=0x57, .x=0xb8, .y=0xf3, .sp=0x0b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x52}, {.addr=0x2fc6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2fc7, .a=0x52, .x=0xb8, .y=0xf3, .sp=0x0c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x52}, {.addr=0x2fc6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2fc6, .value=0xae, .type=IO_READ},
        {.addr=0x2fc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0331) {
    const struct CPU_State initial_cpu = {.pc=0x86d4, .a=0xdd, .x=0x52, .y=0xed, .sp=0xe2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xd2}, {.addr=0x86d4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x86d5, .a=0xd2, .x=0x52, .y=0xed, .sp=0xe3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xd2}, {.addr=0x86d4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x86d4, .value=0xae, .type=IO_READ},
        {.addr=0x86d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0332) {
    const struct CPU_State initial_cpu = {.pc=0xfd74, .a=0x32, .x=0xcc, .y=0xa1, .sp=0x6e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xfb}, {.addr=0xfd74, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfd75, .a=0xfb, .x=0xcc, .y=0xa1, .sp=0x6f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xfb}, {.addr=0xfd74, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfd74, .value=0xae, .type=IO_READ},
        {.addr=0xfd75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb3ca, .a=0x7d, .x=0x78, .y=0x5c, .sp=0x6d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xac}, {.addr=0xb3ca, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb3cb, .a=0xac, .x=0x78, .y=0x5c, .sp=0x6e, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xac}, {.addr=0xb3ca, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb3ca, .value=0xae, .type=IO_READ},
        {.addr=0xb3cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0334) {
    const struct CPU_State initial_cpu = {.pc=0x0611, .a=0xfc, .x=0xf4, .y=0x17, .sp=0x6d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xba}, {.addr=0x0611, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0612, .a=0xba, .x=0xf4, .y=0x17, .sp=0x6e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xba}, {.addr=0x0611, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0611, .value=0xae, .type=IO_READ},
        {.addr=0x0612, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0335) {
    const struct CPU_State initial_cpu = {.pc=0x08ab, .a=0xd6, .x=0x9d, .y=0xf2, .sp=0x1c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x0d}, {.addr=0x08ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x08ac, .a=0x0d, .x=0x9d, .y=0xf2, .sp=0x1d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x0d}, {.addr=0x08ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x08ab, .value=0xae, .type=IO_READ},
        {.addr=0x08ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0336) {
    const struct CPU_State initial_cpu = {.pc=0x6a5f, .a=0xd6, .x=0x2a, .y=0xdf, .sp=0xf7, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x4e}, {.addr=0x6a5f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6a60, .a=0x4e, .x=0x2a, .y=0xdf, .sp=0xf8, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x4e}, {.addr=0x6a5f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6a5f, .value=0xae, .type=IO_READ},
        {.addr=0x6a60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0337) {
    const struct CPU_State initial_cpu = {.pc=0x3015, .a=0x7a, .x=0xad, .y=0xb7, .sp=0x67, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x21}, {.addr=0x3015, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3016, .a=0x21, .x=0xad, .y=0xb7, .sp=0x68, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x21}, {.addr=0x3015, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3015, .value=0xae, .type=IO_READ},
        {.addr=0x3016, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0338) {
    const struct CPU_State initial_cpu = {.pc=0x5957, .a=0x78, .x=0x8e, .y=0x72, .sp=0xc4, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x4c}, {.addr=0x5957, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5958, .a=0x4c, .x=0x8e, .y=0x72, .sp=0xc5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x4c}, {.addr=0x5957, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5957, .value=0xae, .type=IO_READ},
        {.addr=0x5958, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0339) {
    const struct CPU_State initial_cpu = {.pc=0xde23, .a=0x0e, .x=0xa3, .y=0x43, .sp=0x82, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x89}, {.addr=0xde23, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xde24, .a=0x89, .x=0xa3, .y=0x43, .sp=0x83, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x89}, {.addr=0xde23, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xde23, .value=0xae, .type=IO_READ},
        {.addr=0xde24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033A) {
    const struct CPU_State initial_cpu = {.pc=0x381b, .a=0xc5, .x=0x90, .y=0xbc, .sp=0x3a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x3a}, {.addr=0x381b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x381c, .a=0x3a, .x=0x90, .y=0xbc, .sp=0x3b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x3a}, {.addr=0x381b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x381b, .value=0xae, .type=IO_READ},
        {.addr=0x381c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033B) {
    const struct CPU_State initial_cpu = {.pc=0x65a4, .a=0xb4, .x=0x77, .y=0xc7, .sp=0x07, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xe8}, {.addr=0x65a4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x65a5, .a=0xe8, .x=0x77, .y=0xc7, .sp=0x08, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xe8}, {.addr=0x65a4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x65a4, .value=0xae, .type=IO_READ},
        {.addr=0x65a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033C) {
    const struct CPU_State initial_cpu = {.pc=0xaf27, .a=0xea, .x=0x36, .y=0xcc, .sp=0x65, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x72}, {.addr=0xaf27, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaf28, .a=0x72, .x=0x36, .y=0xcc, .sp=0x66, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x72}, {.addr=0xaf27, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaf27, .value=0xae, .type=IO_READ},
        {.addr=0xaf28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033D) {
    const struct CPU_State initial_cpu = {.pc=0x03c4, .a=0x97, .x=0xbb, .y=0x11, .sp=0x9d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x91}, {.addr=0x03c4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x03c5, .a=0x91, .x=0xbb, .y=0x11, .sp=0x9e, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x91}, {.addr=0x03c4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x03c4, .value=0xae, .type=IO_READ},
        {.addr=0x03c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033E) {
    const struct CPU_State initial_cpu = {.pc=0x9ea6, .a=0xec, .x=0x10, .y=0xac, .sp=0x33, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xbc}, {.addr=0x9ea6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9ea7, .a=0xbc, .x=0x10, .y=0xac, .sp=0x34, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xbc}, {.addr=0x9ea6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9ea6, .value=0xae, .type=IO_READ},
        {.addr=0x9ea7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_033F) {
    const struct CPU_State initial_cpu = {.pc=0x27dc, .a=0x96, .x=0x36, .y=0x01, .sp=0x54, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x27}, {.addr=0x27dc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x27dd, .a=0x27, .x=0x36, .y=0x01, .sp=0x55, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x27}, {.addr=0x27dc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x27dc, .value=0xae, .type=IO_READ},
        {.addr=0x27dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0340) {
    const struct CPU_State initial_cpu = {.pc=0xf579, .a=0x40, .x=0x0c, .y=0x5c, .sp=0x68, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x11}, {.addr=0xf579, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf57a, .a=0x11, .x=0x0c, .y=0x5c, .sp=0x69, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x11}, {.addr=0xf579, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf579, .value=0xae, .type=IO_READ},
        {.addr=0xf57a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0341) {
    const struct CPU_State initial_cpu = {.pc=0xecf4, .a=0x3b, .x=0x2e, .y=0xf1, .sp=0x7f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xfd}, {.addr=0xecf4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xecf5, .a=0xfd, .x=0x2e, .y=0xf1, .sp=0x80, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xfd}, {.addr=0xecf4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xecf4, .value=0xae, .type=IO_READ},
        {.addr=0xecf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0342) {
    const struct CPU_State initial_cpu = {.pc=0x117f, .a=0x14, .x=0x8d, .y=0xb3, .sp=0x7e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xfb}, {.addr=0x117f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1180, .a=0xfb, .x=0x8d, .y=0xb3, .sp=0x7f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xfb}, {.addr=0x117f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x117f, .value=0xae, .type=IO_READ},
        {.addr=0x1180, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0343) {
    const struct CPU_State initial_cpu = {.pc=0xf8fa, .a=0x77, .x=0x36, .y=0x55, .sp=0xb0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x1e}, {.addr=0xf8fa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf8fb, .a=0x1e, .x=0x36, .y=0x55, .sp=0xb1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x1e}, {.addr=0xf8fa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf8fa, .value=0xae, .type=IO_READ},
        {.addr=0xf8fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0344) {
    const struct CPU_State initial_cpu = {.pc=0xff7b, .a=0x5b, .x=0xad, .y=0xd4, .sp=0xa4, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x5a}, {.addr=0xff7b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xff7c, .a=0x5a, .x=0xad, .y=0xd4, .sp=0xa5, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x5a}, {.addr=0xff7b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xff7b, .value=0xae, .type=IO_READ},
        {.addr=0xff7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0345) {
    const struct CPU_State initial_cpu = {.pc=0x137b, .a=0x99, .x=0x54, .y=0xf0, .sp=0xfc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x30}, {.addr=0x137b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x137c, .a=0x30, .x=0x54, .y=0xf0, .sp=0xfd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x30}, {.addr=0x137b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x137b, .value=0xae, .type=IO_READ},
        {.addr=0x137c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0346) {
    const struct CPU_State initial_cpu = {.pc=0xbf83, .a=0xbf, .x=0xd9, .y=0xe5, .sp=0x2c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x34}, {.addr=0xbf83, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbf84, .a=0x34, .x=0xd9, .y=0xe5, .sp=0x2d, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x34}, {.addr=0xbf83, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbf83, .value=0xae, .type=IO_READ},
        {.addr=0xbf84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0347) {
    const struct CPU_State initial_cpu = {.pc=0xe75f, .a=0x09, .x=0x59, .y=0xf3, .sp=0xef, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xe7}, {.addr=0xe75f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe760, .a=0xe7, .x=0x59, .y=0xf3, .sp=0xf0, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xe7}, {.addr=0xe75f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe75f, .value=0xae, .type=IO_READ},
        {.addr=0xe760, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0348) {
    const struct CPU_State initial_cpu = {.pc=0x0a5e, .a=0x3a, .x=0x06, .y=0xd1, .sp=0x03, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x41}, {.addr=0x0a5e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0a5f, .a=0x41, .x=0x06, .y=0xd1, .sp=0x04, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x41}, {.addr=0x0a5e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0a5e, .value=0xae, .type=IO_READ},
        {.addr=0x0a5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa9ad, .a=0x76, .x=0x2f, .y=0x2b, .sp=0x61, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xcb}, {.addr=0xa9ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa9ae, .a=0xcb, .x=0x2f, .y=0x2b, .sp=0x62, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xcb}, {.addr=0xa9ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa9ad, .value=0xae, .type=IO_READ},
        {.addr=0xa9ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034A) {
    const struct CPU_State initial_cpu = {.pc=0xa15e, .a=0xd6, .x=0xb9, .y=0x7a, .sp=0xd8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x85}, {.addr=0xa15e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa15f, .a=0x85, .x=0xb9, .y=0x7a, .sp=0xd9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x85}, {.addr=0xa15e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa15e, .value=0xae, .type=IO_READ},
        {.addr=0xa15f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034B) {
    const struct CPU_State initial_cpu = {.pc=0xe33c, .a=0x5d, .x=0xd4, .y=0x8f, .sp=0xb3, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x62}, {.addr=0xe33c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe33d, .a=0x62, .x=0xd4, .y=0x8f, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x62}, {.addr=0xe33c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe33c, .value=0xae, .type=IO_READ},
        {.addr=0xe33d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034C) {
    const struct CPU_State initial_cpu = {.pc=0x69a8, .a=0x37, .x=0x4a, .y=0xe5, .sp=0x79, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x30}, {.addr=0x69a8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x69a9, .a=0x30, .x=0x4a, .y=0xe5, .sp=0x7a, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x30}, {.addr=0x69a8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x69a8, .value=0xae, .type=IO_READ},
        {.addr=0x69a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034D) {
    const struct CPU_State initial_cpu = {.pc=0xaba1, .a=0x0c, .x=0x09, .y=0xa4, .sp=0x86, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x57}, {.addr=0xaba1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xaba2, .a=0x57, .x=0x09, .y=0xa4, .sp=0x87, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x57}, {.addr=0xaba1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xaba1, .value=0xae, .type=IO_READ},
        {.addr=0xaba2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034E) {
    const struct CPU_State initial_cpu = {.pc=0xa4d1, .a=0x66, .x=0xf1, .y=0xb0, .sp=0x4a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x23}, {.addr=0xa4d1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa4d2, .a=0x23, .x=0xf1, .y=0xb0, .sp=0x4b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x23}, {.addr=0xa4d1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa4d1, .value=0xae, .type=IO_READ},
        {.addr=0xa4d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_034F) {
    const struct CPU_State initial_cpu = {.pc=0x19e2, .a=0x1a, .x=0xc8, .y=0xe2, .sp=0xce, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x1d}, {.addr=0x19e2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x19e3, .a=0x1d, .x=0xc8, .y=0xe2, .sp=0xcf, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x1d}, {.addr=0x19e2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x19e2, .value=0xae, .type=IO_READ},
        {.addr=0x19e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0350) {
    const struct CPU_State initial_cpu = {.pc=0xbbce, .a=0xad, .x=0xa1, .y=0x91, .sp=0x86, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xa9}, {.addr=0xbbce, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbbcf, .a=0xa9, .x=0xa1, .y=0x91, .sp=0x87, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xa9}, {.addr=0xbbce, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbbce, .value=0xae, .type=IO_READ},
        {.addr=0xbbcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0351) {
    const struct CPU_State initial_cpu = {.pc=0x29c0, .a=0x81, .x=0xdb, .y=0x5e, .sp=0xf6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xd3}, {.addr=0x29c0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x29c1, .a=0xd3, .x=0xdb, .y=0x5e, .sp=0xf7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xd3}, {.addr=0x29c0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x29c0, .value=0xae, .type=IO_READ},
        {.addr=0x29c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7c62, .a=0x80, .x=0xb0, .y=0x89, .sp=0xb4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x4a}, {.addr=0x7c62, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7c63, .a=0x4a, .x=0xb0, .y=0x89, .sp=0xb5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x4a}, {.addr=0x7c62, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7c62, .value=0xae, .type=IO_READ},
        {.addr=0x7c63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0353) {
    const struct CPU_State initial_cpu = {.pc=0xc25a, .a=0xda, .x=0xb0, .y=0x71, .sp=0x58, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xb6}, {.addr=0xc25a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc25b, .a=0xb6, .x=0xb0, .y=0x71, .sp=0x59, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xb6}, {.addr=0xc25a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc25a, .value=0xae, .type=IO_READ},
        {.addr=0xc25b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0354) {
    const struct CPU_State initial_cpu = {.pc=0x12ec, .a=0x74, .x=0x61, .y=0xff, .sp=0xb4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x4d}, {.addr=0x12ec, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x12ed, .a=0x4d, .x=0x61, .y=0xff, .sp=0xb5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x4d}, {.addr=0x12ec, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x12ec, .value=0xae, .type=IO_READ},
        {.addr=0x12ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0355) {
    const struct CPU_State initial_cpu = {.pc=0x5178, .a=0xfd, .x=0x77, .y=0x06, .sp=0x63, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xe4}, {.addr=0x5178, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5179, .a=0xe4, .x=0x77, .y=0x06, .sp=0x64, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xe4}, {.addr=0x5178, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5178, .value=0xae, .type=IO_READ},
        {.addr=0x5179, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0356) {
    const struct CPU_State initial_cpu = {.pc=0x0fd0, .a=0x3a, .x=0xbc, .y=0xc8, .sp=0x87, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xa6}, {.addr=0x0fd0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0fd1, .a=0xa6, .x=0xbc, .y=0xc8, .sp=0x88, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xa6}, {.addr=0x0fd0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0fd0, .value=0xae, .type=IO_READ},
        {.addr=0x0fd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7641, .a=0xc7, .x=0x79, .y=0x89, .sp=0x37, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x9c}, {.addr=0x7641, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7642, .a=0x9c, .x=0x79, .y=0x89, .sp=0x38, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x9c}, {.addr=0x7641, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7641, .value=0xae, .type=IO_READ},
        {.addr=0x7642, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0358) {
    const struct CPU_State initial_cpu = {.pc=0xf321, .a=0x4e, .x=0xce, .y=0x25, .sp=0x9a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xc7}, {.addr=0xf321, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf322, .a=0xc7, .x=0xce, .y=0x25, .sp=0x9b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xc7}, {.addr=0xf321, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf321, .value=0xae, .type=IO_READ},
        {.addr=0xf322, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0359) {
    const struct CPU_State initial_cpu = {.pc=0x7499, .a=0xa4, .x=0x74, .y=0xca, .sp=0x40, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x18}, {.addr=0x7499, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x749a, .a=0x18, .x=0x74, .y=0xca, .sp=0x41, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x18}, {.addr=0x7499, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7499, .value=0xae, .type=IO_READ},
        {.addr=0x749a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035A) {
    const struct CPU_State initial_cpu = {.pc=0xf51a, .a=0x4c, .x=0x36, .y=0x97, .sp=0xf1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x78}, {.addr=0xf51a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf51b, .a=0x78, .x=0x36, .y=0x97, .sp=0xf2, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x78}, {.addr=0xf51a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf51a, .value=0xae, .type=IO_READ},
        {.addr=0xf51b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035B) {
    const struct CPU_State initial_cpu = {.pc=0xc5b4, .a=0xb0, .x=0x29, .y=0xf4, .sp=0x8c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x74}, {.addr=0xc5b4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc5b5, .a=0x74, .x=0x29, .y=0xf4, .sp=0x8d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x74}, {.addr=0xc5b4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc5b4, .value=0xae, .type=IO_READ},
        {.addr=0xc5b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035C) {
    const struct CPU_State initial_cpu = {.pc=0xed80, .a=0x87, .x=0xad, .y=0xa3, .sp=0xd0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x1f}, {.addr=0xed80, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xed81, .a=0x1f, .x=0xad, .y=0xa3, .sp=0xd1, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x1f}, {.addr=0xed80, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xed80, .value=0xae, .type=IO_READ},
        {.addr=0xed81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035D) {
    const struct CPU_State initial_cpu = {.pc=0x13ca, .a=0xbf, .x=0x76, .y=0xbf, .sp=0x2b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xc6}, {.addr=0x13ca, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x13cb, .a=0xc6, .x=0x76, .y=0xbf, .sp=0x2c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xc6}, {.addr=0x13ca, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x13ca, .value=0xae, .type=IO_READ},
        {.addr=0x13cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035E) {
    const struct CPU_State initial_cpu = {.pc=0xf5c7, .a=0x5a, .x=0x32, .y=0x19, .sp=0x36, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x16}, {.addr=0xf5c7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf5c8, .a=0x16, .x=0x32, .y=0x19, .sp=0x37, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x16}, {.addr=0xf5c7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf5c7, .value=0xae, .type=IO_READ},
        {.addr=0xf5c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_035F) {
    const struct CPU_State initial_cpu = {.pc=0x024c, .a=0xac, .x=0x12, .y=0xa5, .sp=0xc2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x05}, {.addr=0x024c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x024d, .a=0x05, .x=0x12, .y=0xa5, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x05}, {.addr=0x024c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x024c, .value=0xae, .type=IO_READ},
        {.addr=0x024d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0360) {
    const struct CPU_State initial_cpu = {.pc=0x8764, .a=0x71, .x=0x61, .y=0xbe, .sp=0xb8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x44}, {.addr=0x8764, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8765, .a=0x44, .x=0x61, .y=0xbe, .sp=0xb9, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x44}, {.addr=0x8764, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8764, .value=0xae, .type=IO_READ},
        {.addr=0x8765, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0361) {
    const struct CPU_State initial_cpu = {.pc=0x65b0, .a=0xa1, .x=0x55, .y=0xd1, .sp=0xfb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x76}, {.addr=0x65b0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x65b1, .a=0x76, .x=0x55, .y=0xd1, .sp=0xfc, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x76}, {.addr=0x65b0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x65b0, .value=0xae, .type=IO_READ},
        {.addr=0x65b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0362) {
    const struct CPU_State initial_cpu = {.pc=0x6c08, .a=0x7d, .x=0x41, .y=0xa1, .sp=0xc4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xc7}, {.addr=0x6c08, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6c09, .a=0xc7, .x=0x41, .y=0xa1, .sp=0xc5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xc7}, {.addr=0x6c08, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6c08, .value=0xae, .type=IO_READ},
        {.addr=0x6c09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0363) {
    const struct CPU_State initial_cpu = {.pc=0x4074, .a=0xe1, .x=0x1f, .y=0xfb, .sp=0x18, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x43}, {.addr=0x4074, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4075, .a=0x43, .x=0x1f, .y=0xfb, .sp=0x19, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x43}, {.addr=0x4074, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4074, .value=0xae, .type=IO_READ},
        {.addr=0x4075, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0364) {
    const struct CPU_State initial_cpu = {.pc=0xdb62, .a=0xea, .x=0x89, .y=0x36, .sp=0xb3, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xb9}, {.addr=0xdb62, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb63, .a=0xb9, .x=0x89, .y=0x36, .sp=0xb4, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xb9}, {.addr=0xdb62, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb62, .value=0xae, .type=IO_READ},
        {.addr=0xdb63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0365) {
    const struct CPU_State initial_cpu = {.pc=0x6535, .a=0x11, .x=0x56, .y=0x01, .sp=0xbe, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x53}, {.addr=0x6535, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6536, .a=0x53, .x=0x56, .y=0x01, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x53}, {.addr=0x6535, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6535, .value=0xae, .type=IO_READ},
        {.addr=0x6536, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0366) {
    const struct CPU_State initial_cpu = {.pc=0xe7d3, .a=0x0a, .x=0xd1, .y=0x57, .sp=0xa7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x6d}, {.addr=0xe7d3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe7d4, .a=0x6d, .x=0xd1, .y=0x57, .sp=0xa8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x6d}, {.addr=0xe7d3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe7d3, .value=0xae, .type=IO_READ},
        {.addr=0xe7d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0367) {
    const struct CPU_State initial_cpu = {.pc=0x9616, .a=0x0e, .x=0xa6, .y=0xc8, .sp=0xfb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x1e}, {.addr=0x9616, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9617, .a=0x1e, .x=0xa6, .y=0xc8, .sp=0xfc, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x1e}, {.addr=0x9616, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9616, .value=0xae, .type=IO_READ},
        {.addr=0x9617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0368) {
    const struct CPU_State initial_cpu = {.pc=0xd8f3, .a=0xf9, .x=0x51, .y=0xa8, .sp=0xba, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x2a}, {.addr=0xd8f3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd8f4, .a=0x2a, .x=0x51, .y=0xa8, .sp=0xbb, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x2a}, {.addr=0xd8f3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd8f3, .value=0xae, .type=IO_READ},
        {.addr=0xd8f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0369) {
    const struct CPU_State initial_cpu = {.pc=0x3f95, .a=0x69, .x=0xd8, .y=0xdf, .sp=0xbd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x6d}, {.addr=0x3f95, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3f96, .a=0x6d, .x=0xd8, .y=0xdf, .sp=0xbe, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x6d}, {.addr=0x3f95, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3f95, .value=0xae, .type=IO_READ},
        {.addr=0x3f96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036A) {
    const struct CPU_State initial_cpu = {.pc=0x491b, .a=0x32, .x=0xab, .y=0xbc, .sp=0xda, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xc5}, {.addr=0x491b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x491c, .a=0xc5, .x=0xab, .y=0xbc, .sp=0xdb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xc5}, {.addr=0x491b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x491b, .value=0xae, .type=IO_READ},
        {.addr=0x491c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036B) {
    const struct CPU_State initial_cpu = {.pc=0xbb97, .a=0x0d, .x=0xe7, .y=0xb6, .sp=0x25, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x9d}, {.addr=0xbb97, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbb98, .a=0x9d, .x=0xe7, .y=0xb6, .sp=0x26, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x9d}, {.addr=0xbb97, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbb97, .value=0xae, .type=IO_READ},
        {.addr=0xbb98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036C) {
    const struct CPU_State initial_cpu = {.pc=0xf360, .a=0xc3, .x=0x62, .y=0x3f, .sp=0x9b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x58}, {.addr=0xf360, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf361, .a=0x58, .x=0x62, .y=0x3f, .sp=0x9c, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x58}, {.addr=0xf360, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf360, .value=0xae, .type=IO_READ},
        {.addr=0xf361, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036D) {
    const struct CPU_State initial_cpu = {.pc=0xe6dc, .a=0xe0, .x=0x32, .y=0xd6, .sp=0xd1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x65}, {.addr=0xe6dc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe6dd, .a=0x65, .x=0x32, .y=0xd6, .sp=0xd2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x65}, {.addr=0xe6dc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe6dc, .value=0xae, .type=IO_READ},
        {.addr=0xe6dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036E) {
    const struct CPU_State initial_cpu = {.pc=0x489d, .a=0xd3, .x=0x34, .y=0x06, .sp=0x45, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x3d}, {.addr=0x489d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x489e, .a=0x3d, .x=0x34, .y=0x06, .sp=0x46, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x3d}, {.addr=0x489d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x489d, .value=0xae, .type=IO_READ},
        {.addr=0x489e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_036F) {
    const struct CPU_State initial_cpu = {.pc=0x9941, .a=0x7e, .x=0xd9, .y=0x16, .sp=0x61, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x7b}, {.addr=0x9941, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9942, .a=0x7b, .x=0xd9, .y=0x16, .sp=0x62, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x7b}, {.addr=0x9941, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9941, .value=0xae, .type=IO_READ},
        {.addr=0x9942, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0370) {
    const struct CPU_State initial_cpu = {.pc=0x390c, .a=0x80, .x=0xaf, .y=0x6c, .sp=0x47, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xda}, {.addr=0x390c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x390d, .a=0xda, .x=0xaf, .y=0x6c, .sp=0x48, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xda}, {.addr=0x390c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x390c, .value=0xae, .type=IO_READ},
        {.addr=0x390d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0371) {
    const struct CPU_State initial_cpu = {.pc=0x67ed, .a=0x58, .x=0xfc, .y=0xa9, .sp=0xd3, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x22}, {.addr=0x67ed, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x67ee, .a=0x22, .x=0xfc, .y=0xa9, .sp=0xd4, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x22}, {.addr=0x67ed, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x67ed, .value=0xae, .type=IO_READ},
        {.addr=0x67ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0372) {
    const struct CPU_State initial_cpu = {.pc=0x8c4b, .a=0xff, .x=0xfe, .y=0x0e, .sp=0x8a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x9f}, {.addr=0x8c4b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8c4c, .a=0x9f, .x=0xfe, .y=0x0e, .sp=0x8b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x9f}, {.addr=0x8c4b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8c4b, .value=0xae, .type=IO_READ},
        {.addr=0x8c4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0373) {
    const struct CPU_State initial_cpu = {.pc=0xc241, .a=0x9b, .x=0xc0, .y=0x99, .sp=0xa1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xd1}, {.addr=0xc241, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc242, .a=0xd1, .x=0xc0, .y=0x99, .sp=0xa2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xd1}, {.addr=0xc241, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc241, .value=0xae, .type=IO_READ},
        {.addr=0xc242, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0374) {
    const struct CPU_State initial_cpu = {.pc=0x2985, .a=0xc4, .x=0xea, .y=0xc7, .sp=0x6f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x53}, {.addr=0x2985, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2986, .a=0x53, .x=0xea, .y=0xc7, .sp=0x70, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x53}, {.addr=0x2985, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2985, .value=0xae, .type=IO_READ},
        {.addr=0x2986, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0375) {
    const struct CPU_State initial_cpu = {.pc=0x8153, .a=0xed, .x=0xf8, .y=0xc8, .sp=0x6a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x40}, {.addr=0x8153, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8154, .a=0x40, .x=0xf8, .y=0xc8, .sp=0x6b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x40}, {.addr=0x8153, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8153, .value=0xae, .type=IO_READ},
        {.addr=0x8154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0376) {
    const struct CPU_State initial_cpu = {.pc=0x7039, .a=0x7d, .x=0x71, .y=0xec, .sp=0xf4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x6b}, {.addr=0x7039, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x703a, .a=0x6b, .x=0x71, .y=0xec, .sp=0xf5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x6b}, {.addr=0x7039, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7039, .value=0xae, .type=IO_READ},
        {.addr=0x703a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0377) {
    const struct CPU_State initial_cpu = {.pc=0x9e88, .a=0xc2, .x=0x0e, .y=0x62, .sp=0x7e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x46}, {.addr=0x9e88, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9e89, .a=0x46, .x=0x0e, .y=0x62, .sp=0x7f, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x46}, {.addr=0x9e88, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9e88, .value=0xae, .type=IO_READ},
        {.addr=0x9e89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0378) {
    const struct CPU_State initial_cpu = {.pc=0xfbad, .a=0xec, .x=0x05, .y=0x65, .sp=0x18, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x7b}, {.addr=0xfbad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfbae, .a=0x7b, .x=0x05, .y=0x65, .sp=0x19, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x7b}, {.addr=0xfbad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfbad, .value=0xae, .type=IO_READ},
        {.addr=0xfbae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0379) {
    const struct CPU_State initial_cpu = {.pc=0xfdb3, .a=0xf0, .x=0x56, .y=0x43, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x32}, {.addr=0xfdb3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfdb4, .a=0x32, .x=0x56, .y=0x43, .sp=0x10, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x32}, {.addr=0xfdb3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfdb3, .value=0xae, .type=IO_READ},
        {.addr=0xfdb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037A) {
    const struct CPU_State initial_cpu = {.pc=0x3028, .a=0xf5, .x=0x0a, .y=0x8f, .sp=0x4b, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x74}, {.addr=0x3028, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3029, .a=0x74, .x=0x0a, .y=0x8f, .sp=0x4c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x74}, {.addr=0x3028, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3028, .value=0xae, .type=IO_READ},
        {.addr=0x3029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9bf1, .a=0xb9, .x=0xf2, .y=0xf9, .sp=0xd1, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x7d}, {.addr=0x9bf1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9bf2, .a=0x7d, .x=0xf2, .y=0xf9, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x7d}, {.addr=0x9bf1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9bf1, .value=0xae, .type=IO_READ},
        {.addr=0x9bf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037C) {
    const struct CPU_State initial_cpu = {.pc=0xe4fb, .a=0xfc, .x=0x90, .y=0x0c, .sp=0x04, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x0e}, {.addr=0xe4fb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe4fc, .a=0x0e, .x=0x90, .y=0x0c, .sp=0x05, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x0e}, {.addr=0xe4fb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe4fb, .value=0xae, .type=IO_READ},
        {.addr=0xe4fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037D) {
    const struct CPU_State initial_cpu = {.pc=0xde4b, .a=0x80, .x=0x2c, .y=0xbf, .sp=0x95, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x9f}, {.addr=0xde4b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xde4c, .a=0x9f, .x=0x2c, .y=0xbf, .sp=0x96, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x9f}, {.addr=0xde4b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xde4b, .value=0xae, .type=IO_READ},
        {.addr=0xde4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6e78, .a=0x26, .x=0x22, .y=0x48, .sp=0x6a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xb6}, {.addr=0x6e78, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6e79, .a=0xb6, .x=0x22, .y=0x48, .sp=0x6b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xb6}, {.addr=0x6e78, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6e78, .value=0xae, .type=IO_READ},
        {.addr=0x6e79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_037F) {
    const struct CPU_State initial_cpu = {.pc=0x03c5, .a=0x36, .x=0x52, .y=0x0a, .sp=0x98, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xfe}, {.addr=0x03c5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x03c6, .a=0xfe, .x=0x52, .y=0x0a, .sp=0x99, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xfe}, {.addr=0x03c5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x03c5, .value=0xae, .type=IO_READ},
        {.addr=0x03c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0380) {
    const struct CPU_State initial_cpu = {.pc=0x11d8, .a=0x69, .x=0x24, .y=0x05, .sp=0xb3, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xa9}, {.addr=0x11d8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x11d9, .a=0xa9, .x=0x24, .y=0x05, .sp=0xb4, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xa9}, {.addr=0x11d8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x11d8, .value=0xae, .type=IO_READ},
        {.addr=0x11d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0381) {
    const struct CPU_State initial_cpu = {.pc=0x966b, .a=0x3e, .x=0x76, .y=0x73, .sp=0x0e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x0d}, {.addr=0x966b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x966c, .a=0x0d, .x=0x76, .y=0x73, .sp=0x0f, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x0d}, {.addr=0x966b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x966b, .value=0xae, .type=IO_READ},
        {.addr=0x966c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0382) {
    const struct CPU_State initial_cpu = {.pc=0x3824, .a=0x6a, .x=0xdf, .y=0x02, .sp=0x7f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xd0}, {.addr=0x3824, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3825, .a=0xd0, .x=0xdf, .y=0x02, .sp=0x80, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xd0}, {.addr=0x3824, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3824, .value=0xae, .type=IO_READ},
        {.addr=0x3825, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0383) {
    const struct CPU_State initial_cpu = {.pc=0x6804, .a=0x02, .x=0x74, .y=0x05, .sp=0x22, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x99}, {.addr=0x6804, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6805, .a=0x99, .x=0x74, .y=0x05, .sp=0x23, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x99}, {.addr=0x6804, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6804, .value=0xae, .type=IO_READ},
        {.addr=0x6805, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0384) {
    const struct CPU_State initial_cpu = {.pc=0xd5e6, .a=0xe2, .x=0x90, .y=0xea, .sp=0x89, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xe9}, {.addr=0xd5e6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd5e7, .a=0xe9, .x=0x90, .y=0xea, .sp=0x8a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xe9}, {.addr=0xd5e6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd5e6, .value=0xae, .type=IO_READ},
        {.addr=0xd5e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0385) {
    const struct CPU_State initial_cpu = {.pc=0x02a2, .a=0xf1, .x=0x07, .y=0x4b, .sp=0x0a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x43}, {.addr=0x02a2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x02a3, .a=0x43, .x=0x07, .y=0x4b, .sp=0x0b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x43}, {.addr=0x02a2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x02a2, .value=0xae, .type=IO_READ},
        {.addr=0x02a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0386) {
    const struct CPU_State initial_cpu = {.pc=0xb2e9, .a=0xf2, .x=0x5e, .y=0x4c, .sp=0xf1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xaa}, {.addr=0xb2e9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb2ea, .a=0xaa, .x=0x5e, .y=0x4c, .sp=0xf2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xaa}, {.addr=0xb2e9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb2e9, .value=0xae, .type=IO_READ},
        {.addr=0xb2ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0387) {
    const struct CPU_State initial_cpu = {.pc=0x8054, .a=0xbe, .x=0x59, .y=0x06, .sp=0x40, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xb6}, {.addr=0x8054, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8055, .a=0xb6, .x=0x59, .y=0x06, .sp=0x41, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xb6}, {.addr=0x8054, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8054, .value=0xae, .type=IO_READ},
        {.addr=0x8055, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0388) {
    const struct CPU_State initial_cpu = {.pc=0x1047, .a=0xc0, .x=0x9a, .y=0x14, .sp=0x8a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x88}, {.addr=0x1047, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1048, .a=0x88, .x=0x9a, .y=0x14, .sp=0x8b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x88}, {.addr=0x1047, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1047, .value=0xae, .type=IO_READ},
        {.addr=0x1048, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb09d, .a=0x93, .x=0xe5, .y=0x0f, .sp=0xa4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x76}, {.addr=0xb09d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb09e, .a=0x76, .x=0xe5, .y=0x0f, .sp=0xa5, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x76}, {.addr=0xb09d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb09d, .value=0xae, .type=IO_READ},
        {.addr=0xb09e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038A) {
    const struct CPU_State initial_cpu = {.pc=0xe049, .a=0x96, .x=0x1c, .y=0x1c, .sp=0xfa, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x28}, {.addr=0xe049, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe04a, .a=0x28, .x=0x1c, .y=0x1c, .sp=0xfb, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x28}, {.addr=0xe049, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe049, .value=0xae, .type=IO_READ},
        {.addr=0xe04a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038B) {
    const struct CPU_State initial_cpu = {.pc=0xd01a, .a=0x5b, .x=0x00, .y=0x0a, .sp=0x28, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xee}, {.addr=0xd01a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd01b, .a=0xee, .x=0x00, .y=0x0a, .sp=0x29, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xee}, {.addr=0xd01a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd01a, .value=0xae, .type=IO_READ},
        {.addr=0xd01b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038C) {
    const struct CPU_State initial_cpu = {.pc=0x8b09, .a=0xa6, .x=0x83, .y=0xd0, .sp=0xae, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x3e}, {.addr=0x8b09, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b0a, .a=0x3e, .x=0x83, .y=0xd0, .sp=0xaf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x3e}, {.addr=0x8b09, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b09, .value=0xae, .type=IO_READ},
        {.addr=0x8b0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2edc, .a=0x76, .x=0xc1, .y=0xa5, .sp=0x1c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x10}, {.addr=0x2edc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2edd, .a=0x10, .x=0xc1, .y=0xa5, .sp=0x1d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x10}, {.addr=0x2edc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2edc, .value=0xae, .type=IO_READ},
        {.addr=0x2edd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038E) {
    const struct CPU_State initial_cpu = {.pc=0xa75e, .a=0x82, .x=0x4b, .y=0x3a, .sp=0x3d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xbe}, {.addr=0xa75e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa75f, .a=0xbe, .x=0x4b, .y=0x3a, .sp=0x3e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xbe}, {.addr=0xa75e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa75e, .value=0xae, .type=IO_READ},
        {.addr=0xa75f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_038F) {
    const struct CPU_State initial_cpu = {.pc=0x49b2, .a=0x01, .x=0xfa, .y=0x1d, .sp=0x7c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xa7}, {.addr=0x49b2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x49b3, .a=0xa7, .x=0xfa, .y=0x1d, .sp=0x7d, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa7}, {.addr=0x49b2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x49b2, .value=0xae, .type=IO_READ},
        {.addr=0x49b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0390) {
    const struct CPU_State initial_cpu = {.pc=0x21cc, .a=0x51, .x=0xe8, .y=0x2e, .sp=0x35, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xe7}, {.addr=0x21cc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x21cd, .a=0xe7, .x=0xe8, .y=0x2e, .sp=0x36, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xe7}, {.addr=0x21cc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x21cc, .value=0xae, .type=IO_READ},
        {.addr=0x21cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0391) {
    const struct CPU_State initial_cpu = {.pc=0xeaff, .a=0xe6, .x=0x43, .y=0x52, .sp=0x98, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x04}, {.addr=0xeaff, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xeb00, .a=0x04, .x=0x43, .y=0x52, .sp=0x99, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x04}, {.addr=0xeaff, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xeaff, .value=0xae, .type=IO_READ},
        {.addr=0xeb00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0392) {
    const struct CPU_State initial_cpu = {.pc=0x229e, .a=0x3f, .x=0x82, .y=0x52, .sp=0x6b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x01}, {.addr=0x229e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x229f, .a=0x01, .x=0x82, .y=0x52, .sp=0x6c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x01}, {.addr=0x229e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x229e, .value=0xae, .type=IO_READ},
        {.addr=0x229f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0393) {
    const struct CPU_State initial_cpu = {.pc=0x2995, .a=0x00, .x=0xb9, .y=0x44, .sp=0x8c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xd4}, {.addr=0x2995, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2996, .a=0xd4, .x=0xb9, .y=0x44, .sp=0x8d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xd4}, {.addr=0x2995, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2995, .value=0xae, .type=IO_READ},
        {.addr=0x2996, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0394) {
    const struct CPU_State initial_cpu = {.pc=0xd92e, .a=0xa6, .x=0xfe, .y=0x7e, .sp=0x83, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x20}, {.addr=0xd92e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd92f, .a=0x20, .x=0xfe, .y=0x7e, .sp=0x84, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x20}, {.addr=0xd92e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd92e, .value=0xae, .type=IO_READ},
        {.addr=0xd92f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0395) {
    const struct CPU_State initial_cpu = {.pc=0x720c, .a=0xd7, .x=0xc9, .y=0x56, .sp=0xc7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xf2}, {.addr=0x720c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x720d, .a=0xf2, .x=0xc9, .y=0x56, .sp=0xc8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xf2}, {.addr=0x720c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x720c, .value=0xae, .type=IO_READ},
        {.addr=0x720d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0396) {
    const struct CPU_State initial_cpu = {.pc=0xb4bb, .a=0x4e, .x=0x4e, .y=0x89, .sp=0x17, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xf1}, {.addr=0xb4bb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb4bc, .a=0xf1, .x=0x4e, .y=0x89, .sp=0x18, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xf1}, {.addr=0xb4bb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb4bb, .value=0xae, .type=IO_READ},
        {.addr=0xb4bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0397) {
    const struct CPU_State initial_cpu = {.pc=0xa102, .a=0x4f, .x=0x9f, .y=0x5b, .sp=0x48, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xa8}, {.addr=0xa102, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa103, .a=0xa8, .x=0x9f, .y=0x5b, .sp=0x49, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xa8}, {.addr=0xa102, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa102, .value=0xae, .type=IO_READ},
        {.addr=0xa103, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0398) {
    const struct CPU_State initial_cpu = {.pc=0x762c, .a=0xe7, .x=0xd6, .y=0x18, .sp=0xa6, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x82}, {.addr=0x762c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x762d, .a=0x82, .x=0xd6, .y=0x18, .sp=0xa7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x82}, {.addr=0x762c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x762c, .value=0xae, .type=IO_READ},
        {.addr=0x762d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_0399) {
    const struct CPU_State initial_cpu = {.pc=0xcf39, .a=0x60, .x=0xaa, .y=0xca, .sp=0x82, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x3b}, {.addr=0xcf39, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcf3a, .a=0x3b, .x=0xaa, .y=0xca, .sp=0x83, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x3b}, {.addr=0xcf39, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcf39, .value=0xae, .type=IO_READ},
        {.addr=0xcf3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039A) {
    const struct CPU_State initial_cpu = {.pc=0x8a35, .a=0x4a, .x=0xe9, .y=0x24, .sp=0x34, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x8e}, {.addr=0x8a35, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8a36, .a=0x8e, .x=0xe9, .y=0x24, .sp=0x35, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x8e}, {.addr=0x8a35, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8a35, .value=0xae, .type=IO_READ},
        {.addr=0x8a36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039B) {
    const struct CPU_State initial_cpu = {.pc=0xc6e1, .a=0xd3, .x=0x2d, .y=0x11, .sp=0x92, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x5d}, {.addr=0xc6e1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc6e2, .a=0x5d, .x=0x2d, .y=0x11, .sp=0x93, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x5d}, {.addr=0xc6e1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc6e1, .value=0xae, .type=IO_READ},
        {.addr=0xc6e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039C) {
    const struct CPU_State initial_cpu = {.pc=0xfc90, .a=0xa5, .x=0xc9, .y=0xa3, .sp=0xcd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x21}, {.addr=0xfc90, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfc91, .a=0x21, .x=0xc9, .y=0xa3, .sp=0xce, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x21}, {.addr=0xfc90, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfc90, .value=0xae, .type=IO_READ},
        {.addr=0xfc91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039D) {
    const struct CPU_State initial_cpu = {.pc=0xe8cc, .a=0xad, .x=0xdb, .y=0x33, .sp=0x92, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xb4}, {.addr=0xe8cc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe8cd, .a=0xb4, .x=0xdb, .y=0x33, .sp=0x93, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xb4}, {.addr=0xe8cc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe8cc, .value=0xae, .type=IO_READ},
        {.addr=0xe8cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039E) {
    const struct CPU_State initial_cpu = {.pc=0xb65d, .a=0x5d, .x=0x83, .y=0xae, .sp=0xe8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x87}, {.addr=0xb65d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb65e, .a=0x87, .x=0x83, .y=0xae, .sp=0xe9, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x87}, {.addr=0xb65d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb65d, .value=0xae, .type=IO_READ},
        {.addr=0xb65e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_039F) {
    const struct CPU_State initial_cpu = {.pc=0x583c, .a=0x6b, .x=0x07, .y=0xa1, .sp=0xbf, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xef}, {.addr=0x583c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x583d, .a=0xef, .x=0x07, .y=0xa1, .sp=0xc0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xef}, {.addr=0x583c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x583c, .value=0xae, .type=IO_READ},
        {.addr=0x583d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x16e5, .a=0x87, .x=0xad, .y=0x20, .sp=0xd5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x96}, {.addr=0x16e5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x16e6, .a=0x96, .x=0xad, .y=0x20, .sp=0xd6, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x96}, {.addr=0x16e5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x16e5, .value=0xae, .type=IO_READ},
        {.addr=0x16e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe269, .a=0x07, .x=0x68, .y=0x13, .sp=0xdb, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xe9}, {.addr=0xe269, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe26a, .a=0xe9, .x=0x68, .y=0x13, .sp=0xdc, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xe9}, {.addr=0xe269, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe269, .value=0xae, .type=IO_READ},
        {.addr=0xe26a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x0a66, .a=0xad, .x=0x3c, .y=0x44, .sp=0x68, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x04}, {.addr=0x0a66, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0a67, .a=0x04, .x=0x3c, .y=0x44, .sp=0x69, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x04}, {.addr=0x0a66, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0a66, .value=0xae, .type=IO_READ},
        {.addr=0x0a67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x92ab, .a=0xea, .x=0x08, .y=0xb5, .sp=0x74, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x25}, {.addr=0x92ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x92ac, .a=0x25, .x=0x08, .y=0xb5, .sp=0x75, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x25}, {.addr=0x92ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x92ab, .value=0xae, .type=IO_READ},
        {.addr=0x92ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x9c37, .a=0x0a, .x=0xdb, .y=0xad, .sp=0x0b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xba}, {.addr=0x9c37, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9c38, .a=0xba, .x=0xdb, .y=0xad, .sp=0x0c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xba}, {.addr=0x9c37, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9c37, .value=0xae, .type=IO_READ},
        {.addr=0x9c38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x1bf9, .a=0x69, .x=0x79, .y=0x5c, .sp=0x83, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x13}, {.addr=0x1bf9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1bfa, .a=0x13, .x=0x79, .y=0x5c, .sp=0x84, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x13}, {.addr=0x1bf9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1bf9, .value=0xae, .type=IO_READ},
        {.addr=0x1bfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x509a, .a=0x3d, .x=0xc4, .y=0x9f, .sp=0xe2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x65}, {.addr=0x509a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x509b, .a=0x65, .x=0xc4, .y=0x9f, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x65}, {.addr=0x509a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x509a, .value=0xae, .type=IO_READ},
        {.addr=0x509b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x6112, .a=0xdc, .x=0x1a, .y=0xd6, .sp=0x6c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x13}, {.addr=0x6112, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6113, .a=0x13, .x=0x1a, .y=0xd6, .sp=0x6d, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x13}, {.addr=0x6112, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6112, .value=0xae, .type=IO_READ},
        {.addr=0x6113, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3f39, .a=0xcf, .x=0x0b, .y=0x01, .sp=0xa7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x3e}, {.addr=0x3f39, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3f3a, .a=0x3e, .x=0x0b, .y=0x01, .sp=0xa8, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x3e}, {.addr=0x3f39, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3f39, .value=0xae, .type=IO_READ},
        {.addr=0x3f3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xe10d, .a=0xd1, .x=0x88, .y=0x99, .sp=0x62, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x46}, {.addr=0xe10d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe10e, .a=0x46, .x=0x88, .y=0x99, .sp=0x63, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x46}, {.addr=0xe10d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe10d, .value=0xae, .type=IO_READ},
        {.addr=0xe10e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x8b16, .a=0x75, .x=0xeb, .y=0x3d, .sp=0x54, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x46}, {.addr=0x8b16, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8b17, .a=0x46, .x=0xeb, .y=0x3d, .sp=0x55, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x46}, {.addr=0x8b16, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8b16, .value=0xae, .type=IO_READ},
        {.addr=0x8b17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x917e, .a=0xa1, .x=0xc0, .y=0x60, .sp=0xc9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x98}, {.addr=0x917e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x917f, .a=0x98, .x=0xc0, .y=0x60, .sp=0xca, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x98}, {.addr=0x917e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x917e, .value=0xae, .type=IO_READ},
        {.addr=0x917f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xfada, .a=0x0d, .x=0x29, .y=0x0e, .sp=0x9f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xe3}, {.addr=0xfada, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfadb, .a=0xe3, .x=0x29, .y=0x0e, .sp=0xa0, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xe3}, {.addr=0xfada, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfada, .value=0xae, .type=IO_READ},
        {.addr=0xfadb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xb7d0, .a=0x36, .x=0x9b, .y=0xee, .sp=0x1b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xa9}, {.addr=0xb7d0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb7d1, .a=0xa9, .x=0x9b, .y=0xee, .sp=0x1c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xa9}, {.addr=0xb7d0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb7d0, .value=0xae, .type=IO_READ},
        {.addr=0xb7d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x2e1f, .a=0xfd, .x=0x28, .y=0x9a, .sp=0xdb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x8e}, {.addr=0x2e1f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2e20, .a=0x8e, .x=0x28, .y=0x9a, .sp=0xdc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x8e}, {.addr=0x2e1f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2e1f, .value=0xae, .type=IO_READ},
        {.addr=0x2e20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xdd07, .a=0x78, .x=0x81, .y=0x2e, .sp=0xe9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xe5}, {.addr=0xdd07, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdd08, .a=0xe5, .x=0x81, .y=0x2e, .sp=0xea, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xe5}, {.addr=0xdd07, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdd07, .value=0xae, .type=IO_READ},
        {.addr=0xdd08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x82fe, .a=0xda, .x=0x11, .y=0x86, .sp=0x65, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xa5}, {.addr=0x82fe, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82ff, .a=0xa5, .x=0x11, .y=0x86, .sp=0x66, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xa5}, {.addr=0x82fe, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82fe, .value=0xae, .type=IO_READ},
        {.addr=0x82ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x9c09, .a=0x33, .x=0xf9, .y=0x62, .sp=0x1d, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x0c}, {.addr=0x9c09, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9c0a, .a=0x0c, .x=0xf9, .y=0x62, .sp=0x1e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x0c}, {.addr=0x9c09, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9c09, .value=0xae, .type=IO_READ},
        {.addr=0x9c0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x8593, .a=0x41, .x=0x48, .y=0xf8, .sp=0xe4, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xa6}, {.addr=0x8593, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8594, .a=0xa6, .x=0x48, .y=0xf8, .sp=0xe5, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xa6}, {.addr=0x8593, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8593, .value=0xae, .type=IO_READ},
        {.addr=0x8594, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x8756, .a=0x29, .x=0xbb, .y=0x9d, .sp=0xfb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x2a}, {.addr=0x8756, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8757, .a=0x2a, .x=0xbb, .y=0x9d, .sp=0xfc, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x2a}, {.addr=0x8756, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8756, .value=0xae, .type=IO_READ},
        {.addr=0x8757, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb4bf, .a=0xd5, .x=0x82, .y=0xce, .sp=0x4b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x5b}, {.addr=0xb4bf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb4c0, .a=0x5b, .x=0x82, .y=0xce, .sp=0x4c, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x5b}, {.addr=0xb4bf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb4bf, .value=0xae, .type=IO_READ},
        {.addr=0xb4c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x24d8, .a=0x32, .x=0x4a, .y=0xdc, .sp=0x0b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x50}, {.addr=0x24d8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x24d9, .a=0x50, .x=0x4a, .y=0xdc, .sp=0x0c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x50}, {.addr=0x24d8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x24d8, .value=0xae, .type=IO_READ},
        {.addr=0x24d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x7d21, .a=0x97, .x=0x9f, .y=0xf8, .sp=0x27, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x61}, {.addr=0x7d21, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7d22, .a=0x61, .x=0x9f, .y=0xf8, .sp=0x28, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x61}, {.addr=0x7d21, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7d21, .value=0xae, .type=IO_READ},
        {.addr=0x7d22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xc080, .a=0x5f, .x=0xbc, .y=0xb1, .sp=0x93, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x74}, {.addr=0xc080, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc081, .a=0x74, .x=0xbc, .y=0xb1, .sp=0x94, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x74}, {.addr=0xc080, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc080, .value=0xae, .type=IO_READ},
        {.addr=0xc081, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x1dde, .a=0x7e, .x=0x64, .y=0x91, .sp=0xd1, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x1e}, {.addr=0x1dde, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1ddf, .a=0x1e, .x=0x64, .y=0x91, .sp=0xd2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x1e}, {.addr=0x1dde, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1dde, .value=0xae, .type=IO_READ},
        {.addr=0x1ddf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x9b3e, .a=0xbe, .x=0x65, .y=0x60, .sp=0x60, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xbf}, {.addr=0x9b3e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9b3f, .a=0xbf, .x=0x65, .y=0x60, .sp=0x61, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xbf}, {.addr=0x9b3e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9b3e, .value=0xae, .type=IO_READ},
        {.addr=0x9b3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x6ea7, .a=0x13, .x=0xa3, .y=0x33, .sp=0xf2, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xbf}, {.addr=0x6ea7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6ea8, .a=0xbf, .x=0xa3, .y=0x33, .sp=0xf3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xbf}, {.addr=0x6ea7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6ea7, .value=0xae, .type=IO_READ},
        {.addr=0x6ea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xf851, .a=0x95, .x=0xdb, .y=0x9c, .sp=0x7d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x02}, {.addr=0xf851, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf852, .a=0x02, .x=0xdb, .y=0x9c, .sp=0x7e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x02}, {.addr=0xf851, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf851, .value=0xae, .type=IO_READ},
        {.addr=0xf852, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x7ce3, .a=0x45, .x=0x92, .y=0x3f, .sp=0x7b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x4e}, {.addr=0x7ce3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7ce4, .a=0x4e, .x=0x92, .y=0x3f, .sp=0x7c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x4e}, {.addr=0x7ce3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7ce3, .value=0xae, .type=IO_READ},
        {.addr=0x7ce4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xcde7, .a=0x86, .x=0x9f, .y=0x4b, .sp=0x63, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xa3}, {.addr=0xcde7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcde8, .a=0xa3, .x=0x9f, .y=0x4b, .sp=0x64, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa3}, {.addr=0xcde7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcde7, .value=0xae, .type=IO_READ},
        {.addr=0xcde8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xbc5b, .a=0xc1, .x=0xe3, .y=0x17, .sp=0xbd, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xdc}, {.addr=0xbc5b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbc5c, .a=0xdc, .x=0xe3, .y=0x17, .sp=0xbe, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xdc}, {.addr=0xbc5b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbc5b, .value=0xae, .type=IO_READ},
        {.addr=0xbc5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x1f07, .a=0xdf, .x=0x8e, .y=0x35, .sp=0xb1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xe9}, {.addr=0x1f07, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1f08, .a=0xe9, .x=0x8e, .y=0x35, .sp=0xb2, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xe9}, {.addr=0x1f07, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1f07, .value=0xae, .type=IO_READ},
        {.addr=0x1f08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xf67a, .a=0x7a, .x=0x69, .y=0x75, .sp=0x17, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x21}, {.addr=0xf67a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf67b, .a=0x21, .x=0x69, .y=0x75, .sp=0x18, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x21}, {.addr=0xf67a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf67a, .value=0xae, .type=IO_READ},
        {.addr=0xf67b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xa411, .a=0x87, .x=0x23, .y=0xc5, .sp=0xe1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xe4}, {.addr=0xa411, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa412, .a=0xe4, .x=0x23, .y=0xc5, .sp=0xe2, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xe4}, {.addr=0xa411, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa411, .value=0xae, .type=IO_READ},
        {.addr=0xa412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xec0f, .a=0xb6, .x=0x44, .y=0xce, .sp=0x17, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xc9}, {.addr=0xec0f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xec10, .a=0xc9, .x=0x44, .y=0xce, .sp=0x18, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xc9}, {.addr=0xec0f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xec0f, .value=0xae, .type=IO_READ},
        {.addr=0xec10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xa5de, .a=0xf0, .x=0xfa, .y=0x61, .sp=0xb8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x62}, {.addr=0xa5de, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa5df, .a=0x62, .x=0xfa, .y=0x61, .sp=0xb9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x62}, {.addr=0xa5de, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa5de, .value=0xae, .type=IO_READ},
        {.addr=0xa5df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xacfc, .a=0x50, .x=0x82, .y=0x78, .sp=0x22, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x5d}, {.addr=0xacfc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xacfd, .a=0x5d, .x=0x82, .y=0x78, .sp=0x23, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x5d}, {.addr=0xacfc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xacfc, .value=0xae, .type=IO_READ},
        {.addr=0xacfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x742a, .a=0x69, .x=0x75, .y=0x89, .sp=0x7f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xb1}, {.addr=0x742a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x742b, .a=0xb1, .x=0x75, .y=0x89, .sp=0x80, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xb1}, {.addr=0x742a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x742a, .value=0xae, .type=IO_READ},
        {.addr=0x742b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x7400, .a=0xeb, .x=0xa6, .y=0x62, .sp=0x4d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xb6}, {.addr=0x7400, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7401, .a=0xb6, .x=0xa6, .y=0x62, .sp=0x4e, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xb6}, {.addr=0x7400, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7400, .value=0xae, .type=IO_READ},
        {.addr=0x7401, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xde59, .a=0x25, .x=0xac, .y=0xa8, .sp=0x38, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xd5}, {.addr=0xde59, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xde5a, .a=0xd5, .x=0xac, .y=0xa8, .sp=0x39, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xd5}, {.addr=0xde59, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xde59, .value=0xae, .type=IO_READ},
        {.addr=0xde5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x5d87, .a=0x6f, .x=0x38, .y=0x71, .sp=0x05, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xae}, {.addr=0x5d87, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5d88, .a=0xae, .x=0x38, .y=0x71, .sp=0x06, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xae}, {.addr=0x5d87, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5d87, .value=0xae, .type=IO_READ},
        {.addr=0x5d88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x971b, .a=0x14, .x=0x4b, .y=0x79, .sp=0xf2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x1d}, {.addr=0x971b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0x1d, .x=0x4b, .y=0x79, .sp=0xf3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x1d}, {.addr=0x971b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x971b, .value=0xae, .type=IO_READ},
        {.addr=0x971c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x43a1, .a=0xad, .x=0xa1, .y=0x05, .sp=0x3b, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x9d}, {.addr=0x43a1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x43a2, .a=0x9d, .x=0xa1, .y=0x05, .sp=0x3c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x9d}, {.addr=0x43a1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x43a1, .value=0xae, .type=IO_READ},
        {.addr=0x43a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0xf3, .x=0xf3, .y=0x8a, .sp=0xce, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xc1}, {.addr=0x928d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0xc1, .x=0xf3, .y=0x8a, .sp=0xcf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xc1}, {.addr=0x928d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0xae, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x82f4, .a=0x3d, .x=0x20, .y=0xf6, .sp=0x59, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xf9}, {.addr=0x82f4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82f5, .a=0xf9, .x=0x20, .y=0xf6, .sp=0x5a, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xf9}, {.addr=0x82f4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82f4, .value=0xae, .type=IO_READ},
        {.addr=0x82f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xd152, .a=0x43, .x=0x54, .y=0x5c, .sp=0x16, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x12}, {.addr=0xd152, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd153, .a=0x12, .x=0x54, .y=0x5c, .sp=0x17, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x12}, {.addr=0xd152, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd152, .value=0xae, .type=IO_READ},
        {.addr=0xd153, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x6d47, .a=0xca, .x=0x55, .y=0xdc, .sp=0x72, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xc3}, {.addr=0x6d47, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6d48, .a=0xc3, .x=0x55, .y=0xdc, .sp=0x73, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc3}, {.addr=0x6d47, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6d47, .value=0xae, .type=IO_READ},
        {.addr=0x6d48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x68ab, .a=0x16, .x=0xa9, .y=0xe7, .sp=0x37, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x18}, {.addr=0x68ab, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x68ac, .a=0x18, .x=0xa9, .y=0xe7, .sp=0x38, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x18}, {.addr=0x68ab, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x68ab, .value=0xae, .type=IO_READ},
        {.addr=0x68ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x7c42, .a=0x82, .x=0xb8, .y=0x0a, .sp=0x95, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x3d}, {.addr=0x7c42, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7c43, .a=0x3d, .x=0xb8, .y=0x0a, .sp=0x96, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x3d}, {.addr=0x7c42, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7c42, .value=0xae, .type=IO_READ},
        {.addr=0x7c43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x6fe8, .a=0x32, .x=0x88, .y=0xb7, .sp=0xfd, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x91}, {.addr=0x6fe8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6fe9, .a=0x91, .x=0x88, .y=0xb7, .sp=0xfe, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x91}, {.addr=0x6fe8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6fe8, .value=0xae, .type=IO_READ},
        {.addr=0x6fe9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x6208, .a=0x32, .x=0x82, .y=0xd0, .sp=0xb1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x02}, {.addr=0x6208, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6209, .a=0x02, .x=0x82, .y=0xd0, .sp=0xb2, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x02}, {.addr=0x6208, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6208, .value=0xae, .type=IO_READ},
        {.addr=0x6209, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xf428, .a=0x85, .x=0xf3, .y=0x70, .sp=0x9b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xd5}, {.addr=0xf428, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf429, .a=0xd5, .x=0xf3, .y=0x70, .sp=0x9c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xd5}, {.addr=0xf428, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf428, .value=0xae, .type=IO_READ},
        {.addr=0xf429, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x6720, .a=0x8c, .x=0x80, .y=0xfe, .sp=0xec, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xf6}, {.addr=0x6720, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6721, .a=0xf6, .x=0x80, .y=0xfe, .sp=0xed, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xf6}, {.addr=0x6720, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6720, .value=0xae, .type=IO_READ},
        {.addr=0x6721, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xd39f, .a=0xf1, .x=0x35, .y=0x52, .sp=0xbf, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xd6}, {.addr=0xd39f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd3a0, .a=0xd6, .x=0x35, .y=0x52, .sp=0xc0, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xd6}, {.addr=0xd39f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd39f, .value=0xae, .type=IO_READ},
        {.addr=0xd3a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6152, .a=0xb9, .x=0x57, .y=0x9e, .sp=0xed, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x32}, {.addr=0x6152, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6153, .a=0x32, .x=0x57, .y=0x9e, .sp=0xee, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x32}, {.addr=0x6152, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6152, .value=0xae, .type=IO_READ},
        {.addr=0x6153, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x785e, .a=0x16, .x=0xc3, .y=0xef, .sp=0xe0, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x7b}, {.addr=0x785e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x785f, .a=0x7b, .x=0xc3, .y=0xef, .sp=0xe1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x7b}, {.addr=0x785e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x785e, .value=0xae, .type=IO_READ},
        {.addr=0x785f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xafa7, .a=0x39, .x=0x28, .y=0x09, .sp=0x73, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xb2}, {.addr=0xafa7, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xafa8, .a=0xb2, .x=0x28, .y=0x09, .sp=0x74, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xb2}, {.addr=0xafa7, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xafa7, .value=0xae, .type=IO_READ},
        {.addr=0xafa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x28c8, .a=0xbc, .x=0x82, .y=0x2f, .sp=0x14, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x3a}, {.addr=0x28c8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x28c9, .a=0x3a, .x=0x82, .y=0x2f, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x3a}, {.addr=0x28c8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x28c8, .value=0xae, .type=IO_READ},
        {.addr=0x28c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd7d4, .a=0xbf, .x=0x35, .y=0x6e, .sp=0x74, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x8c}, {.addr=0xd7d4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd7d5, .a=0x8c, .x=0x35, .y=0x6e, .sp=0x75, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x8c}, {.addr=0xd7d4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd7d4, .value=0xae, .type=IO_READ},
        {.addr=0xd7d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xc68d, .a=0xfa, .x=0x64, .y=0x89, .sp=0x1d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x1f}, {.addr=0xc68d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc68e, .a=0x1f, .x=0x64, .y=0x89, .sp=0x1e, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x1f}, {.addr=0xc68d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc68d, .value=0xae, .type=IO_READ},
        {.addr=0xc68e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xe456, .a=0x4a, .x=0x2b, .y=0x60, .sp=0x50, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xdd}, {.addr=0xe456, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe457, .a=0xdd, .x=0x2b, .y=0x60, .sp=0x51, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xdd}, {.addr=0xe456, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe456, .value=0xae, .type=IO_READ},
        {.addr=0xe457, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6303, .a=0xd9, .x=0x3b, .y=0xdd, .sp=0xa3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x9a}, {.addr=0x6303, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6304, .a=0x9a, .x=0x3b, .y=0xdd, .sp=0xa4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x9a}, {.addr=0x6303, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6303, .value=0xae, .type=IO_READ},
        {.addr=0x6304, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xc155, .a=0x9e, .x=0x4b, .y=0x6c, .sp=0x68, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x28}, {.addr=0xc155, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc156, .a=0x28, .x=0x4b, .y=0x6c, .sp=0x69, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x28}, {.addr=0xc155, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc155, .value=0xae, .type=IO_READ},
        {.addr=0xc156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x142c, .a=0x6b, .x=0xe3, .y=0xf7, .sp=0xe3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xe7}, {.addr=0x142c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x142d, .a=0xe7, .x=0xe3, .y=0xf7, .sp=0xe4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xe7}, {.addr=0x142c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x142c, .value=0xae, .type=IO_READ},
        {.addr=0x142d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0xbc, .x=0x09, .y=0x44, .sp=0xd3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x40}, {.addr=0x5ada, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5adb, .a=0x40, .x=0x09, .y=0x44, .sp=0xd4, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x40}, {.addr=0x5ada, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0xae, .type=IO_READ},
        {.addr=0x5adb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x63e2, .a=0xbb, .x=0x6d, .y=0x84, .sp=0x3d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x97}, {.addr=0x63e2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63e3, .a=0x97, .x=0x6d, .y=0x84, .sp=0x3e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x97}, {.addr=0x63e2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63e2, .value=0xae, .type=IO_READ},
        {.addr=0x63e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x3463, .a=0x6e, .x=0xdb, .y=0xdd, .sp=0x66, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xee}, {.addr=0x3463, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3464, .a=0xee, .x=0xdb, .y=0xdd, .sp=0x67, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xee}, {.addr=0x3463, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3463, .value=0xae, .type=IO_READ},
        {.addr=0x3464, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb8f9, .a=0x5f, .x=0x3d, .y=0x12, .sp=0x05, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x2a}, {.addr=0xb8f9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb8fa, .a=0x2a, .x=0x3d, .y=0x12, .sp=0x06, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x2a}, {.addr=0xb8f9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb8f9, .value=0xae, .type=IO_READ},
        {.addr=0xb8fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x3d5f, .a=0x7c, .x=0xeb, .y=0x7b, .sp=0x04, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x06}, {.addr=0x3d5f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3d60, .a=0x06, .x=0xeb, .y=0x7b, .sp=0x05, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x06}, {.addr=0x3d5f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3d5f, .value=0xae, .type=IO_READ},
        {.addr=0x3d60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xace1, .a=0x15, .x=0x4e, .y=0x42, .sp=0xa1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xa6}, {.addr=0xace1, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xace2, .a=0xa6, .x=0x4e, .y=0x42, .sp=0xa2, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xa6}, {.addr=0xace1, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xace1, .value=0xae, .type=IO_READ},
        {.addr=0xace2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xcdc6, .a=0x6e, .x=0xca, .y=0x3b, .sp=0xb7, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x26}, {.addr=0xcdc6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcdc7, .a=0x26, .x=0xca, .y=0x3b, .sp=0xb8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x26}, {.addr=0xcdc6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcdc6, .value=0xae, .type=IO_READ},
        {.addr=0xcdc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AE, _AE_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x39cf, .a=0x7b, .x=0xf6, .y=0xb2, .sp=0x93, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xa6}, {.addr=0x39cf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x39d0, .a=0xa6, .x=0xf6, .y=0xb2, .sp=0x94, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xa6}, {.addr=0x39cf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x39cf, .value=0xae, .type=IO_READ},
        {.addr=0x39d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AE 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
