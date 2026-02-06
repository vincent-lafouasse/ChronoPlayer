#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_EE, _EE_0000) {
    const struct CPU_State initial_cpu = {.pc=0x262f, .a=0x6c, .x=0xa4, .y=0x8a, .sp=0xeb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x14}, {.addr=0x262f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2630, .a=0x6c, .x=0xa4, .y=0x14, .sp=0xec, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x14}, {.addr=0x262f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x262f, .value=0xee, .type=IO_READ},
        {.addr=0x2630, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0001) {
    const struct CPU_State initial_cpu = {.pc=0x3b9c, .a=0x5c, .x=0x9b, .y=0xe1, .sp=0x62, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x7d}, {.addr=0x3b9c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3b9d, .a=0x5c, .x=0x9b, .y=0x7d, .sp=0x63, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x7d}, {.addr=0x3b9c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3b9c, .value=0xee, .type=IO_READ},
        {.addr=0x3b9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0002) {
    const struct CPU_State initial_cpu = {.pc=0x609c, .a=0xd3, .x=0x74, .y=0xe3, .sp=0x8d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xa3}, {.addr=0x609c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x609d, .a=0xd3, .x=0x74, .y=0xa3, .sp=0x8e, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xa3}, {.addr=0x609c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x609c, .value=0xee, .type=IO_READ},
        {.addr=0x609d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0003) {
    const struct CPU_State initial_cpu = {.pc=0xaa18, .a=0x0b, .x=0xd4, .y=0x54, .sp=0xd9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xaf}, {.addr=0xaa18, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaa19, .a=0x0b, .x=0xd4, .y=0xaf, .sp=0xda, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xaf}, {.addr=0xaa18, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaa18, .value=0xee, .type=IO_READ},
        {.addr=0xaa19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0004) {
    const struct CPU_State initial_cpu = {.pc=0x91fb, .a=0x66, .x=0x15, .y=0xdc, .sp=0xb3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xf0}, {.addr=0x91fb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x91fc, .a=0x66, .x=0x15, .y=0xf0, .sp=0xb4, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xf0}, {.addr=0x91fb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x91fb, .value=0xee, .type=IO_READ},
        {.addr=0x91fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0b40, .a=0x98, .x=0xcb, .y=0x96, .sp=0xb8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xfa}, {.addr=0x0b40, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b41, .a=0x98, .x=0xcb, .y=0xfa, .sp=0xb9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xfa}, {.addr=0x0b40, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b40, .value=0xee, .type=IO_READ},
        {.addr=0x0b41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0006) {
    const struct CPU_State initial_cpu = {.pc=0xcfbc, .a=0xab, .x=0xf2, .y=0x00, .sp=0xc1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x0b}, {.addr=0xcfbc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcfbd, .a=0xab, .x=0xf2, .y=0x0b, .sp=0xc2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x0b}, {.addr=0xcfbc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcfbc, .value=0xee, .type=IO_READ},
        {.addr=0xcfbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7d3a, .a=0x6c, .x=0x3d, .y=0xf0, .sp=0x46, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x76}, {.addr=0x7d3a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7d3b, .a=0x6c, .x=0x3d, .y=0x76, .sp=0x47, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x76}, {.addr=0x7d3a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7d3a, .value=0xee, .type=IO_READ},
        {.addr=0x7d3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0008) {
    const struct CPU_State initial_cpu = {.pc=0x32a2, .a=0x8d, .x=0xac, .y=0xbd, .sp=0xed, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xb8}, {.addr=0x32a2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x32a3, .a=0x8d, .x=0xac, .y=0xb8, .sp=0xee, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xb8}, {.addr=0x32a2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x32a2, .value=0xee, .type=IO_READ},
        {.addr=0x32a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf366, .a=0x9a, .x=0xd9, .y=0x6a, .sp=0xe2, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xab}, {.addr=0xf366, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf367, .a=0x9a, .x=0xd9, .y=0xab, .sp=0xe3, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xab}, {.addr=0xf366, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf366, .value=0xee, .type=IO_READ},
        {.addr=0xf367, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000A) {
    const struct CPU_State initial_cpu = {.pc=0xc580, .a=0x32, .x=0x25, .y=0x96, .sp=0xc1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x16}, {.addr=0xc580, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc581, .a=0x32, .x=0x25, .y=0x16, .sp=0xc2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x16}, {.addr=0xc580, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc580, .value=0xee, .type=IO_READ},
        {.addr=0xc581, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000B) {
    const struct CPU_State initial_cpu = {.pc=0x5ecb, .a=0xfe, .x=0xa4, .y=0x62, .sp=0xb8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xbc}, {.addr=0x5ecb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5ecc, .a=0xfe, .x=0xa4, .y=0xbc, .sp=0xb9, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xbc}, {.addr=0x5ecb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ecb, .value=0xee, .type=IO_READ},
        {.addr=0x5ecc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000C) {
    const struct CPU_State initial_cpu = {.pc=0xeb7c, .a=0xd6, .x=0x7a, .y=0x0e, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x86}, {.addr=0xeb7c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xeb7d, .a=0xd6, .x=0x7a, .y=0x86, .sp=0xf9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x86}, {.addr=0xeb7c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xeb7c, .value=0xee, .type=IO_READ},
        {.addr=0xeb7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa761, .a=0xce, .x=0x80, .y=0xde, .sp=0xc9, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x6a}, {.addr=0xa761, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa762, .a=0xce, .x=0x80, .y=0x6a, .sp=0xca, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x6a}, {.addr=0xa761, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa761, .value=0xee, .type=IO_READ},
        {.addr=0xa762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000E) {
    const struct CPU_State initial_cpu = {.pc=0x90ba, .a=0xbf, .x=0x3f, .y=0x66, .sp=0x04, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xf8}, {.addr=0x90ba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x90bb, .a=0xbf, .x=0x3f, .y=0xf8, .sp=0x05, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xf8}, {.addr=0x90ba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x90ba, .value=0xee, .type=IO_READ},
        {.addr=0x90bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_000F) {
    const struct CPU_State initial_cpu = {.pc=0x7e7f, .a=0xcb, .x=0xbb, .y=0x11, .sp=0xbb, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x37}, {.addr=0x7e7f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7e80, .a=0xcb, .x=0xbb, .y=0x37, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x37}, {.addr=0x7e7f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7e7f, .value=0xee, .type=IO_READ},
        {.addr=0x7e80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0010) {
    const struct CPU_State initial_cpu = {.pc=0xbf98, .a=0x67, .x=0x11, .y=0x41, .sp=0x00, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x62}, {.addr=0xbf98, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbf99, .a=0x67, .x=0x11, .y=0x62, .sp=0x01, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x62}, {.addr=0xbf98, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbf98, .value=0xee, .type=IO_READ},
        {.addr=0xbf99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0011) {
    const struct CPU_State initial_cpu = {.pc=0x5256, .a=0x3f, .x=0x9b, .y=0x6c, .sp=0x52, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xc0}, {.addr=0x5256, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5257, .a=0x3f, .x=0x9b, .y=0xc0, .sp=0x53, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xc0}, {.addr=0x5256, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5256, .value=0xee, .type=IO_READ},
        {.addr=0x5257, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0012) {
    const struct CPU_State initial_cpu = {.pc=0xf0f0, .a=0x13, .x=0x2a, .y=0xef, .sp=0xbf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x86}, {.addr=0xf0f0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf0f1, .a=0x13, .x=0x2a, .y=0x86, .sp=0xc0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x86}, {.addr=0xf0f0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf0f0, .value=0xee, .type=IO_READ},
        {.addr=0xf0f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0491, .a=0x9b, .x=0x31, .y=0x0b, .sp=0x8d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x86}, {.addr=0x0491, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0492, .a=0x9b, .x=0x31, .y=0x86, .sp=0x8e, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x86}, {.addr=0x0491, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0491, .value=0xee, .type=IO_READ},
        {.addr=0x0492, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0014) {
    const struct CPU_State initial_cpu = {.pc=0x163f, .a=0x0b, .x=0x76, .y=0x63, .sp=0xef, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x14}, {.addr=0x163f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1640, .a=0x0b, .x=0x76, .y=0x14, .sp=0xf0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x14}, {.addr=0x163f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x163f, .value=0xee, .type=IO_READ},
        {.addr=0x1640, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0015) {
    const struct CPU_State initial_cpu = {.pc=0x4c47, .a=0xa3, .x=0x12, .y=0xa4, .sp=0x5b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xdb}, {.addr=0x4c47, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c48, .a=0xa3, .x=0x12, .y=0xdb, .sp=0x5c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xdb}, {.addr=0x4c47, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c47, .value=0xee, .type=IO_READ},
        {.addr=0x4c48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0016) {
    const struct CPU_State initial_cpu = {.pc=0xa780, .a=0x5f, .x=0xc4, .y=0xba, .sp=0xb2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x58}, {.addr=0xa780, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa781, .a=0x5f, .x=0xc4, .y=0x58, .sp=0xb3, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x58}, {.addr=0xa780, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa780, .value=0xee, .type=IO_READ},
        {.addr=0xa781, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0017) {
    const struct CPU_State initial_cpu = {.pc=0x647c, .a=0x07, .x=0x53, .y=0xcb, .sp=0x33, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xba}, {.addr=0x647c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x07, .x=0x53, .y=0xba, .sp=0x34, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xba}, {.addr=0x647c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x647c, .value=0xee, .type=IO_READ},
        {.addr=0x647d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0018) {
    const struct CPU_State initial_cpu = {.pc=0x3268, .a=0x6d, .x=0x15, .y=0x05, .sp=0x0b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x3b}, {.addr=0x3268, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3269, .a=0x6d, .x=0x15, .y=0x3b, .sp=0x0c, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x3b}, {.addr=0x3268, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3268, .value=0xee, .type=IO_READ},
        {.addr=0x3269, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0019) {
    const struct CPU_State initial_cpu = {.pc=0x72ce, .a=0x40, .x=0xe1, .y=0x21, .sp=0x3a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xf0}, {.addr=0x72ce, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x72cf, .a=0x40, .x=0xe1, .y=0xf0, .sp=0x3b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xf0}, {.addr=0x72ce, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x72ce, .value=0xee, .type=IO_READ},
        {.addr=0x72cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001A) {
    const struct CPU_State initial_cpu = {.pc=0x53f2, .a=0xaa, .x=0xa4, .y=0x64, .sp=0x4c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x3f}, {.addr=0x53f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53f3, .a=0xaa, .x=0xa4, .y=0x3f, .sp=0x4d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x3f}, {.addr=0x53f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53f2, .value=0xee, .type=IO_READ},
        {.addr=0x53f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4386, .a=0xfb, .x=0x43, .y=0x20, .sp=0x11, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xa3}, {.addr=0x4386, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4387, .a=0xfb, .x=0x43, .y=0xa3, .sp=0x12, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xa3}, {.addr=0x4386, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4386, .value=0xee, .type=IO_READ},
        {.addr=0x4387, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001C) {
    const struct CPU_State initial_cpu = {.pc=0xda5a, .a=0x59, .x=0x0c, .y=0xc4, .sp=0x5d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xa5}, {.addr=0xda5a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xda5b, .a=0x59, .x=0x0c, .y=0xa5, .sp=0x5e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xa5}, {.addr=0xda5a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xda5a, .value=0xee, .type=IO_READ},
        {.addr=0xda5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001D) {
    const struct CPU_State initial_cpu = {.pc=0xe440, .a=0xf7, .x=0x8e, .y=0xe0, .sp=0xb3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xe440, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe441, .a=0xf7, .x=0x8e, .y=0x00, .sp=0xb4, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xe440, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe440, .value=0xee, .type=IO_READ},
        {.addr=0xe441, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001E) {
    const struct CPU_State initial_cpu = {.pc=0xad1c, .a=0xf6, .x=0x96, .y=0x3d, .sp=0x28, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x6b}, {.addr=0xad1c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xad1d, .a=0xf6, .x=0x96, .y=0x6b, .sp=0x29, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x6b}, {.addr=0xad1c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xad1c, .value=0xee, .type=IO_READ},
        {.addr=0xad1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_001F) {
    const struct CPU_State initial_cpu = {.pc=0x6e5b, .a=0x18, .x=0xbc, .y=0xd8, .sp=0xea, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x10}, {.addr=0x6e5b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6e5c, .a=0x18, .x=0xbc, .y=0x10, .sp=0xeb, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x10}, {.addr=0x6e5b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6e5b, .value=0xee, .type=IO_READ},
        {.addr=0x6e5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0020) {
    const struct CPU_State initial_cpu = {.pc=0x6515, .a=0x04, .x=0xa8, .y=0xf0, .sp=0x82, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x51}, {.addr=0x6515, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6516, .a=0x04, .x=0xa8, .y=0x51, .sp=0x83, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x51}, {.addr=0x6515, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6515, .value=0xee, .type=IO_READ},
        {.addr=0x6516, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0021) {
    const struct CPU_State initial_cpu = {.pc=0x669c, .a=0x26, .x=0xd8, .y=0x47, .sp=0xc2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x69}, {.addr=0x669c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x669d, .a=0x26, .x=0xd8, .y=0x69, .sp=0xc3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x69}, {.addr=0x669c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x669c, .value=0xee, .type=IO_READ},
        {.addr=0x669d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9425, .a=0x75, .x=0x58, .y=0xc6, .sp=0x6d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x4f}, {.addr=0x9425, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9426, .a=0x75, .x=0x58, .y=0x4f, .sp=0x6e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x4f}, {.addr=0x9425, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9425, .value=0xee, .type=IO_READ},
        {.addr=0x9426, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5891, .a=0x33, .x=0x37, .y=0x71, .sp=0xf5, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x1c}, {.addr=0x5891, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5892, .a=0x33, .x=0x37, .y=0x1c, .sp=0xf6, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x1c}, {.addr=0x5891, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5891, .value=0xee, .type=IO_READ},
        {.addr=0x5892, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0024) {
    const struct CPU_State initial_cpu = {.pc=0x3024, .a=0x66, .x=0xfc, .y=0x49, .sp=0x1e, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xb8}, {.addr=0x3024, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3025, .a=0x66, .x=0xfc, .y=0xb8, .sp=0x1f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xb8}, {.addr=0x3024, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3024, .value=0xee, .type=IO_READ},
        {.addr=0x3025, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd9f5, .a=0xf9, .x=0xa5, .y=0x9a, .sp=0xce, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x22}, {.addr=0xd9f5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd9f6, .a=0xf9, .x=0xa5, .y=0x22, .sp=0xcf, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x22}, {.addr=0xd9f5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd9f5, .value=0xee, .type=IO_READ},
        {.addr=0xd9f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0026) {
    const struct CPU_State initial_cpu = {.pc=0xb6b9, .a=0xd8, .x=0x0b, .y=0x31, .sp=0x8b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x08}, {.addr=0xb6b9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb6ba, .a=0xd8, .x=0x0b, .y=0x08, .sp=0x8c, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x08}, {.addr=0xb6b9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb6b9, .value=0xee, .type=IO_READ},
        {.addr=0xb6ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5ab6, .a=0xe8, .x=0x92, .y=0x5c, .sp=0xb5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x5b}, {.addr=0x5ab6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5ab7, .a=0xe8, .x=0x92, .y=0x5b, .sp=0xb6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x5b}, {.addr=0x5ab6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ab6, .value=0xee, .type=IO_READ},
        {.addr=0x5ab7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0028) {
    const struct CPU_State initial_cpu = {.pc=0xd0a1, .a=0x6a, .x=0xc5, .y=0x92, .sp=0x61, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x08}, {.addr=0xd0a1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd0a2, .a=0x6a, .x=0xc5, .y=0x08, .sp=0x62, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x08}, {.addr=0xd0a1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd0a1, .value=0xee, .type=IO_READ},
        {.addr=0xd0a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0029) {
    const struct CPU_State initial_cpu = {.pc=0x7c85, .a=0x35, .x=0x4f, .y=0xb5, .sp=0xd1, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x7c85, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7c86, .a=0x35, .x=0x4f, .y=0x00, .sp=0xd2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x7c85, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7c85, .value=0xee, .type=IO_READ},
        {.addr=0x7c86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002A) {
    const struct CPU_State initial_cpu = {.pc=0xae91, .a=0xdb, .x=0xdd, .y=0x11, .sp=0x02, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x82}, {.addr=0xae91, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xae92, .a=0xdb, .x=0xdd, .y=0x82, .sp=0x03, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x82}, {.addr=0xae91, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xae91, .value=0xee, .type=IO_READ},
        {.addr=0xae92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002B) {
    const struct CPU_State initial_cpu = {.pc=0xf274, .a=0x6a, .x=0xc5, .y=0x02, .sp=0xbc, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x8a}, {.addr=0xf274, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf275, .a=0x6a, .x=0xc5, .y=0x8a, .sp=0xbd, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x8a}, {.addr=0xf274, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf274, .value=0xee, .type=IO_READ},
        {.addr=0xf275, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002C) {
    const struct CPU_State initial_cpu = {.pc=0x02f4, .a=0x8a, .x=0xb1, .y=0xd5, .sp=0x21, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xc9}, {.addr=0x02f4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x02f5, .a=0x8a, .x=0xb1, .y=0xc9, .sp=0x22, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xc9}, {.addr=0x02f4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x02f4, .value=0xee, .type=IO_READ},
        {.addr=0x02f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002D) {
    const struct CPU_State initial_cpu = {.pc=0x13ea, .a=0x60, .x=0x4f, .y=0xeb, .sp=0xfe, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xe7}, {.addr=0x13ea, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x13eb, .a=0x60, .x=0x4f, .y=0xe7, .sp=0xff, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xe7}, {.addr=0x13ea, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x13ea, .value=0xee, .type=IO_READ},
        {.addr=0x13eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002E) {
    const struct CPU_State initial_cpu = {.pc=0x5730, .a=0x88, .x=0x62, .y=0xdc, .sp=0x8c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xac}, {.addr=0x5730, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5731, .a=0x88, .x=0x62, .y=0xac, .sp=0x8d, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xac}, {.addr=0x5730, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5730, .value=0xee, .type=IO_READ},
        {.addr=0x5731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_002F) {
    const struct CPU_State initial_cpu = {.pc=0xb18a, .a=0xac, .x=0x7f, .y=0x2e, .sp=0x98, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x43}, {.addr=0xb18a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb18b, .a=0xac, .x=0x7f, .y=0x43, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x43}, {.addr=0xb18a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb18a, .value=0xee, .type=IO_READ},
        {.addr=0xb18b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0030) {
    const struct CPU_State initial_cpu = {.pc=0xabb4, .a=0xc7, .x=0xca, .y=0x09, .sp=0x3a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x98}, {.addr=0xabb4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xabb5, .a=0xc7, .x=0xca, .y=0x98, .sp=0x3b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x98}, {.addr=0xabb4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xabb4, .value=0xee, .type=IO_READ},
        {.addr=0xabb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0031) {
    const struct CPU_State initial_cpu = {.pc=0xf4d9, .a=0x66, .x=0x05, .y=0x34, .sp=0x33, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x09}, {.addr=0xf4d9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf4da, .a=0x66, .x=0x05, .y=0x09, .sp=0x34, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x09}, {.addr=0xf4d9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf4d9, .value=0xee, .type=IO_READ},
        {.addr=0xf4da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0032) {
    const struct CPU_State initial_cpu = {.pc=0x4795, .a=0x41, .x=0xb4, .y=0xaa, .sp=0xea, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xf7}, {.addr=0x4795, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4796, .a=0x41, .x=0xb4, .y=0xf7, .sp=0xeb, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xf7}, {.addr=0x4795, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4795, .value=0xee, .type=IO_READ},
        {.addr=0x4796, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0033) {
    const struct CPU_State initial_cpu = {.pc=0xf33f, .a=0x0c, .x=0xd3, .y=0x39, .sp=0x2c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x1e}, {.addr=0xf33f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf340, .a=0x0c, .x=0xd3, .y=0x1e, .sp=0x2d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x1e}, {.addr=0xf33f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf33f, .value=0xee, .type=IO_READ},
        {.addr=0xf340, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0034) {
    const struct CPU_State initial_cpu = {.pc=0x6701, .a=0x17, .x=0xd0, .y=0xab, .sp=0x2a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x4c}, {.addr=0x6701, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6702, .a=0x17, .x=0xd0, .y=0x4c, .sp=0x2b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x4c}, {.addr=0x6701, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6701, .value=0xee, .type=IO_READ},
        {.addr=0x6702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0035) {
    const struct CPU_State initial_cpu = {.pc=0xc079, .a=0xc6, .x=0x05, .y=0x47, .sp=0x48, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xc5}, {.addr=0xc079, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc07a, .a=0xc6, .x=0x05, .y=0xc5, .sp=0x49, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xc5}, {.addr=0xc079, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc079, .value=0xee, .type=IO_READ},
        {.addr=0xc07a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0036) {
    const struct CPU_State initial_cpu = {.pc=0x5ad9, .a=0x96, .x=0x48, .y=0x69, .sp=0xca, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xc3}, {.addr=0x5ad9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5ada, .a=0x96, .x=0x48, .y=0xc3, .sp=0xcb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xc3}, {.addr=0x5ad9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ad9, .value=0xee, .type=IO_READ},
        {.addr=0x5ada, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0037) {
    const struct CPU_State initial_cpu = {.pc=0x6f31, .a=0xd9, .x=0xd9, .y=0x31, .sp=0x0b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xed}, {.addr=0x6f31, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6f32, .a=0xd9, .x=0xd9, .y=0xed, .sp=0x0c, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xed}, {.addr=0x6f31, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6f31, .value=0xee, .type=IO_READ},
        {.addr=0x6f32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0038) {
    const struct CPU_State initial_cpu = {.pc=0xef6a, .a=0x94, .x=0xc0, .y=0x49, .sp=0x28, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xf3}, {.addr=0xef6a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xef6b, .a=0x94, .x=0xc0, .y=0xf3, .sp=0x29, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xf3}, {.addr=0xef6a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xef6a, .value=0xee, .type=IO_READ},
        {.addr=0xef6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0039) {
    const struct CPU_State initial_cpu = {.pc=0xd3ab, .a=0xbc, .x=0x44, .y=0x6a, .sp=0x60, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x77}, {.addr=0xd3ab, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd3ac, .a=0xbc, .x=0x44, .y=0x77, .sp=0x61, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x77}, {.addr=0xd3ab, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd3ab, .value=0xee, .type=IO_READ},
        {.addr=0xd3ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003A) {
    const struct CPU_State initial_cpu = {.pc=0x714d, .a=0xfb, .x=0x36, .y=0x30, .sp=0x0a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xa1}, {.addr=0x714d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x714e, .a=0xfb, .x=0x36, .y=0xa1, .sp=0x0b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xa1}, {.addr=0x714d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x714d, .value=0xee, .type=IO_READ},
        {.addr=0x714e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003B) {
    const struct CPU_State initial_cpu = {.pc=0x6163, .a=0x8b, .x=0x09, .y=0x91, .sp=0x9a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xa3}, {.addr=0x6163, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6164, .a=0x8b, .x=0x09, .y=0xa3, .sp=0x9b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xa3}, {.addr=0x6163, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6163, .value=0xee, .type=IO_READ},
        {.addr=0x6164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003C) {
    const struct CPU_State initial_cpu = {.pc=0x206c, .a=0x53, .x=0x7d, .y=0xa7, .sp=0x84, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xcd}, {.addr=0x206c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x206d, .a=0x53, .x=0x7d, .y=0xcd, .sp=0x85, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xcd}, {.addr=0x206c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x206c, .value=0xee, .type=IO_READ},
        {.addr=0x206d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003D) {
    const struct CPU_State initial_cpu = {.pc=0xd65c, .a=0xa8, .x=0xd3, .y=0xba, .sp=0xde, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xed}, {.addr=0xd65c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd65d, .a=0xa8, .x=0xd3, .y=0xed, .sp=0xdf, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xed}, {.addr=0xd65c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd65c, .value=0xee, .type=IO_READ},
        {.addr=0xd65d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003E) {
    const struct CPU_State initial_cpu = {.pc=0x4c0b, .a=0x16, .x=0xb8, .y=0x9d, .sp=0x9b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xf1}, {.addr=0x4c0b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c0c, .a=0x16, .x=0xb8, .y=0xf1, .sp=0x9c, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xf1}, {.addr=0x4c0b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c0b, .value=0xee, .type=IO_READ},
        {.addr=0x4c0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_003F) {
    const struct CPU_State initial_cpu = {.pc=0xd841, .a=0xb2, .x=0x05, .y=0x54, .sp=0xef, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf2}, {.addr=0xd841, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd842, .a=0xb2, .x=0x05, .y=0xf2, .sp=0xf0, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf2}, {.addr=0xd841, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd841, .value=0xee, .type=IO_READ},
        {.addr=0xd842, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0040) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0x7f, .x=0x0a, .y=0x40, .sp=0x61, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xc4}, {.addr=0x9ef6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9ef7, .a=0x7f, .x=0x0a, .y=0xc4, .sp=0x62, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xc4}, {.addr=0x9ef6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0xee, .type=IO_READ},
        {.addr=0x9ef7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0041) {
    const struct CPU_State initial_cpu = {.pc=0x5ddf, .a=0xcc, .x=0xf6, .y=0xa3, .sp=0xfb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x50}, {.addr=0x5ddf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5de0, .a=0xcc, .x=0xf6, .y=0x50, .sp=0xfc, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x50}, {.addr=0x5ddf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ddf, .value=0xee, .type=IO_READ},
        {.addr=0x5de0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8a61, .a=0x76, .x=0x4b, .y=0x05, .sp=0x66, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x55}, {.addr=0x8a61, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8a62, .a=0x76, .x=0x4b, .y=0x55, .sp=0x67, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x55}, {.addr=0x8a61, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8a61, .value=0xee, .type=IO_READ},
        {.addr=0x8a62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0043) {
    const struct CPU_State initial_cpu = {.pc=0x8203, .a=0xaa, .x=0x8d, .y=0x47, .sp=0x73, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x6d}, {.addr=0x8203, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8204, .a=0xaa, .x=0x8d, .y=0x6d, .sp=0x74, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x6d}, {.addr=0x8203, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8203, .value=0xee, .type=IO_READ},
        {.addr=0x8204, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0044) {
    const struct CPU_State initial_cpu = {.pc=0x04be, .a=0x13, .x=0xe2, .y=0xfc, .sp=0x8d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x16}, {.addr=0x04be, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x04bf, .a=0x13, .x=0xe2, .y=0x16, .sp=0x8e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x16}, {.addr=0x04be, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x04be, .value=0xee, .type=IO_READ},
        {.addr=0x04bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0045) {
    const struct CPU_State initial_cpu = {.pc=0x4969, .a=0xed, .x=0xe4, .y=0x88, .sp=0xbc, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x30}, {.addr=0x4969, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x496a, .a=0xed, .x=0xe4, .y=0x30, .sp=0xbd, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x30}, {.addr=0x4969, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4969, .value=0xee, .type=IO_READ},
        {.addr=0x496a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0046) {
    const struct CPU_State initial_cpu = {.pc=0xd7d1, .a=0x24, .x=0x9e, .y=0xc1, .sp=0x7c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x21}, {.addr=0xd7d1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd7d2, .a=0x24, .x=0x9e, .y=0x21, .sp=0x7d, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x21}, {.addr=0xd7d1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd7d1, .value=0xee, .type=IO_READ},
        {.addr=0xd7d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0047) {
    const struct CPU_State initial_cpu = {.pc=0x0515, .a=0xd4, .x=0xc0, .y=0x6c, .sp=0x71, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x51}, {.addr=0x0515, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0516, .a=0xd4, .x=0xc0, .y=0x51, .sp=0x72, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x51}, {.addr=0x0515, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0515, .value=0xee, .type=IO_READ},
        {.addr=0x0516, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0048) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0x48, .x=0x73, .y=0xb6, .sp=0xd0, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x89}, {.addr=0xb276, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb277, .a=0x48, .x=0x73, .y=0x89, .sp=0xd1, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x89}, {.addr=0xb276, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0xee, .type=IO_READ},
        {.addr=0xb277, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0049) {
    const struct CPU_State initial_cpu = {.pc=0x9461, .a=0xd2, .x=0xaf, .y=0x20, .sp=0x24, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x10}, {.addr=0x9461, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9462, .a=0xd2, .x=0xaf, .y=0x10, .sp=0x25, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x10}, {.addr=0x9461, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9461, .value=0xee, .type=IO_READ},
        {.addr=0x9462, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004A) {
    const struct CPU_State initial_cpu = {.pc=0xcd2b, .a=0xdb, .x=0xeb, .y=0x01, .sp=0x41, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x4a}, {.addr=0xcd2b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcd2c, .a=0xdb, .x=0xeb, .y=0x4a, .sp=0x42, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x4a}, {.addr=0xcd2b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcd2b, .value=0xee, .type=IO_READ},
        {.addr=0xcd2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0846, .a=0x0b, .x=0x33, .y=0xfc, .sp=0xd5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x0d}, {.addr=0x0846, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0847, .a=0x0b, .x=0x33, .y=0x0d, .sp=0xd6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x0d}, {.addr=0x0846, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0846, .value=0xee, .type=IO_READ},
        {.addr=0x0847, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004C) {
    const struct CPU_State initial_cpu = {.pc=0xaafb, .a=0x5e, .x=0x6b, .y=0xe4, .sp=0x72, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x99}, {.addr=0xaafb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaafc, .a=0x5e, .x=0x6b, .y=0x99, .sp=0x73, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x99}, {.addr=0xaafb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaafb, .value=0xee, .type=IO_READ},
        {.addr=0xaafc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004D) {
    const struct CPU_State initial_cpu = {.pc=0xe177, .a=0x7a, .x=0xa6, .y=0xca, .sp=0xa7, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x60}, {.addr=0xe177, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe178, .a=0x7a, .x=0xa6, .y=0x60, .sp=0xa8, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x60}, {.addr=0xe177, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe177, .value=0xee, .type=IO_READ},
        {.addr=0xe178, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004E) {
    const struct CPU_State initial_cpu = {.pc=0x5188, .a=0x62, .x=0x76, .y=0xac, .sp=0x21, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x30}, {.addr=0x5188, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5189, .a=0x62, .x=0x76, .y=0x30, .sp=0x22, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x30}, {.addr=0x5188, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5188, .value=0xee, .type=IO_READ},
        {.addr=0x5189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_004F) {
    const struct CPU_State initial_cpu = {.pc=0x27d7, .a=0x95, .x=0xb1, .y=0x03, .sp=0x1f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xa0}, {.addr=0x27d7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x27d8, .a=0x95, .x=0xb1, .y=0xa0, .sp=0x20, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xa0}, {.addr=0x27d7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x27d7, .value=0xee, .type=IO_READ},
        {.addr=0x27d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0050) {
    const struct CPU_State initial_cpu = {.pc=0xa76c, .a=0x6a, .x=0x68, .y=0xeb, .sp=0x47, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xc5}, {.addr=0xa76c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa76d, .a=0x6a, .x=0x68, .y=0xc5, .sp=0x48, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xc5}, {.addr=0xa76c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa76c, .value=0xee, .type=IO_READ},
        {.addr=0xa76d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0051) {
    const struct CPU_State initial_cpu = {.pc=0x25d7, .a=0x85, .x=0x00, .y=0x86, .sp=0xaa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xf9}, {.addr=0x25d7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x25d8, .a=0x85, .x=0x00, .y=0xf9, .sp=0xab, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xf9}, {.addr=0x25d7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x25d7, .value=0xee, .type=IO_READ},
        {.addr=0x25d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0052) {
    const struct CPU_State initial_cpu = {.pc=0x1228, .a=0x60, .x=0xa2, .y=0x99, .sp=0xd2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x31}, {.addr=0x1228, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1229, .a=0x60, .x=0xa2, .y=0x31, .sp=0xd3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x31}, {.addr=0x1228, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1228, .value=0xee, .type=IO_READ},
        {.addr=0x1229, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0053) {
    const struct CPU_State initial_cpu = {.pc=0xaf02, .a=0x61, .x=0xc1, .y=0xda, .sp=0x41, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x9f}, {.addr=0xaf02, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaf03, .a=0x61, .x=0xc1, .y=0x9f, .sp=0x42, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x9f}, {.addr=0xaf02, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaf02, .value=0xee, .type=IO_READ},
        {.addr=0xaf03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0054) {
    const struct CPU_State initial_cpu = {.pc=0xfc46, .a=0xb8, .x=0xf9, .y=0xf7, .sp=0x61, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x5e}, {.addr=0xfc46, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc47, .a=0xb8, .x=0xf9, .y=0x5e, .sp=0x62, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x5e}, {.addr=0xfc46, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc46, .value=0xee, .type=IO_READ},
        {.addr=0xfc47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0055) {
    const struct CPU_State initial_cpu = {.pc=0x1cac, .a=0xa7, .x=0xde, .y=0xfd, .sp=0xee, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x01}, {.addr=0x1cac, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1cad, .a=0xa7, .x=0xde, .y=0x01, .sp=0xef, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x01}, {.addr=0x1cac, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1cac, .value=0xee, .type=IO_READ},
        {.addr=0x1cad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0056) {
    const struct CPU_State initial_cpu = {.pc=0x77d6, .a=0xd4, .x=0x3f, .y=0xb3, .sp=0x4a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x8e}, {.addr=0x77d6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x77d7, .a=0xd4, .x=0x3f, .y=0x8e, .sp=0x4b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x8e}, {.addr=0x77d6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x77d6, .value=0xee, .type=IO_READ},
        {.addr=0x77d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0057) {
    const struct CPU_State initial_cpu = {.pc=0x1706, .a=0x37, .x=0xea, .y=0xbf, .sp=0x6f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xd8}, {.addr=0x1706, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1707, .a=0x37, .x=0xea, .y=0xd8, .sp=0x70, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xd8}, {.addr=0x1706, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1706, .value=0xee, .type=IO_READ},
        {.addr=0x1707, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0058) {
    const struct CPU_State initial_cpu = {.pc=0x7f79, .a=0xa0, .x=0xd7, .y=0x6a, .sp=0xae, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x4a}, {.addr=0x7f79, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7f7a, .a=0xa0, .x=0xd7, .y=0x4a, .sp=0xaf, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x4a}, {.addr=0x7f79, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7f79, .value=0xee, .type=IO_READ},
        {.addr=0x7f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0059) {
    const struct CPU_State initial_cpu = {.pc=0x4950, .a=0x49, .x=0xe5, .y=0x3f, .sp=0x33, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xfa}, {.addr=0x4950, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4951, .a=0x49, .x=0xe5, .y=0xfa, .sp=0x34, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xfa}, {.addr=0x4950, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4950, .value=0xee, .type=IO_READ},
        {.addr=0x4951, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005A) {
    const struct CPU_State initial_cpu = {.pc=0x3f21, .a=0xdf, .x=0xe9, .y=0x05, .sp=0x61, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xeb}, {.addr=0x3f21, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3f22, .a=0xdf, .x=0xe9, .y=0xeb, .sp=0x62, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xeb}, {.addr=0x3f21, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3f21, .value=0xee, .type=IO_READ},
        {.addr=0x3f22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005B) {
    const struct CPU_State initial_cpu = {.pc=0x3e1a, .a=0x99, .x=0xc8, .y=0xfc, .sp=0x3b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x66}, {.addr=0x3e1a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3e1b, .a=0x99, .x=0xc8, .y=0x66, .sp=0x3c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x66}, {.addr=0x3e1a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3e1a, .value=0xee, .type=IO_READ},
        {.addr=0x3e1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005C) {
    const struct CPU_State initial_cpu = {.pc=0x3223, .a=0x69, .x=0xa8, .y=0xc1, .sp=0xd9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x03}, {.addr=0x3223, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3224, .a=0x69, .x=0xa8, .y=0x03, .sp=0xda, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x03}, {.addr=0x3223, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3223, .value=0xee, .type=IO_READ},
        {.addr=0x3224, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005D) {
    const struct CPU_State initial_cpu = {.pc=0x148d, .a=0xbc, .x=0x34, .y=0xb0, .sp=0x29, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x07}, {.addr=0x148d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x148e, .a=0xbc, .x=0x34, .y=0x07, .sp=0x2a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x07}, {.addr=0x148d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x148d, .value=0xee, .type=IO_READ},
        {.addr=0x148e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005E) {
    const struct CPU_State initial_cpu = {.pc=0xd449, .a=0x1f, .x=0xcc, .y=0xf1, .sp=0xe5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xc2}, {.addr=0xd449, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd44a, .a=0x1f, .x=0xcc, .y=0xc2, .sp=0xe6, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xc2}, {.addr=0xd449, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd449, .value=0xee, .type=IO_READ},
        {.addr=0xd44a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_005F) {
    const struct CPU_State initial_cpu = {.pc=0xcce1, .a=0x4c, .x=0xd5, .y=0xa8, .sp=0x0f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x6f}, {.addr=0xcce1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcce2, .a=0x4c, .x=0xd5, .y=0x6f, .sp=0x10, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x6f}, {.addr=0xcce1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcce1, .value=0xee, .type=IO_READ},
        {.addr=0xcce2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0060) {
    const struct CPU_State initial_cpu = {.pc=0x64d8, .a=0xc8, .x=0xfb, .y=0xbf, .sp=0xa1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x07}, {.addr=0x64d8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x64d9, .a=0xc8, .x=0xfb, .y=0x07, .sp=0xa2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x07}, {.addr=0x64d8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x64d8, .value=0xee, .type=IO_READ},
        {.addr=0x64d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9926, .a=0x13, .x=0xdc, .y=0xc5, .sp=0x17, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x19}, {.addr=0x9926, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9927, .a=0x13, .x=0xdc, .y=0x19, .sp=0x18, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x19}, {.addr=0x9926, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9926, .value=0xee, .type=IO_READ},
        {.addr=0x9927, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0062) {
    const struct CPU_State initial_cpu = {.pc=0x5501, .a=0x18, .x=0x0f, .y=0xfd, .sp=0xf4, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xa3}, {.addr=0x5501, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5502, .a=0x18, .x=0x0f, .y=0xa3, .sp=0xf5, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xa3}, {.addr=0x5501, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5501, .value=0xee, .type=IO_READ},
        {.addr=0x5502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0063) {
    const struct CPU_State initial_cpu = {.pc=0xd0b7, .a=0x9d, .x=0x2d, .y=0x28, .sp=0x45, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x23}, {.addr=0xd0b7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd0b8, .a=0x9d, .x=0x2d, .y=0x23, .sp=0x46, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x23}, {.addr=0xd0b7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd0b7, .value=0xee, .type=IO_READ},
        {.addr=0xd0b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0064) {
    const struct CPU_State initial_cpu = {.pc=0x2591, .a=0x39, .x=0xba, .y=0x4a, .sp=0xc2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xae}, {.addr=0x2591, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2592, .a=0x39, .x=0xba, .y=0xae, .sp=0xc3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xae}, {.addr=0x2591, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2591, .value=0xee, .type=IO_READ},
        {.addr=0x2592, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0065) {
    const struct CPU_State initial_cpu = {.pc=0x0613, .a=0x80, .x=0xb2, .y=0x3f, .sp=0x02, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x67}, {.addr=0x0613, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0614, .a=0x80, .x=0xb2, .y=0x67, .sp=0x03, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x67}, {.addr=0x0613, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0613, .value=0xee, .type=IO_READ},
        {.addr=0x0614, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0066) {
    const struct CPU_State initial_cpu = {.pc=0x77d9, .a=0x75, .x=0xde, .y=0x10, .sp=0xf0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x9d}, {.addr=0x77d9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x77da, .a=0x75, .x=0xde, .y=0x9d, .sp=0xf1, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x9d}, {.addr=0x77d9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x77d9, .value=0xee, .type=IO_READ},
        {.addr=0x77da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0067) {
    const struct CPU_State initial_cpu = {.pc=0x7b04, .a=0xc3, .x=0x94, .y=0x97, .sp=0xed, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x21}, {.addr=0x7b04, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7b05, .a=0xc3, .x=0x94, .y=0x21, .sp=0xee, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x21}, {.addr=0x7b04, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7b04, .value=0xee, .type=IO_READ},
        {.addr=0x7b05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0068) {
    const struct CPU_State initial_cpu = {.pc=0x7cec, .a=0x3d, .x=0xc8, .y=0xf3, .sp=0xfb, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xce}, {.addr=0x7cec, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7ced, .a=0x3d, .x=0xc8, .y=0xce, .sp=0xfc, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xce}, {.addr=0x7cec, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7cec, .value=0xee, .type=IO_READ},
        {.addr=0x7ced, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0069) {
    const struct CPU_State initial_cpu = {.pc=0x53f9, .a=0x15, .x=0xe1, .y=0x97, .sp=0x4a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x97}, {.addr=0x53f9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53fa, .a=0x15, .x=0xe1, .y=0x97, .sp=0x4b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x97}, {.addr=0x53f9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53f9, .value=0xee, .type=IO_READ},
        {.addr=0x53fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2a78, .a=0x36, .x=0xc3, .y=0x7d, .sp=0xa1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xb4}, {.addr=0x2a78, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2a79, .a=0x36, .x=0xc3, .y=0xb4, .sp=0xa2, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xb4}, {.addr=0x2a78, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2a78, .value=0xee, .type=IO_READ},
        {.addr=0x2a79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006B) {
    const struct CPU_State initial_cpu = {.pc=0x6b55, .a=0x2f, .x=0x97, .y=0x11, .sp=0x08, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x24}, {.addr=0x6b55, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6b56, .a=0x2f, .x=0x97, .y=0x24, .sp=0x09, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x24}, {.addr=0x6b55, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6b55, .value=0xee, .type=IO_READ},
        {.addr=0x6b56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006C) {
    const struct CPU_State initial_cpu = {.pc=0x4242, .a=0x1b, .x=0x2c, .y=0xd4, .sp=0xdc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x2e}, {.addr=0x4242, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4243, .a=0x1b, .x=0x2c, .y=0x2e, .sp=0xdd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x2e}, {.addr=0x4242, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4242, .value=0xee, .type=IO_READ},
        {.addr=0x4243, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0b51, .a=0xda, .x=0xc7, .y=0xaa, .sp=0xb7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xb8}, {.addr=0x0b51, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b52, .a=0xda, .x=0xc7, .y=0xb8, .sp=0xb8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xb8}, {.addr=0x0b51, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b51, .value=0xee, .type=IO_READ},
        {.addr=0x0b52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6b8f, .a=0xa0, .x=0x18, .y=0xbd, .sp=0x0d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x71}, {.addr=0x6b8f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6b90, .a=0xa0, .x=0x18, .y=0x71, .sp=0x0e, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x71}, {.addr=0x6b8f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6b8f, .value=0xee, .type=IO_READ},
        {.addr=0x6b90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_006F) {
    const struct CPU_State initial_cpu = {.pc=0xe7ca, .a=0xcb, .x=0x98, .y=0x2a, .sp=0x2c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xf4}, {.addr=0xe7ca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe7cb, .a=0xcb, .x=0x98, .y=0xf4, .sp=0x2d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xf4}, {.addr=0xe7ca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe7ca, .value=0xee, .type=IO_READ},
        {.addr=0xe7cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0070) {
    const struct CPU_State initial_cpu = {.pc=0xacc2, .a=0xf9, .x=0xb7, .y=0xe3, .sp=0x8a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x67}, {.addr=0xacc2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xacc3, .a=0xf9, .x=0xb7, .y=0x67, .sp=0x8b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x67}, {.addr=0xacc2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xacc2, .value=0xee, .type=IO_READ},
        {.addr=0xacc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0071) {
    const struct CPU_State initial_cpu = {.pc=0x12a0, .a=0xcb, .x=0x74, .y=0x4e, .sp=0xce, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xd6}, {.addr=0x12a0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x12a1, .a=0xcb, .x=0x74, .y=0xd6, .sp=0xcf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xd6}, {.addr=0x12a0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x12a0, .value=0xee, .type=IO_READ},
        {.addr=0x12a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0072) {
    const struct CPU_State initial_cpu = {.pc=0x4331, .a=0x90, .x=0xed, .y=0xd4, .sp=0x42, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x7b}, {.addr=0x4331, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4332, .a=0x90, .x=0xed, .y=0x7b, .sp=0x43, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x7b}, {.addr=0x4331, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4331, .value=0xee, .type=IO_READ},
        {.addr=0x4332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0073) {
    const struct CPU_State initial_cpu = {.pc=0x8b4d, .a=0xd9, .x=0x60, .y=0xe8, .sp=0x1b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x01}, {.addr=0x8b4d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8b4e, .a=0xd9, .x=0x60, .y=0x01, .sp=0x1c, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x01}, {.addr=0x8b4d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8b4d, .value=0xee, .type=IO_READ},
        {.addr=0x8b4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0074) {
    const struct CPU_State initial_cpu = {.pc=0x791a, .a=0xee, .x=0x7b, .y=0xbb, .sp=0x0d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x9d}, {.addr=0x791a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x791b, .a=0xee, .x=0x7b, .y=0x9d, .sp=0x0e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x9d}, {.addr=0x791a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x791a, .value=0xee, .type=IO_READ},
        {.addr=0x791b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0075) {
    const struct CPU_State initial_cpu = {.pc=0x9bc1, .a=0x2e, .x=0x2f, .y=0x31, .sp=0x88, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xc1}, {.addr=0x9bc1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9bc2, .a=0x2e, .x=0x2f, .y=0xc1, .sp=0x89, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xc1}, {.addr=0x9bc1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9bc1, .value=0xee, .type=IO_READ},
        {.addr=0x9bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0076) {
    const struct CPU_State initial_cpu = {.pc=0x195c, .a=0x5f, .x=0xb3, .y=0x45, .sp=0x32, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xba}, {.addr=0x195c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x195d, .a=0x5f, .x=0xb3, .y=0xba, .sp=0x33, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xba}, {.addr=0x195c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x195c, .value=0xee, .type=IO_READ},
        {.addr=0x195d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0077) {
    const struct CPU_State initial_cpu = {.pc=0x480a, .a=0xd5, .x=0xa8, .y=0x33, .sp=0xab, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x90}, {.addr=0x480a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x480b, .a=0xd5, .x=0xa8, .y=0x90, .sp=0xac, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x90}, {.addr=0x480a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x480a, .value=0xee, .type=IO_READ},
        {.addr=0x480b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0078) {
    const struct CPU_State initial_cpu = {.pc=0xfb67, .a=0x09, .x=0xd0, .y=0xb4, .sp=0x40, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x2a}, {.addr=0xfb67, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfb68, .a=0x09, .x=0xd0, .y=0x2a, .sp=0x41, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x2a}, {.addr=0xfb67, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfb67, .value=0xee, .type=IO_READ},
        {.addr=0xfb68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0079) {
    const struct CPU_State initial_cpu = {.pc=0x061a, .a=0xc8, .x=0x49, .y=0xaf, .sp=0xec, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xad}, {.addr=0x061a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x061b, .a=0xc8, .x=0x49, .y=0xad, .sp=0xed, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xad}, {.addr=0x061a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x061a, .value=0xee, .type=IO_READ},
        {.addr=0x061b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007A) {
    const struct CPU_State initial_cpu = {.pc=0x57a0, .a=0x3a, .x=0x0f, .y=0xe3, .sp=0xbd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xa7}, {.addr=0x57a0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x57a1, .a=0x3a, .x=0x0f, .y=0xa7, .sp=0xbe, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xa7}, {.addr=0x57a0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x57a0, .value=0xee, .type=IO_READ},
        {.addr=0x57a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007B) {
    const struct CPU_State initial_cpu = {.pc=0x1ac9, .a=0x21, .x=0x46, .y=0x29, .sp=0x1a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x8d}, {.addr=0x1ac9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1aca, .a=0x21, .x=0x46, .y=0x8d, .sp=0x1b, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x8d}, {.addr=0x1ac9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1ac9, .value=0xee, .type=IO_READ},
        {.addr=0x1aca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007C) {
    const struct CPU_State initial_cpu = {.pc=0x18e4, .a=0x0a, .x=0x73, .y=0x4b, .sp=0x94, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x86}, {.addr=0x18e4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x18e5, .a=0x0a, .x=0x73, .y=0x86, .sp=0x95, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x86}, {.addr=0x18e4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x18e4, .value=0xee, .type=IO_READ},
        {.addr=0x18e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007D) {
    const struct CPU_State initial_cpu = {.pc=0x568f, .a=0x3b, .x=0x20, .y=0xc4, .sp=0xab, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xac}, {.addr=0x568f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5690, .a=0x3b, .x=0x20, .y=0xac, .sp=0xac, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xac}, {.addr=0x568f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x568f, .value=0xee, .type=IO_READ},
        {.addr=0x5690, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007E) {
    const struct CPU_State initial_cpu = {.pc=0xd46e, .a=0x9e, .x=0xc1, .y=0x0b, .sp=0xf1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x38}, {.addr=0xd46e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd46f, .a=0x9e, .x=0xc1, .y=0x38, .sp=0xf2, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x38}, {.addr=0xd46e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd46e, .value=0xee, .type=IO_READ},
        {.addr=0xd46f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_007F) {
    const struct CPU_State initial_cpu = {.pc=0xab4c, .a=0x42, .x=0xf5, .y=0x65, .sp=0x3a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x75}, {.addr=0xab4c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xab4d, .a=0x42, .x=0xf5, .y=0x75, .sp=0x3b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x75}, {.addr=0xab4c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xab4c, .value=0xee, .type=IO_READ},
        {.addr=0xab4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0080) {
    const struct CPU_State initial_cpu = {.pc=0xfaf0, .a=0xb5, .x=0xb3, .y=0x0e, .sp=0x60, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x5b}, {.addr=0xfaf0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfaf1, .a=0xb5, .x=0xb3, .y=0x5b, .sp=0x61, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x5b}, {.addr=0xfaf0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfaf0, .value=0xee, .type=IO_READ},
        {.addr=0xfaf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0081) {
    const struct CPU_State initial_cpu = {.pc=0xe237, .a=0x53, .x=0x63, .y=0xa3, .sp=0xe2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x4f}, {.addr=0xe237, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe238, .a=0x53, .x=0x63, .y=0x4f, .sp=0xe3, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x4f}, {.addr=0xe237, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe237, .value=0xee, .type=IO_READ},
        {.addr=0xe238, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2668, .a=0x99, .x=0xba, .y=0x27, .sp=0x72, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x0e}, {.addr=0x2668, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2669, .a=0x99, .x=0xba, .y=0x0e, .sp=0x73, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x0e}, {.addr=0x2668, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2668, .value=0xee, .type=IO_READ},
        {.addr=0x2669, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4c4a, .a=0xa9, .x=0xd0, .y=0x34, .sp=0xec, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x08}, {.addr=0x4c4a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c4b, .a=0xa9, .x=0xd0, .y=0x08, .sp=0xed, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x08}, {.addr=0x4c4a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c4a, .value=0xee, .type=IO_READ},
        {.addr=0x4c4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0084) {
    const struct CPU_State initial_cpu = {.pc=0x2498, .a=0x9b, .x=0x58, .y=0xac, .sp=0xd6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x44}, {.addr=0x2498, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2499, .a=0x9b, .x=0x58, .y=0x44, .sp=0xd7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x44}, {.addr=0x2498, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2498, .value=0xee, .type=IO_READ},
        {.addr=0x2499, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0085) {
    const struct CPU_State initial_cpu = {.pc=0xb744, .a=0xf2, .x=0xad, .y=0x6d, .sp=0x27, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x01}, {.addr=0xb744, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb745, .a=0xf2, .x=0xad, .y=0x01, .sp=0x28, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x01}, {.addr=0xb744, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb744, .value=0xee, .type=IO_READ},
        {.addr=0xb745, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0086) {
    const struct CPU_State initial_cpu = {.pc=0xd0e0, .a=0x65, .x=0xe4, .y=0x06, .sp=0x0b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x55}, {.addr=0xd0e0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd0e1, .a=0x65, .x=0xe4, .y=0x55, .sp=0x0c, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x55}, {.addr=0xd0e0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd0e0, .value=0xee, .type=IO_READ},
        {.addr=0xd0e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0087) {
    const struct CPU_State initial_cpu = {.pc=0x94e1, .a=0x41, .x=0x17, .y=0x31, .sp=0xea, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xed}, {.addr=0x94e1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x94e2, .a=0x41, .x=0x17, .y=0xed, .sp=0xeb, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xed}, {.addr=0x94e1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x94e1, .value=0xee, .type=IO_READ},
        {.addr=0x94e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0088) {
    const struct CPU_State initial_cpu = {.pc=0xd0b5, .a=0x14, .x=0x1c, .y=0x1f, .sp=0x60, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xf3}, {.addr=0xd0b5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd0b6, .a=0x14, .x=0x1c, .y=0xf3, .sp=0x61, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xf3}, {.addr=0xd0b5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd0b5, .value=0xee, .type=IO_READ},
        {.addr=0xd0b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0089) {
    const struct CPU_State initial_cpu = {.pc=0x98e0, .a=0x22, .x=0x8e, .y=0x83, .sp=0xd0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xb4}, {.addr=0x98e0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x98e1, .a=0x22, .x=0x8e, .y=0xb4, .sp=0xd1, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb4}, {.addr=0x98e0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x98e0, .value=0xee, .type=IO_READ},
        {.addr=0x98e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008A) {
    const struct CPU_State initial_cpu = {.pc=0x0341, .a=0x79, .x=0x68, .y=0x80, .sp=0x2a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x7c}, {.addr=0x0341, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0342, .a=0x79, .x=0x68, .y=0x7c, .sp=0x2b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x7c}, {.addr=0x0341, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0341, .value=0xee, .type=IO_READ},
        {.addr=0x0342, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008B) {
    const struct CPU_State initial_cpu = {.pc=0xe798, .a=0x18, .x=0x63, .y=0xe4, .sp=0x63, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xef}, {.addr=0xe798, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe799, .a=0x18, .x=0x63, .y=0xef, .sp=0x64, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xef}, {.addr=0xe798, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe798, .value=0xee, .type=IO_READ},
        {.addr=0xe799, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008C) {
    const struct CPU_State initial_cpu = {.pc=0x4568, .a=0xcf, .x=0x4d, .y=0x0f, .sp=0x9d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xd5}, {.addr=0x4568, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4569, .a=0xcf, .x=0x4d, .y=0xd5, .sp=0x9e, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd5}, {.addr=0x4568, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4568, .value=0xee, .type=IO_READ},
        {.addr=0x4569, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3fad, .a=0x62, .x=0x4c, .y=0xdc, .sp=0x88, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x4d}, {.addr=0x3fad, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3fae, .a=0x62, .x=0x4c, .y=0x4d, .sp=0x89, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x4d}, {.addr=0x3fad, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3fad, .value=0xee, .type=IO_READ},
        {.addr=0x3fae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008E) {
    const struct CPU_State initial_cpu = {.pc=0xa860, .a=0x48, .x=0x5f, .y=0x7e, .sp=0x07, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x2d}, {.addr=0xa860, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa861, .a=0x48, .x=0x5f, .y=0x2d, .sp=0x08, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x2d}, {.addr=0xa860, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa860, .value=0xee, .type=IO_READ},
        {.addr=0xa861, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_008F) {
    const struct CPU_State initial_cpu = {.pc=0x27ef, .a=0x8d, .x=0x1c, .y=0xa7, .sp=0xb3, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xe4}, {.addr=0x27ef, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x27f0, .a=0x8d, .x=0x1c, .y=0xe4, .sp=0xb4, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xe4}, {.addr=0x27ef, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x27ef, .value=0xee, .type=IO_READ},
        {.addr=0x27f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0d5b, .a=0xb7, .x=0xfd, .y=0xf0, .sp=0x29, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x5d}, {.addr=0x0d5b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0d5c, .a=0xb7, .x=0xfd, .y=0x5d, .sp=0x2a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x5d}, {.addr=0x0d5b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0d5b, .value=0xee, .type=IO_READ},
        {.addr=0x0d5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0091) {
    const struct CPU_State initial_cpu = {.pc=0x255c, .a=0x64, .x=0x59, .y=0x40, .sp=0xa8, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x80}, {.addr=0x255c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x255d, .a=0x64, .x=0x59, .y=0x80, .sp=0xa9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x80}, {.addr=0x255c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x255c, .value=0xee, .type=IO_READ},
        {.addr=0x255d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0092) {
    const struct CPU_State initial_cpu = {.pc=0x0711, .a=0x6a, .x=0x1f, .y=0x32, .sp=0x23, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x31}, {.addr=0x0711, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0712, .a=0x6a, .x=0x1f, .y=0x31, .sp=0x24, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x31}, {.addr=0x0711, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0711, .value=0xee, .type=IO_READ},
        {.addr=0x0712, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0093) {
    const struct CPU_State initial_cpu = {.pc=0xc727, .a=0x73, .x=0xa3, .y=0x82, .sp=0x9e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xbd}, {.addr=0xc727, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc728, .a=0x73, .x=0xa3, .y=0xbd, .sp=0x9f, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xbd}, {.addr=0xc727, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc727, .value=0xee, .type=IO_READ},
        {.addr=0xc728, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0094) {
    const struct CPU_State initial_cpu = {.pc=0x2cb1, .a=0x3e, .x=0xd7, .y=0xec, .sp=0xe5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x1c}, {.addr=0x2cb1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2cb2, .a=0x3e, .x=0xd7, .y=0x1c, .sp=0xe6, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x1c}, {.addr=0x2cb1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2cb1, .value=0xee, .type=IO_READ},
        {.addr=0x2cb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0095) {
    const struct CPU_State initial_cpu = {.pc=0x5762, .a=0x61, .x=0x2e, .y=0x42, .sp=0x65, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x74}, {.addr=0x5762, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5763, .a=0x61, .x=0x2e, .y=0x74, .sp=0x66, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x74}, {.addr=0x5762, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5762, .value=0xee, .type=IO_READ},
        {.addr=0x5763, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0096) {
    const struct CPU_State initial_cpu = {.pc=0x87df, .a=0xfc, .x=0xd1, .y=0x31, .sp=0xc9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x7d}, {.addr=0x87df, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x87e0, .a=0xfc, .x=0xd1, .y=0x7d, .sp=0xca, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x7d}, {.addr=0x87df, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x87df, .value=0xee, .type=IO_READ},
        {.addr=0x87e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0097) {
    const struct CPU_State initial_cpu = {.pc=0xaccb, .a=0x8f, .x=0xbf, .y=0xf7, .sp=0xe6, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xd8}, {.addr=0xaccb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaccc, .a=0x8f, .x=0xbf, .y=0xd8, .sp=0xe7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xd8}, {.addr=0xaccb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaccb, .value=0xee, .type=IO_READ},
        {.addr=0xaccc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0098) {
    const struct CPU_State initial_cpu = {.pc=0x4f60, .a=0xc5, .x=0x06, .y=0xdd, .sp=0x71, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x55}, {.addr=0x4f60, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4f61, .a=0xc5, .x=0x06, .y=0x55, .sp=0x72, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x55}, {.addr=0x4f60, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4f60, .value=0xee, .type=IO_READ},
        {.addr=0x4f61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0099) {
    const struct CPU_State initial_cpu = {.pc=0xac82, .a=0xd2, .x=0x08, .y=0x49, .sp=0xbb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x42}, {.addr=0xac82, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xac83, .a=0xd2, .x=0x08, .y=0x42, .sp=0xbc, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x42}, {.addr=0xac82, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xac82, .value=0xee, .type=IO_READ},
        {.addr=0xac83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009A) {
    const struct CPU_State initial_cpu = {.pc=0x92e7, .a=0xa2, .x=0x6a, .y=0xb1, .sp=0xc2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x95}, {.addr=0x92e7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x92e8, .a=0xa2, .x=0x6a, .y=0x95, .sp=0xc3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x95}, {.addr=0x92e7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x92e7, .value=0xee, .type=IO_READ},
        {.addr=0x92e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009B) {
    const struct CPU_State initial_cpu = {.pc=0x768c, .a=0x4d, .x=0x6d, .y=0x49, .sp=0x11, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x90}, {.addr=0x768c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x768d, .a=0x4d, .x=0x6d, .y=0x90, .sp=0x12, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x90}, {.addr=0x768c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x768c, .value=0xee, .type=IO_READ},
        {.addr=0x768d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009C) {
    const struct CPU_State initial_cpu = {.pc=0x6500, .a=0x17, .x=0xf3, .y=0x92, .sp=0xa4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x80}, {.addr=0x6500, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6501, .a=0x17, .x=0xf3, .y=0x80, .sp=0xa5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x80}, {.addr=0x6500, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6500, .value=0xee, .type=IO_READ},
        {.addr=0x6501, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009D) {
    const struct CPU_State initial_cpu = {.pc=0x0a1d, .a=0x95, .x=0xcc, .y=0x9a, .sp=0xab, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xc2}, {.addr=0x0a1d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0a1e, .a=0x95, .x=0xcc, .y=0xc2, .sp=0xac, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xc2}, {.addr=0x0a1d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0a1d, .value=0xee, .type=IO_READ},
        {.addr=0x0a1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009E) {
    const struct CPU_State initial_cpu = {.pc=0x53bf, .a=0xf6, .x=0x2b, .y=0x0b, .sp=0x23, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x99}, {.addr=0x53bf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53c0, .a=0xf6, .x=0x2b, .y=0x99, .sp=0x24, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x99}, {.addr=0x53bf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53bf, .value=0xee, .type=IO_READ},
        {.addr=0x53c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_009F) {
    const struct CPU_State initial_cpu = {.pc=0x85f5, .a=0xd9, .x=0xda, .y=0x46, .sp=0x21, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xd9}, {.addr=0x85f5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x85f6, .a=0xd9, .x=0xda, .y=0xd9, .sp=0x22, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xd9}, {.addr=0x85f5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x85f5, .value=0xee, .type=IO_READ},
        {.addr=0x85f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x8d8a, .a=0xcd, .x=0x20, .y=0x00, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x60}, {.addr=0x8d8a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8d8b, .a=0xcd, .x=0x20, .y=0x60, .sp=0x91, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x60}, {.addr=0x8d8a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8d8a, .value=0xee, .type=IO_READ},
        {.addr=0x8d8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xf8a6, .a=0xca, .x=0x07, .y=0x38, .sp=0x3c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x2b}, {.addr=0xf8a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf8a7, .a=0xca, .x=0x07, .y=0x2b, .sp=0x3d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x2b}, {.addr=0xf8a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf8a6, .value=0xee, .type=IO_READ},
        {.addr=0xf8a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xb39d, .a=0x12, .x=0x64, .y=0x6c, .sp=0x32, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xbc}, {.addr=0xb39d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb39e, .a=0x12, .x=0x64, .y=0xbc, .sp=0x33, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xbc}, {.addr=0xb39d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb39d, .value=0xee, .type=IO_READ},
        {.addr=0xb39e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x2adc, .a=0xce, .x=0xcf, .y=0x2c, .sp=0x26, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x82}, {.addr=0x2adc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2add, .a=0xce, .x=0xcf, .y=0x82, .sp=0x27, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x82}, {.addr=0x2adc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2adc, .value=0xee, .type=IO_READ},
        {.addr=0x2add, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x46e4, .a=0x89, .x=0x00, .y=0xa9, .sp=0xf8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x3b}, {.addr=0x46e4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x46e5, .a=0x89, .x=0x00, .y=0x3b, .sp=0xf9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x3b}, {.addr=0x46e4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x46e4, .value=0xee, .type=IO_READ},
        {.addr=0x46e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xce31, .a=0x5f, .x=0x9a, .y=0xe1, .sp=0xef, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x1d}, {.addr=0xce31, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xce32, .a=0x5f, .x=0x9a, .y=0x1d, .sp=0xf0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x1d}, {.addr=0xce31, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xce31, .value=0xee, .type=IO_READ},
        {.addr=0xce32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xfa77, .a=0xc9, .x=0xbd, .y=0x15, .sp=0x67, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xcb}, {.addr=0xfa77, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfa78, .a=0xc9, .x=0xbd, .y=0xcb, .sp=0x68, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xcb}, {.addr=0xfa77, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfa77, .value=0xee, .type=IO_READ},
        {.addr=0xfa78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xd8af, .a=0xd7, .x=0x4c, .y=0x7a, .sp=0x6e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xd2}, {.addr=0xd8af, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd8b0, .a=0xd7, .x=0x4c, .y=0xd2, .sp=0x6f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xd2}, {.addr=0xd8af, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd8af, .value=0xee, .type=IO_READ},
        {.addr=0xd8b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x416e, .a=0x3e, .x=0xca, .y=0x78, .sp=0x45, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x8a}, {.addr=0x416e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x416f, .a=0x3e, .x=0xca, .y=0x8a, .sp=0x46, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x8a}, {.addr=0x416e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x416e, .value=0xee, .type=IO_READ},
        {.addr=0x416f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x22c3, .a=0xc7, .x=0x6d, .y=0x93, .sp=0x3d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x64}, {.addr=0x22c3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x22c4, .a=0xc7, .x=0x6d, .y=0x64, .sp=0x3e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x64}, {.addr=0x22c3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x22c3, .value=0xee, .type=IO_READ},
        {.addr=0x22c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x67a3, .a=0x11, .x=0x6e, .y=0x1f, .sp=0x3a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x66}, {.addr=0x67a3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x67a4, .a=0x11, .x=0x6e, .y=0x66, .sp=0x3b, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x66}, {.addr=0x67a3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x67a3, .value=0xee, .type=IO_READ},
        {.addr=0x67a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x1bf1, .a=0x00, .x=0x18, .y=0x9d, .sp=0xad, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x53}, {.addr=0x1bf1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1bf2, .a=0x00, .x=0x18, .y=0x53, .sp=0xae, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x53}, {.addr=0x1bf1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1bf1, .value=0xee, .type=IO_READ},
        {.addr=0x1bf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe124, .a=0xa3, .x=0xbe, .y=0xde, .sp=0xb5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x6f}, {.addr=0xe124, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe125, .a=0xa3, .x=0xbe, .y=0x6f, .sp=0xb6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x6f}, {.addr=0xe124, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe124, .value=0xee, .type=IO_READ},
        {.addr=0xe125, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x278e, .a=0x5d, .x=0x19, .y=0xeb, .sp=0x95, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xe4}, {.addr=0x278e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x278f, .a=0x5d, .x=0x19, .y=0xe4, .sp=0x96, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xe4}, {.addr=0x278e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x278e, .value=0xee, .type=IO_READ},
        {.addr=0x278f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x93cb, .a=0xf8, .x=0x54, .y=0x66, .sp=0x70, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xdc}, {.addr=0x93cb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x93cc, .a=0xf8, .x=0x54, .y=0xdc, .sp=0x71, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xdc}, {.addr=0x93cb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x93cb, .value=0xee, .type=IO_READ},
        {.addr=0x93cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xcbaf, .a=0x8e, .x=0xef, .y=0x9a, .sp=0xa6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x65}, {.addr=0xcbaf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcbb0, .a=0x8e, .x=0xef, .y=0x65, .sp=0xa7, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x65}, {.addr=0xcbaf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcbaf, .value=0xee, .type=IO_READ},
        {.addr=0xcbb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0xca, .x=0x36, .y=0x49, .sp=0xbf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x91}, {.addr=0xf66b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf66c, .a=0xca, .x=0x36, .y=0x91, .sp=0xc0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x91}, {.addr=0xf66b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0xee, .type=IO_READ},
        {.addr=0xf66c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xd39c, .a=0x37, .x=0x35, .y=0x67, .sp=0x81, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x1a}, {.addr=0xd39c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd39d, .a=0x37, .x=0x35, .y=0x1a, .sp=0x82, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x1a}, {.addr=0xd39c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd39c, .value=0xee, .type=IO_READ},
        {.addr=0xd39d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xf3f2, .a=0x2a, .x=0x7e, .y=0x82, .sp=0x5d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xf0}, {.addr=0xf3f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf3f3, .a=0x2a, .x=0x7e, .y=0xf0, .sp=0x5e, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xf0}, {.addr=0xf3f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf3f2, .value=0xee, .type=IO_READ},
        {.addr=0xf3f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xd9dd, .a=0x58, .x=0x51, .y=0x82, .sp=0xc7, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x41}, {.addr=0xd9dd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd9de, .a=0x58, .x=0x51, .y=0x41, .sp=0xc8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x41}, {.addr=0xd9dd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd9dd, .value=0xee, .type=IO_READ},
        {.addr=0xd9de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xdc82, .a=0x36, .x=0xe9, .y=0xe7, .sp=0xac, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xb5}, {.addr=0xdc82, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdc83, .a=0x36, .x=0xe9, .y=0xb5, .sp=0xad, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xb5}, {.addr=0xdc82, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdc82, .value=0xee, .type=IO_READ},
        {.addr=0xdc83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x76f2, .a=0x8a, .x=0xe0, .y=0x3c, .sp=0x3d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0x76f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x76f3, .a=0x8a, .x=0xe0, .y=0x50, .sp=0x3e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0x76f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x76f2, .value=0xee, .type=IO_READ},
        {.addr=0x76f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x5fca, .a=0xcc, .x=0xe2, .y=0x96, .sp=0x74, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x67}, {.addr=0x5fca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5fcb, .a=0xcc, .x=0xe2, .y=0x67, .sp=0x75, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x67}, {.addr=0x5fca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5fca, .value=0xee, .type=IO_READ},
        {.addr=0x5fcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xe643, .a=0x29, .x=0x41, .y=0x60, .sp=0x07, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x52}, {.addr=0xe643, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe644, .a=0x29, .x=0x41, .y=0x52, .sp=0x08, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x52}, {.addr=0xe643, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe643, .value=0xee, .type=IO_READ},
        {.addr=0xe644, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x23a1, .a=0x48, .x=0x61, .y=0xd3, .sp=0xe4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x15}, {.addr=0x23a1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x23a2, .a=0x48, .x=0x61, .y=0x15, .sp=0xe5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x15}, {.addr=0x23a1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x23a1, .value=0xee, .type=IO_READ},
        {.addr=0x23a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x5066, .a=0xa4, .x=0xfd, .y=0x11, .sp=0xc3, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x7d}, {.addr=0x5066, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5067, .a=0xa4, .x=0xfd, .y=0x7d, .sp=0xc4, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x7d}, {.addr=0x5066, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5066, .value=0xee, .type=IO_READ},
        {.addr=0x5067, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xe2dd, .a=0x17, .x=0xa6, .y=0x49, .sp=0xa4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xee}, {.addr=0xe2dd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe2de, .a=0x17, .x=0xa6, .y=0xee, .sp=0xa5, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xee}, {.addr=0xe2dd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe2dd, .value=0xee, .type=IO_READ},
        {.addr=0xe2de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xf9f2, .a=0x7c, .x=0x60, .y=0x8f, .sp=0x90, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x4a}, {.addr=0xf9f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf9f3, .a=0x7c, .x=0x60, .y=0x4a, .sp=0x91, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x4a}, {.addr=0xf9f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf9f2, .value=0xee, .type=IO_READ},
        {.addr=0xf9f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xbe9b, .a=0xca, .x=0x69, .y=0xec, .sp=0xb9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x18}, {.addr=0xbe9b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbe9c, .a=0xca, .x=0x69, .y=0x18, .sp=0xba, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x18}, {.addr=0xbe9b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbe9b, .value=0xee, .type=IO_READ},
        {.addr=0xbe9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xecc6, .a=0x0b, .x=0xce, .y=0xdb, .sp=0x94, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xa8}, {.addr=0xecc6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xecc7, .a=0x0b, .x=0xce, .y=0xa8, .sp=0x95, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xa8}, {.addr=0xecc6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xecc6, .value=0xee, .type=IO_READ},
        {.addr=0xecc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe9fe, .a=0xa2, .x=0xbe, .y=0x4b, .sp=0xc0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xaf}, {.addr=0xe9fe, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe9ff, .a=0xa2, .x=0xbe, .y=0xaf, .sp=0xc1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xaf}, {.addr=0xe9fe, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe9fe, .value=0xee, .type=IO_READ},
        {.addr=0xe9ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x713d, .a=0x02, .x=0x8b, .y=0xb0, .sp=0x2c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xee}, {.addr=0x713d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x713e, .a=0x02, .x=0x8b, .y=0xee, .sp=0x2d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xee}, {.addr=0x713d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x713d, .value=0xee, .type=IO_READ},
        {.addr=0x713e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x26c6, .a=0x44, .x=0xa8, .y=0xf6, .sp=0xb8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xf6}, {.addr=0x26c6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x26c7, .a=0x44, .x=0xa8, .y=0xf6, .sp=0xb9, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xf6}, {.addr=0x26c6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x26c6, .value=0xee, .type=IO_READ},
        {.addr=0x26c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xc639, .a=0xf4, .x=0x2d, .y=0xe5, .sp=0x5f, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x08}, {.addr=0xc639, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc63a, .a=0xf4, .x=0x2d, .y=0x08, .sp=0x60, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x08}, {.addr=0xc639, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc639, .value=0xee, .type=IO_READ},
        {.addr=0xc63a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x5083, .a=0xde, .x=0x28, .y=0x31, .sp=0xd8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x08}, {.addr=0x5083, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5084, .a=0xde, .x=0x28, .y=0x08, .sp=0xd9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x08}, {.addr=0x5083, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5083, .value=0xee, .type=IO_READ},
        {.addr=0x5084, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x96b9, .a=0xe5, .x=0xe1, .y=0xf4, .sp=0xcc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x66}, {.addr=0x96b9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x96ba, .a=0xe5, .x=0xe1, .y=0x66, .sp=0xcd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x66}, {.addr=0x96b9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x96b9, .value=0xee, .type=IO_READ},
        {.addr=0x96ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xccfb, .a=0x18, .x=0x90, .y=0xc0, .sp=0x56, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x29}, {.addr=0xccfb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xccfc, .a=0x18, .x=0x90, .y=0x29, .sp=0x57, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x29}, {.addr=0xccfb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xccfb, .value=0xee, .type=IO_READ},
        {.addr=0xccfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x7170, .a=0x68, .x=0x24, .y=0xe0, .sp=0x49, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x24}, {.addr=0x7170, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7171, .a=0x68, .x=0x24, .y=0x24, .sp=0x4a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x24}, {.addr=0x7170, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7170, .value=0xee, .type=IO_READ},
        {.addr=0x7171, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x1aa5, .a=0x22, .x=0x05, .y=0x64, .sp=0x63, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xda}, {.addr=0x1aa5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1aa6, .a=0x22, .x=0x05, .y=0xda, .sp=0x64, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xda}, {.addr=0x1aa5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1aa5, .value=0xee, .type=IO_READ},
        {.addr=0x1aa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb0b6, .a=0x71, .x=0xbd, .y=0xd1, .sp=0xb8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x90}, {.addr=0xb0b6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb0b7, .a=0x71, .x=0xbd, .y=0x90, .sp=0xb9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x90}, {.addr=0xb0b6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb0b6, .value=0xee, .type=IO_READ},
        {.addr=0xb0b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x8ec2, .a=0x98, .x=0x4e, .y=0x32, .sp=0xda, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xb1}, {.addr=0x8ec2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8ec3, .a=0x98, .x=0x4e, .y=0xb1, .sp=0xdb, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xb1}, {.addr=0x8ec2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8ec2, .value=0xee, .type=IO_READ},
        {.addr=0x8ec3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa442, .a=0x1f, .x=0xb1, .y=0xb0, .sp=0xd9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x86}, {.addr=0xa442, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa443, .a=0x1f, .x=0xb1, .y=0x86, .sp=0xda, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x86}, {.addr=0xa442, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa442, .value=0xee, .type=IO_READ},
        {.addr=0xa443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x1fab, .a=0x47, .x=0x51, .y=0x8e, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x9f}, {.addr=0x1fab, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1fac, .a=0x47, .x=0x51, .y=0x9f, .sp=0x29, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x9f}, {.addr=0x1fab, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1fab, .value=0xee, .type=IO_READ},
        {.addr=0x1fac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x8f88, .a=0xf1, .x=0x46, .y=0x27, .sp=0xd5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xa4}, {.addr=0x8f88, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8f89, .a=0xf1, .x=0x46, .y=0xa4, .sp=0xd6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xa4}, {.addr=0x8f88, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8f88, .value=0xee, .type=IO_READ},
        {.addr=0x8f89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x4b50, .a=0xab, .x=0x0c, .y=0x84, .sp=0x2d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x8c}, {.addr=0x4b50, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4b51, .a=0xab, .x=0x0c, .y=0x8c, .sp=0x2e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x8c}, {.addr=0x4b50, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4b50, .value=0xee, .type=IO_READ},
        {.addr=0x4b51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x2edf, .a=0x58, .x=0xb8, .y=0x0d, .sp=0x26, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x33}, {.addr=0x2edf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ee0, .a=0x58, .x=0xb8, .y=0x33, .sp=0x27, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x33}, {.addr=0x2edf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2edf, .value=0xee, .type=IO_READ},
        {.addr=0x2ee0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xee4a, .a=0xf7, .x=0x1b, .y=0xa7, .sp=0x4a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xe0}, {.addr=0xee4a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xee4b, .a=0xf7, .x=0x1b, .y=0xe0, .sp=0x4b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xe0}, {.addr=0xee4a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xee4a, .value=0xee, .type=IO_READ},
        {.addr=0xee4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xd915, .a=0xcd, .x=0x33, .y=0xbe, .sp=0x49, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x98}, {.addr=0xd915, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd916, .a=0xcd, .x=0x33, .y=0x98, .sp=0x4a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x98}, {.addr=0xd915, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd915, .value=0xee, .type=IO_READ},
        {.addr=0xd916, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x5f64, .a=0x41, .x=0x34, .y=0x63, .sp=0x0f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xaf}, {.addr=0x5f64, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5f65, .a=0x41, .x=0x34, .y=0xaf, .sp=0x10, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xaf}, {.addr=0x5f64, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5f64, .value=0xee, .type=IO_READ},
        {.addr=0x5f65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x159a, .a=0x11, .x=0x9d, .y=0x9f, .sp=0xad, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xa5}, {.addr=0x159a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x159b, .a=0x11, .x=0x9d, .y=0xa5, .sp=0xae, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xa5}, {.addr=0x159a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x159a, .value=0xee, .type=IO_READ},
        {.addr=0x159b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x3592, .a=0x7b, .x=0x01, .y=0x88, .sp=0xaf, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xbe}, {.addr=0x3592, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3593, .a=0x7b, .x=0x01, .y=0xbe, .sp=0xb0, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xbe}, {.addr=0x3592, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3592, .value=0xee, .type=IO_READ},
        {.addr=0x3593, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xb2ab, .a=0xaa, .x=0x7e, .y=0x10, .sp=0x9e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xef}, {.addr=0xb2ab, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb2ac, .a=0xaa, .x=0x7e, .y=0xef, .sp=0x9f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xef}, {.addr=0xb2ab, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb2ab, .value=0xee, .type=IO_READ},
        {.addr=0xb2ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xc423, .a=0xec, .x=0xfe, .y=0x13, .sp=0x63, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x02}, {.addr=0xc423, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc424, .a=0xec, .x=0xfe, .y=0x02, .sp=0x64, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x02}, {.addr=0xc423, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc423, .value=0xee, .type=IO_READ},
        {.addr=0xc424, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x26ce, .a=0xb7, .x=0xe9, .y=0xd9, .sp=0x0f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xf3}, {.addr=0x26ce, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x26cf, .a=0xb7, .x=0xe9, .y=0xf3, .sp=0x10, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xf3}, {.addr=0x26ce, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x26ce, .value=0xee, .type=IO_READ},
        {.addr=0x26cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6e5d, .a=0x27, .x=0xed, .y=0x81, .sp=0x75, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x2f}, {.addr=0x6e5d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6e5e, .a=0x27, .x=0xed, .y=0x2f, .sp=0x76, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x2f}, {.addr=0x6e5d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6e5d, .value=0xee, .type=IO_READ},
        {.addr=0x6e5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xec24, .a=0x83, .x=0x07, .y=0xba, .sp=0xbd, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xdd}, {.addr=0xec24, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xec25, .a=0x83, .x=0x07, .y=0xdd, .sp=0xbe, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xdd}, {.addr=0xec24, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xec24, .value=0xee, .type=IO_READ},
        {.addr=0xec25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xe02c, .a=0x95, .x=0x7b, .y=0x7a, .sp=0x9b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xa0}, {.addr=0xe02c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe02d, .a=0x95, .x=0x7b, .y=0xa0, .sp=0x9c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xa0}, {.addr=0xe02c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe02c, .value=0xee, .type=IO_READ},
        {.addr=0xe02d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xb138, .a=0x32, .x=0xc6, .y=0x2b, .sp=0xa0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x7c}, {.addr=0xb138, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb139, .a=0x32, .x=0xc6, .y=0x7c, .sp=0xa1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x7c}, {.addr=0xb138, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb138, .value=0xee, .type=IO_READ},
        {.addr=0xb139, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x2f68, .a=0x20, .x=0x77, .y=0x5a, .sp=0xfc, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xd5}, {.addr=0x2f68, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2f69, .a=0x20, .x=0x77, .y=0xd5, .sp=0xfd, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xd5}, {.addr=0x2f68, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2f68, .value=0xee, .type=IO_READ},
        {.addr=0x2f69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2534, .a=0xf3, .x=0xc4, .y=0x09, .sp=0x39, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x24}, {.addr=0x2534, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2535, .a=0xf3, .x=0xc4, .y=0x24, .sp=0x3a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x24}, {.addr=0x2534, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2534, .value=0xee, .type=IO_READ},
        {.addr=0x2535, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x152e, .a=0x1c, .x=0x43, .y=0x46, .sp=0x20, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x23}, {.addr=0x152e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x152f, .a=0x1c, .x=0x43, .y=0x23, .sp=0x21, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x23}, {.addr=0x152e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x152e, .value=0xee, .type=IO_READ},
        {.addr=0x152f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x2ecf, .a=0x3b, .x=0xa4, .y=0x10, .sp=0x48, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xc8}, {.addr=0x2ecf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ed0, .a=0x3b, .x=0xa4, .y=0xc8, .sp=0x49, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xc8}, {.addr=0x2ecf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2ecf, .value=0xee, .type=IO_READ},
        {.addr=0x2ed0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x6c0a, .a=0x98, .x=0x22, .y=0x2a, .sp=0x9e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xe0}, {.addr=0x6c0a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6c0b, .a=0x98, .x=0x22, .y=0xe0, .sp=0x9f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xe0}, {.addr=0x6c0a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6c0a, .value=0xee, .type=IO_READ},
        {.addr=0x6c0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x6b24, .a=0x7a, .x=0xb7, .y=0x24, .sp=0xd6, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xd1}, {.addr=0x6b24, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6b25, .a=0x7a, .x=0xb7, .y=0xd1, .sp=0xd7, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xd1}, {.addr=0x6b24, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6b24, .value=0xee, .type=IO_READ},
        {.addr=0x6b25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xde75, .a=0xb8, .x=0x09, .y=0xd1, .sp=0x75, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xe6}, {.addr=0xde75, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xde76, .a=0xb8, .x=0x09, .y=0xe6, .sp=0x76, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xe6}, {.addr=0xde75, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xde75, .value=0xee, .type=IO_READ},
        {.addr=0xde76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6d74, .a=0x81, .x=0x5c, .y=0x15, .sp=0xc3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xf7}, {.addr=0x6d74, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6d75, .a=0x81, .x=0x5c, .y=0xf7, .sp=0xc4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xf7}, {.addr=0x6d74, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6d74, .value=0xee, .type=IO_READ},
        {.addr=0x6d75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x9915, .a=0x98, .x=0x5a, .y=0xd6, .sp=0xc7, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x17}, {.addr=0x9915, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9916, .a=0x98, .x=0x5a, .y=0x17, .sp=0xc8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x17}, {.addr=0x9915, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9915, .value=0xee, .type=IO_READ},
        {.addr=0x9916, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x6f34, .a=0x33, .x=0xa8, .y=0x01, .sp=0x51, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x41}, {.addr=0x6f34, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6f35, .a=0x33, .x=0xa8, .y=0x41, .sp=0x52, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x41}, {.addr=0x6f34, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6f34, .value=0xee, .type=IO_READ},
        {.addr=0x6f35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xf402, .a=0x35, .x=0x55, .y=0x43, .sp=0x7e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x0f}, {.addr=0xf402, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf403, .a=0x35, .x=0x55, .y=0x0f, .sp=0x7f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x0f}, {.addr=0xf402, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf402, .value=0xee, .type=IO_READ},
        {.addr=0xf403, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6644, .a=0x84, .x=0x24, .y=0xe5, .sp=0x7c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x8f}, {.addr=0x6644, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6645, .a=0x84, .x=0x24, .y=0x8f, .sp=0x7d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x8f}, {.addr=0x6644, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6644, .value=0xee, .type=IO_READ},
        {.addr=0x6645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xd8cf, .a=0x53, .x=0x95, .y=0x45, .sp=0x59, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x3c}, {.addr=0xd8cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd8d0, .a=0x53, .x=0x95, .y=0x3c, .sp=0x5a, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x3c}, {.addr=0xd8cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd8cf, .value=0xee, .type=IO_READ},
        {.addr=0xd8d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x3340, .a=0x58, .x=0xcd, .y=0x3b, .sp=0xf4, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x04}, {.addr=0x3340, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3341, .a=0x58, .x=0xcd, .y=0x04, .sp=0xf5, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x04}, {.addr=0x3340, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3340, .value=0xee, .type=IO_READ},
        {.addr=0x3341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x75a9, .a=0x3a, .x=0xa2, .y=0x08, .sp=0x8c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xe6}, {.addr=0x75a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x75aa, .a=0x3a, .x=0xa2, .y=0xe6, .sp=0x8d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xe6}, {.addr=0x75a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x75a9, .value=0xee, .type=IO_READ},
        {.addr=0x75aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xee67, .a=0x9d, .x=0xf2, .y=0x29, .sp=0xf4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xd8}, {.addr=0xee67, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xee68, .a=0x9d, .x=0xf2, .y=0xd8, .sp=0xf5, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xd8}, {.addr=0xee67, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xee67, .value=0xee, .type=IO_READ},
        {.addr=0xee68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9ff4, .a=0x66, .x=0xcf, .y=0x04, .sp=0x28, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x01}, {.addr=0x9ff4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9ff5, .a=0x66, .x=0xcf, .y=0x01, .sp=0x29, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x01}, {.addr=0x9ff4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ff4, .value=0xee, .type=IO_READ},
        {.addr=0x9ff5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xc4dd, .a=0x9a, .x=0x26, .y=0x68, .sp=0x12, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xc4dd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc4de, .a=0x9a, .x=0x26, .y=0x00, .sp=0x13, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xc4dd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc4dd, .value=0xee, .type=IO_READ},
        {.addr=0xc4de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xe9ef, .a=0x54, .x=0x03, .y=0x70, .sp=0x39, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x2f}, {.addr=0xe9ef, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe9f0, .a=0x54, .x=0x03, .y=0x2f, .sp=0x3a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x2f}, {.addr=0xe9ef, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe9ef, .value=0xee, .type=IO_READ},
        {.addr=0xe9f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x5ffe, .a=0x0d, .x=0xab, .y=0x12, .sp=0xcf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xfc}, {.addr=0x5ffe, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5fff, .a=0x0d, .x=0xab, .y=0xfc, .sp=0xd0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xfc}, {.addr=0x5ffe, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ffe, .value=0xee, .type=IO_READ},
        {.addr=0x5fff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x6232, .a=0x04, .x=0x1c, .y=0xb5, .sp=0xf2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x5f}, {.addr=0x6232, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6233, .a=0x04, .x=0x1c, .y=0x5f, .sp=0xf3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x5f}, {.addr=0x6232, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6232, .value=0xee, .type=IO_READ},
        {.addr=0x6233, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x4247, .a=0x38, .x=0xaa, .y=0x35, .sp=0x0b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x0d}, {.addr=0x4247, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4248, .a=0x38, .x=0xaa, .y=0x0d, .sp=0x0c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x0d}, {.addr=0x4247, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4247, .value=0xee, .type=IO_READ},
        {.addr=0x4248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x093c, .a=0xb2, .x=0x35, .y=0xd2, .sp=0x05, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x27}, {.addr=0x093c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x093d, .a=0xb2, .x=0x35, .y=0x27, .sp=0x06, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x27}, {.addr=0x093c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x093c, .value=0xee, .type=IO_READ},
        {.addr=0x093d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x4b6b, .a=0x67, .x=0x0a, .y=0x78, .sp=0x1c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x41}, {.addr=0x4b6b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4b6c, .a=0x67, .x=0x0a, .y=0x41, .sp=0x1d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x41}, {.addr=0x4b6b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4b6b, .value=0xee, .type=IO_READ},
        {.addr=0x4b6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2275, .a=0x6a, .x=0xc9, .y=0xf6, .sp=0xae, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x5e}, {.addr=0x2275, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2276, .a=0x6a, .x=0xc9, .y=0x5e, .sp=0xaf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x5e}, {.addr=0x2275, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2275, .value=0xee, .type=IO_READ},
        {.addr=0x2276, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x6162, .a=0x79, .x=0x56, .y=0x4e, .sp=0x3f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xb8}, {.addr=0x6162, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6163, .a=0x79, .x=0x56, .y=0xb8, .sp=0x40, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xb8}, {.addr=0x6162, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6162, .value=0xee, .type=IO_READ},
        {.addr=0x6163, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x9d24, .a=0x42, .x=0xc6, .y=0xef, .sp=0x80, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x28}, {.addr=0x9d24, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9d25, .a=0x42, .x=0xc6, .y=0x28, .sp=0x81, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x28}, {.addr=0x9d24, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9d24, .value=0xee, .type=IO_READ},
        {.addr=0x9d25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x6473, .a=0xcd, .x=0xbe, .y=0x03, .sp=0x27, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x6473, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6474, .a=0xcd, .x=0xbe, .y=0x00, .sp=0x28, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x6473, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6473, .value=0xee, .type=IO_READ},
        {.addr=0x6474, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x2cd3, .a=0x25, .x=0xd9, .y=0x7c, .sp=0x32, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x89}, {.addr=0x2cd3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2cd4, .a=0x25, .x=0xd9, .y=0x89, .sp=0x33, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x89}, {.addr=0x2cd3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2cd3, .value=0xee, .type=IO_READ},
        {.addr=0x2cd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x9e51, .a=0xa6, .x=0x4c, .y=0x7d, .sp=0xe0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x8d}, {.addr=0x9e51, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9e52, .a=0xa6, .x=0x4c, .y=0x8d, .sp=0xe1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x8d}, {.addr=0x9e51, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9e51, .value=0xee, .type=IO_READ},
        {.addr=0x9e52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2708, .a=0xc5, .x=0x38, .y=0x01, .sp=0x68, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x8c}, {.addr=0x2708, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2709, .a=0xc5, .x=0x38, .y=0x8c, .sp=0x69, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x8c}, {.addr=0x2708, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2708, .value=0xee, .type=IO_READ},
        {.addr=0x2709, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x361f, .a=0x73, .x=0x75, .y=0x4f, .sp=0xc2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x8d}, {.addr=0x361f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3620, .a=0x73, .x=0x75, .y=0x8d, .sp=0xc3, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x8d}, {.addr=0x361f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x361f, .value=0xee, .type=IO_READ},
        {.addr=0x3620, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x5270, .a=0x55, .x=0x75, .y=0x5e, .sp=0x92, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x72}, {.addr=0x5270, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5271, .a=0x55, .x=0x75, .y=0x72, .sp=0x93, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x72}, {.addr=0x5270, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5270, .value=0xee, .type=IO_READ},
        {.addr=0x5271, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xcd29, .a=0x2b, .x=0x26, .y=0x27, .sp=0x5e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xbd}, {.addr=0xcd29, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcd2a, .a=0x2b, .x=0x26, .y=0xbd, .sp=0x5f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xbd}, {.addr=0xcd29, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcd29, .value=0xee, .type=IO_READ},
        {.addr=0xcd2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x196d, .a=0x70, .x=0xe4, .y=0x85, .sp=0x2f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xaa}, {.addr=0x196d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x196e, .a=0x70, .x=0xe4, .y=0xaa, .sp=0x30, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xaa}, {.addr=0x196d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x196d, .value=0xee, .type=IO_READ},
        {.addr=0x196e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb168, .a=0x0e, .x=0xb9, .y=0x42, .sp=0x5b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xbe}, {.addr=0xb168, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb169, .a=0x0e, .x=0xb9, .y=0xbe, .sp=0x5c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xbe}, {.addr=0xb168, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb168, .value=0xee, .type=IO_READ},
        {.addr=0xb169, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xfb18, .a=0x45, .x=0x69, .y=0x2c, .sp=0x0b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x4e}, {.addr=0xfb18, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfb19, .a=0x45, .x=0x69, .y=0x4e, .sp=0x0c, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x4e}, {.addr=0xfb18, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfb18, .value=0xee, .type=IO_READ},
        {.addr=0xfb19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x0f79, .a=0xc5, .x=0xe0, .y=0xf7, .sp=0xb2, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xa1}, {.addr=0x0f79, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f7a, .a=0xc5, .x=0xe0, .y=0xa1, .sp=0xb3, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xa1}, {.addr=0x0f79, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f79, .value=0xee, .type=IO_READ},
        {.addr=0x0f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0100) {
    const struct CPU_State initial_cpu = {.pc=0xffb9, .a=0x71, .x=0x64, .y=0x3b, .sp=0x97, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xfb}, {.addr=0xffb9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xffba, .a=0x71, .x=0x64, .y=0xfb, .sp=0x98, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xfb}, {.addr=0xffb9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xffb9, .value=0xee, .type=IO_READ},
        {.addr=0xffba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0101) {
    const struct CPU_State initial_cpu = {.pc=0x8e8c, .a=0x69, .x=0x29, .y=0xdd, .sp=0xef, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x37}, {.addr=0x8e8c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8e8d, .a=0x69, .x=0x29, .y=0x37, .sp=0xf0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x37}, {.addr=0x8e8c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8e8c, .value=0xee, .type=IO_READ},
        {.addr=0x8e8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0102) {
    const struct CPU_State initial_cpu = {.pc=0x9d80, .a=0xba, .x=0xc6, .y=0x9a, .sp=0x76, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x0e}, {.addr=0x9d80, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9d81, .a=0xba, .x=0xc6, .y=0x0e, .sp=0x77, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x0e}, {.addr=0x9d80, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9d80, .value=0xee, .type=IO_READ},
        {.addr=0x9d81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0103) {
    const struct CPU_State initial_cpu = {.pc=0x5e70, .a=0x64, .x=0xa8, .y=0xef, .sp=0x80, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x02}, {.addr=0x5e70, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5e71, .a=0x64, .x=0xa8, .y=0x02, .sp=0x81, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x02}, {.addr=0x5e70, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5e70, .value=0xee, .type=IO_READ},
        {.addr=0x5e71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0104) {
    const struct CPU_State initial_cpu = {.pc=0x1af8, .a=0x0f, .x=0xa7, .y=0x48, .sp=0xbf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x73}, {.addr=0x1af8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1af9, .a=0x0f, .x=0xa7, .y=0x73, .sp=0xc0, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x73}, {.addr=0x1af8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1af8, .value=0xee, .type=IO_READ},
        {.addr=0x1af9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0105) {
    const struct CPU_State initial_cpu = {.pc=0x4fda, .a=0x03, .x=0x66, .y=0x0a, .sp=0xf3, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xd3}, {.addr=0x4fda, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4fdb, .a=0x03, .x=0x66, .y=0xd3, .sp=0xf4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xd3}, {.addr=0x4fda, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4fda, .value=0xee, .type=IO_READ},
        {.addr=0x4fdb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0106) {
    const struct CPU_State initial_cpu = {.pc=0x9373, .a=0x8b, .x=0x7d, .y=0x5d, .sp=0x30, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xf8}, {.addr=0x9373, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9374, .a=0x8b, .x=0x7d, .y=0xf8, .sp=0x31, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xf8}, {.addr=0x9373, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9373, .value=0xee, .type=IO_READ},
        {.addr=0x9374, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0107) {
    const struct CPU_State initial_cpu = {.pc=0x3e59, .a=0xb0, .x=0xc4, .y=0x59, .sp=0xd2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xfa}, {.addr=0x3e59, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3e5a, .a=0xb0, .x=0xc4, .y=0xfa, .sp=0xd3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xfa}, {.addr=0x3e59, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3e59, .value=0xee, .type=IO_READ},
        {.addr=0x3e5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0108) {
    const struct CPU_State initial_cpu = {.pc=0x119b, .a=0x0b, .x=0xc7, .y=0xbb, .sp=0xb9, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x7a}, {.addr=0x119b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x119c, .a=0x0b, .x=0xc7, .y=0x7a, .sp=0xba, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x7a}, {.addr=0x119b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x119b, .value=0xee, .type=IO_READ},
        {.addr=0x119c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa774, .a=0x19, .x=0xf0, .y=0x34, .sp=0x45, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x8f}, {.addr=0xa774, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa775, .a=0x19, .x=0xf0, .y=0x8f, .sp=0x46, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x8f}, {.addr=0xa774, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa774, .value=0xee, .type=IO_READ},
        {.addr=0xa775, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010A) {
    const struct CPU_State initial_cpu = {.pc=0x4bfb, .a=0x2f, .x=0xa4, .y=0x12, .sp=0xd0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xcb}, {.addr=0x4bfb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4bfc, .a=0x2f, .x=0xa4, .y=0xcb, .sp=0xd1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xcb}, {.addr=0x4bfb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4bfb, .value=0xee, .type=IO_READ},
        {.addr=0x4bfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010B) {
    const struct CPU_State initial_cpu = {.pc=0x7154, .a=0x63, .x=0xa3, .y=0x4a, .sp=0x69, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x2c}, {.addr=0x7154, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7155, .a=0x63, .x=0xa3, .y=0x2c, .sp=0x6a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x2c}, {.addr=0x7154, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7154, .value=0xee, .type=IO_READ},
        {.addr=0x7155, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1acd, .a=0xe9, .x=0xaa, .y=0xed, .sp=0x29, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x4b}, {.addr=0x1acd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1ace, .a=0xe9, .x=0xaa, .y=0x4b, .sp=0x2a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x4b}, {.addr=0x1acd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1acd, .value=0xee, .type=IO_READ},
        {.addr=0x1ace, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010D) {
    const struct CPU_State initial_cpu = {.pc=0x96a6, .a=0x8d, .x=0xb6, .y=0xb4, .sp=0xb6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xfc}, {.addr=0x96a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x96a7, .a=0x8d, .x=0xb6, .y=0xfc, .sp=0xb7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xfc}, {.addr=0x96a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x96a6, .value=0xee, .type=IO_READ},
        {.addr=0x96a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010E) {
    const struct CPU_State initial_cpu = {.pc=0x79a4, .a=0xd2, .x=0xfc, .y=0xf9, .sp=0xb9, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x2e}, {.addr=0x79a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x79a5, .a=0xd2, .x=0xfc, .y=0x2e, .sp=0xba, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x2e}, {.addr=0x79a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x79a4, .value=0xee, .type=IO_READ},
        {.addr=0x79a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_010F) {
    const struct CPU_State initial_cpu = {.pc=0x1e62, .a=0xec, .x=0x9f, .y=0x23, .sp=0xdd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x25}, {.addr=0x1e62, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1e63, .a=0xec, .x=0x9f, .y=0x25, .sp=0xde, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x25}, {.addr=0x1e62, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1e62, .value=0xee, .type=IO_READ},
        {.addr=0x1e63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0110) {
    const struct CPU_State initial_cpu = {.pc=0x2afa, .a=0xe8, .x=0x59, .y=0x86, .sp=0x3f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x20}, {.addr=0x2afa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2afb, .a=0xe8, .x=0x59, .y=0x20, .sp=0x40, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x20}, {.addr=0x2afa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2afa, .value=0xee, .type=IO_READ},
        {.addr=0x2afb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0111) {
    const struct CPU_State initial_cpu = {.pc=0x98c8, .a=0x81, .x=0x79, .y=0x27, .sp=0x5f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x27}, {.addr=0x98c8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x98c9, .a=0x81, .x=0x79, .y=0x27, .sp=0x60, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x27}, {.addr=0x98c8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x98c8, .value=0xee, .type=IO_READ},
        {.addr=0x98c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0112) {
    const struct CPU_State initial_cpu = {.pc=0x0f23, .a=0x7c, .x=0xdf, .y=0x22, .sp=0x57, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xd7}, {.addr=0x0f23, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f24, .a=0x7c, .x=0xdf, .y=0xd7, .sp=0x58, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xd7}, {.addr=0x0f23, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f23, .value=0xee, .type=IO_READ},
        {.addr=0x0f24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa310, .a=0xdd, .x=0xbe, .y=0xda, .sp=0x5b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xc2}, {.addr=0xa310, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa311, .a=0xdd, .x=0xbe, .y=0xc2, .sp=0x5c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xc2}, {.addr=0xa310, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa310, .value=0xee, .type=IO_READ},
        {.addr=0xa311, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0114) {
    const struct CPU_State initial_cpu = {.pc=0xc0fd, .a=0x11, .x=0x5f, .y=0x29, .sp=0x61, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xf3}, {.addr=0xc0fd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc0fe, .a=0x11, .x=0x5f, .y=0xf3, .sp=0x62, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xf3}, {.addr=0xc0fd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc0fd, .value=0xee, .type=IO_READ},
        {.addr=0xc0fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0115) {
    const struct CPU_State initial_cpu = {.pc=0x21ff, .a=0xfe, .x=0x0e, .y=0x21, .sp=0x2e, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x05}, {.addr=0x21ff, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2200, .a=0xfe, .x=0x0e, .y=0x05, .sp=0x2f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x05}, {.addr=0x21ff, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x21ff, .value=0xee, .type=IO_READ},
        {.addr=0x2200, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0116) {
    const struct CPU_State initial_cpu = {.pc=0x28f9, .a=0x1d, .x=0xbf, .y=0x28, .sp=0xac, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x2a}, {.addr=0x28f9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x28fa, .a=0x1d, .x=0xbf, .y=0x2a, .sp=0xad, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x2a}, {.addr=0x28f9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x28f9, .value=0xee, .type=IO_READ},
        {.addr=0x28fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0117) {
    const struct CPU_State initial_cpu = {.pc=0xd75e, .a=0x1b, .x=0x14, .y=0x86, .sp=0xdb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x29}, {.addr=0xd75e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd75f, .a=0x1b, .x=0x14, .y=0x29, .sp=0xdc, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x29}, {.addr=0xd75e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd75e, .value=0xee, .type=IO_READ},
        {.addr=0xd75f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0118) {
    const struct CPU_State initial_cpu = {.pc=0xe36d, .a=0x2e, .x=0x73, .y=0x68, .sp=0x32, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xf7}, {.addr=0xe36d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe36e, .a=0x2e, .x=0x73, .y=0xf7, .sp=0x33, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xf7}, {.addr=0xe36d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe36d, .value=0xee, .type=IO_READ},
        {.addr=0xe36e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0119) {
    const struct CPU_State initial_cpu = {.pc=0x9bfd, .a=0x3e, .x=0xaf, .y=0x2f, .sp=0x94, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x34}, {.addr=0x9bfd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9bfe, .a=0x3e, .x=0xaf, .y=0x34, .sp=0x95, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x34}, {.addr=0x9bfd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9bfd, .value=0xee, .type=IO_READ},
        {.addr=0x9bfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011A) {
    const struct CPU_State initial_cpu = {.pc=0xd38c, .a=0x5e, .x=0x55, .y=0x3f, .sp=0xb8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xdd}, {.addr=0xd38c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd38d, .a=0x5e, .x=0x55, .y=0xdd, .sp=0xb9, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xdd}, {.addr=0xd38c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd38c, .value=0xee, .type=IO_READ},
        {.addr=0xd38d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc2a4, .a=0x86, .x=0x6d, .y=0xd4, .sp=0x40, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xd1}, {.addr=0xc2a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc2a5, .a=0x86, .x=0x6d, .y=0xd1, .sp=0x41, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xd1}, {.addr=0xc2a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc2a4, .value=0xee, .type=IO_READ},
        {.addr=0xc2a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011C) {
    const struct CPU_State initial_cpu = {.pc=0xe703, .a=0x0d, .x=0x5c, .y=0x9a, .sp=0xfb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x7f}, {.addr=0xe703, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe704, .a=0x0d, .x=0x5c, .y=0x7f, .sp=0xfc, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x7f}, {.addr=0xe703, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe703, .value=0xee, .type=IO_READ},
        {.addr=0xe704, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011D) {
    const struct CPU_State initial_cpu = {.pc=0xec77, .a=0xad, .x=0x9c, .y=0x82, .sp=0x17, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x4c}, {.addr=0xec77, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xec78, .a=0xad, .x=0x9c, .y=0x4c, .sp=0x18, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x4c}, {.addr=0xec77, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xec77, .value=0xee, .type=IO_READ},
        {.addr=0xec78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011E) {
    const struct CPU_State initial_cpu = {.pc=0xda1e, .a=0x8b, .x=0x6f, .y=0x63, .sp=0xcc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x11}, {.addr=0xda1e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xda1f, .a=0x8b, .x=0x6f, .y=0x11, .sp=0xcd, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x11}, {.addr=0xda1e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xda1e, .value=0xee, .type=IO_READ},
        {.addr=0xda1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_011F) {
    const struct CPU_State initial_cpu = {.pc=0x5321, .a=0xc9, .x=0x66, .y=0xe2, .sp=0xb7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x49}, {.addr=0x5321, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5322, .a=0xc9, .x=0x66, .y=0x49, .sp=0xb8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x49}, {.addr=0x5321, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5321, .value=0xee, .type=IO_READ},
        {.addr=0x5322, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0120) {
    const struct CPU_State initial_cpu = {.pc=0x94eb, .a=0xd2, .x=0x0f, .y=0x01, .sp=0x75, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xe3}, {.addr=0x94eb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x94ec, .a=0xd2, .x=0x0f, .y=0xe3, .sp=0x76, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xe3}, {.addr=0x94eb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x94eb, .value=0xee, .type=IO_READ},
        {.addr=0x94ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0121) {
    const struct CPU_State initial_cpu = {.pc=0xb0a1, .a=0x83, .x=0xab, .y=0x55, .sp=0x9b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xab}, {.addr=0xb0a1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb0a2, .a=0x83, .x=0xab, .y=0xab, .sp=0x9c, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xab}, {.addr=0xb0a1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb0a1, .value=0xee, .type=IO_READ},
        {.addr=0xb0a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2eb8, .a=0xa5, .x=0xf1, .y=0x5f, .sp=0xe0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x19}, {.addr=0x2eb8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2eb9, .a=0xa5, .x=0xf1, .y=0x19, .sp=0xe1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x19}, {.addr=0x2eb8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2eb8, .value=0xee, .type=IO_READ},
        {.addr=0x2eb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0123) {
    const struct CPU_State initial_cpu = {.pc=0x2ca5, .a=0x3f, .x=0x83, .y=0x23, .sp=0x9f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xe9}, {.addr=0x2ca5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ca6, .a=0x3f, .x=0x83, .y=0xe9, .sp=0xa0, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xe9}, {.addr=0x2ca5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2ca5, .value=0xee, .type=IO_READ},
        {.addr=0x2ca6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1cab, .a=0x90, .x=0xac, .y=0x90, .sp=0xf6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x82}, {.addr=0x1cab, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1cac, .a=0x90, .x=0xac, .y=0x82, .sp=0xf7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x82}, {.addr=0x1cab, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1cab, .value=0xee, .type=IO_READ},
        {.addr=0x1cac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0125) {
    const struct CPU_State initial_cpu = {.pc=0x3ea6, .a=0xd6, .x=0x7e, .y=0xee, .sp=0xd9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x2e}, {.addr=0x3ea6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3ea7, .a=0xd6, .x=0x7e, .y=0x2e, .sp=0xda, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x2e}, {.addr=0x3ea6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3ea6, .value=0xee, .type=IO_READ},
        {.addr=0x3ea7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0126) {
    const struct CPU_State initial_cpu = {.pc=0xefba, .a=0x64, .x=0xa5, .y=0x54, .sp=0x5f, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x17}, {.addr=0xefba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xefbb, .a=0x64, .x=0xa5, .y=0x17, .sp=0x60, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x17}, {.addr=0xefba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xefba, .value=0xee, .type=IO_READ},
        {.addr=0xefbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0127) {
    const struct CPU_State initial_cpu = {.pc=0xcdaa, .a=0xb7, .x=0xfa, .y=0x3d, .sp=0xa1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x8e}, {.addr=0xcdaa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcdab, .a=0xb7, .x=0xfa, .y=0x8e, .sp=0xa2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x8e}, {.addr=0xcdaa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcdaa, .value=0xee, .type=IO_READ},
        {.addr=0xcdab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0128) {
    const struct CPU_State initial_cpu = {.pc=0x82c7, .a=0x4d, .x=0xb9, .y=0xa8, .sp=0xcc, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xa3}, {.addr=0x82c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x82c8, .a=0x4d, .x=0xb9, .y=0xa3, .sp=0xcd, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xa3}, {.addr=0x82c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x82c7, .value=0xee, .type=IO_READ},
        {.addr=0x82c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0129) {
    const struct CPU_State initial_cpu = {.pc=0xfe63, .a=0x96, .x=0xe9, .y=0x75, .sp=0x70, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x77}, {.addr=0xfe63, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfe64, .a=0x96, .x=0xe9, .y=0x77, .sp=0x71, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x77}, {.addr=0xfe63, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfe63, .value=0xee, .type=IO_READ},
        {.addr=0xfe64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012A) {
    const struct CPU_State initial_cpu = {.pc=0xe203, .a=0xe1, .x=0x18, .y=0xe6, .sp=0xd8, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xf9}, {.addr=0xe203, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0xe1, .x=0x18, .y=0xf9, .sp=0xd9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xf9}, {.addr=0xe203, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe203, .value=0xee, .type=IO_READ},
        {.addr=0xe204, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012B) {
    const struct CPU_State initial_cpu = {.pc=0x910c, .a=0x90, .x=0x09, .y=0x77, .sp=0xdc, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x26}, {.addr=0x910c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x910d, .a=0x90, .x=0x09, .y=0x26, .sp=0xdd, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x26}, {.addr=0x910c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x910c, .value=0xee, .type=IO_READ},
        {.addr=0x910d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012C) {
    const struct CPU_State initial_cpu = {.pc=0xff8b, .a=0xea, .x=0x0e, .y=0xca, .sp=0xcf, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xc5}, {.addr=0xff8b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xff8c, .a=0xea, .x=0x0e, .y=0xc5, .sp=0xd0, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xc5}, {.addr=0xff8b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xff8b, .value=0xee, .type=IO_READ},
        {.addr=0xff8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012D) {
    const struct CPU_State initial_cpu = {.pc=0xc192, .a=0xfb, .x=0x71, .y=0x74, .sp=0xe1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xc2}, {.addr=0xc192, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc193, .a=0xfb, .x=0x71, .y=0xc2, .sp=0xe2, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xc2}, {.addr=0xc192, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc192, .value=0xee, .type=IO_READ},
        {.addr=0xc193, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012E) {
    const struct CPU_State initial_cpu = {.pc=0x74ad, .a=0xd1, .x=0xf9, .y=0x9a, .sp=0x70, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x02}, {.addr=0x74ad, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x74ae, .a=0xd1, .x=0xf9, .y=0x02, .sp=0x71, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x02}, {.addr=0x74ad, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x74ad, .value=0xee, .type=IO_READ},
        {.addr=0x74ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_012F) {
    const struct CPU_State initial_cpu = {.pc=0x5c63, .a=0x8d, .x=0x94, .y=0x0f, .sp=0xdf, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x5e}, {.addr=0x5c63, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0x8d, .x=0x94, .y=0x5e, .sp=0xe0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x5e}, {.addr=0x5c63, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5c63, .value=0xee, .type=IO_READ},
        {.addr=0x5c64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0130) {
    const struct CPU_State initial_cpu = {.pc=0xa84e, .a=0x68, .x=0x87, .y=0x62, .sp=0xdc, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xe0}, {.addr=0xa84e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa84f, .a=0x68, .x=0x87, .y=0xe0, .sp=0xdd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xe0}, {.addr=0xa84e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa84e, .value=0xee, .type=IO_READ},
        {.addr=0xa84f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8e20, .a=0x04, .x=0x05, .y=0xdf, .sp=0xb9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x6d}, {.addr=0x8e20, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8e21, .a=0x04, .x=0x05, .y=0x6d, .sp=0xba, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x6d}, {.addr=0x8e20, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8e20, .value=0xee, .type=IO_READ},
        {.addr=0x8e21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0132) {
    const struct CPU_State initial_cpu = {.pc=0x8247, .a=0xc5, .x=0xc2, .y=0x72, .sp=0x55, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xfa}, {.addr=0x8247, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8248, .a=0xc5, .x=0xc2, .y=0xfa, .sp=0x56, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xfa}, {.addr=0x8247, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8247, .value=0xee, .type=IO_READ},
        {.addr=0x8248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0133) {
    const struct CPU_State initial_cpu = {.pc=0x78cc, .a=0x05, .x=0x02, .y=0xdc, .sp=0xf9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x99}, {.addr=0x78cc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x78cd, .a=0x05, .x=0x02, .y=0x99, .sp=0xfa, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x99}, {.addr=0x78cc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x78cc, .value=0xee, .type=IO_READ},
        {.addr=0x78cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0134) {
    const struct CPU_State initial_cpu = {.pc=0x233c, .a=0xe8, .x=0x39, .y=0x2f, .sp=0xa6, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x7a}, {.addr=0x233c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x233d, .a=0xe8, .x=0x39, .y=0x7a, .sp=0xa7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x7a}, {.addr=0x233c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x233c, .value=0xee, .type=IO_READ},
        {.addr=0x233d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0135) {
    const struct CPU_State initial_cpu = {.pc=0x76f9, .a=0xed, .x=0x0d, .y=0xa4, .sp=0x24, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x01}, {.addr=0x76f9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x76fa, .a=0xed, .x=0x0d, .y=0x01, .sp=0x25, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x01}, {.addr=0x76f9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x76f9, .value=0xee, .type=IO_READ},
        {.addr=0x76fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0136) {
    const struct CPU_State initial_cpu = {.pc=0xdad3, .a=0x63, .x=0xa0, .y=0xb2, .sp=0x37, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xa1}, {.addr=0xdad3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdad4, .a=0x63, .x=0xa0, .y=0xa1, .sp=0x38, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xa1}, {.addr=0xdad3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdad3, .value=0xee, .type=IO_READ},
        {.addr=0xdad4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0137) {
    const struct CPU_State initial_cpu = {.pc=0xdcad, .a=0x68, .x=0xf3, .y=0xd5, .sp=0x02, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xef}, {.addr=0xdcad, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdcae, .a=0x68, .x=0xf3, .y=0xef, .sp=0x03, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xef}, {.addr=0xdcad, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdcad, .value=0xee, .type=IO_READ},
        {.addr=0xdcae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8c92, .a=0x1e, .x=0xe5, .y=0x6f, .sp=0x5e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x5e}, {.addr=0x8c92, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8c93, .a=0x1e, .x=0xe5, .y=0x5e, .sp=0x5f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x5e}, {.addr=0x8c92, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8c92, .value=0xee, .type=IO_READ},
        {.addr=0x8c93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0139) {
    const struct CPU_State initial_cpu = {.pc=0x0cca, .a=0x24, .x=0x87, .y=0x1e, .sp=0x04, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xd7}, {.addr=0x0cca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0ccb, .a=0x24, .x=0x87, .y=0xd7, .sp=0x05, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xd7}, {.addr=0x0cca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0cca, .value=0xee, .type=IO_READ},
        {.addr=0x0ccb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013A) {
    const struct CPU_State initial_cpu = {.pc=0x5562, .a=0x09, .x=0x33, .y=0x9a, .sp=0x12, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x5e}, {.addr=0x5562, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5563, .a=0x09, .x=0x33, .y=0x5e, .sp=0x13, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x5e}, {.addr=0x5562, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5562, .value=0xee, .type=IO_READ},
        {.addr=0x5563, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013B) {
    const struct CPU_State initial_cpu = {.pc=0x89db, .a=0xe1, .x=0x2a, .y=0x70, .sp=0xf3, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x76}, {.addr=0x89db, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x89dc, .a=0xe1, .x=0x2a, .y=0x76, .sp=0xf4, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x76}, {.addr=0x89db, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x89db, .value=0xee, .type=IO_READ},
        {.addr=0x89dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd67f, .a=0x68, .x=0xee, .y=0x6e, .sp=0x87, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x06}, {.addr=0xd67f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd680, .a=0x68, .x=0xee, .y=0x06, .sp=0x88, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x06}, {.addr=0xd67f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd67f, .value=0xee, .type=IO_READ},
        {.addr=0xd680, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013D) {
    const struct CPU_State initial_cpu = {.pc=0xe64a, .a=0x8e, .x=0x88, .y=0x3d, .sp=0x20, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xa1}, {.addr=0xe64a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe64b, .a=0x8e, .x=0x88, .y=0xa1, .sp=0x21, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xa1}, {.addr=0xe64a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe64a, .value=0xee, .type=IO_READ},
        {.addr=0xe64b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013E) {
    const struct CPU_State initial_cpu = {.pc=0x3563, .a=0x16, .x=0x03, .y=0xef, .sp=0x32, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xe7}, {.addr=0x3563, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3564, .a=0x16, .x=0x03, .y=0xe7, .sp=0x33, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xe7}, {.addr=0x3563, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3563, .value=0xee, .type=IO_READ},
        {.addr=0x3564, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_013F) {
    const struct CPU_State initial_cpu = {.pc=0xa17f, .a=0x04, .x=0xfb, .y=0x25, .sp=0xcd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xe5}, {.addr=0xa17f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa180, .a=0x04, .x=0xfb, .y=0xe5, .sp=0xce, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xe5}, {.addr=0xa17f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa17f, .value=0xee, .type=IO_READ},
        {.addr=0xa180, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0140) {
    const struct CPU_State initial_cpu = {.pc=0xae53, .a=0x94, .x=0xa6, .y=0x6b, .sp=0x3f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xb0}, {.addr=0xae53, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xae54, .a=0x94, .x=0xa6, .y=0xb0, .sp=0x40, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xb0}, {.addr=0xae53, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xae53, .value=0xee, .type=IO_READ},
        {.addr=0xae54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0141) {
    const struct CPU_State initial_cpu = {.pc=0xbbf7, .a=0xf4, .x=0xa1, .y=0xf7, .sp=0x2f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x46}, {.addr=0xbbf7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbbf8, .a=0xf4, .x=0xa1, .y=0x46, .sp=0x30, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x46}, {.addr=0xbbf7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbbf7, .value=0xee, .type=IO_READ},
        {.addr=0xbbf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0142) {
    const struct CPU_State initial_cpu = {.pc=0x1851, .a=0x45, .x=0xfb, .y=0xa0, .sp=0x1f, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xd8}, {.addr=0x1851, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1852, .a=0x45, .x=0xfb, .y=0xd8, .sp=0x20, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xd8}, {.addr=0x1851, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1851, .value=0xee, .type=IO_READ},
        {.addr=0x1852, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0143) {
    const struct CPU_State initial_cpu = {.pc=0x14f2, .a=0x04, .x=0x7c, .y=0x0a, .sp=0xd4, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x4d}, {.addr=0x14f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x14f3, .a=0x04, .x=0x7c, .y=0x4d, .sp=0xd5, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x4d}, {.addr=0x14f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x14f2, .value=0xee, .type=IO_READ},
        {.addr=0x14f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0144) {
    const struct CPU_State initial_cpu = {.pc=0x8ffd, .a=0x39, .x=0xbb, .y=0xe7, .sp=0xd7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x36}, {.addr=0x8ffd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8ffe, .a=0x39, .x=0xbb, .y=0x36, .sp=0xd8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x36}, {.addr=0x8ffd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8ffd, .value=0xee, .type=IO_READ},
        {.addr=0x8ffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0145) {
    const struct CPU_State initial_cpu = {.pc=0xd3f4, .a=0xe9, .x=0x68, .y=0x80, .sp=0x48, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xc3}, {.addr=0xd3f4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd3f5, .a=0xe9, .x=0x68, .y=0xc3, .sp=0x49, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xc3}, {.addr=0xd3f4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd3f4, .value=0xee, .type=IO_READ},
        {.addr=0xd3f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8ab9, .a=0x04, .x=0x75, .y=0xe0, .sp=0x58, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xb7}, {.addr=0x8ab9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8aba, .a=0x04, .x=0x75, .y=0xb7, .sp=0x59, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xb7}, {.addr=0x8ab9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8ab9, .value=0xee, .type=IO_READ},
        {.addr=0x8aba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0147) {
    const struct CPU_State initial_cpu = {.pc=0x9a8a, .a=0x66, .x=0x57, .y=0xab, .sp=0xa8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x23}, {.addr=0x9a8a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9a8b, .a=0x66, .x=0x57, .y=0x23, .sp=0xa9, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x23}, {.addr=0x9a8a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9a8a, .value=0xee, .type=IO_READ},
        {.addr=0x9a8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0148) {
    const struct CPU_State initial_cpu = {.pc=0x1438, .a=0x6a, .x=0x7a, .y=0xeb, .sp=0x2f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x0d}, {.addr=0x1438, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1439, .a=0x6a, .x=0x7a, .y=0x0d, .sp=0x30, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x0d}, {.addr=0x1438, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1438, .value=0xee, .type=IO_READ},
        {.addr=0x1439, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0149) {
    const struct CPU_State initial_cpu = {.pc=0x872a, .a=0x0d, .x=0x9b, .y=0x77, .sp=0x85, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x4a}, {.addr=0x872a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x872b, .a=0x0d, .x=0x9b, .y=0x4a, .sp=0x86, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x4a}, {.addr=0x872a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x872a, .value=0xee, .type=IO_READ},
        {.addr=0x872b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014A) {
    const struct CPU_State initial_cpu = {.pc=0xba23, .a=0x01, .x=0xdb, .y=0xc7, .sp=0x7f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x82}, {.addr=0xba23, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xba24, .a=0x01, .x=0xdb, .y=0x82, .sp=0x80, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x82}, {.addr=0xba23, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xba23, .value=0xee, .type=IO_READ},
        {.addr=0xba24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9caf, .a=0x4c, .x=0xf9, .y=0xc9, .sp=0x2d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x46}, {.addr=0x9caf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9cb0, .a=0x4c, .x=0xf9, .y=0x46, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x46}, {.addr=0x9caf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9caf, .value=0xee, .type=IO_READ},
        {.addr=0x9cb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014C) {
    const struct CPU_State initial_cpu = {.pc=0x434e, .a=0x63, .x=0xf1, .y=0xbc, .sp=0x3b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x29}, {.addr=0x434e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x434f, .a=0x63, .x=0xf1, .y=0x29, .sp=0x3c, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x29}, {.addr=0x434e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x434e, .value=0xee, .type=IO_READ},
        {.addr=0x434f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014D) {
    const struct CPU_State initial_cpu = {.pc=0xacb4, .a=0xba, .x=0x42, .y=0x1b, .sp=0x88, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x14}, {.addr=0xacb4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xacb5, .a=0xba, .x=0x42, .y=0x14, .sp=0x89, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x14}, {.addr=0xacb4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xacb4, .value=0xee, .type=IO_READ},
        {.addr=0xacb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014E) {
    const struct CPU_State initial_cpu = {.pc=0xd4a4, .a=0xa7, .x=0x90, .y=0xd8, .sp=0xa8, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x58}, {.addr=0xd4a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd4a5, .a=0xa7, .x=0x90, .y=0x58, .sp=0xa9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x58}, {.addr=0xd4a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd4a4, .value=0xee, .type=IO_READ},
        {.addr=0xd4a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_014F) {
    const struct CPU_State initial_cpu = {.pc=0xcbd9, .a=0x8d, .x=0xc6, .y=0x80, .sp=0xf4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xb6}, {.addr=0xcbd9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcbda, .a=0x8d, .x=0xc6, .y=0xb6, .sp=0xf5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xb6}, {.addr=0xcbd9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcbd9, .value=0xee, .type=IO_READ},
        {.addr=0xcbda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0150) {
    const struct CPU_State initial_cpu = {.pc=0x655e, .a=0x04, .x=0x24, .y=0x8f, .sp=0x8c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xf5}, {.addr=0x655e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x655f, .a=0x04, .x=0x24, .y=0xf5, .sp=0x8d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xf5}, {.addr=0x655e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x655e, .value=0xee, .type=IO_READ},
        {.addr=0x655f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0151) {
    const struct CPU_State initial_cpu = {.pc=0x869f, .a=0xfe, .x=0x69, .y=0x35, .sp=0x08, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xba}, {.addr=0x869f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x86a0, .a=0xfe, .x=0x69, .y=0xba, .sp=0x09, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xba}, {.addr=0x869f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x869f, .value=0xee, .type=IO_READ},
        {.addr=0x86a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0152) {
    const struct CPU_State initial_cpu = {.pc=0xcf86, .a=0x41, .x=0x70, .y=0x35, .sp=0xec, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xde}, {.addr=0xcf86, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcf87, .a=0x41, .x=0x70, .y=0xde, .sp=0xed, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xde}, {.addr=0xcf86, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcf86, .value=0xee, .type=IO_READ},
        {.addr=0xcf87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0153) {
    const struct CPU_State initial_cpu = {.pc=0xaeba, .a=0x43, .x=0x7a, .y=0x61, .sp=0xb6, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x25}, {.addr=0xaeba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaebb, .a=0x43, .x=0x7a, .y=0x25, .sp=0xb7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x25}, {.addr=0xaeba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaeba, .value=0xee, .type=IO_READ},
        {.addr=0xaebb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0154) {
    const struct CPU_State initial_cpu = {.pc=0x2da8, .a=0x9d, .x=0xac, .y=0xbf, .sp=0x42, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xe9}, {.addr=0x2da8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2da9, .a=0x9d, .x=0xac, .y=0xe9, .sp=0x43, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xe9}, {.addr=0x2da8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2da8, .value=0xee, .type=IO_READ},
        {.addr=0x2da9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0155) {
    const struct CPU_State initial_cpu = {.pc=0xdf86, .a=0xed, .x=0x48, .y=0x54, .sp=0x58, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xfe}, {.addr=0xdf86, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdf87, .a=0xed, .x=0x48, .y=0xfe, .sp=0x59, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xfe}, {.addr=0xdf86, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdf86, .value=0xee, .type=IO_READ},
        {.addr=0xdf87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0156) {
    const struct CPU_State initial_cpu = {.pc=0xfb04, .a=0x65, .x=0xc5, .y=0x62, .sp=0x73, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xca}, {.addr=0xfb04, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfb05, .a=0x65, .x=0xc5, .y=0xca, .sp=0x74, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xca}, {.addr=0xfb04, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfb04, .value=0xee, .type=IO_READ},
        {.addr=0xfb05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4024, .a=0x29, .x=0x80, .y=0xab, .sp=0xb5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x7d}, {.addr=0x4024, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4025, .a=0x29, .x=0x80, .y=0x7d, .sp=0xb6, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x7d}, {.addr=0x4024, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4024, .value=0xee, .type=IO_READ},
        {.addr=0x4025, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0158) {
    const struct CPU_State initial_cpu = {.pc=0x7c5e, .a=0x5d, .x=0xfd, .y=0xc6, .sp=0xfe, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xf1}, {.addr=0x7c5e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7c5f, .a=0x5d, .x=0xfd, .y=0xf1, .sp=0xff, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xf1}, {.addr=0x7c5e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7c5e, .value=0xee, .type=IO_READ},
        {.addr=0x7c5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2b9b, .a=0x20, .x=0x41, .y=0x2d, .sp=0xf6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xa7}, {.addr=0x2b9b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2b9c, .a=0x20, .x=0x41, .y=0xa7, .sp=0xf7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xa7}, {.addr=0x2b9b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2b9b, .value=0xee, .type=IO_READ},
        {.addr=0x2b9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015A) {
    const struct CPU_State initial_cpu = {.pc=0x01fd, .a=0x87, .x=0x23, .y=0xfe, .sp=0x0f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xb9}, {.addr=0x01fd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x01fe, .a=0x87, .x=0x23, .y=0xb9, .sp=0x10, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xb9}, {.addr=0x01fd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x01fd, .value=0xee, .type=IO_READ},
        {.addr=0x01fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015B) {
    const struct CPU_State initial_cpu = {.pc=0x6e38, .a=0x2f, .x=0x31, .y=0x4f, .sp=0xd7, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x71}, {.addr=0x6e38, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6e39, .a=0x2f, .x=0x31, .y=0x71, .sp=0xd8, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x71}, {.addr=0x6e38, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6e38, .value=0xee, .type=IO_READ},
        {.addr=0x6e39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015C) {
    const struct CPU_State initial_cpu = {.pc=0x146c, .a=0x0e, .x=0x92, .y=0xc7, .sp=0xa0, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xd3}, {.addr=0x146c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x146d, .a=0x0e, .x=0x92, .y=0xd3, .sp=0xa1, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xd3}, {.addr=0x146c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x146c, .value=0xee, .type=IO_READ},
        {.addr=0x146d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015D) {
    const struct CPU_State initial_cpu = {.pc=0x0c3f, .a=0x72, .x=0x56, .y=0x14, .sp=0x7d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x34}, {.addr=0x0c3f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0c40, .a=0x72, .x=0x56, .y=0x34, .sp=0x7e, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x34}, {.addr=0x0c3f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0c3f, .value=0xee, .type=IO_READ},
        {.addr=0x0c40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015E) {
    const struct CPU_State initial_cpu = {.pc=0xed82, .a=0x0b, .x=0xf8, .y=0xfc, .sp=0xa4, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xf1}, {.addr=0xed82, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xed83, .a=0x0b, .x=0xf8, .y=0xf1, .sp=0xa5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xf1}, {.addr=0xed82, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xed82, .value=0xee, .type=IO_READ},
        {.addr=0xed83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_015F) {
    const struct CPU_State initial_cpu = {.pc=0x8125, .a=0xd2, .x=0x1b, .y=0x34, .sp=0x75, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xe2}, {.addr=0x8125, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8126, .a=0xd2, .x=0x1b, .y=0xe2, .sp=0x76, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xe2}, {.addr=0x8125, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8125, .value=0xee, .type=IO_READ},
        {.addr=0x8126, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0160) {
    const struct CPU_State initial_cpu = {.pc=0x522b, .a=0xa7, .x=0x71, .y=0x2b, .sp=0x0a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xc1}, {.addr=0x522b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x522c, .a=0xa7, .x=0x71, .y=0xc1, .sp=0x0b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xc1}, {.addr=0x522b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x522b, .value=0xee, .type=IO_READ},
        {.addr=0x522c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0161) {
    const struct CPU_State initial_cpu = {.pc=0x9a98, .a=0xda, .x=0xe0, .y=0x0a, .sp=0xc3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xc6}, {.addr=0x9a98, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9a99, .a=0xda, .x=0xe0, .y=0xc6, .sp=0xc4, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xc6}, {.addr=0x9a98, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9a98, .value=0xee, .type=IO_READ},
        {.addr=0x9a99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0162) {
    const struct CPU_State initial_cpu = {.pc=0x9f59, .a=0xcb, .x=0xb9, .y=0x57, .sp=0x9d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xd6}, {.addr=0x9f59, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9f5a, .a=0xcb, .x=0xb9, .y=0xd6, .sp=0x9e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd6}, {.addr=0x9f59, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9f59, .value=0xee, .type=IO_READ},
        {.addr=0x9f5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0163) {
    const struct CPU_State initial_cpu = {.pc=0xf1a4, .a=0x68, .x=0xee, .y=0xef, .sp=0xc7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x4a}, {.addr=0xf1a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf1a5, .a=0x68, .x=0xee, .y=0x4a, .sp=0xc8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x4a}, {.addr=0xf1a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf1a4, .value=0xee, .type=IO_READ},
        {.addr=0xf1a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0164) {
    const struct CPU_State initial_cpu = {.pc=0x48ca, .a=0xad, .x=0x1a, .y=0xe3, .sp=0x45, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x36}, {.addr=0x48ca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x48cb, .a=0xad, .x=0x1a, .y=0x36, .sp=0x46, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x36}, {.addr=0x48ca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x48ca, .value=0xee, .type=IO_READ},
        {.addr=0x48cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0165) {
    const struct CPU_State initial_cpu = {.pc=0xa7e9, .a=0xc1, .x=0xb0, .y=0xe6, .sp=0xea, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x80}, {.addr=0xa7e9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa7ea, .a=0xc1, .x=0xb0, .y=0x80, .sp=0xeb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x80}, {.addr=0xa7e9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa7e9, .value=0xee, .type=IO_READ},
        {.addr=0xa7ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0166) {
    const struct CPU_State initial_cpu = {.pc=0x92b5, .a=0x67, .x=0x3f, .y=0x15, .sp=0x4f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc5}, {.addr=0x92b5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x92b6, .a=0x67, .x=0x3f, .y=0xc5, .sp=0x50, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc5}, {.addr=0x92b5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x92b5, .value=0xee, .type=IO_READ},
        {.addr=0x92b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0167) {
    const struct CPU_State initial_cpu = {.pc=0xd3d2, .a=0x86, .x=0x7b, .y=0xee, .sp=0x61, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x31}, {.addr=0xd3d2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd3d3, .a=0x86, .x=0x7b, .y=0x31, .sp=0x62, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x31}, {.addr=0xd3d2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd3d2, .value=0xee, .type=IO_READ},
        {.addr=0xd3d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0168) {
    const struct CPU_State initial_cpu = {.pc=0x430d, .a=0x12, .x=0xb8, .y=0x74, .sp=0x52, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xdb}, {.addr=0x430d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x430e, .a=0x12, .x=0xb8, .y=0xdb, .sp=0x53, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xdb}, {.addr=0x430d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x430d, .value=0xee, .type=IO_READ},
        {.addr=0x430e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0169) {
    const struct CPU_State initial_cpu = {.pc=0x8526, .a=0x30, .x=0x15, .y=0xff, .sp=0x9c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x2c}, {.addr=0x8526, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8527, .a=0x30, .x=0x15, .y=0x2c, .sp=0x9d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x2c}, {.addr=0x8526, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8526, .value=0xee, .type=IO_READ},
        {.addr=0x8527, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016A) {
    const struct CPU_State initial_cpu = {.pc=0x0ae6, .a=0x59, .x=0x65, .y=0x42, .sp=0xba, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x4a}, {.addr=0x0ae6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0ae7, .a=0x59, .x=0x65, .y=0x4a, .sp=0xbb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x4a}, {.addr=0x0ae6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0ae6, .value=0xee, .type=IO_READ},
        {.addr=0x0ae7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0ffd, .a=0xf1, .x=0xda, .y=0xaa, .sp=0x6e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x7b}, {.addr=0x0ffd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0ffe, .a=0xf1, .x=0xda, .y=0x7b, .sp=0x6f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x7b}, {.addr=0x0ffd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0ffd, .value=0xee, .type=IO_READ},
        {.addr=0x0ffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016C) {
    const struct CPU_State initial_cpu = {.pc=0xf6eb, .a=0x29, .x=0xc1, .y=0x66, .sp=0xcd, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xb6}, {.addr=0xf6eb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf6ec, .a=0x29, .x=0xc1, .y=0xb6, .sp=0xce, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xb6}, {.addr=0xf6eb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf6eb, .value=0xee, .type=IO_READ},
        {.addr=0xf6ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016D) {
    const struct CPU_State initial_cpu = {.pc=0x77d8, .a=0xc3, .x=0x3e, .y=0x58, .sp=0xcd, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x7c}, {.addr=0x77d8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x77d9, .a=0xc3, .x=0x3e, .y=0x7c, .sp=0xce, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x7c}, {.addr=0x77d8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x77d8, .value=0xee, .type=IO_READ},
        {.addr=0x77d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016E) {
    const struct CPU_State initial_cpu = {.pc=0xe784, .a=0x24, .x=0x3e, .y=0xdf, .sp=0xe7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x79}, {.addr=0xe784, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe785, .a=0x24, .x=0x3e, .y=0x79, .sp=0xe8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x79}, {.addr=0xe784, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe784, .value=0xee, .type=IO_READ},
        {.addr=0xe785, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_016F) {
    const struct CPU_State initial_cpu = {.pc=0x389e, .a=0x83, .x=0xe1, .y=0x12, .sp=0xf8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x86}, {.addr=0x389e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x389f, .a=0x83, .x=0xe1, .y=0x86, .sp=0xf9, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x86}, {.addr=0x389e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x389e, .value=0xee, .type=IO_READ},
        {.addr=0x389f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0170) {
    const struct CPU_State initial_cpu = {.pc=0x130b, .a=0x78, .x=0x74, .y=0x67, .sp=0xec, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x29}, {.addr=0x130b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x130c, .a=0x78, .x=0x74, .y=0x29, .sp=0xed, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x29}, {.addr=0x130b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x130b, .value=0xee, .type=IO_READ},
        {.addr=0x130c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0171) {
    const struct CPU_State initial_cpu = {.pc=0x7e62, .a=0x2d, .x=0x47, .y=0x4d, .sp=0xa8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xd0}, {.addr=0x7e62, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7e63, .a=0x2d, .x=0x47, .y=0xd0, .sp=0xa9, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xd0}, {.addr=0x7e62, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7e62, .value=0xee, .type=IO_READ},
        {.addr=0x7e63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0172) {
    const struct CPU_State initial_cpu = {.pc=0x6c11, .a=0x55, .x=0x2c, .y=0xfe, .sp=0x27, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x9d}, {.addr=0x6c11, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6c12, .a=0x55, .x=0x2c, .y=0x9d, .sp=0x28, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x9d}, {.addr=0x6c11, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6c11, .value=0xee, .type=IO_READ},
        {.addr=0x6c12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0173) {
    const struct CPU_State initial_cpu = {.pc=0x1c92, .a=0xd3, .x=0x04, .y=0xe0, .sp=0x06, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xf2}, {.addr=0x1c92, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1c93, .a=0xd3, .x=0x04, .y=0xf2, .sp=0x07, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xf2}, {.addr=0x1c92, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1c92, .value=0xee, .type=IO_READ},
        {.addr=0x1c93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0174) {
    const struct CPU_State initial_cpu = {.pc=0x5f90, .a=0xd7, .x=0xd9, .y=0x40, .sp=0xd4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x21}, {.addr=0x5f90, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5f91, .a=0xd7, .x=0xd9, .y=0x21, .sp=0xd5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x21}, {.addr=0x5f90, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5f90, .value=0xee, .type=IO_READ},
        {.addr=0x5f91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0175) {
    const struct CPU_State initial_cpu = {.pc=0xf725, .a=0xef, .x=0x6f, .y=0x28, .sp=0x2f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xf725, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf726, .a=0xef, .x=0x6f, .y=0x00, .sp=0x30, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xf725, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf725, .value=0xee, .type=IO_READ},
        {.addr=0xf726, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0176) {
    const struct CPU_State initial_cpu = {.pc=0xbc1b, .a=0xb4, .x=0x93, .y=0x78, .sp=0xc0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x7b}, {.addr=0xbc1b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbc1c, .a=0xb4, .x=0x93, .y=0x7b, .sp=0xc1, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x7b}, {.addr=0xbc1b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbc1b, .value=0xee, .type=IO_READ},
        {.addr=0xbc1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0177) {
    const struct CPU_State initial_cpu = {.pc=0xd830, .a=0x89, .x=0xff, .y=0xbd, .sp=0x5b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x50}, {.addr=0xd830, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd831, .a=0x89, .x=0xff, .y=0x50, .sp=0x5c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x50}, {.addr=0xd830, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd830, .value=0xee, .type=IO_READ},
        {.addr=0xd831, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0178) {
    const struct CPU_State initial_cpu = {.pc=0x94d8, .a=0xfe, .x=0xcb, .y=0x76, .sp=0x60, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xb1}, {.addr=0x94d8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x94d9, .a=0xfe, .x=0xcb, .y=0xb1, .sp=0x61, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xb1}, {.addr=0x94d8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x94d8, .value=0xee, .type=IO_READ},
        {.addr=0x94d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb1e0, .a=0xd6, .x=0x4a, .y=0x5c, .sp=0xde, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xe4}, {.addr=0xb1e0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb1e1, .a=0xd6, .x=0x4a, .y=0xe4, .sp=0xdf, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xe4}, {.addr=0xb1e0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb1e0, .value=0xee, .type=IO_READ},
        {.addr=0xb1e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_017A) {
    const struct CPU_State initial_cpu = {.pc=0xca3a, .a=0xf2, .x=0xc6, .y=0x6b, .sp=0x11, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x55}, {.addr=0xca3a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xca3b, .a=0xf2, .x=0xc6, .y=0x55, .sp=0x12, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x55}, {.addr=0xca3a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xca3a, .value=0xee, .type=IO_READ},
        {.addr=0xca3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_017B) {
    const struct CPU_State initial_cpu = {.pc=0xef0a, .a=0xcd, .x=0x8f, .y=0x11, .sp=0x42, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xee}, {.addr=0xef0a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xef0b, .a=0xcd, .x=0x8f, .y=0xee, .sp=0x43, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xee}, {.addr=0xef0a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xef0a, .value=0xee, .type=IO_READ},
        {.addr=0xef0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd938, .a=0x82, .x=0x5c, .y=0xde, .sp=0x8e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x45}, {.addr=0xd938, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd939, .a=0x82, .x=0x5c, .y=0x45, .sp=0x8f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x45}, {.addr=0xd938, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd938, .value=0xee, .type=IO_READ},
        {.addr=0xd939, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_017E) {
    const struct CPU_State initial_cpu = {.pc=0x540c, .a=0x5d, .x=0xdd, .y=0x08, .sp=0xe9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x38}, {.addr=0x540c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x540d, .a=0x5d, .x=0xdd, .y=0x38, .sp=0xea, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x38}, {.addr=0x540c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x540c, .value=0xee, .type=IO_READ},
        {.addr=0x540d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_017F) {
    const struct CPU_State initial_cpu = {.pc=0x13cb, .a=0x92, .x=0xc8, .y=0x7c, .sp=0x09, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x4c}, {.addr=0x13cb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x13cc, .a=0x92, .x=0xc8, .y=0x4c, .sp=0x0a, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x4c}, {.addr=0x13cb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x13cb, .value=0xee, .type=IO_READ},
        {.addr=0x13cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0180) {
    const struct CPU_State initial_cpu = {.pc=0x672f, .a=0xd9, .x=0xd2, .y=0xd6, .sp=0x2b, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xe8}, {.addr=0x672f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6730, .a=0xd9, .x=0xd2, .y=0xe8, .sp=0x2c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xe8}, {.addr=0x672f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x672f, .value=0xee, .type=IO_READ},
        {.addr=0x6730, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9a95, .a=0x5e, .x=0xbf, .y=0x90, .sp=0x66, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xc6}, {.addr=0x9a95, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9a96, .a=0x5e, .x=0xbf, .y=0xc6, .sp=0x67, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xc6}, {.addr=0x9a95, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9a95, .value=0xee, .type=IO_READ},
        {.addr=0x9a96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0182) {
    const struct CPU_State initial_cpu = {.pc=0xce72, .a=0xae, .x=0xae, .y=0x62, .sp=0x6a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xbb}, {.addr=0xce72, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xce73, .a=0xae, .x=0xae, .y=0xbb, .sp=0x6b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xbb}, {.addr=0xce72, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xce72, .value=0xee, .type=IO_READ},
        {.addr=0xce73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5cc6, .a=0xcb, .x=0xbb, .y=0xdb, .sp=0x7b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x4e}, {.addr=0x5cc6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5cc7, .a=0xcb, .x=0xbb, .y=0x4e, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x4e}, {.addr=0x5cc6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5cc6, .value=0xee, .type=IO_READ},
        {.addr=0x5cc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0184) {
    const struct CPU_State initial_cpu = {.pc=0x5961, .a=0x98, .x=0x7c, .y=0x63, .sp=0x61, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x68}, {.addr=0x5961, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5962, .a=0x98, .x=0x7c, .y=0x68, .sp=0x62, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x68}, {.addr=0x5961, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5961, .value=0xee, .type=IO_READ},
        {.addr=0x5962, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0185) {
    const struct CPU_State initial_cpu = {.pc=0x55d8, .a=0xec, .x=0x4c, .y=0x3f, .sp=0xee, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x56}, {.addr=0x55d8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x55d9, .a=0xec, .x=0x4c, .y=0x56, .sp=0xef, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x56}, {.addr=0x55d8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x55d8, .value=0xee, .type=IO_READ},
        {.addr=0x55d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0186) {
    const struct CPU_State initial_cpu = {.pc=0x8aa7, .a=0xca, .x=0x11, .y=0x0e, .sp=0x3b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x0f}, {.addr=0x8aa7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8aa8, .a=0xca, .x=0x11, .y=0x0f, .sp=0x3c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x0f}, {.addr=0x8aa7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8aa7, .value=0xee, .type=IO_READ},
        {.addr=0x8aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0187) {
    const struct CPU_State initial_cpu = {.pc=0x414e, .a=0xad, .x=0x08, .y=0x93, .sp=0x55, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x8b}, {.addr=0x414e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x414f, .a=0xad, .x=0x08, .y=0x8b, .sp=0x56, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x8b}, {.addr=0x414e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x414e, .value=0xee, .type=IO_READ},
        {.addr=0x414f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0188) {
    const struct CPU_State initial_cpu = {.pc=0x16a5, .a=0xac, .x=0x20, .y=0xac, .sp=0x20, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x57}, {.addr=0x16a5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x16a6, .a=0xac, .x=0x20, .y=0x57, .sp=0x21, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x57}, {.addr=0x16a5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x16a5, .value=0xee, .type=IO_READ},
        {.addr=0x16a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb4c0, .a=0x53, .x=0x37, .y=0x97, .sp=0x7b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xe0}, {.addr=0xb4c0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb4c1, .a=0x53, .x=0x37, .y=0xe0, .sp=0x7c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xe0}, {.addr=0xb4c0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb4c0, .value=0xee, .type=IO_READ},
        {.addr=0xb4c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018A) {
    const struct CPU_State initial_cpu = {.pc=0x26d1, .a=0xb3, .x=0x27, .y=0x48, .sp=0x4b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xfe}, {.addr=0x26d1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x26d2, .a=0xb3, .x=0x27, .y=0xfe, .sp=0x4c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xfe}, {.addr=0x26d1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x26d1, .value=0xee, .type=IO_READ},
        {.addr=0x26d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018B) {
    const struct CPU_State initial_cpu = {.pc=0x61ee, .a=0x8b, .x=0xb9, .y=0xa6, .sp=0x5e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xfb}, {.addr=0x61ee, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x61ef, .a=0x8b, .x=0xb9, .y=0xfb, .sp=0x5f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xfb}, {.addr=0x61ee, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x61ee, .value=0xee, .type=IO_READ},
        {.addr=0x61ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018C) {
    const struct CPU_State initial_cpu = {.pc=0xdbe1, .a=0xac, .x=0x8c, .y=0xdb, .sp=0x9f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x7f}, {.addr=0xdbe1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdbe2, .a=0xac, .x=0x8c, .y=0x7f, .sp=0xa0, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x7f}, {.addr=0xdbe1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdbe1, .value=0xee, .type=IO_READ},
        {.addr=0xdbe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3a01, .a=0xfd, .x=0x4d, .y=0xeb, .sp=0xbe, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xf0}, {.addr=0x3a01, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3a02, .a=0xfd, .x=0x4d, .y=0xf0, .sp=0xbf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xf0}, {.addr=0x3a01, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3a01, .value=0xee, .type=IO_READ},
        {.addr=0x3a02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018E) {
    const struct CPU_State initial_cpu = {.pc=0x3c90, .a=0xb6, .x=0xcb, .y=0xb3, .sp=0x63, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xa0}, {.addr=0x3c90, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3c91, .a=0xb6, .x=0xcb, .y=0xa0, .sp=0x64, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa0}, {.addr=0x3c90, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3c90, .value=0xee, .type=IO_READ},
        {.addr=0x3c91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_018F) {
    const struct CPU_State initial_cpu = {.pc=0x4c83, .a=0xbc, .x=0xec, .y=0xad, .sp=0x44, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xf5}, {.addr=0x4c83, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c84, .a=0xbc, .x=0xec, .y=0xf5, .sp=0x45, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xf5}, {.addr=0x4c83, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c83, .value=0xee, .type=IO_READ},
        {.addr=0x4c84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0190) {
    const struct CPU_State initial_cpu = {.pc=0x1f9a, .a=0xd7, .x=0x80, .y=0x0b, .sp=0xfd, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xf2}, {.addr=0x1f9a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1f9b, .a=0xd7, .x=0x80, .y=0xf2, .sp=0xfe, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xf2}, {.addr=0x1f9a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1f9a, .value=0xee, .type=IO_READ},
        {.addr=0x1f9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc34a, .a=0xfd, .x=0x08, .y=0x74, .sp=0xe9, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xc6}, {.addr=0xc34a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc34b, .a=0xfd, .x=0x08, .y=0xc6, .sp=0xea, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xc6}, {.addr=0xc34a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc34a, .value=0xee, .type=IO_READ},
        {.addr=0xc34b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0192) {
    const struct CPU_State initial_cpu = {.pc=0x6bf1, .a=0x05, .x=0x1c, .y=0x4b, .sp=0x9d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x2e}, {.addr=0x6bf1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6bf2, .a=0x05, .x=0x1c, .y=0x2e, .sp=0x9e, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x2e}, {.addr=0x6bf1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6bf1, .value=0xee, .type=IO_READ},
        {.addr=0x6bf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0193) {
    const struct CPU_State initial_cpu = {.pc=0x3131, .a=0x92, .x=0xf4, .y=0x87, .sp=0xb8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xde}, {.addr=0x3131, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3132, .a=0x92, .x=0xf4, .y=0xde, .sp=0xb9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xde}, {.addr=0x3131, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3131, .value=0xee, .type=IO_READ},
        {.addr=0x3132, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0194) {
    const struct CPU_State initial_cpu = {.pc=0x410b, .a=0xb4, .x=0x42, .y=0xf5, .sp=0x0b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x92}, {.addr=0x410b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x410c, .a=0xb4, .x=0x42, .y=0x92, .sp=0x0c, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x92}, {.addr=0x410b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x410b, .value=0xee, .type=IO_READ},
        {.addr=0x410c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0195) {
    const struct CPU_State initial_cpu = {.pc=0xda69, .a=0xa6, .x=0x06, .y=0x7d, .sp=0xb6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x18}, {.addr=0xda69, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xda6a, .a=0xa6, .x=0x06, .y=0x18, .sp=0xb7, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x18}, {.addr=0xda69, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xda69, .value=0xee, .type=IO_READ},
        {.addr=0xda6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0196) {
    const struct CPU_State initial_cpu = {.pc=0xe11a, .a=0x1f, .x=0x1a, .y=0xc8, .sp=0xe9, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xe5}, {.addr=0xe11a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe11b, .a=0x1f, .x=0x1a, .y=0xe5, .sp=0xea, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xe5}, {.addr=0xe11a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe11a, .value=0xee, .type=IO_READ},
        {.addr=0xe11b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0197) {
    const struct CPU_State initial_cpu = {.pc=0x515a, .a=0xf4, .x=0x04, .y=0xf0, .sp=0xc5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xe6}, {.addr=0x515a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x515b, .a=0xf4, .x=0x04, .y=0xe6, .sp=0xc6, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xe6}, {.addr=0x515a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x515a, .value=0xee, .type=IO_READ},
        {.addr=0x515b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0198) {
    const struct CPU_State initial_cpu = {.pc=0xa1fd, .a=0x53, .x=0x0d, .y=0x97, .sp=0x68, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xb6}, {.addr=0xa1fd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa1fe, .a=0x53, .x=0x0d, .y=0xb6, .sp=0x69, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xb6}, {.addr=0xa1fd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa1fd, .value=0xee, .type=IO_READ},
        {.addr=0xa1fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0199) {
    const struct CPU_State initial_cpu = {.pc=0xef59, .a=0x58, .x=0xcf, .y=0x5e, .sp=0x01, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x53}, {.addr=0xef59, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xef5a, .a=0x58, .x=0xcf, .y=0x53, .sp=0x02, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x53}, {.addr=0xef59, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xef59, .value=0xee, .type=IO_READ},
        {.addr=0xef5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1bc8, .a=0x07, .x=0x65, .y=0x4e, .sp=0xfa, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xaf}, {.addr=0x1bc8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1bc9, .a=0x07, .x=0x65, .y=0xaf, .sp=0xfb, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xaf}, {.addr=0x1bc8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1bc8, .value=0xee, .type=IO_READ},
        {.addr=0x1bc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019B) {
    const struct CPU_State initial_cpu = {.pc=0x73aa, .a=0xca, .x=0x91, .y=0xee, .sp=0x53, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xb6}, {.addr=0x73aa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x73ab, .a=0xca, .x=0x91, .y=0xb6, .sp=0x54, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xb6}, {.addr=0x73aa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x73aa, .value=0xee, .type=IO_READ},
        {.addr=0x73ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019C) {
    const struct CPU_State initial_cpu = {.pc=0x7f26, .a=0x2e, .x=0x0c, .y=0x67, .sp=0xd2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x06}, {.addr=0x7f26, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7f27, .a=0x2e, .x=0x0c, .y=0x06, .sp=0xd3, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x06}, {.addr=0x7f26, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7f26, .value=0xee, .type=IO_READ},
        {.addr=0x7f27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019D) {
    const struct CPU_State initial_cpu = {.pc=0xaad6, .a=0x1e, .x=0xcd, .y=0xf7, .sp=0x53, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x45}, {.addr=0xaad6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaad7, .a=0x1e, .x=0xcd, .y=0x45, .sp=0x54, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x45}, {.addr=0xaad6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaad6, .value=0xee, .type=IO_READ},
        {.addr=0xaad7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019E) {
    const struct CPU_State initial_cpu = {.pc=0x4e28, .a=0xa1, .x=0x37, .y=0xde, .sp=0x80, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x01}, {.addr=0x4e28, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4e29, .a=0xa1, .x=0x37, .y=0x01, .sp=0x81, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x01}, {.addr=0x4e28, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4e28, .value=0xee, .type=IO_READ},
        {.addr=0x4e29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_019F) {
    const struct CPU_State initial_cpu = {.pc=0x22ff, .a=0x4d, .x=0x9e, .y=0xe1, .sp=0xe1, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x08}, {.addr=0x22ff, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2300, .a=0x4d, .x=0x9e, .y=0x08, .sp=0xe2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x08}, {.addr=0x22ff, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x22ff, .value=0xee, .type=IO_READ},
        {.addr=0x2300, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xf098, .a=0xc1, .x=0x88, .y=0xa2, .sp=0x43, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xee}, {.addr=0xf098, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf099, .a=0xc1, .x=0x88, .y=0xee, .sp=0x44, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xee}, {.addr=0xf098, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf098, .value=0xee, .type=IO_READ},
        {.addr=0xf099, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5fd9, .a=0xbb, .x=0x47, .y=0x25, .sp=0x5c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x0a}, {.addr=0x5fd9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5fda, .a=0xbb, .x=0x47, .y=0x0a, .sp=0x5d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x0a}, {.addr=0x5fd9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5fd9, .value=0xee, .type=IO_READ},
        {.addr=0x5fda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xc332, .a=0x45, .x=0x56, .y=0xc3, .sp=0x24, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x6f}, {.addr=0xc332, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc333, .a=0x45, .x=0x56, .y=0x6f, .sp=0x25, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x6f}, {.addr=0xc332, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc332, .value=0xee, .type=IO_READ},
        {.addr=0xc333, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x77c5, .a=0xd3, .x=0xe2, .y=0x36, .sp=0x40, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xa2}, {.addr=0x77c5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x77c6, .a=0xd3, .x=0xe2, .y=0xa2, .sp=0x41, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xa2}, {.addr=0x77c5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x77c5, .value=0xee, .type=IO_READ},
        {.addr=0x77c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x50c7, .a=0xa7, .x=0x39, .y=0x5a, .sp=0xef, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x4e}, {.addr=0x50c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x50c8, .a=0xa7, .x=0x39, .y=0x4e, .sp=0xf0, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x4e}, {.addr=0x50c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x50c7, .value=0xee, .type=IO_READ},
        {.addr=0x50c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xd513, .a=0xd1, .x=0x99, .y=0x64, .sp=0x06, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x7e}, {.addr=0xd513, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd514, .a=0xd1, .x=0x99, .y=0x7e, .sp=0x07, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x7e}, {.addr=0xd513, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd513, .value=0xee, .type=IO_READ},
        {.addr=0xd514, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x4f5e, .a=0xce, .x=0x78, .y=0x93, .sp=0x27, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x06}, {.addr=0x4f5e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4f5f, .a=0xce, .x=0x78, .y=0x06, .sp=0x28, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x06}, {.addr=0x4f5e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4f5e, .value=0xee, .type=IO_READ},
        {.addr=0x4f5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xa686, .a=0x91, .x=0x2f, .y=0x28, .sp=0x5f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x0a}, {.addr=0xa686, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa687, .a=0x91, .x=0x2f, .y=0x0a, .sp=0x60, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x0a}, {.addr=0xa686, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa686, .value=0xee, .type=IO_READ},
        {.addr=0xa687, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x4973, .a=0x24, .x=0x2e, .y=0x30, .sp=0x50, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xf8}, {.addr=0x4973, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4974, .a=0x24, .x=0x2e, .y=0xf8, .sp=0x51, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xf8}, {.addr=0x4973, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4973, .value=0xee, .type=IO_READ},
        {.addr=0x4974, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x999e, .a=0x81, .x=0xaa, .y=0xb5, .sp=0xe2, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xaf}, {.addr=0x999e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x999f, .a=0x81, .x=0xaa, .y=0xaf, .sp=0xe3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xaf}, {.addr=0x999e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x999e, .value=0xee, .type=IO_READ},
        {.addr=0x999f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x78af, .a=0x04, .x=0x2c, .y=0x26, .sp=0x1e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x22}, {.addr=0x78af, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x78b0, .a=0x04, .x=0x2c, .y=0x22, .sp=0x1f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x22}, {.addr=0x78af, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x78af, .value=0xee, .type=IO_READ},
        {.addr=0x78b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xddcd, .a=0x9a, .x=0x17, .y=0x9a, .sp=0x89, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x63}, {.addr=0xddcd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xddce, .a=0x9a, .x=0x17, .y=0x63, .sp=0x8a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x63}, {.addr=0xddcd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xddcd, .value=0xee, .type=IO_READ},
        {.addr=0xddce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x9ca6, .a=0x39, .x=0x3c, .y=0xd2, .sp=0x51, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xc5}, {.addr=0x9ca6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9ca7, .a=0x39, .x=0x3c, .y=0xc5, .sp=0x52, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xc5}, {.addr=0x9ca6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ca6, .value=0xee, .type=IO_READ},
        {.addr=0x9ca7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xb598, .a=0x7e, .x=0x59, .y=0xc6, .sp=0xd3, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x03}, {.addr=0xb598, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb599, .a=0x7e, .x=0x59, .y=0x03, .sp=0xd4, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x03}, {.addr=0xb598, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb598, .value=0xee, .type=IO_READ},
        {.addr=0xb599, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6948, .a=0x8a, .x=0x58, .y=0x97, .sp=0x5d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xe9}, {.addr=0x6948, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6949, .a=0x8a, .x=0x58, .y=0xe9, .sp=0x5e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xe9}, {.addr=0x6948, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6948, .value=0xee, .type=IO_READ},
        {.addr=0x6949, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x9c03, .a=0x00, .x=0x0d, .y=0xec, .sp=0x30, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x70}, {.addr=0x9c03, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9c04, .a=0x00, .x=0x0d, .y=0x70, .sp=0x31, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x70}, {.addr=0x9c03, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9c03, .value=0xee, .type=IO_READ},
        {.addr=0x9c04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x8cdf, .a=0x33, .x=0xd3, .y=0xa2, .sp=0x22, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x6e}, {.addr=0x8cdf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8ce0, .a=0x33, .x=0xd3, .y=0x6e, .sp=0x23, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x6e}, {.addr=0x8cdf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8cdf, .value=0xee, .type=IO_READ},
        {.addr=0x8ce0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc025, .a=0x14, .x=0xf4, .y=0xb7, .sp=0x48, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x16}, {.addr=0xc025, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc026, .a=0x14, .x=0xf4, .y=0x16, .sp=0x49, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x16}, {.addr=0xc025, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc025, .value=0xee, .type=IO_READ},
        {.addr=0xc026, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xbc73, .a=0xce, .x=0xe5, .y=0xb5, .sp=0x43, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xab}, {.addr=0xbc73, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbc74, .a=0xce, .x=0xe5, .y=0xab, .sp=0x44, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xab}, {.addr=0xbc73, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbc73, .value=0xee, .type=IO_READ},
        {.addr=0xbc74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xd5ea, .a=0xc0, .x=0xb4, .y=0x3c, .sp=0x05, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x55}, {.addr=0xd5ea, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd5eb, .a=0xc0, .x=0xb4, .y=0x55, .sp=0x06, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x55}, {.addr=0xd5ea, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd5ea, .value=0xee, .type=IO_READ},
        {.addr=0xd5eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xfc88, .a=0xc0, .x=0x60, .y=0x2e, .sp=0x08, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x25}, {.addr=0xfc88, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc89, .a=0xc0, .x=0x60, .y=0x25, .sp=0x09, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x25}, {.addr=0xfc88, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc88, .value=0xee, .type=IO_READ},
        {.addr=0xfc89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x42fe, .a=0xb2, .x=0x92, .y=0x93, .sp=0xd8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xeb}, {.addr=0x42fe, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x42ff, .a=0xb2, .x=0x92, .y=0xeb, .sp=0xd9, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xeb}, {.addr=0x42fe, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x42fe, .value=0xee, .type=IO_READ},
        {.addr=0x42ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x455a, .a=0x24, .x=0xf0, .y=0xfa, .sp=0x93, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xb6}, {.addr=0x455a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x455b, .a=0x24, .x=0xf0, .y=0xb6, .sp=0x94, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xb6}, {.addr=0x455a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x455a, .value=0xee, .type=IO_READ},
        {.addr=0x455b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x5bc5, .a=0xe9, .x=0x4d, .y=0x4b, .sp=0x66, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x8f}, {.addr=0x5bc5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5bc6, .a=0xe9, .x=0x4d, .y=0x8f, .sp=0x67, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x8f}, {.addr=0x5bc5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5bc5, .value=0xee, .type=IO_READ},
        {.addr=0x5bc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb076, .a=0x66, .x=0xba, .y=0x04, .sp=0x93, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xb7}, {.addr=0xb076, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb077, .a=0x66, .x=0xba, .y=0xb7, .sp=0x94, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xb7}, {.addr=0xb076, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb076, .value=0xee, .type=IO_READ},
        {.addr=0xb077, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x5285, .a=0x62, .x=0xbe, .y=0x02, .sp=0xb9, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x0a}, {.addr=0x5285, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5286, .a=0x62, .x=0xbe, .y=0x0a, .sp=0xba, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x0a}, {.addr=0x5285, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5285, .value=0xee, .type=IO_READ},
        {.addr=0x5286, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xfdb0, .a=0xd3, .x=0x0e, .y=0xad, .sp=0x6a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xee}, {.addr=0xfdb0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfdb1, .a=0xd3, .x=0x0e, .y=0xee, .sp=0x6b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xee}, {.addr=0xfdb0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfdb0, .value=0xee, .type=IO_READ},
        {.addr=0xfdb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x8312, .a=0x88, .x=0xa0, .y=0x5e, .sp=0x2b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x0d}, {.addr=0x8312, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8313, .a=0x88, .x=0xa0, .y=0x0d, .sp=0x2c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x0d}, {.addr=0x8312, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8312, .value=0xee, .type=IO_READ},
        {.addr=0x8313, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xec37, .a=0x8f, .x=0x80, .y=0xe7, .sp=0xed, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x7d}, {.addr=0xec37, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xec38, .a=0x8f, .x=0x80, .y=0x7d, .sp=0xee, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x7d}, {.addr=0xec37, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xec37, .value=0xee, .type=IO_READ},
        {.addr=0xec38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xc716, .a=0x9b, .x=0x41, .y=0xde, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x7a}, {.addr=0xc716, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc717, .a=0x9b, .x=0x41, .y=0x7a, .sp=0x57, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x7a}, {.addr=0xc716, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc716, .value=0xee, .type=IO_READ},
        {.addr=0xc717, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x8b90, .a=0xc9, .x=0x7f, .y=0x08, .sp=0xff, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x2b}, {.addr=0x8b90, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8b91, .a=0xc9, .x=0x7f, .y=0x2b, .sp=0x00, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x2b}, {.addr=0x8b90, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8b90, .value=0xee, .type=IO_READ},
        {.addr=0x8b91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xf0a8, .a=0x0a, .x=0x36, .y=0xb6, .sp=0xfc, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x19}, {.addr=0xf0a8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf0a9, .a=0x0a, .x=0x36, .y=0x19, .sp=0xfd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x19}, {.addr=0xf0a8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf0a8, .value=0xee, .type=IO_READ},
        {.addr=0xf0a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x5944, .a=0xce, .x=0xbd, .y=0x76, .sp=0x8c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xa1}, {.addr=0x5944, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5945, .a=0xce, .x=0xbd, .y=0xa1, .sp=0x8d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xa1}, {.addr=0x5944, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5944, .value=0xee, .type=IO_READ},
        {.addr=0x5945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xccea, .a=0xee, .x=0xcc, .y=0x39, .sp=0x06, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xeb}, {.addr=0xccea, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcceb, .a=0xee, .x=0xcc, .y=0xeb, .sp=0x07, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xeb}, {.addr=0xccea, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xccea, .value=0xee, .type=IO_READ},
        {.addr=0xcceb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x8a3f, .a=0x58, .x=0xc0, .y=0xaa, .sp=0x6e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xf6}, {.addr=0x8a3f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8a40, .a=0x58, .x=0xc0, .y=0xf6, .sp=0x6f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xf6}, {.addr=0x8a3f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8a3f, .value=0xee, .type=IO_READ},
        {.addr=0x8a40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x425a, .a=0xe7, .x=0x53, .y=0xef, .sp=0x22, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x39}, {.addr=0x425a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x425b, .a=0xe7, .x=0x53, .y=0x39, .sp=0x23, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x39}, {.addr=0x425a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x425a, .value=0xee, .type=IO_READ},
        {.addr=0x425b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3698, .a=0x91, .x=0xac, .y=0xc0, .sp=0xb5, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xad}, {.addr=0x3698, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3699, .a=0x91, .x=0xac, .y=0xad, .sp=0xb6, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xad}, {.addr=0x3698, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3698, .value=0xee, .type=IO_READ},
        {.addr=0x3699, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x5fe2, .a=0x2b, .x=0xe6, .y=0x57, .sp=0xd4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xd2}, {.addr=0x5fe2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5fe3, .a=0x2b, .x=0xe6, .y=0xd2, .sp=0xd5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xd2}, {.addr=0x5fe2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5fe2, .value=0xee, .type=IO_READ},
        {.addr=0x5fe3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x55cf, .a=0x24, .x=0x85, .y=0xbc, .sp=0xc6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xb0}, {.addr=0x55cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x55d0, .a=0x24, .x=0x85, .y=0xb0, .sp=0xc7, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xb0}, {.addr=0x55cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x55cf, .value=0xee, .type=IO_READ},
        {.addr=0x55d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0xe6, .x=0x43, .y=0x3c, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xb3}, {.addr=0x6300, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6301, .a=0xe6, .x=0x43, .y=0xb3, .sp=0x76, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xb3}, {.addr=0x6300, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0xee, .type=IO_READ},
        {.addr=0x6301, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf830, .a=0xfb, .x=0x49, .y=0xcf, .sp=0xfa, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x50}, {.addr=0xf830, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf831, .a=0xfb, .x=0x49, .y=0x50, .sp=0xfb, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x50}, {.addr=0xf830, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf830, .value=0xee, .type=IO_READ},
        {.addr=0xf831, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xd396, .a=0x12, .x=0x72, .y=0x34, .sp=0x36, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xd6}, {.addr=0xd396, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd397, .a=0x12, .x=0x72, .y=0xd6, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xd6}, {.addr=0xd396, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd396, .value=0xee, .type=IO_READ},
        {.addr=0xd397, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x090b, .a=0x81, .x=0x9c, .y=0xc9, .sp=0x15, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xe2}, {.addr=0x090b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x090c, .a=0x81, .x=0x9c, .y=0xe2, .sp=0x16, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xe2}, {.addr=0x090b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x090b, .value=0xee, .type=IO_READ},
        {.addr=0x090c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x48de, .a=0x15, .x=0xbd, .y=0x01, .sp=0x76, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x1f}, {.addr=0x48de, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x48df, .a=0x15, .x=0xbd, .y=0x1f, .sp=0x77, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x1f}, {.addr=0x48de, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x48de, .value=0xee, .type=IO_READ},
        {.addr=0x48df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xdabe, .a=0xba, .x=0x95, .y=0x15, .sp=0x17, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xeb}, {.addr=0xdabe, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdabf, .a=0xba, .x=0x95, .y=0xeb, .sp=0x18, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xeb}, {.addr=0xdabe, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdabe, .value=0xee, .type=IO_READ},
        {.addr=0xdabf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x25cd, .a=0x46, .x=0xd8, .y=0x70, .sp=0x18, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x82}, {.addr=0x25cd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x25ce, .a=0x46, .x=0xd8, .y=0x82, .sp=0x19, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x82}, {.addr=0x25cd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x25cd, .value=0xee, .type=IO_READ},
        {.addr=0x25ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xc1fa, .a=0x5b, .x=0xa8, .y=0xc1, .sp=0xd7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xb6}, {.addr=0xc1fa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc1fb, .a=0x5b, .x=0xa8, .y=0xb6, .sp=0xd8, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xb6}, {.addr=0xc1fa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc1fa, .value=0xee, .type=IO_READ},
        {.addr=0xc1fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb40e, .a=0x02, .x=0x53, .y=0xa0, .sp=0x39, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x98}, {.addr=0xb40e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb40f, .a=0x02, .x=0x53, .y=0x98, .sp=0x3a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x98}, {.addr=0xb40e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb40e, .value=0xee, .type=IO_READ},
        {.addr=0xb40f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x9b8d, .a=0x43, .x=0xa9, .y=0x9b, .sp=0x50, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xb2}, {.addr=0x9b8d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9b8e, .a=0x43, .x=0xa9, .y=0xb2, .sp=0x51, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xb2}, {.addr=0x9b8d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9b8d, .value=0xee, .type=IO_READ},
        {.addr=0x9b8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x8eff, .a=0x0d, .x=0x07, .y=0xc7, .sp=0x84, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x7a}, {.addr=0x8eff, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8f00, .a=0x0d, .x=0x07, .y=0x7a, .sp=0x85, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x7a}, {.addr=0x8eff, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8eff, .value=0xee, .type=IO_READ},
        {.addr=0x8f00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x1465, .a=0x41, .x=0xa4, .y=0xa8, .sp=0x28, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xb5}, {.addr=0x1465, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1466, .a=0x41, .x=0xa4, .y=0xb5, .sp=0x29, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xb5}, {.addr=0x1465, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1465, .value=0xee, .type=IO_READ},
        {.addr=0x1466, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x8967, .a=0x84, .x=0x23, .y=0x57, .sp=0x54, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x86}, {.addr=0x8967, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8968, .a=0x84, .x=0x23, .y=0x86, .sp=0x55, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x86}, {.addr=0x8967, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8967, .value=0xee, .type=IO_READ},
        {.addr=0x8968, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x2f8f, .a=0xc7, .x=0x2f, .y=0xc6, .sp=0xaa, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x2c}, {.addr=0x2f8f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2f90, .a=0xc7, .x=0x2f, .y=0x2c, .sp=0xab, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x2c}, {.addr=0x2f8f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2f8f, .value=0xee, .type=IO_READ},
        {.addr=0x2f90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x49be, .a=0x34, .x=0x05, .y=0xb5, .sp=0xbb, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xcf}, {.addr=0x49be, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x49bf, .a=0x34, .x=0x05, .y=0xcf, .sp=0xbc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xcf}, {.addr=0x49be, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x49be, .value=0xee, .type=IO_READ},
        {.addr=0x49bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xb034, .a=0x1d, .x=0xc6, .y=0xe6, .sp=0x83, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x44}, {.addr=0xb034, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb035, .a=0x1d, .x=0xc6, .y=0x44, .sp=0x84, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x44}, {.addr=0xb034, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb034, .value=0xee, .type=IO_READ},
        {.addr=0xb035, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9409, .a=0xcd, .x=0xbe, .y=0xda, .sp=0x3e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xda}, {.addr=0x9409, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x940a, .a=0xcd, .x=0xbe, .y=0xda, .sp=0x3f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xda}, {.addr=0x9409, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9409, .value=0xee, .type=IO_READ},
        {.addr=0x940a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x43f8, .a=0xc2, .x=0x2b, .y=0x49, .sp=0xe3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xb6}, {.addr=0x43f8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x43f9, .a=0xc2, .x=0x2b, .y=0xb6, .sp=0xe4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb6}, {.addr=0x43f8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x43f8, .value=0xee, .type=IO_READ},
        {.addr=0x43f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xff0b, .a=0xe5, .x=0xdd, .y=0xf7, .sp=0xfd, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xd9}, {.addr=0xff0b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xff0c, .a=0xe5, .x=0xdd, .y=0xd9, .sp=0xfe, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xd9}, {.addr=0xff0b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xff0b, .value=0xee, .type=IO_READ},
        {.addr=0xff0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x8057, .a=0x7a, .x=0x29, .y=0xdd, .sp=0x9d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x3b}, {.addr=0x8057, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8058, .a=0x7a, .x=0x29, .y=0x3b, .sp=0x9e, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x3b}, {.addr=0x8057, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8057, .value=0xee, .type=IO_READ},
        {.addr=0x8058, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x5c3b, .a=0x71, .x=0x5a, .y=0x8f, .sp=0x25, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x34}, {.addr=0x5c3b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5c3c, .a=0x71, .x=0x5a, .y=0x34, .sp=0x26, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x34}, {.addr=0x5c3b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5c3b, .value=0xee, .type=IO_READ},
        {.addr=0x5c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xa5db, .a=0x71, .x=0xd9, .y=0x92, .sp=0x25, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xf7}, {.addr=0xa5db, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa5dc, .a=0x71, .x=0xd9, .y=0xf7, .sp=0x26, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xf7}, {.addr=0xa5db, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa5db, .value=0xee, .type=IO_READ},
        {.addr=0xa5dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x683a, .a=0xa9, .x=0x58, .y=0x88, .sp=0x14, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x42}, {.addr=0x683a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x683b, .a=0xa9, .x=0x58, .y=0x42, .sp=0x15, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x42}, {.addr=0x683a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x683a, .value=0xee, .type=IO_READ},
        {.addr=0x683b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x0005, .a=0xce, .x=0x1a, .y=0xf9, .sp=0xfc, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xee}, {.addr=0x01fd, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x0006, .a=0xce, .x=0x1a, .y=0x10, .sp=0xfd, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xee}, {.addr=0x01fd, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x0005, .value=0xee, .type=IO_READ},
        {.addr=0x0006, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x71a6, .a=0x5b, .x=0xed, .y=0x6a, .sp=0x49, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x56}, {.addr=0x71a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x71a7, .a=0x5b, .x=0xed, .y=0x56, .sp=0x4a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x56}, {.addr=0x71a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x71a6, .value=0xee, .type=IO_READ},
        {.addr=0x71a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xd231, .a=0x87, .x=0xaf, .y=0x8a, .sp=0xf4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xcc}, {.addr=0xd231, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd232, .a=0x87, .x=0xaf, .y=0xcc, .sp=0xf5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xcc}, {.addr=0xd231, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd231, .value=0xee, .type=IO_READ},
        {.addr=0xd232, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x5d75, .a=0xd2, .x=0x29, .y=0x50, .sp=0xa5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x3a}, {.addr=0x5d75, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5d76, .a=0xd2, .x=0x29, .y=0x3a, .sp=0xa6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x3a}, {.addr=0x5d75, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5d75, .value=0xee, .type=IO_READ},
        {.addr=0x5d76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x41c0, .a=0xbd, .x=0x9c, .y=0xdf, .sp=0x00, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x3c}, {.addr=0x41c0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x41c1, .a=0xbd, .x=0x9c, .y=0x3c, .sp=0x01, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x3c}, {.addr=0x41c0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x41c0, .value=0xee, .type=IO_READ},
        {.addr=0x41c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xd5a9, .a=0x40, .x=0x4f, .y=0xdd, .sp=0x57, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x62}, {.addr=0xd5a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd5aa, .a=0x40, .x=0x4f, .y=0x62, .sp=0x58, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x62}, {.addr=0xd5a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd5a9, .value=0xee, .type=IO_READ},
        {.addr=0xd5aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xb943, .a=0x95, .x=0x83, .y=0xaa, .sp=0xc8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x36}, {.addr=0xb943, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb944, .a=0x95, .x=0x83, .y=0x36, .sp=0xc9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x36}, {.addr=0xb943, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb943, .value=0xee, .type=IO_READ},
        {.addr=0xb944, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x06f7, .a=0x78, .x=0xde, .y=0x68, .sp=0x45, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x90}, {.addr=0x06f7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x06f8, .a=0x78, .x=0xde, .y=0x90, .sp=0x46, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x90}, {.addr=0x06f7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x06f7, .value=0xee, .type=IO_READ},
        {.addr=0x06f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd773, .a=0x31, .x=0x1f, .y=0x8f, .sp=0x91, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x93}, {.addr=0xd773, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd774, .a=0x31, .x=0x1f, .y=0x93, .sp=0x92, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x93}, {.addr=0xd773, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd773, .value=0xee, .type=IO_READ},
        {.addr=0xd774, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x4dba, .a=0x70, .x=0x14, .y=0x34, .sp=0x71, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xb5}, {.addr=0x4dba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4dbb, .a=0x70, .x=0x14, .y=0xb5, .sp=0x72, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb5}, {.addr=0x4dba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4dba, .value=0xee, .type=IO_READ},
        {.addr=0x4dbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x4fd7, .a=0x84, .x=0x0c, .y=0x1b, .sp=0xfa, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x69}, {.addr=0x4fd7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4fd8, .a=0x84, .x=0x0c, .y=0x69, .sp=0xfb, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x69}, {.addr=0x4fd7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4fd7, .value=0xee, .type=IO_READ},
        {.addr=0x4fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xe028, .a=0x4c, .x=0xd6, .y=0x96, .sp=0x42, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x07}, {.addr=0xe028, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe029, .a=0x4c, .x=0xd6, .y=0x07, .sp=0x43, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x07}, {.addr=0xe028, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe028, .value=0xee, .type=IO_READ},
        {.addr=0xe029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xeb0b, .a=0xff, .x=0xf7, .y=0x22, .sp=0xc7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x8c}, {.addr=0xeb0b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xeb0c, .a=0xff, .x=0xf7, .y=0x8c, .sp=0xc8, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x8c}, {.addr=0xeb0b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xeb0b, .value=0xee, .type=IO_READ},
        {.addr=0xeb0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc9f7, .a=0xcd, .x=0x54, .y=0xf3, .sp=0x90, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x84}, {.addr=0xc9f7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc9f8, .a=0xcd, .x=0x54, .y=0x84, .sp=0x91, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x84}, {.addr=0xc9f7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc9f7, .value=0xee, .type=IO_READ},
        {.addr=0xc9f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xe61d, .a=0x0a, .x=0x3a, .y=0x3d, .sp=0xe1, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x06}, {.addr=0xe61d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe61e, .a=0x0a, .x=0x3a, .y=0x06, .sp=0xe2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x06}, {.addr=0xe61d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe61d, .value=0xee, .type=IO_READ},
        {.addr=0xe61e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xc11e, .a=0x0a, .x=0xd4, .y=0x02, .sp=0xcb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x99}, {.addr=0xc11e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc11f, .a=0x0a, .x=0xd4, .y=0x99, .sp=0xcc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x99}, {.addr=0xc11e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc11e, .value=0xee, .type=IO_READ},
        {.addr=0xc11f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x846c, .a=0x1c, .x=0xf1, .y=0xf3, .sp=0xd6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x55}, {.addr=0x846c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x846d, .a=0x1c, .x=0xf1, .y=0x55, .sp=0xd7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x55}, {.addr=0x846c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x846c, .value=0xee, .type=IO_READ},
        {.addr=0x846d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xcf31, .a=0x23, .x=0xc9, .y=0x6e, .sp=0xf9, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xe8}, {.addr=0xcf31, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcf32, .a=0x23, .x=0xc9, .y=0xe8, .sp=0xfa, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xe8}, {.addr=0xcf31, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcf31, .value=0xee, .type=IO_READ},
        {.addr=0xcf32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x6384, .a=0xe9, .x=0x8d, .y=0x3a, .sp=0xa8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x14}, {.addr=0x6384, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6385, .a=0xe9, .x=0x8d, .y=0x14, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x14}, {.addr=0x6384, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6384, .value=0xee, .type=IO_READ},
        {.addr=0x6385, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xfc27, .a=0x79, .x=0x2d, .y=0x2b, .sp=0x61, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x6e}, {.addr=0xfc27, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc28, .a=0x79, .x=0x2d, .y=0x6e, .sp=0x62, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x6e}, {.addr=0xfc27, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc27, .value=0xee, .type=IO_READ},
        {.addr=0xfc28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xebd5, .a=0x2f, .x=0x97, .y=0x66, .sp=0xfd, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x10}, {.addr=0xebd5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xebd6, .a=0x2f, .x=0x97, .y=0x10, .sp=0xfe, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x10}, {.addr=0xebd5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xebd5, .value=0xee, .type=IO_READ},
        {.addr=0xebd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x548f, .a=0xc9, .x=0x6a, .y=0x32, .sp=0xd9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x6d}, {.addr=0x548f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5490, .a=0xc9, .x=0x6a, .y=0x6d, .sp=0xda, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x6d}, {.addr=0x548f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x548f, .value=0xee, .type=IO_READ},
        {.addr=0x5490, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x26ac, .a=0xc5, .x=0x42, .y=0x0d, .sp=0x92, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x42}, {.addr=0x26ac, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x26ad, .a=0xc5, .x=0x42, .y=0x42, .sp=0x93, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x42}, {.addr=0x26ac, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x26ac, .value=0xee, .type=IO_READ},
        {.addr=0x26ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x3409, .a=0x87, .x=0x22, .y=0xf1, .sp=0x9f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xcf}, {.addr=0x3409, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x340a, .a=0x87, .x=0x22, .y=0xcf, .sp=0xa0, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xcf}, {.addr=0x3409, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3409, .value=0xee, .type=IO_READ},
        {.addr=0x340a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xcb27, .a=0xc0, .x=0xac, .y=0x9b, .sp=0x07, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xe8}, {.addr=0xcb27, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcb28, .a=0xc0, .x=0xac, .y=0xe8, .sp=0x08, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xe8}, {.addr=0xcb27, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcb27, .value=0xee, .type=IO_READ},
        {.addr=0xcb28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x1b97, .a=0x84, .x=0x86, .y=0x4a, .sp=0x81, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x51}, {.addr=0x1b97, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1b98, .a=0x84, .x=0x86, .y=0x51, .sp=0x82, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x51}, {.addr=0x1b97, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1b97, .value=0xee, .type=IO_READ},
        {.addr=0x1b98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x6ffc, .a=0x82, .x=0xb4, .y=0x1f, .sp=0x0f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x76}, {.addr=0x6ffc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6ffd, .a=0x82, .x=0xb4, .y=0x76, .sp=0x10, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x76}, {.addr=0x6ffc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6ffc, .value=0xee, .type=IO_READ},
        {.addr=0x6ffd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0fac, .a=0xd7, .x=0xd9, .y=0xd2, .sp=0xd8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xb2}, {.addr=0x0fac, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0fad, .a=0xd7, .x=0xd9, .y=0xb2, .sp=0xd9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xb2}, {.addr=0x0fac, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0fac, .value=0xee, .type=IO_READ},
        {.addr=0x0fad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x0a02, .a=0x9e, .x=0xc9, .y=0x2c, .sp=0xf2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x7e}, {.addr=0x0a02, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0a03, .a=0x9e, .x=0xc9, .y=0x7e, .sp=0xf3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x7e}, {.addr=0x0a02, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0a02, .value=0xee, .type=IO_READ},
        {.addr=0x0a03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3468, .a=0x19, .x=0x3a, .y=0x7c, .sp=0xfa, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x22}, {.addr=0x3468, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3469, .a=0x19, .x=0x3a, .y=0x22, .sp=0xfb, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x22}, {.addr=0x3468, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3468, .value=0xee, .type=IO_READ},
        {.addr=0x3469, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xd4de, .a=0x11, .x=0xac, .y=0x4f, .sp=0x50, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x6b}, {.addr=0xd4de, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd4df, .a=0x11, .x=0xac, .y=0x6b, .sp=0x51, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x6b}, {.addr=0xd4de, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd4de, .value=0xee, .type=IO_READ},
        {.addr=0xd4df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x6709, .a=0x0c, .x=0xc8, .y=0x09, .sp=0x67, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xe5}, {.addr=0x6709, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x670a, .a=0x0c, .x=0xc8, .y=0xe5, .sp=0x68, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xe5}, {.addr=0x6709, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6709, .value=0xee, .type=IO_READ},
        {.addr=0x670a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x2ed5, .a=0x23, .x=0xdc, .y=0x32, .sp=0x9f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x25}, {.addr=0x2ed5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ed6, .a=0x23, .x=0xdc, .y=0x25, .sp=0xa0, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x25}, {.addr=0x2ed5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2ed5, .value=0xee, .type=IO_READ},
        {.addr=0x2ed6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xc066, .a=0xa8, .x=0x7d, .y=0xc2, .sp=0x8c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x0c}, {.addr=0xc066, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc067, .a=0xa8, .x=0x7d, .y=0x0c, .sp=0x8d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x0c}, {.addr=0xc066, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc066, .value=0xee, .type=IO_READ},
        {.addr=0xc067, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0200) {
    const struct CPU_State initial_cpu = {.pc=0xe6bd, .a=0xaa, .x=0xad, .y=0xa5, .sp=0x7a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xe9}, {.addr=0xe6bd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe6be, .a=0xaa, .x=0xad, .y=0xe9, .sp=0x7b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xe9}, {.addr=0xe6bd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe6bd, .value=0xee, .type=IO_READ},
        {.addr=0xe6be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0201) {
    const struct CPU_State initial_cpu = {.pc=0x6cf7, .a=0x8e, .x=0xf5, .y=0x4f, .sp=0xb6, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x91}, {.addr=0x6cf7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6cf8, .a=0x8e, .x=0xf5, .y=0x91, .sp=0xb7, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x91}, {.addr=0x6cf7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6cf7, .value=0xee, .type=IO_READ},
        {.addr=0x6cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0202) {
    const struct CPU_State initial_cpu = {.pc=0xf56f, .a=0x3e, .x=0x9d, .y=0x7f, .sp=0xfb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x49}, {.addr=0xf56f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf570, .a=0x3e, .x=0x9d, .y=0x49, .sp=0xfc, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x49}, {.addr=0xf56f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf56f, .value=0xee, .type=IO_READ},
        {.addr=0xf570, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0203) {
    const struct CPU_State initial_cpu = {.pc=0x672e, .a=0xd0, .x=0xa2, .y=0xc3, .sp=0x06, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x30}, {.addr=0x672e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x672f, .a=0xd0, .x=0xa2, .y=0x30, .sp=0x07, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x30}, {.addr=0x672e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x672e, .value=0xee, .type=IO_READ},
        {.addr=0x672f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0204) {
    const struct CPU_State initial_cpu = {.pc=0x8868, .a=0xbb, .x=0x5d, .y=0x77, .sp=0xef, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xaf}, {.addr=0x8868, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8869, .a=0xbb, .x=0x5d, .y=0xaf, .sp=0xf0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xaf}, {.addr=0x8868, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8868, .value=0xee, .type=IO_READ},
        {.addr=0x8869, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0205) {
    const struct CPU_State initial_cpu = {.pc=0x5f8c, .a=0x84, .x=0x81, .y=0x51, .sp=0xbc, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x3f}, {.addr=0x5f8c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5f8d, .a=0x84, .x=0x81, .y=0x3f, .sp=0xbd, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x3f}, {.addr=0x5f8c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5f8c, .value=0xee, .type=IO_READ},
        {.addr=0x5f8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0206) {
    const struct CPU_State initial_cpu = {.pc=0xaf7e, .a=0x3b, .x=0xaa, .y=0xff, .sp=0x7e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x97}, {.addr=0xaf7e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaf7f, .a=0x3b, .x=0xaa, .y=0x97, .sp=0x7f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x97}, {.addr=0xaf7e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaf7e, .value=0xee, .type=IO_READ},
        {.addr=0xaf7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9653, .a=0xed, .x=0x3e, .y=0xed, .sp=0x59, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x41}, {.addr=0x9653, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9654, .a=0xed, .x=0x3e, .y=0x41, .sp=0x5a, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x41}, {.addr=0x9653, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9653, .value=0xee, .type=IO_READ},
        {.addr=0x9654, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0208) {
    const struct CPU_State initial_cpu = {.pc=0x3ec6, .a=0x67, .x=0x95, .y=0x0f, .sp=0xe7, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xdf}, {.addr=0x3ec6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3ec7, .a=0x67, .x=0x95, .y=0xdf, .sp=0xe8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xdf}, {.addr=0x3ec6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3ec6, .value=0xee, .type=IO_READ},
        {.addr=0x3ec7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0209) {
    const struct CPU_State initial_cpu = {.pc=0x2c31, .a=0xbb, .x=0x2f, .y=0xab, .sp=0x64, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x9c}, {.addr=0x2c31, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2c32, .a=0xbb, .x=0x2f, .y=0x9c, .sp=0x65, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x9c}, {.addr=0x2c31, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2c31, .value=0xee, .type=IO_READ},
        {.addr=0x2c32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb6bf, .a=0xd9, .x=0x6c, .y=0x60, .sp=0x2c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x82}, {.addr=0xb6bf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb6c0, .a=0xd9, .x=0x6c, .y=0x82, .sp=0x2d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x82}, {.addr=0xb6bf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb6bf, .value=0xee, .type=IO_READ},
        {.addr=0xb6c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020B) {
    const struct CPU_State initial_cpu = {.pc=0xc36b, .a=0x2f, .x=0x11, .y=0x7a, .sp=0x1a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xc2}, {.addr=0xc36b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc36c, .a=0x2f, .x=0x11, .y=0xc2, .sp=0x1b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xc2}, {.addr=0xc36b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc36b, .value=0xee, .type=IO_READ},
        {.addr=0xc36c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2f9a, .a=0xed, .x=0x1d, .y=0xf7, .sp=0xa5, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x2f}, {.addr=0x2f9a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2f9b, .a=0xed, .x=0x1d, .y=0x2f, .sp=0xa6, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x2f}, {.addr=0x2f9a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2f9a, .value=0xee, .type=IO_READ},
        {.addr=0x2f9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020D) {
    const struct CPU_State initial_cpu = {.pc=0xab46, .a=0x6e, .x=0xab, .y=0x4a, .sp=0xfa, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xfe}, {.addr=0xab46, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xab47, .a=0x6e, .x=0xab, .y=0xfe, .sp=0xfb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xfe}, {.addr=0xab46, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xab46, .value=0xee, .type=IO_READ},
        {.addr=0xab47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020E) {
    const struct CPU_State initial_cpu = {.pc=0x591b, .a=0x65, .x=0x6c, .y=0xfe, .sp=0xaf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x06}, {.addr=0x591b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x591c, .a=0x65, .x=0x6c, .y=0x06, .sp=0xb0, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x06}, {.addr=0x591b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x591b, .value=0xee, .type=IO_READ},
        {.addr=0x591c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_020F) {
    const struct CPU_State initial_cpu = {.pc=0x13bd, .a=0x0c, .x=0xa8, .y=0xa3, .sp=0x4d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xa9}, {.addr=0x13bd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x13be, .a=0x0c, .x=0xa8, .y=0xa9, .sp=0x4e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa9}, {.addr=0x13bd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x13bd, .value=0xee, .type=IO_READ},
        {.addr=0x13be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0210) {
    const struct CPU_State initial_cpu = {.pc=0xceae, .a=0x17, .x=0xed, .y=0x41, .sp=0xc3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x2c}, {.addr=0xceae, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xceaf, .a=0x17, .x=0xed, .y=0x2c, .sp=0xc4, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x2c}, {.addr=0xceae, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xceae, .value=0xee, .type=IO_READ},
        {.addr=0xceaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0211) {
    const struct CPU_State initial_cpu = {.pc=0xedb8, .a=0xe6, .x=0x65, .y=0x81, .sp=0x33, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x7a}, {.addr=0xedb8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xedb9, .a=0xe6, .x=0x65, .y=0x7a, .sp=0x34, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x7a}, {.addr=0xedb8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xedb8, .value=0xee, .type=IO_READ},
        {.addr=0xedb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0212) {
    const struct CPU_State initial_cpu = {.pc=0x0fa6, .a=0xc1, .x=0x88, .y=0x02, .sp=0x5f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xd2}, {.addr=0x0fa6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0fa7, .a=0xc1, .x=0x88, .y=0xd2, .sp=0x60, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xd2}, {.addr=0x0fa6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0fa6, .value=0xee, .type=IO_READ},
        {.addr=0x0fa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1533, .a=0xa0, .x=0xb0, .y=0x73, .sp=0x64, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x46}, {.addr=0x1533, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1534, .a=0xa0, .x=0xb0, .y=0x46, .sp=0x65, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x46}, {.addr=0x1533, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1533, .value=0xee, .type=IO_READ},
        {.addr=0x1534, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0214) {
    const struct CPU_State initial_cpu = {.pc=0xee2b, .a=0xd8, .x=0x90, .y=0x8e, .sp=0x1f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xa4}, {.addr=0xee2b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xee2c, .a=0xd8, .x=0x90, .y=0xa4, .sp=0x20, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xa4}, {.addr=0xee2b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xee2b, .value=0xee, .type=IO_READ},
        {.addr=0xee2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0215) {
    const struct CPU_State initial_cpu = {.pc=0x0d4b, .a=0x92, .x=0x40, .y=0x72, .sp=0xef, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x39}, {.addr=0x0d4b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0d4c, .a=0x92, .x=0x40, .y=0x39, .sp=0xf0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x39}, {.addr=0x0d4b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0d4b, .value=0xee, .type=IO_READ},
        {.addr=0x0d4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0216) {
    const struct CPU_State initial_cpu = {.pc=0xf669, .a=0xe0, .x=0xb1, .y=0xa7, .sp=0xf5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x9f}, {.addr=0xf669, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf66a, .a=0xe0, .x=0xb1, .y=0x9f, .sp=0xf6, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x9f}, {.addr=0xf669, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf669, .value=0xee, .type=IO_READ},
        {.addr=0xf66a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0217) {
    const struct CPU_State initial_cpu = {.pc=0x8401, .a=0x67, .x=0x9b, .y=0x35, .sp=0xc6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x3b}, {.addr=0x8401, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8402, .a=0x67, .x=0x9b, .y=0x3b, .sp=0xc7, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x3b}, {.addr=0x8401, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8401, .value=0xee, .type=IO_READ},
        {.addr=0x8402, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe130, .a=0xf4, .x=0x8b, .y=0x74, .sp=0x8f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xa9}, {.addr=0xe130, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe131, .a=0xf4, .x=0x8b, .y=0xa9, .sp=0x90, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xa9}, {.addr=0xe130, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe130, .value=0xee, .type=IO_READ},
        {.addr=0xe131, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0219) {
    const struct CPU_State initial_cpu = {.pc=0x4a95, .a=0x8a, .x=0x0a, .y=0x95, .sp=0xc4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x56}, {.addr=0x4a95, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4a96, .a=0x8a, .x=0x0a, .y=0x56, .sp=0xc5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x56}, {.addr=0x4a95, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4a95, .value=0xee, .type=IO_READ},
        {.addr=0x4a96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021A) {
    const struct CPU_State initial_cpu = {.pc=0xb29c, .a=0x29, .x=0x12, .y=0x2e, .sp=0x0e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x6c}, {.addr=0xb29c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb29d, .a=0x29, .x=0x12, .y=0x6c, .sp=0x0f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x6c}, {.addr=0xb29c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb29c, .value=0xee, .type=IO_READ},
        {.addr=0xb29d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021B) {
    const struct CPU_State initial_cpu = {.pc=0xa2a4, .a=0x0c, .x=0xa1, .y=0x92, .sp=0x67, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x13}, {.addr=0xa2a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa2a5, .a=0x0c, .x=0xa1, .y=0x13, .sp=0x68, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x13}, {.addr=0xa2a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa2a4, .value=0xee, .type=IO_READ},
        {.addr=0xa2a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021C) {
    const struct CPU_State initial_cpu = {.pc=0xb2e9, .a=0x89, .x=0x66, .y=0xb9, .sp=0xaa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xcd}, {.addr=0xb2e9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb2ea, .a=0x89, .x=0x66, .y=0xcd, .sp=0xab, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xcd}, {.addr=0xb2e9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb2e9, .value=0xee, .type=IO_READ},
        {.addr=0xb2ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021D) {
    const struct CPU_State initial_cpu = {.pc=0x64e5, .a=0x82, .x=0xdb, .y=0x36, .sp=0xd8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xa1}, {.addr=0x64e5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x64e6, .a=0x82, .x=0xdb, .y=0xa1, .sp=0xd9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xa1}, {.addr=0x64e5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x64e5, .value=0xee, .type=IO_READ},
        {.addr=0x64e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7b8d, .a=0xfa, .x=0xa7, .y=0x32, .sp=0x07, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x09}, {.addr=0x7b8d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7b8e, .a=0xfa, .x=0xa7, .y=0x09, .sp=0x08, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x09}, {.addr=0x7b8d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7b8d, .value=0xee, .type=IO_READ},
        {.addr=0x7b8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_021F) {
    const struct CPU_State initial_cpu = {.pc=0x7de8, .a=0x22, .x=0x7c, .y=0xd7, .sp=0x71, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x58}, {.addr=0x7de8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7de9, .a=0x22, .x=0x7c, .y=0x58, .sp=0x72, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x58}, {.addr=0x7de8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7de8, .value=0xee, .type=IO_READ},
        {.addr=0x7de9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9ed6, .a=0x5f, .x=0xd4, .y=0x47, .sp=0xd6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xf7}, {.addr=0x9ed6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9ed7, .a=0x5f, .x=0xd4, .y=0xf7, .sp=0xd7, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xf7}, {.addr=0x9ed6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ed6, .value=0xee, .type=IO_READ},
        {.addr=0x9ed7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0221) {
    const struct CPU_State initial_cpu = {.pc=0x8731, .a=0x0f, .x=0x6f, .y=0x65, .sp=0xae, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x39}, {.addr=0x8731, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8732, .a=0x0f, .x=0x6f, .y=0x39, .sp=0xaf, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x39}, {.addr=0x8731, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8731, .value=0xee, .type=IO_READ},
        {.addr=0x8732, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0222) {
    const struct CPU_State initial_cpu = {.pc=0x1b35, .a=0xae, .x=0xf3, .y=0x9f, .sp=0x24, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x46}, {.addr=0x1b35, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1b36, .a=0xae, .x=0xf3, .y=0x46, .sp=0x25, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x46}, {.addr=0x1b35, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1b35, .value=0xee, .type=IO_READ},
        {.addr=0x1b36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0223) {
    const struct CPU_State initial_cpu = {.pc=0x554c, .a=0xf8, .x=0x70, .y=0x73, .sp=0xd7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xee}, {.addr=0x554c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x554d, .a=0xf8, .x=0x70, .y=0xee, .sp=0xd8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xee}, {.addr=0x554c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x554c, .value=0xee, .type=IO_READ},
        {.addr=0x554d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0224) {
    const struct CPU_State initial_cpu = {.pc=0x5893, .a=0x0b, .x=0x08, .y=0xc1, .sp=0x71, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x31}, {.addr=0x5893, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5894, .a=0x0b, .x=0x08, .y=0x31, .sp=0x72, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x31}, {.addr=0x5893, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5893, .value=0xee, .type=IO_READ},
        {.addr=0x5894, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0225) {
    const struct CPU_State initial_cpu = {.pc=0x1542, .a=0x60, .x=0x9c, .y=0xe7, .sp=0xfc, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x2d}, {.addr=0x1542, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1543, .a=0x60, .x=0x9c, .y=0x2d, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x2d}, {.addr=0x1542, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1542, .value=0xee, .type=IO_READ},
        {.addr=0x1543, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0226) {
    const struct CPU_State initial_cpu = {.pc=0xaff8, .a=0x50, .x=0xf5, .y=0xa3, .sp=0x0b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x4d}, {.addr=0xaff8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaff9, .a=0x50, .x=0xf5, .y=0x4d, .sp=0x0c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x4d}, {.addr=0xaff8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaff8, .value=0xee, .type=IO_READ},
        {.addr=0xaff9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0227) {
    const struct CPU_State initial_cpu = {.pc=0xd180, .a=0x4c, .x=0x24, .y=0xe3, .sp=0x38, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xd180, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd181, .a=0x4c, .x=0x24, .y=0x00, .sp=0x39, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xd180, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd180, .value=0xee, .type=IO_READ},
        {.addr=0xd181, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0a61, .a=0x11, .x=0x44, .y=0xe7, .sp=0x83, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xb0}, {.addr=0x0a61, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0a62, .a=0x11, .x=0x44, .y=0xb0, .sp=0x84, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xb0}, {.addr=0x0a61, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0a61, .value=0xee, .type=IO_READ},
        {.addr=0x0a62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0229) {
    const struct CPU_State initial_cpu = {.pc=0xb1a5, .a=0x1c, .x=0x3c, .y=0xa2, .sp=0x7b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x44}, {.addr=0xb1a5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb1a6, .a=0x1c, .x=0x3c, .y=0x44, .sp=0x7c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x44}, {.addr=0xb1a5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb1a5, .value=0xee, .type=IO_READ},
        {.addr=0xb1a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022A) {
    const struct CPU_State initial_cpu = {.pc=0x0f09, .a=0x3c, .x=0xaa, .y=0xa1, .sp=0x0a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x3c}, {.addr=0x0f09, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f0a, .a=0x3c, .x=0xaa, .y=0x3c, .sp=0x0b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x3c}, {.addr=0x0f09, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f09, .value=0xee, .type=IO_READ},
        {.addr=0x0f0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022B) {
    const struct CPU_State initial_cpu = {.pc=0x3526, .a=0xe3, .x=0x90, .y=0x44, .sp=0x07, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x98}, {.addr=0x3526, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3527, .a=0xe3, .x=0x90, .y=0x98, .sp=0x08, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x98}, {.addr=0x3526, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3526, .value=0xee, .type=IO_READ},
        {.addr=0x3527, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf340, .a=0x71, .x=0xa1, .y=0xcd, .sp=0xad, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x88}, {.addr=0xf340, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf341, .a=0x71, .x=0xa1, .y=0x88, .sp=0xae, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x88}, {.addr=0xf340, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf340, .value=0xee, .type=IO_READ},
        {.addr=0xf341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8cb1, .a=0x8e, .x=0x44, .y=0x06, .sp=0x45, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x45}, {.addr=0x8cb1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8cb2, .a=0x8e, .x=0x44, .y=0x45, .sp=0x46, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x45}, {.addr=0x8cb1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8cb1, .value=0xee, .type=IO_READ},
        {.addr=0x8cb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022E) {
    const struct CPU_State initial_cpu = {.pc=0x9751, .a=0xd7, .x=0xc1, .y=0x40, .sp=0xc4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf5}, {.addr=0x9751, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9752, .a=0xd7, .x=0xc1, .y=0xf5, .sp=0xc5, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xf5}, {.addr=0x9751, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9751, .value=0xee, .type=IO_READ},
        {.addr=0x9752, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_022F) {
    const struct CPU_State initial_cpu = {.pc=0x37e6, .a=0x46, .x=0xba, .y=0x88, .sp=0x2c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x28}, {.addr=0x37e6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x37e7, .a=0x46, .x=0xba, .y=0x28, .sp=0x2d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x28}, {.addr=0x37e6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x37e6, .value=0xee, .type=IO_READ},
        {.addr=0x37e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0230) {
    const struct CPU_State initial_cpu = {.pc=0xf869, .a=0xd6, .x=0x8a, .y=0xc3, .sp=0x7f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xc8}, {.addr=0xf869, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf86a, .a=0xd6, .x=0x8a, .y=0xc8, .sp=0x80, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xc8}, {.addr=0xf869, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf869, .value=0xee, .type=IO_READ},
        {.addr=0xf86a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0231) {
    const struct CPU_State initial_cpu = {.pc=0x70d3, .a=0x40, .x=0x1a, .y=0xa1, .sp=0x4e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xfc}, {.addr=0x70d3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x70d4, .a=0x40, .x=0x1a, .y=0xfc, .sp=0x4f, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xfc}, {.addr=0x70d3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x70d3, .value=0xee, .type=IO_READ},
        {.addr=0x70d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0232) {
    const struct CPU_State initial_cpu = {.pc=0x95d2, .a=0x7c, .x=0x8e, .y=0x43, .sp=0x97, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x75}, {.addr=0x95d2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x95d3, .a=0x7c, .x=0x8e, .y=0x75, .sp=0x98, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x75}, {.addr=0x95d2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x95d2, .value=0xee, .type=IO_READ},
        {.addr=0x95d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0233) {
    const struct CPU_State initial_cpu = {.pc=0x2ed0, .a=0xc3, .x=0x8d, .y=0xff, .sp=0x26, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xea}, {.addr=0x2ed0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ed1, .a=0xc3, .x=0x8d, .y=0xea, .sp=0x27, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xea}, {.addr=0x2ed0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2ed0, .value=0xee, .type=IO_READ},
        {.addr=0x2ed1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd17a, .a=0xc7, .x=0xa8, .y=0x30, .sp=0x26, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xf5}, {.addr=0xd17a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd17b, .a=0xc7, .x=0xa8, .y=0xf5, .sp=0x27, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xf5}, {.addr=0xd17a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd17a, .value=0xee, .type=IO_READ},
        {.addr=0xd17b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2bf2, .a=0x7a, .x=0x92, .y=0x07, .sp=0x78, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xfc}, {.addr=0x2bf2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2bf3, .a=0x7a, .x=0x92, .y=0xfc, .sp=0x79, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xfc}, {.addr=0x2bf2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2bf2, .value=0xee, .type=IO_READ},
        {.addr=0x2bf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc22c, .a=0xdd, .x=0x5e, .y=0x4c, .sp=0x51, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x61}, {.addr=0xc22c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc22d, .a=0xdd, .x=0x5e, .y=0x61, .sp=0x52, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x61}, {.addr=0xc22c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc22c, .value=0xee, .type=IO_READ},
        {.addr=0xc22d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0237) {
    const struct CPU_State initial_cpu = {.pc=0xd9a6, .a=0x65, .x=0x1d, .y=0x28, .sp=0x4f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc9}, {.addr=0xd9a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd9a7, .a=0x65, .x=0x1d, .y=0xc9, .sp=0x50, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc9}, {.addr=0xd9a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd9a6, .value=0xee, .type=IO_READ},
        {.addr=0xd9a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0238) {
    const struct CPU_State initial_cpu = {.pc=0x1d26, .a=0xcb, .x=0x6c, .y=0x39, .sp=0xb8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xc8}, {.addr=0x1d26, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1d27, .a=0xcb, .x=0x6c, .y=0xc8, .sp=0xb9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xc8}, {.addr=0x1d26, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1d26, .value=0xee, .type=IO_READ},
        {.addr=0x1d27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0239) {
    const struct CPU_State initial_cpu = {.pc=0xc00c, .a=0xc0, .x=0xc8, .y=0x67, .sp=0xf3, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x04}, {.addr=0xc00c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc00d, .a=0xc0, .x=0xc8, .y=0x04, .sp=0xf4, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x04}, {.addr=0xc00c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc00c, .value=0xee, .type=IO_READ},
        {.addr=0xc00d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023A) {
    const struct CPU_State initial_cpu = {.pc=0x091a, .a=0x1e, .x=0x1a, .y=0x9a, .sp=0x27, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x9e}, {.addr=0x091a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x091b, .a=0x1e, .x=0x1a, .y=0x9e, .sp=0x28, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x9e}, {.addr=0x091a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x091a, .value=0xee, .type=IO_READ},
        {.addr=0x091b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023B) {
    const struct CPU_State initial_cpu = {.pc=0x661a, .a=0x0e, .x=0x52, .y=0x58, .sp=0x09, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xb9}, {.addr=0x661a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x661b, .a=0x0e, .x=0x52, .y=0xb9, .sp=0x0a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb9}, {.addr=0x661a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x661a, .value=0xee, .type=IO_READ},
        {.addr=0x661b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3335, .a=0x00, .x=0x3e, .y=0xb3, .sp=0xc0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x7b}, {.addr=0x3335, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3336, .a=0x00, .x=0x3e, .y=0x7b, .sp=0xc1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x7b}, {.addr=0x3335, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3335, .value=0xee, .type=IO_READ},
        {.addr=0x3336, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023D) {
    const struct CPU_State initial_cpu = {.pc=0xcc14, .a=0xdd, .x=0x97, .y=0xf3, .sp=0xfa, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x57}, {.addr=0xcc14, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcc15, .a=0xdd, .x=0x97, .y=0x57, .sp=0xfb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x57}, {.addr=0xcc14, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcc14, .value=0xee, .type=IO_READ},
        {.addr=0xcc15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023E) {
    const struct CPU_State initial_cpu = {.pc=0x9b25, .a=0xfc, .x=0xc5, .y=0xac, .sp=0xbd, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xeb}, {.addr=0x9b25, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9b26, .a=0xfc, .x=0xc5, .y=0xeb, .sp=0xbe, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xeb}, {.addr=0x9b25, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9b25, .value=0xee, .type=IO_READ},
        {.addr=0x9b26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_023F) {
    const struct CPU_State initial_cpu = {.pc=0x87c1, .a=0xa8, .x=0x5d, .y=0xed, .sp=0x61, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xea}, {.addr=0x87c1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x87c2, .a=0xa8, .x=0x5d, .y=0xea, .sp=0x62, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xea}, {.addr=0x87c1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x87c1, .value=0xee, .type=IO_READ},
        {.addr=0x87c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0240) {
    const struct CPU_State initial_cpu = {.pc=0x7243, .a=0x64, .x=0x1a, .y=0x0e, .sp=0xc1, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x7a}, {.addr=0x7243, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7244, .a=0x64, .x=0x1a, .y=0x7a, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x7a}, {.addr=0x7243, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7243, .value=0xee, .type=IO_READ},
        {.addr=0x7244, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0241) {
    const struct CPU_State initial_cpu = {.pc=0xa40c, .a=0x29, .x=0x61, .y=0x38, .sp=0x9f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xcb}, {.addr=0xa40c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa40d, .a=0x29, .x=0x61, .y=0xcb, .sp=0xa0, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xcb}, {.addr=0xa40c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa40c, .value=0xee, .type=IO_READ},
        {.addr=0xa40d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0242) {
    const struct CPU_State initial_cpu = {.pc=0x169a, .a=0x9d, .x=0xb6, .y=0x25, .sp=0xcb, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x69}, {.addr=0x169a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x169b, .a=0x9d, .x=0xb6, .y=0x69, .sp=0xcc, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x69}, {.addr=0x169a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x169a, .value=0xee, .type=IO_READ},
        {.addr=0x169b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0243) {
    const struct CPU_State initial_cpu = {.pc=0x464c, .a=0xa7, .x=0xbf, .y=0xc5, .sp=0xd9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x12}, {.addr=0x464c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x464d, .a=0xa7, .x=0xbf, .y=0x12, .sp=0xda, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x12}, {.addr=0x464c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x464c, .value=0xee, .type=IO_READ},
        {.addr=0x464d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0244) {
    const struct CPU_State initial_cpu = {.pc=0xe58b, .a=0x8f, .x=0x95, .y=0xa0, .sp=0xb3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xcd}, {.addr=0xe58b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe58c, .a=0x8f, .x=0x95, .y=0xcd, .sp=0xb4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xcd}, {.addr=0xe58b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe58b, .value=0xee, .type=IO_READ},
        {.addr=0xe58c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0245) {
    const struct CPU_State initial_cpu = {.pc=0x5a4e, .a=0xad, .x=0xd2, .y=0x0e, .sp=0xaf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x88}, {.addr=0x5a4e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5a4f, .a=0xad, .x=0xd2, .y=0x88, .sp=0xb0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x88}, {.addr=0x5a4e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5a4e, .value=0xee, .type=IO_READ},
        {.addr=0x5a4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0246) {
    const struct CPU_State initial_cpu = {.pc=0x6975, .a=0x16, .x=0xa5, .y=0xd9, .sp=0x42, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x8f}, {.addr=0x6975, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6976, .a=0x16, .x=0xa5, .y=0x8f, .sp=0x43, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x8f}, {.addr=0x6975, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6975, .value=0xee, .type=IO_READ},
        {.addr=0x6976, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0247) {
    const struct CPU_State initial_cpu = {.pc=0xc86d, .a=0x3d, .x=0x74, .y=0xe0, .sp=0x88, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x71}, {.addr=0xc86d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc86e, .a=0x3d, .x=0x74, .y=0x71, .sp=0x89, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x71}, {.addr=0xc86d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc86d, .value=0xee, .type=IO_READ},
        {.addr=0xc86e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6e75, .a=0xb5, .x=0x3f, .y=0xfc, .sp=0xb9, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x9d}, {.addr=0x6e75, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6e76, .a=0xb5, .x=0x3f, .y=0x9d, .sp=0xba, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x9d}, {.addr=0x6e75, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6e75, .value=0xee, .type=IO_READ},
        {.addr=0x6e76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0249) {
    const struct CPU_State initial_cpu = {.pc=0x78c0, .a=0x9d, .x=0x4d, .y=0x43, .sp=0xe0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x20}, {.addr=0x78c0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x78c1, .a=0x9d, .x=0x4d, .y=0x20, .sp=0xe1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x20}, {.addr=0x78c0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x78c0, .value=0xee, .type=IO_READ},
        {.addr=0x78c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024A) {
    const struct CPU_State initial_cpu = {.pc=0x4f3d, .a=0xec, .x=0x4c, .y=0x08, .sp=0xb0, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x02}, {.addr=0x4f3d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4f3e, .a=0xec, .x=0x4c, .y=0x02, .sp=0xb1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x02}, {.addr=0x4f3d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4f3d, .value=0xee, .type=IO_READ},
        {.addr=0x4f3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024B) {
    const struct CPU_State initial_cpu = {.pc=0xfa05, .a=0xbf, .x=0xd2, .y=0x97, .sp=0xc5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x5f}, {.addr=0xfa05, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfa06, .a=0xbf, .x=0xd2, .y=0x5f, .sp=0xc6, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x5f}, {.addr=0xfa05, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfa05, .value=0xee, .type=IO_READ},
        {.addr=0xfa06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024C) {
    const struct CPU_State initial_cpu = {.pc=0x6b15, .a=0x01, .x=0x75, .y=0x54, .sp=0xa1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x40}, {.addr=0x6b15, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6b16, .a=0x01, .x=0x75, .y=0x40, .sp=0xa2, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x40}, {.addr=0x6b15, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6b15, .value=0xee, .type=IO_READ},
        {.addr=0x6b16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024D) {
    const struct CPU_State initial_cpu = {.pc=0x64cc, .a=0x6d, .x=0x94, .y=0x08, .sp=0x24, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xbf}, {.addr=0x64cc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x64cd, .a=0x6d, .x=0x94, .y=0xbf, .sp=0x25, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xbf}, {.addr=0x64cc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x64cc, .value=0xee, .type=IO_READ},
        {.addr=0x64cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024E) {
    const struct CPU_State initial_cpu = {.pc=0x9e67, .a=0x1c, .x=0xc2, .y=0x9b, .sp=0x5f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x9e67, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9e68, .a=0x1c, .x=0xc2, .y=0x00, .sp=0x60, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x9e67, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9e67, .value=0xee, .type=IO_READ},
        {.addr=0x9e68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_024F) {
    const struct CPU_State initial_cpu = {.pc=0x4970, .a=0xff, .x=0x78, .y=0xa3, .sp=0x49, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x10}, {.addr=0x4970, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4971, .a=0xff, .x=0x78, .y=0x10, .sp=0x4a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x10}, {.addr=0x4970, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4970, .value=0xee, .type=IO_READ},
        {.addr=0x4971, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0250) {
    const struct CPU_State initial_cpu = {.pc=0xbb5a, .a=0xe5, .x=0x52, .y=0x84, .sp=0xee, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x6e}, {.addr=0xbb5a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbb5b, .a=0xe5, .x=0x52, .y=0x6e, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x6e}, {.addr=0xbb5a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbb5a, .value=0xee, .type=IO_READ},
        {.addr=0xbb5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0251) {
    const struct CPU_State initial_cpu = {.pc=0x84fc, .a=0x88, .x=0x04, .y=0xce, .sp=0xd0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xc0}, {.addr=0x84fc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x84fd, .a=0x88, .x=0x04, .y=0xc0, .sp=0xd1, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xc0}, {.addr=0x84fc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x84fc, .value=0xee, .type=IO_READ},
        {.addr=0x84fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0252) {
    const struct CPU_State initial_cpu = {.pc=0xaa0e, .a=0x1d, .x=0x3d, .y=0xe0, .sp=0xfe, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x9b}, {.addr=0xaa0e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaa0f, .a=0x1d, .x=0x3d, .y=0x9b, .sp=0xff, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x9b}, {.addr=0xaa0e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaa0e, .value=0xee, .type=IO_READ},
        {.addr=0xaa0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0253) {
    const struct CPU_State initial_cpu = {.pc=0x9331, .a=0xaf, .x=0x17, .y=0x14, .sp=0x06, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xb6}, {.addr=0x9331, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9332, .a=0xaf, .x=0x17, .y=0xb6, .sp=0x07, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb6}, {.addr=0x9331, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9331, .value=0xee, .type=IO_READ},
        {.addr=0x9332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0254) {
    const struct CPU_State initial_cpu = {.pc=0xb639, .a=0x0e, .x=0x88, .y=0x08, .sp=0x2a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x62}, {.addr=0xb639, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb63a, .a=0x0e, .x=0x88, .y=0x62, .sp=0x2b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x62}, {.addr=0xb639, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb639, .value=0xee, .type=IO_READ},
        {.addr=0xb63a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0255) {
    const struct CPU_State initial_cpu = {.pc=0x6667, .a=0xbc, .x=0x88, .y=0xf8, .sp=0x07, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xdc}, {.addr=0x6667, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6668, .a=0xbc, .x=0x88, .y=0xdc, .sp=0x08, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xdc}, {.addr=0x6667, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6667, .value=0xee, .type=IO_READ},
        {.addr=0x6668, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0256) {
    const struct CPU_State initial_cpu = {.pc=0x0f1e, .a=0x63, .x=0x59, .y=0x4e, .sp=0xbe, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xa8}, {.addr=0x0f1e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f1f, .a=0x63, .x=0x59, .y=0xa8, .sp=0xbf, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xa8}, {.addr=0x0f1e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f1e, .value=0xee, .type=IO_READ},
        {.addr=0x0f1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9039, .a=0x36, .x=0x17, .y=0x19, .sp=0x0d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x19}, {.addr=0x9039, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x903a, .a=0x36, .x=0x17, .y=0x19, .sp=0x0e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x19}, {.addr=0x9039, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9039, .value=0xee, .type=IO_READ},
        {.addr=0x903a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0258) {
    const struct CPU_State initial_cpu = {.pc=0xdb84, .a=0x21, .x=0x69, .y=0x8d, .sp=0x59, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x86}, {.addr=0xdb84, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdb85, .a=0x21, .x=0x69, .y=0x86, .sp=0x5a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x86}, {.addr=0xdb84, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdb84, .value=0xee, .type=IO_READ},
        {.addr=0xdb85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0259) {
    const struct CPU_State initial_cpu = {.pc=0xbba5, .a=0x8c, .x=0xff, .y=0x66, .sp=0x96, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x69}, {.addr=0xbba5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbba6, .a=0x8c, .x=0xff, .y=0x69, .sp=0x97, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x69}, {.addr=0xbba5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbba5, .value=0xee, .type=IO_READ},
        {.addr=0xbba6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025A) {
    const struct CPU_State initial_cpu = {.pc=0x8b7c, .a=0x62, .x=0xa4, .y=0x65, .sp=0x9c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xea}, {.addr=0x8b7c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8b7d, .a=0x62, .x=0xa4, .y=0xea, .sp=0x9d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xea}, {.addr=0x8b7c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8b7c, .value=0xee, .type=IO_READ},
        {.addr=0x8b7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa7b3, .a=0x75, .x=0xfe, .y=0x7c, .sp=0x61, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x72}, {.addr=0xa7b3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa7b4, .a=0x75, .x=0xfe, .y=0x72, .sp=0x62, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x72}, {.addr=0xa7b3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa7b3, .value=0xee, .type=IO_READ},
        {.addr=0xa7b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025C) {
    const struct CPU_State initial_cpu = {.pc=0x36cc, .a=0xb1, .x=0xa3, .y=0x61, .sp=0xcc, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x22}, {.addr=0x36cc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x36cd, .a=0xb1, .x=0xa3, .y=0x22, .sp=0xcd, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x22}, {.addr=0x36cc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x36cc, .value=0xee, .type=IO_READ},
        {.addr=0x36cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025D) {
    const struct CPU_State initial_cpu = {.pc=0xac33, .a=0x5f, .x=0xde, .y=0x5d, .sp=0xce, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xa6}, {.addr=0xac33, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xac34, .a=0x5f, .x=0xde, .y=0xa6, .sp=0xcf, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xa6}, {.addr=0xac33, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xac33, .value=0xee, .type=IO_READ},
        {.addr=0xac34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025E) {
    const struct CPU_State initial_cpu = {.pc=0xf2f2, .a=0x89, .x=0xa6, .y=0xc7, .sp=0xcb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xad}, {.addr=0xf2f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf2f3, .a=0x89, .x=0xa6, .y=0xad, .sp=0xcc, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xad}, {.addr=0xf2f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf2f2, .value=0xee, .type=IO_READ},
        {.addr=0xf2f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_025F) {
    const struct CPU_State initial_cpu = {.pc=0x7fd7, .a=0x1b, .x=0xb1, .y=0x21, .sp=0xcf, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xd7}, {.addr=0x7fd7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7fd8, .a=0x1b, .x=0xb1, .y=0xd7, .sp=0xd0, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xd7}, {.addr=0x7fd7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7fd7, .value=0xee, .type=IO_READ},
        {.addr=0x7fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0260) {
    const struct CPU_State initial_cpu = {.pc=0x39f2, .a=0x21, .x=0x2e, .y=0xd1, .sp=0xda, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x85}, {.addr=0x39f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x39f3, .a=0x21, .x=0x2e, .y=0x85, .sp=0xdb, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x85}, {.addr=0x39f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x39f2, .value=0xee, .type=IO_READ},
        {.addr=0x39f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0261) {
    const struct CPU_State initial_cpu = {.pc=0xa786, .a=0x9e, .x=0x86, .y=0xe5, .sp=0xda, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x57}, {.addr=0xa786, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa787, .a=0x9e, .x=0x86, .y=0x57, .sp=0xdb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x57}, {.addr=0xa786, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa786, .value=0xee, .type=IO_READ},
        {.addr=0xa787, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0262) {
    const struct CPU_State initial_cpu = {.pc=0xfc5b, .a=0x20, .x=0x3b, .y=0x86, .sp=0xc9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xe1}, {.addr=0xfc5b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc5c, .a=0x20, .x=0x3b, .y=0xe1, .sp=0xca, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xe1}, {.addr=0xfc5b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc5b, .value=0xee, .type=IO_READ},
        {.addr=0xfc5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0263) {
    const struct CPU_State initial_cpu = {.pc=0x4c4c, .a=0x9a, .x=0x0f, .y=0x34, .sp=0x32, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xe6}, {.addr=0x4c4c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c4d, .a=0x9a, .x=0x0f, .y=0xe6, .sp=0x33, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xe6}, {.addr=0x4c4c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c4c, .value=0xee, .type=IO_READ},
        {.addr=0x4c4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0264) {
    const struct CPU_State initial_cpu = {.pc=0xdcdd, .a=0xd0, .x=0xbd, .y=0xa7, .sp=0x70, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x3d}, {.addr=0xdcdd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdcde, .a=0xd0, .x=0xbd, .y=0x3d, .sp=0x71, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x3d}, {.addr=0xdcdd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdcdd, .value=0xee, .type=IO_READ},
        {.addr=0xdcde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0265) {
    const struct CPU_State initial_cpu = {.pc=0xd39c, .a=0xe2, .x=0x80, .y=0xdd, .sp=0xaf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc5}, {.addr=0xd39c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd39d, .a=0xe2, .x=0x80, .y=0xc5, .sp=0xb0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc5}, {.addr=0xd39c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd39c, .value=0xee, .type=IO_READ},
        {.addr=0xd39d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0266) {
    const struct CPU_State initial_cpu = {.pc=0x8567, .a=0xc4, .x=0xe2, .y=0x1a, .sp=0xe5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xb7}, {.addr=0x8567, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8568, .a=0xc4, .x=0xe2, .y=0xb7, .sp=0xe6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xb7}, {.addr=0x8567, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8567, .value=0xee, .type=IO_READ},
        {.addr=0x8568, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0267) {
    const struct CPU_State initial_cpu = {.pc=0xe217, .a=0x37, .x=0xb7, .y=0xdb, .sp=0xe7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xf8}, {.addr=0xe217, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe218, .a=0x37, .x=0xb7, .y=0xf8, .sp=0xe8, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xf8}, {.addr=0xe217, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe217, .value=0xee, .type=IO_READ},
        {.addr=0xe218, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0529, .a=0xef, .x=0x9d, .y=0x6e, .sp=0x4c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xc5}, {.addr=0x0529, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x052a, .a=0xef, .x=0x9d, .y=0xc5, .sp=0x4d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xc5}, {.addr=0x0529, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0529, .value=0xee, .type=IO_READ},
        {.addr=0x052a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0269) {
    const struct CPU_State initial_cpu = {.pc=0xd9bd, .a=0x42, .x=0x13, .y=0xc4, .sp=0x59, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xf5}, {.addr=0xd9bd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd9be, .a=0x42, .x=0x13, .y=0xf5, .sp=0x5a, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xf5}, {.addr=0xd9bd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd9bd, .value=0xee, .type=IO_READ},
        {.addr=0xd9be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026A) {
    const struct CPU_State initial_cpu = {.pc=0xb4b8, .a=0x67, .x=0x35, .y=0xd6, .sp=0x74, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x39}, {.addr=0xb4b8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb4b9, .a=0x67, .x=0x35, .y=0x39, .sp=0x75, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x39}, {.addr=0xb4b8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb4b8, .value=0xee, .type=IO_READ},
        {.addr=0xb4b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026B) {
    const struct CPU_State initial_cpu = {.pc=0x86e7, .a=0x09, .x=0x63, .y=0x5e, .sp=0x32, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x0f}, {.addr=0x86e7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x86e8, .a=0x09, .x=0x63, .y=0x0f, .sp=0x33, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x0f}, {.addr=0x86e7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x86e7, .value=0xee, .type=IO_READ},
        {.addr=0x86e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026C) {
    const struct CPU_State initial_cpu = {.pc=0xe2d5, .a=0x82, .x=0x6e, .y=0x40, .sp=0x6a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x09}, {.addr=0xe2d5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe2d6, .a=0x82, .x=0x6e, .y=0x09, .sp=0x6b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x09}, {.addr=0xe2d5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe2d5, .value=0xee, .type=IO_READ},
        {.addr=0xe2d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026D) {
    const struct CPU_State initial_cpu = {.pc=0x45cd, .a=0xb3, .x=0x09, .y=0xe7, .sp=0xf9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xb0}, {.addr=0x45cd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x45ce, .a=0xb3, .x=0x09, .y=0xb0, .sp=0xfa, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xb0}, {.addr=0x45cd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x45cd, .value=0xee, .type=IO_READ},
        {.addr=0x45ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026E) {
    const struct CPU_State initial_cpu = {.pc=0x12fa, .a=0x15, .x=0x40, .y=0x61, .sp=0xb5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x3e}, {.addr=0x12fa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x12fb, .a=0x15, .x=0x40, .y=0x3e, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x3e}, {.addr=0x12fa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x12fa, .value=0xee, .type=IO_READ},
        {.addr=0x12fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa72c, .a=0x39, .x=0xf3, .y=0x96, .sp=0xa7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x3e}, {.addr=0xa72c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa72d, .a=0x39, .x=0xf3, .y=0x3e, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x3e}, {.addr=0xa72c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa72c, .value=0xee, .type=IO_READ},
        {.addr=0xa72d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0270) {
    const struct CPU_State initial_cpu = {.pc=0xd861, .a=0xa8, .x=0xb6, .y=0xc7, .sp=0x5e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x3f}, {.addr=0xd861, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd862, .a=0xa8, .x=0xb6, .y=0x3f, .sp=0x5f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x3f}, {.addr=0xd861, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd861, .value=0xee, .type=IO_READ},
        {.addr=0xd862, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0271) {
    const struct CPU_State initial_cpu = {.pc=0x58f4, .a=0x9a, .x=0x18, .y=0xb4, .sp=0xb8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x4c}, {.addr=0x58f4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x58f5, .a=0x9a, .x=0x18, .y=0x4c, .sp=0xb9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x4c}, {.addr=0x58f4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x58f4, .value=0xee, .type=IO_READ},
        {.addr=0x58f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0272) {
    const struct CPU_State initial_cpu = {.pc=0x4d34, .a=0x71, .x=0x4c, .y=0x98, .sp=0x7a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xcc}, {.addr=0x4d34, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4d35, .a=0x71, .x=0x4c, .y=0xcc, .sp=0x7b, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xcc}, {.addr=0x4d34, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4d34, .value=0xee, .type=IO_READ},
        {.addr=0x4d35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0273) {
    const struct CPU_State initial_cpu = {.pc=0x695a, .a=0x6c, .x=0xab, .y=0x3e, .sp=0x92, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xf1}, {.addr=0x695a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x695b, .a=0x6c, .x=0xab, .y=0xf1, .sp=0x93, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xf1}, {.addr=0x695a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x695a, .value=0xee, .type=IO_READ},
        {.addr=0x695b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe228, .a=0xce, .x=0x21, .y=0x55, .sp=0xf4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x65}, {.addr=0xe228, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe229, .a=0xce, .x=0x21, .y=0x65, .sp=0xf5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x65}, {.addr=0xe228, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe228, .value=0xee, .type=IO_READ},
        {.addr=0xe229, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5ae4, .a=0xe4, .x=0x08, .y=0x14, .sp=0x44, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x5e}, {.addr=0x5ae4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5ae5, .a=0xe4, .x=0x08, .y=0x5e, .sp=0x45, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x5e}, {.addr=0x5ae4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ae4, .value=0xee, .type=IO_READ},
        {.addr=0x5ae5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0276) {
    const struct CPU_State initial_cpu = {.pc=0x4e94, .a=0xa4, .x=0xd9, .y=0x2f, .sp=0x8c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xf7}, {.addr=0x4e94, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4e95, .a=0xa4, .x=0xd9, .y=0xf7, .sp=0x8d, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xf7}, {.addr=0x4e94, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4e94, .value=0xee, .type=IO_READ},
        {.addr=0x4e95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0277) {
    const struct CPU_State initial_cpu = {.pc=0x538c, .a=0xfc, .x=0xef, .y=0xe2, .sp=0x1a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x4b}, {.addr=0x538c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x538d, .a=0xfc, .x=0xef, .y=0x4b, .sp=0x1b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x4b}, {.addr=0x538c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x538c, .value=0xee, .type=IO_READ},
        {.addr=0x538d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0278) {
    const struct CPU_State initial_cpu = {.pc=0x50cf, .a=0x2f, .x=0xf3, .y=0x86, .sp=0x3b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x32}, {.addr=0x50cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x50d0, .a=0x2f, .x=0xf3, .y=0x32, .sp=0x3c, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x32}, {.addr=0x50cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x50cf, .value=0xee, .type=IO_READ},
        {.addr=0x50d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0279) {
    const struct CPU_State initial_cpu = {.pc=0x5988, .a=0x15, .x=0xbe, .y=0xf8, .sp=0x06, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xda}, {.addr=0x5988, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5989, .a=0x15, .x=0xbe, .y=0xda, .sp=0x07, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xda}, {.addr=0x5988, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5988, .value=0xee, .type=IO_READ},
        {.addr=0x5989, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6718, .a=0x5b, .x=0xb4, .y=0x70, .sp=0x14, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x99}, {.addr=0x6718, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6719, .a=0x5b, .x=0xb4, .y=0x99, .sp=0x15, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x99}, {.addr=0x6718, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6718, .value=0xee, .type=IO_READ},
        {.addr=0x6719, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0667, .a=0x88, .x=0x2e, .y=0x46, .sp=0x77, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x1d}, {.addr=0x0667, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0668, .a=0x88, .x=0x2e, .y=0x1d, .sp=0x78, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x1d}, {.addr=0x0667, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0667, .value=0xee, .type=IO_READ},
        {.addr=0x0668, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_027C) {
    const struct CPU_State initial_cpu = {.pc=0xf466, .a=0x59, .x=0xb1, .y=0xc8, .sp=0xeb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xf0}, {.addr=0xf466, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf467, .a=0x59, .x=0xb1, .y=0xf0, .sp=0xec, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xf0}, {.addr=0xf466, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf466, .value=0xee, .type=IO_READ},
        {.addr=0xf467, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_027E) {
    const struct CPU_State initial_cpu = {.pc=0x907e, .a=0x7e, .x=0x7c, .y=0x0b, .sp=0xd5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x98}, {.addr=0x907e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x907f, .a=0x7e, .x=0x7c, .y=0x98, .sp=0xd6, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x98}, {.addr=0x907e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x907e, .value=0xee, .type=IO_READ},
        {.addr=0x907f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_027F) {
    const struct CPU_State initial_cpu = {.pc=0xc500, .a=0xe7, .x=0x84, .y=0xe3, .sp=0xfc, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x82}, {.addr=0xc500, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc501, .a=0xe7, .x=0x84, .y=0x82, .sp=0xfd, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x82}, {.addr=0xc500, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc500, .value=0xee, .type=IO_READ},
        {.addr=0xc501, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0280) {
    const struct CPU_State initial_cpu = {.pc=0x22c1, .a=0xa9, .x=0x93, .y=0x68, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x29}, {.addr=0x22c1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x22c2, .a=0xa9, .x=0x93, .y=0x29, .sp=0x13, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x29}, {.addr=0x22c1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x22c1, .value=0xee, .type=IO_READ},
        {.addr=0x22c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0281) {
    const struct CPU_State initial_cpu = {.pc=0x8283, .a=0x99, .x=0xac, .y=0x21, .sp=0x46, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x97}, {.addr=0x8283, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8284, .a=0x99, .x=0xac, .y=0x97, .sp=0x47, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x97}, {.addr=0x8283, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8283, .value=0xee, .type=IO_READ},
        {.addr=0x8284, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0282) {
    const struct CPU_State initial_cpu = {.pc=0x419a, .a=0x63, .x=0x7d, .y=0x52, .sp=0x62, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x15}, {.addr=0x419a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x419b, .a=0x63, .x=0x7d, .y=0x15, .sp=0x63, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x15}, {.addr=0x419a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x419a, .value=0xee, .type=IO_READ},
        {.addr=0x419b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0283) {
    const struct CPU_State initial_cpu = {.pc=0x6deb, .a=0x8b, .x=0x5a, .y=0x3b, .sp=0x1a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xed}, {.addr=0x6deb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6dec, .a=0x8b, .x=0x5a, .y=0xed, .sp=0x1b, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xed}, {.addr=0x6deb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6deb, .value=0xee, .type=IO_READ},
        {.addr=0x6dec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0284) {
    const struct CPU_State initial_cpu = {.pc=0xb29f, .a=0xa2, .x=0xff, .y=0xdb, .sp=0xdd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x1b}, {.addr=0xb29f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb2a0, .a=0xa2, .x=0xff, .y=0x1b, .sp=0xde, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x1b}, {.addr=0xb29f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb29f, .value=0xee, .type=IO_READ},
        {.addr=0xb2a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0285) {
    const struct CPU_State initial_cpu = {.pc=0x70ea, .a=0xf3, .x=0x40, .y=0x73, .sp=0x27, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xf9}, {.addr=0x70ea, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x70eb, .a=0xf3, .x=0x40, .y=0xf9, .sp=0x28, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xf9}, {.addr=0x70ea, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x70ea, .value=0xee, .type=IO_READ},
        {.addr=0x70eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0286) {
    const struct CPU_State initial_cpu = {.pc=0x3976, .a=0x61, .x=0xa4, .y=0xf3, .sp=0xf6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xd8}, {.addr=0x3976, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3977, .a=0x61, .x=0xa4, .y=0xd8, .sp=0xf7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xd8}, {.addr=0x3976, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3976, .value=0xee, .type=IO_READ},
        {.addr=0x3977, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0287) {
    const struct CPU_State initial_cpu = {.pc=0xed24, .a=0x02, .x=0x3f, .y=0xc1, .sp=0x94, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xe4}, {.addr=0xed24, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xed25, .a=0x02, .x=0x3f, .y=0xe4, .sp=0x95, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xe4}, {.addr=0xed24, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xed24, .value=0xee, .type=IO_READ},
        {.addr=0xed25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0288) {
    const struct CPU_State initial_cpu = {.pc=0x2bcc, .a=0x47, .x=0x09, .y=0x99, .sp=0x6e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xe7}, {.addr=0x2bcc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2bcd, .a=0x47, .x=0x09, .y=0xe7, .sp=0x6f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xe7}, {.addr=0x2bcc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2bcc, .value=0xee, .type=IO_READ},
        {.addr=0x2bcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0289) {
    const struct CPU_State initial_cpu = {.pc=0xabdf, .a=0x66, .x=0x4c, .y=0xbe, .sp=0x61, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x46}, {.addr=0xabdf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xabe0, .a=0x66, .x=0x4c, .y=0x46, .sp=0x62, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x46}, {.addr=0xabdf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xabdf, .value=0xee, .type=IO_READ},
        {.addr=0xabe0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028A) {
    const struct CPU_State initial_cpu = {.pc=0x8e37, .a=0x6d, .x=0x4f, .y=0x88, .sp=0x7e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xee}, {.addr=0x8e37, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8e38, .a=0x6d, .x=0x4f, .y=0xee, .sp=0x7f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xee}, {.addr=0x8e37, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8e37, .value=0xee, .type=IO_READ},
        {.addr=0x8e38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028B) {
    const struct CPU_State initial_cpu = {.pc=0xc81e, .a=0xce, .x=0xb2, .y=0x17, .sp=0xb4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x23}, {.addr=0xc81e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc81f, .a=0xce, .x=0xb2, .y=0x23, .sp=0xb5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x23}, {.addr=0xc81e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc81e, .value=0xee, .type=IO_READ},
        {.addr=0xc81f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028C) {
    const struct CPU_State initial_cpu = {.pc=0xefbb, .a=0x5d, .x=0x33, .y=0x3d, .sp=0xda, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x1e}, {.addr=0xefbb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xefbc, .a=0x5d, .x=0x33, .y=0x1e, .sp=0xdb, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x1e}, {.addr=0xefbb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xefbb, .value=0xee, .type=IO_READ},
        {.addr=0xefbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028D) {
    const struct CPU_State initial_cpu = {.pc=0xde96, .a=0x9b, .x=0x72, .y=0xe3, .sp=0x0f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xb6}, {.addr=0xde96, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xde97, .a=0x9b, .x=0x72, .y=0xb6, .sp=0x10, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xb6}, {.addr=0xde96, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xde96, .value=0xee, .type=IO_READ},
        {.addr=0xde97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028E) {
    const struct CPU_State initial_cpu = {.pc=0x6a06, .a=0x99, .x=0x8b, .y=0x40, .sp=0xc2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x85}, {.addr=0x6a06, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6a07, .a=0x99, .x=0x8b, .y=0x85, .sp=0xc3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x85}, {.addr=0x6a06, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6a06, .value=0xee, .type=IO_READ},
        {.addr=0x6a07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_028F) {
    const struct CPU_State initial_cpu = {.pc=0x6567, .a=0x23, .x=0x49, .y=0xee, .sp=0x30, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x6e}, {.addr=0x6567, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6568, .a=0x23, .x=0x49, .y=0x6e, .sp=0x31, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x6e}, {.addr=0x6567, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6567, .value=0xee, .type=IO_READ},
        {.addr=0x6568, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0290) {
    const struct CPU_State initial_cpu = {.pc=0x5a41, .a=0x68, .x=0xaa, .y=0x1d, .sp=0x22, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xea}, {.addr=0x5a41, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5a42, .a=0x68, .x=0xaa, .y=0xea, .sp=0x23, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xea}, {.addr=0x5a41, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5a41, .value=0xee, .type=IO_READ},
        {.addr=0x5a42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0291) {
    const struct CPU_State initial_cpu = {.pc=0xed64, .a=0x5d, .x=0x1e, .y=0x20, .sp=0x9c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x0d}, {.addr=0xed64, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xed65, .a=0x5d, .x=0x1e, .y=0x0d, .sp=0x9d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x0d}, {.addr=0xed64, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xed64, .value=0xee, .type=IO_READ},
        {.addr=0xed65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0292) {
    const struct CPU_State initial_cpu = {.pc=0x1c99, .a=0xf6, .x=0xd3, .y=0x9f, .sp=0x63, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x37}, {.addr=0x1c99, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1c9a, .a=0xf6, .x=0xd3, .y=0x37, .sp=0x64, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x37}, {.addr=0x1c99, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1c99, .value=0xee, .type=IO_READ},
        {.addr=0x1c9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0293) {
    const struct CPU_State initial_cpu = {.pc=0xb06a, .a=0x35, .x=0x8f, .y=0x58, .sp=0x35, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x0f}, {.addr=0xb06a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb06b, .a=0x35, .x=0x8f, .y=0x0f, .sp=0x36, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x0f}, {.addr=0xb06a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb06a, .value=0xee, .type=IO_READ},
        {.addr=0xb06b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0294) {
    const struct CPU_State initial_cpu = {.pc=0x07df, .a=0x39, .x=0xb9, .y=0xd5, .sp=0xfc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x5c}, {.addr=0x07df, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x07e0, .a=0x39, .x=0xb9, .y=0x5c, .sp=0xfd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x5c}, {.addr=0x07df, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x07df, .value=0xee, .type=IO_READ},
        {.addr=0x07e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0295) {
    const struct CPU_State initial_cpu = {.pc=0xaad3, .a=0xf4, .x=0x11, .y=0x9d, .sp=0x73, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xb8}, {.addr=0xaad3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaad4, .a=0xf4, .x=0x11, .y=0xb8, .sp=0x74, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xb8}, {.addr=0xaad3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaad3, .value=0xee, .type=IO_READ},
        {.addr=0xaad4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0296) {
    const struct CPU_State initial_cpu = {.pc=0x3407, .a=0x1d, .x=0xc1, .y=0x7d, .sp=0xd0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x1f}, {.addr=0x3407, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3408, .a=0x1d, .x=0xc1, .y=0x1f, .sp=0xd1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x1f}, {.addr=0x3407, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3407, .value=0xee, .type=IO_READ},
        {.addr=0x3408, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0297) {
    const struct CPU_State initial_cpu = {.pc=0x0c3a, .a=0x4e, .x=0xf1, .y=0xe1, .sp=0x42, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xc3}, {.addr=0x0c3a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0c3b, .a=0x4e, .x=0xf1, .y=0xc3, .sp=0x43, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xc3}, {.addr=0x0c3a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0c3a, .value=0xee, .type=IO_READ},
        {.addr=0x0c3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0298) {
    const struct CPU_State initial_cpu = {.pc=0xe7e1, .a=0x1c, .x=0x5d, .y=0x01, .sp=0x8b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x96}, {.addr=0xe7e1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe7e2, .a=0x1c, .x=0x5d, .y=0x96, .sp=0x8c, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x96}, {.addr=0xe7e1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe7e1, .value=0xee, .type=IO_READ},
        {.addr=0xe7e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0299) {
    const struct CPU_State initial_cpu = {.pc=0x3578, .a=0x73, .x=0xaa, .y=0xbb, .sp=0x89, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x06}, {.addr=0x3578, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3579, .a=0x73, .x=0xaa, .y=0x06, .sp=0x8a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x06}, {.addr=0x3578, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3578, .value=0xee, .type=IO_READ},
        {.addr=0x3579, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029A) {
    const struct CPU_State initial_cpu = {.pc=0xca4e, .a=0x6b, .x=0xd8, .y=0xa0, .sp=0x2f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xb8}, {.addr=0xca4e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xca4f, .a=0x6b, .x=0xd8, .y=0xb8, .sp=0x30, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xb8}, {.addr=0xca4e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xca4e, .value=0xee, .type=IO_READ},
        {.addr=0xca4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029B) {
    const struct CPU_State initial_cpu = {.pc=0x01d6, .a=0x26, .x=0x1f, .y=0xde, .sp=0xe4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xee}, {.addr=0x01e5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x01d7, .a=0x26, .x=0x1f, .y=0xfd, .sp=0xe5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xee}, {.addr=0x01e5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x01d6, .value=0xee, .type=IO_READ},
        {.addr=0x01d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7b42, .a=0x22, .x=0xb1, .y=0x69, .sp=0x6c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x1d}, {.addr=0x7b42, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7b43, .a=0x22, .x=0xb1, .y=0x1d, .sp=0x6d, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x1d}, {.addr=0x7b42, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7b42, .value=0xee, .type=IO_READ},
        {.addr=0x7b43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029D) {
    const struct CPU_State initial_cpu = {.pc=0xa321, .a=0x19, .x=0x77, .y=0x48, .sp=0x18, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xe6}, {.addr=0xa321, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa322, .a=0x19, .x=0x77, .y=0xe6, .sp=0x19, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xe6}, {.addr=0xa321, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa321, .value=0xee, .type=IO_READ},
        {.addr=0xa322, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029E) {
    const struct CPU_State initial_cpu = {.pc=0xc414, .a=0xbd, .x=0x28, .y=0x9c, .sp=0xed, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x3f}, {.addr=0xc414, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc415, .a=0xbd, .x=0x28, .y=0x3f, .sp=0xee, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x3f}, {.addr=0xc414, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc414, .value=0xee, .type=IO_READ},
        {.addr=0xc415, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7f11, .a=0xdd, .x=0x3e, .y=0xdf, .sp=0x86, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xfc}, {.addr=0x7f11, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7f12, .a=0xdd, .x=0x3e, .y=0xfc, .sp=0x87, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xfc}, {.addr=0x7f11, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7f11, .value=0xee, .type=IO_READ},
        {.addr=0x7f12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x40fd, .a=0xaa, .x=0xf6, .y=0xc6, .sp=0x93, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x70}, {.addr=0x40fd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x40fe, .a=0xaa, .x=0xf6, .y=0x70, .sp=0x94, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x70}, {.addr=0x40fd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x40fd, .value=0xee, .type=IO_READ},
        {.addr=0x40fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x18c7, .a=0x20, .x=0xb3, .y=0x34, .sp=0x34, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x17}, {.addr=0x18c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x18c8, .a=0x20, .x=0xb3, .y=0x17, .sp=0x35, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x17}, {.addr=0x18c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x18c7, .value=0xee, .type=IO_READ},
        {.addr=0x18c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x07e5, .a=0x00, .x=0x9f, .y=0x24, .sp=0xf3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x1d}, {.addr=0x07e5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x07e6, .a=0x00, .x=0x9f, .y=0x1d, .sp=0xf4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x1d}, {.addr=0x07e5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x07e5, .value=0xee, .type=IO_READ},
        {.addr=0x07e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xe50d, .a=0x19, .x=0x77, .y=0xaf, .sp=0x43, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x01}, {.addr=0xe50d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe50e, .a=0x19, .x=0x77, .y=0x01, .sp=0x44, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x01}, {.addr=0xe50d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe50d, .value=0xee, .type=IO_READ},
        {.addr=0xe50e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8c0d, .a=0x90, .x=0xec, .y=0x85, .sp=0x2e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x0a}, {.addr=0x8c0d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8c0e, .a=0x90, .x=0xec, .y=0x0a, .sp=0x2f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x0a}, {.addr=0x8c0d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8c0d, .value=0xee, .type=IO_READ},
        {.addr=0x8c0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x649a, .a=0x70, .x=0x8f, .y=0xe0, .sp=0x8a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xa5}, {.addr=0x649a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x649b, .a=0x70, .x=0x8f, .y=0xa5, .sp=0x8b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xa5}, {.addr=0x649a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x649a, .value=0xee, .type=IO_READ},
        {.addr=0x649b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x53cc, .a=0xbc, .x=0xf0, .y=0xbe, .sp=0xd6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x8c}, {.addr=0x53cc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53cd, .a=0xbc, .x=0xf0, .y=0x8c, .sp=0xd7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x8c}, {.addr=0x53cc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53cc, .value=0xee, .type=IO_READ},
        {.addr=0x53cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x434d, .a=0x49, .x=0xcd, .y=0x66, .sp=0x71, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x52}, {.addr=0x434d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x434e, .a=0x49, .x=0xcd, .y=0x52, .sp=0x72, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x52}, {.addr=0x434d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x434d, .value=0xee, .type=IO_READ},
        {.addr=0x434e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xd18f, .a=0xd1, .x=0x39, .y=0x0d, .sp=0xae, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x77}, {.addr=0xd18f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd190, .a=0xd1, .x=0x39, .y=0x77, .sp=0xaf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x77}, {.addr=0xd18f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd18f, .value=0xee, .type=IO_READ},
        {.addr=0xd190, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x41e4, .a=0x67, .x=0x4e, .y=0xbf, .sp=0x2c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x2d}, {.addr=0x41e4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x41e5, .a=0x67, .x=0x4e, .y=0x2d, .sp=0x2d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x2d}, {.addr=0x41e4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x41e4, .value=0xee, .type=IO_READ},
        {.addr=0x41e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6c94, .a=0x11, .x=0x08, .y=0x35, .sp=0xfc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x1c}, {.addr=0x6c94, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6c95, .a=0x11, .x=0x08, .y=0x1c, .sp=0xfd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x1c}, {.addr=0x6c94, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6c94, .value=0xee, .type=IO_READ},
        {.addr=0x6c95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x569e, .a=0x65, .x=0x0c, .y=0xd0, .sp=0xff, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x0f}, {.addr=0x569e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x569f, .a=0x65, .x=0x0c, .y=0x0f, .sp=0x00, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x0f}, {.addr=0x569e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x569e, .value=0xee, .type=IO_READ},
        {.addr=0x569f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x9c97, .a=0x0e, .x=0x89, .y=0x85, .sp=0x0c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x60}, {.addr=0x9c97, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9c98, .a=0x0e, .x=0x89, .y=0x60, .sp=0x0d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x60}, {.addr=0x9c97, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9c97, .value=0xee, .type=IO_READ},
        {.addr=0x9c98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x48c5, .a=0x6c, .x=0x73, .y=0xd8, .sp=0xda, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x1d}, {.addr=0x48c5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x48c6, .a=0x6c, .x=0x73, .y=0x1d, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x1d}, {.addr=0x48c5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x48c5, .value=0xee, .type=IO_READ},
        {.addr=0x48c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x7903, .a=0x53, .x=0x79, .y=0x5c, .sp=0x48, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x34}, {.addr=0x7903, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7904, .a=0x53, .x=0x79, .y=0x34, .sp=0x49, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x34}, {.addr=0x7903, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7903, .value=0xee, .type=IO_READ},
        {.addr=0x7904, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x8c46, .a=0x57, .x=0x6e, .y=0x8e, .sp=0x3d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xcf}, {.addr=0x8c46, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8c47, .a=0x57, .x=0x6e, .y=0xcf, .sp=0x3e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xcf}, {.addr=0x8c46, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8c46, .value=0xee, .type=IO_READ},
        {.addr=0x8c47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0x8d, .x=0xd6, .y=0x3c, .sp=0x29, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x39}, {.addr=0x928d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0x8d, .x=0xd6, .y=0x39, .sp=0x2a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x39}, {.addr=0x928d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0xee, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xc238, .a=0x97, .x=0xbf, .y=0x24, .sp=0x11, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x87}, {.addr=0xc238, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc239, .a=0x97, .x=0xbf, .y=0x87, .sp=0x12, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x87}, {.addr=0xc238, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc238, .value=0xee, .type=IO_READ},
        {.addr=0xc239, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x0868, .a=0xce, .x=0x27, .y=0x8d, .sp=0x82, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xb7}, {.addr=0x0868, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0869, .a=0xce, .x=0x27, .y=0xb7, .sp=0x83, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xb7}, {.addr=0x0868, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0868, .value=0xee, .type=IO_READ},
        {.addr=0x0869, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x8bad, .a=0xe3, .x=0x56, .y=0x55, .sp=0xf6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x1a}, {.addr=0x8bad, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8bae, .a=0xe3, .x=0x56, .y=0x1a, .sp=0xf7, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x1a}, {.addr=0x8bad, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8bad, .value=0xee, .type=IO_READ},
        {.addr=0x8bae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x56c3, .a=0x76, .x=0x71, .y=0x58, .sp=0x6e, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x4d}, {.addr=0x56c3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x56c4, .a=0x76, .x=0x71, .y=0x4d, .sp=0x6f, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x4d}, {.addr=0x56c3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x56c3, .value=0xee, .type=IO_READ},
        {.addr=0x56c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xb847, .a=0x42, .x=0xf8, .y=0x72, .sp=0x0f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x96}, {.addr=0xb847, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb848, .a=0x42, .x=0xf8, .y=0x96, .sp=0x10, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x96}, {.addr=0xb847, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb847, .value=0xee, .type=IO_READ},
        {.addr=0xb848, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x7be5, .a=0x26, .x=0x04, .y=0x14, .sp=0xcd, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x73}, {.addr=0x7be5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7be6, .a=0x26, .x=0x04, .y=0x73, .sp=0xce, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x73}, {.addr=0x7be5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7be5, .value=0xee, .type=IO_READ},
        {.addr=0x7be6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x6446, .a=0xb3, .x=0xed, .y=0xad, .sp=0x52, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xd2}, {.addr=0x6446, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6447, .a=0xb3, .x=0xed, .y=0xd2, .sp=0x53, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xd2}, {.addr=0x6446, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6446, .value=0xee, .type=IO_READ},
        {.addr=0x6447, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xc98f, .a=0xd4, .x=0x96, .y=0x08, .sp=0x9b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xe1}, {.addr=0xc98f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc990, .a=0xd4, .x=0x96, .y=0xe1, .sp=0x9c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xe1}, {.addr=0xc98f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc98f, .value=0xee, .type=IO_READ},
        {.addr=0xc990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xd0de, .a=0x51, .x=0x58, .y=0x92, .sp=0xf7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xca}, {.addr=0xd0de, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd0df, .a=0x51, .x=0x58, .y=0xca, .sp=0xf8, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xca}, {.addr=0xd0de, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd0de, .value=0xee, .type=IO_READ},
        {.addr=0xd0df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x3582, .a=0xb6, .x=0x5b, .y=0x19, .sp=0xcc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x6f}, {.addr=0x3582, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3583, .a=0xb6, .x=0x5b, .y=0x6f, .sp=0xcd, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x6f}, {.addr=0x3582, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3582, .value=0xee, .type=IO_READ},
        {.addr=0x3583, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc472, .a=0x77, .x=0x43, .y=0x73, .sp=0x30, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x27}, {.addr=0xc472, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc473, .a=0x77, .x=0x43, .y=0x27, .sp=0x31, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x27}, {.addr=0xc472, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc472, .value=0xee, .type=IO_READ},
        {.addr=0xc473, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x83e9, .a=0x74, .x=0x13, .y=0x49, .sp=0x78, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x67}, {.addr=0x83e9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x83ea, .a=0x74, .x=0x13, .y=0x67, .sp=0x79, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x67}, {.addr=0x83e9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x83e9, .value=0xee, .type=IO_READ},
        {.addr=0x83ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x2b40, .a=0x7b, .x=0xf8, .y=0x8e, .sp=0x03, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x71}, {.addr=0x2b40, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2b41, .a=0x7b, .x=0xf8, .y=0x71, .sp=0x04, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x71}, {.addr=0x2b40, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2b40, .value=0xee, .type=IO_READ},
        {.addr=0x2b41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xbfdd, .a=0x81, .x=0x1c, .y=0xbf, .sp=0xb9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x99}, {.addr=0xbfdd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbfde, .a=0x81, .x=0x1c, .y=0x99, .sp=0xba, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x99}, {.addr=0xbfdd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbfdd, .value=0xee, .type=IO_READ},
        {.addr=0xbfde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x8528, .a=0xcc, .x=0x6a, .y=0xf7, .sp=0xfa, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x8b}, {.addr=0x8528, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8529, .a=0xcc, .x=0x6a, .y=0x8b, .sp=0xfb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x8b}, {.addr=0x8528, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8528, .value=0xee, .type=IO_READ},
        {.addr=0x8529, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xa850, .a=0xe0, .x=0x12, .y=0xde, .sp=0x89, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x68}, {.addr=0xa850, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa851, .a=0xe0, .x=0x12, .y=0x68, .sp=0x8a, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x68}, {.addr=0xa850, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa850, .value=0xee, .type=IO_READ},
        {.addr=0xa851, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x23d3, .a=0x15, .x=0xe7, .y=0xbc, .sp=0x83, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x6e}, {.addr=0x23d3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x23d4, .a=0x15, .x=0xe7, .y=0x6e, .sp=0x84, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x6e}, {.addr=0x23d3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x23d3, .value=0xee, .type=IO_READ},
        {.addr=0x23d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x3f10, .a=0x6b, .x=0xa0, .y=0x11, .sp=0xe2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x37}, {.addr=0x3f10, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3f11, .a=0x6b, .x=0xa0, .y=0x37, .sp=0xe3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x37}, {.addr=0x3f10, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3f10, .value=0xee, .type=IO_READ},
        {.addr=0x3f11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xeeba, .a=0x78, .x=0xac, .y=0x5f, .sp=0x02, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x17}, {.addr=0xeeba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xeebb, .a=0x78, .x=0xac, .y=0x17, .sp=0x03, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x17}, {.addr=0xeeba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xeeba, .value=0xee, .type=IO_READ},
        {.addr=0xeebb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x3dc4, .a=0x6d, .x=0x6d, .y=0x23, .sp=0x41, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xad}, {.addr=0x3dc4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3dc5, .a=0x6d, .x=0x6d, .y=0xad, .sp=0x42, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xad}, {.addr=0x3dc4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3dc4, .value=0xee, .type=IO_READ},
        {.addr=0x3dc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2d78, .a=0x53, .x=0x83, .y=0xb5, .sp=0xa9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xc8}, {.addr=0x2d78, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2d79, .a=0x53, .x=0x83, .y=0xc8, .sp=0xaa, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xc8}, {.addr=0x2d78, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2d78, .value=0xee, .type=IO_READ},
        {.addr=0x2d79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x699a, .a=0x98, .x=0x72, .y=0xd9, .sp=0x69, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xd0}, {.addr=0x699a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x699b, .a=0x98, .x=0x72, .y=0xd0, .sp=0x6a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xd0}, {.addr=0x699a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x699a, .value=0xee, .type=IO_READ},
        {.addr=0x699b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xe0b8, .a=0xe5, .x=0xe0, .y=0xd7, .sp=0x2d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xdb}, {.addr=0xe0b8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe0b9, .a=0xe5, .x=0xe0, .y=0xdb, .sp=0x2e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xdb}, {.addr=0xe0b8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe0b8, .value=0xee, .type=IO_READ},
        {.addr=0xe0b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xc11a, .a=0x6d, .x=0xb2, .y=0x4b, .sp=0x5c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x60}, {.addr=0xc11a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc11b, .a=0x6d, .x=0xb2, .y=0x60, .sp=0x5d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x60}, {.addr=0xc11a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc11a, .value=0xee, .type=IO_READ},
        {.addr=0xc11b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x639e, .a=0xff, .x=0xea, .y=0x3c, .sp=0x8f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x34}, {.addr=0x639e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x639f, .a=0xff, .x=0xea, .y=0x34, .sp=0x90, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x34}, {.addr=0x639e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x639e, .value=0xee, .type=IO_READ},
        {.addr=0x639f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xc46d, .a=0xe4, .x=0xf1, .y=0x6e, .sp=0x52, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x49}, {.addr=0xc46d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc46e, .a=0xe4, .x=0xf1, .y=0x49, .sp=0x53, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x49}, {.addr=0xc46d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc46d, .value=0xee, .type=IO_READ},
        {.addr=0xc46e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4e25, .a=0xa6, .x=0x09, .y=0x5c, .sp=0x45, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xdc}, {.addr=0x4e25, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4e26, .a=0xa6, .x=0x09, .y=0xdc, .sp=0x46, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xdc}, {.addr=0x4e25, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4e25, .value=0xee, .type=IO_READ},
        {.addr=0x4e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x6ce2, .a=0x70, .x=0x52, .y=0xc6, .sp=0x3d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x46}, {.addr=0x6ce2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6ce3, .a=0x70, .x=0x52, .y=0x46, .sp=0x3e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x46}, {.addr=0x6ce2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6ce2, .value=0xee, .type=IO_READ},
        {.addr=0x6ce3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2100, .a=0x59, .x=0xd4, .y=0xed, .sp=0xe6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x7b}, {.addr=0x2100, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2101, .a=0x59, .x=0xd4, .y=0x7b, .sp=0xe7, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x7b}, {.addr=0x2100, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2100, .value=0xee, .type=IO_READ},
        {.addr=0x2101, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x1fc2, .a=0xa7, .x=0xb7, .y=0x34, .sp=0xd3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xa0}, {.addr=0x1fc2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1fc3, .a=0xa7, .x=0xb7, .y=0xa0, .sp=0xd4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xa0}, {.addr=0x1fc2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1fc2, .value=0xee, .type=IO_READ},
        {.addr=0x1fc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x9318, .a=0x9f, .x=0x34, .y=0x47, .sp=0x58, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x02}, {.addr=0x9318, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9319, .a=0x9f, .x=0x34, .y=0x02, .sp=0x59, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x02}, {.addr=0x9318, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9318, .value=0xee, .type=IO_READ},
        {.addr=0x9319, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x7c5e, .a=0x4b, .x=0xc9, .y=0x16, .sp=0x31, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xcc}, {.addr=0x7c5e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7c5f, .a=0x4b, .x=0xc9, .y=0xcc, .sp=0x32, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xcc}, {.addr=0x7c5e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7c5e, .value=0xee, .type=IO_READ},
        {.addr=0x7c5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x17d3, .a=0x14, .x=0x5e, .y=0xa0, .sp=0x53, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xa9}, {.addr=0x17d3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x17d4, .a=0x14, .x=0x5e, .y=0xa9, .sp=0x54, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xa9}, {.addr=0x17d3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x17d3, .value=0xee, .type=IO_READ},
        {.addr=0x17d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4142, .a=0xd5, .x=0xf9, .y=0x67, .sp=0x49, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x5b}, {.addr=0x4142, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4143, .a=0xd5, .x=0xf9, .y=0x5b, .sp=0x4a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x5b}, {.addr=0x4142, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4142, .value=0xee, .type=IO_READ},
        {.addr=0x4143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0x0a, .x=0xd1, .y=0x7d, .sp=0xba, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x70}, {.addr=0x775f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7760, .a=0x0a, .x=0xd1, .y=0x70, .sp=0xbb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x70}, {.addr=0x775f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0xee, .type=IO_READ},
        {.addr=0x7760, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x2e36, .a=0xcd, .x=0x1b, .y=0x06, .sp=0xa7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x85}, {.addr=0x2e36, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2e37, .a=0xcd, .x=0x1b, .y=0x85, .sp=0xa8, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x85}, {.addr=0x2e36, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2e36, .value=0xee, .type=IO_READ},
        {.addr=0x2e37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xedaa, .a=0x0e, .x=0xd8, .y=0x75, .sp=0x26, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x3e}, {.addr=0xedaa, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xedab, .a=0x0e, .x=0xd8, .y=0x3e, .sp=0x27, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x3e}, {.addr=0xedaa, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xedaa, .value=0xee, .type=IO_READ},
        {.addr=0xedab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xecd2, .a=0xe1, .x=0x07, .y=0x8b, .sp=0x14, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xff}, {.addr=0xecd2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xecd3, .a=0xe1, .x=0x07, .y=0xff, .sp=0x15, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xff}, {.addr=0xecd2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xecd2, .value=0xee, .type=IO_READ},
        {.addr=0xecd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x9ebf, .a=0xb3, .x=0x5d, .y=0x08, .sp=0x81, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x0d}, {.addr=0x9ebf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9ec0, .a=0xb3, .x=0x5d, .y=0x0d, .sp=0x82, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x0d}, {.addr=0x9ebf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ebf, .value=0xee, .type=IO_READ},
        {.addr=0x9ec0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x33ce, .a=0x03, .x=0x1a, .y=0x8a, .sp=0xb7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x01}, {.addr=0x33ce, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x33cf, .a=0x03, .x=0x1a, .y=0x01, .sp=0xb8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x01}, {.addr=0x33ce, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x33ce, .value=0xee, .type=IO_READ},
        {.addr=0x33cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xca04, .a=0xea, .x=0x3f, .y=0x61, .sp=0x4a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xf3}, {.addr=0xca04, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xca05, .a=0xea, .x=0x3f, .y=0xf3, .sp=0x4b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xf3}, {.addr=0xca04, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xca04, .value=0xee, .type=IO_READ},
        {.addr=0xca05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x9308, .a=0xce, .x=0xb3, .y=0x02, .sp=0x2a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x9308, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9309, .a=0xce, .x=0xb3, .y=0x00, .sp=0x2b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x9308, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9308, .value=0xee, .type=IO_READ},
        {.addr=0x9309, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x37bd, .a=0xd4, .x=0x46, .y=0x3c, .sp=0x8d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x5e}, {.addr=0x37bd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x37be, .a=0xd4, .x=0x46, .y=0x5e, .sp=0x8e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x5e}, {.addr=0x37bd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x37bd, .value=0xee, .type=IO_READ},
        {.addr=0x37be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x4b5e, .a=0x5f, .x=0x8c, .y=0xc7, .sp=0x7c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xd1}, {.addr=0x4b5e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4b5f, .a=0x5f, .x=0x8c, .y=0xd1, .sp=0x7d, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xd1}, {.addr=0x4b5e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4b5e, .value=0xee, .type=IO_READ},
        {.addr=0x4b5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x0f88, .a=0x89, .x=0xb4, .y=0xbf, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x26}, {.addr=0x0f88, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f89, .a=0x89, .x=0xb4, .y=0x26, .sp=0xa2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x26}, {.addr=0x0f88, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f88, .value=0xee, .type=IO_READ},
        {.addr=0x0f89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xad86, .a=0x2d, .x=0xa2, .y=0x03, .sp=0x1e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xc0}, {.addr=0xad86, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xad87, .a=0x2d, .x=0xa2, .y=0xc0, .sp=0x1f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xc0}, {.addr=0xad86, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xad86, .value=0xee, .type=IO_READ},
        {.addr=0xad87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe412, .a=0xa3, .x=0xda, .y=0xa2, .sp=0xe6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xa3}, {.addr=0xe412, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe413, .a=0xa3, .x=0xda, .y=0xa3, .sp=0xe7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xa3}, {.addr=0xe412, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe412, .value=0xee, .type=IO_READ},
        {.addr=0xe413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xfe68, .a=0x67, .x=0x30, .y=0x62, .sp=0x31, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x03}, {.addr=0xfe68, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfe69, .a=0x67, .x=0x30, .y=0x03, .sp=0x32, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x03}, {.addr=0xfe68, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfe68, .value=0xee, .type=IO_READ},
        {.addr=0xfe69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x868c, .a=0xb6, .x=0x68, .y=0x61, .sp=0xc1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x49}, {.addr=0x868c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x868d, .a=0xb6, .x=0x68, .y=0x49, .sp=0xc2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x49}, {.addr=0x868c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x868c, .value=0xee, .type=IO_READ},
        {.addr=0x868d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xf229, .a=0x5f, .x=0x21, .y=0xc0, .sp=0x35, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x0e}, {.addr=0xf229, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf22a, .a=0x5f, .x=0x21, .y=0x0e, .sp=0x36, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x0e}, {.addr=0xf229, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf229, .value=0xee, .type=IO_READ},
        {.addr=0xf22a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x3c7d, .a=0xbc, .x=0x77, .y=0xb8, .sp=0xa3, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xfb}, {.addr=0x3c7d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3c7e, .a=0xbc, .x=0x77, .y=0xfb, .sp=0xa4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xfb}, {.addr=0x3c7d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3c7d, .value=0xee, .type=IO_READ},
        {.addr=0x3c7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xff97, .a=0x7f, .x=0xd6, .y=0xb7, .sp=0xf5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x99}, {.addr=0xff97, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xff98, .a=0x7f, .x=0xd6, .y=0x99, .sp=0xf6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x99}, {.addr=0xff97, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xff97, .value=0xee, .type=IO_READ},
        {.addr=0xff98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xb450, .a=0x65, .x=0x77, .y=0xab, .sp=0xac, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x52}, {.addr=0xb450, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb451, .a=0x65, .x=0x77, .y=0x52, .sp=0xad, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x52}, {.addr=0xb450, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb450, .value=0xee, .type=IO_READ},
        {.addr=0xb451, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x539b, .a=0x44, .x=0x9a, .y=0x00, .sp=0x28, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x93}, {.addr=0x539b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x539c, .a=0x44, .x=0x9a, .y=0x93, .sp=0x29, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x93}, {.addr=0x539b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x539b, .value=0xee, .type=IO_READ},
        {.addr=0x539c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x3782, .a=0xec, .x=0x9c, .y=0x5c, .sp=0x02, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x05}, {.addr=0x3782, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3783, .a=0xec, .x=0x9c, .y=0x05, .sp=0x03, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x05}, {.addr=0x3782, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3782, .value=0xee, .type=IO_READ},
        {.addr=0x3783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xd854, .a=0x9e, .x=0x0a, .y=0xba, .sp=0x79, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x97}, {.addr=0xd854, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd855, .a=0x9e, .x=0x0a, .y=0x97, .sp=0x7a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x97}, {.addr=0xd854, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd854, .value=0xee, .type=IO_READ},
        {.addr=0xd855, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x0442, .a=0x47, .x=0x4a, .y=0xca, .sp=0x6c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xbd}, {.addr=0x0442, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0443, .a=0x47, .x=0x4a, .y=0xbd, .sp=0x6d, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xbd}, {.addr=0x0442, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0442, .value=0xee, .type=IO_READ},
        {.addr=0x0443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5ef8, .a=0x7b, .x=0xd1, .y=0x2f, .sp=0xd8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x21}, {.addr=0x5ef8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5ef9, .a=0x7b, .x=0xd1, .y=0x21, .sp=0xd9, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x21}, {.addr=0x5ef8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5ef8, .value=0xee, .type=IO_READ},
        {.addr=0x5ef9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xa1a9, .a=0x8a, .x=0x25, .y=0x52, .sp=0xf5, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xa8}, {.addr=0xa1a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa1aa, .a=0x8a, .x=0x25, .y=0xa8, .sp=0xf6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xa8}, {.addr=0xa1a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa1a9, .value=0xee, .type=IO_READ},
        {.addr=0xa1aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x9480, .a=0xdf, .x=0x19, .y=0x06, .sp=0xcc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xba}, {.addr=0x9480, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9481, .a=0xdf, .x=0x19, .y=0xba, .sp=0xcd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xba}, {.addr=0x9480, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9480, .value=0xee, .type=IO_READ},
        {.addr=0x9481, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x697e, .a=0x6f, .x=0x52, .y=0x13, .sp=0xeb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x22}, {.addr=0x697e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x697f, .a=0x6f, .x=0x52, .y=0x22, .sp=0xec, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x22}, {.addr=0x697e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x697e, .value=0xee, .type=IO_READ},
        {.addr=0x697f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x2968, .a=0xa3, .x=0x8b, .y=0x31, .sp=0xc1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xd9}, {.addr=0x2968, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2969, .a=0xa3, .x=0x8b, .y=0xd9, .sp=0xc2, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xd9}, {.addr=0x2968, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2968, .value=0xee, .type=IO_READ},
        {.addr=0x2969, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x00bd, .a=0x83, .x=0xe0, .y=0xa6, .sp=0xb7, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xee}, {.addr=0x01b8, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x00be, .a=0x83, .x=0xe0, .y=0x6e, .sp=0xb8, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xee}, {.addr=0x01b8, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x00bd, .value=0xee, .type=IO_READ},
        {.addr=0x00be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x20a6, .a=0x80, .x=0x6d, .y=0x9b, .sp=0xfe, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x4d}, {.addr=0x20a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x20a7, .a=0x80, .x=0x6d, .y=0x4d, .sp=0xff, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x4d}, {.addr=0x20a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x20a6, .value=0xee, .type=IO_READ},
        {.addr=0x20a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xca77, .a=0x3b, .x=0x09, .y=0x83, .sp=0x47, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x4a}, {.addr=0xca77, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xca78, .a=0x3b, .x=0x09, .y=0x4a, .sp=0x48, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x4a}, {.addr=0xca77, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xca77, .value=0xee, .type=IO_READ},
        {.addr=0xca78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x59d0, .a=0xf5, .x=0xf8, .y=0x97, .sp=0xad, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xf0}, {.addr=0x59d0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x59d1, .a=0xf5, .x=0xf8, .y=0xf0, .sp=0xae, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xf0}, {.addr=0x59d0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x59d0, .value=0xee, .type=IO_READ},
        {.addr=0x59d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xc2f9, .a=0xda, .x=0xc3, .y=0xb5, .sp=0x3d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xb3}, {.addr=0xc2f9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc2fa, .a=0xda, .x=0xc3, .y=0xb3, .sp=0x3e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xb3}, {.addr=0xc2f9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc2f9, .value=0xee, .type=IO_READ},
        {.addr=0xc2fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x5e6b, .a=0x6d, .x=0xd1, .y=0x78, .sp=0x73, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x33}, {.addr=0x5e6b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5e6c, .a=0x6d, .x=0xd1, .y=0x33, .sp=0x74, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x33}, {.addr=0x5e6b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5e6b, .value=0xee, .type=IO_READ},
        {.addr=0x5e6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x03b7, .a=0x06, .x=0xd1, .y=0x14, .sp=0xfb, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x76}, {.addr=0x03b7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x03b8, .a=0x06, .x=0xd1, .y=0x76, .sp=0xfc, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x76}, {.addr=0x03b7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x03b7, .value=0xee, .type=IO_READ},
        {.addr=0x03b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x2de9, .a=0xfe, .x=0xa6, .y=0x40, .sp=0xfc, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x46}, {.addr=0x2de9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2dea, .a=0xfe, .x=0xa6, .y=0x46, .sp=0xfd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x46}, {.addr=0x2de9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2de9, .value=0xee, .type=IO_READ},
        {.addr=0x2dea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x0dcc, .a=0xbc, .x=0x58, .y=0xcc, .sp=0x1e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xf0}, {.addr=0x0dcc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0dcd, .a=0xbc, .x=0x58, .y=0xf0, .sp=0x1f, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xf0}, {.addr=0x0dcc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0dcc, .value=0xee, .type=IO_READ},
        {.addr=0x0dcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x0344, .a=0x8f, .x=0xdc, .y=0x29, .sp=0x99, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xed}, {.addr=0x0344, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0345, .a=0x8f, .x=0xdc, .y=0xed, .sp=0x9a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xed}, {.addr=0x0344, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0344, .value=0xee, .type=IO_READ},
        {.addr=0x0345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xd3b2, .a=0x71, .x=0x85, .y=0x26, .sp=0x01, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xe9}, {.addr=0xd3b2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd3b3, .a=0x71, .x=0x85, .y=0xe9, .sp=0x02, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xe9}, {.addr=0xd3b2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd3b2, .value=0xee, .type=IO_READ},
        {.addr=0xd3b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xa93d, .a=0xbc, .x=0xbb, .y=0x51, .sp=0x03, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x7c}, {.addr=0xa93d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa93e, .a=0xbc, .x=0xbb, .y=0x7c, .sp=0x04, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x7c}, {.addr=0xa93d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa93d, .value=0xee, .type=IO_READ},
        {.addr=0xa93e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xdfbb, .a=0xc6, .x=0xf6, .y=0xc4, .sp=0xf0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x97}, {.addr=0xdfbb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdfbc, .a=0xc6, .x=0xf6, .y=0x97, .sp=0xf1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x97}, {.addr=0xdfbb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdfbb, .value=0xee, .type=IO_READ},
        {.addr=0xdfbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xf90f, .a=0xd6, .x=0x4b, .y=0xf5, .sp=0x87, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xaa}, {.addr=0xf90f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf910, .a=0xd6, .x=0x4b, .y=0xaa, .sp=0x88, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xaa}, {.addr=0xf90f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf90f, .value=0xee, .type=IO_READ},
        {.addr=0xf910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x7875, .a=0x82, .x=0x5b, .y=0x63, .sp=0x4f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xd0}, {.addr=0x7875, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7876, .a=0x82, .x=0x5b, .y=0xd0, .sp=0x50, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xd0}, {.addr=0x7875, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7875, .value=0xee, .type=IO_READ},
        {.addr=0x7876, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x4aba, .a=0x10, .x=0xe6, .y=0xea, .sp=0x3d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0x4aba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4abb, .a=0x10, .x=0xe6, .y=0x50, .sp=0x3e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0x4aba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4aba, .value=0xee, .type=IO_READ},
        {.addr=0x4abb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x104e, .a=0x61, .x=0x9b, .y=0x33, .sp=0xb7, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x60}, {.addr=0x104e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x104f, .a=0x61, .x=0x9b, .y=0x60, .sp=0xb8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x60}, {.addr=0x104e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x104e, .value=0xee, .type=IO_READ},
        {.addr=0x104f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0300) {
    const struct CPU_State initial_cpu = {.pc=0x0b2f, .a=0x61, .x=0x9a, .y=0x5c, .sp=0xac, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x0d}, {.addr=0x0b2f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b30, .a=0x61, .x=0x9a, .y=0x0d, .sp=0xad, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x0d}, {.addr=0x0b2f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b2f, .value=0xee, .type=IO_READ},
        {.addr=0x0b30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0301) {
    const struct CPU_State initial_cpu = {.pc=0xabae, .a=0x46, .x=0xfa, .y=0x33, .sp=0x65, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x59}, {.addr=0xabae, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xabaf, .a=0x46, .x=0xfa, .y=0x59, .sp=0x66, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x59}, {.addr=0xabae, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xabae, .value=0xee, .type=IO_READ},
        {.addr=0xabaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0302) {
    const struct CPU_State initial_cpu = {.pc=0xc1c3, .a=0xae, .x=0xed, .y=0xb6, .sp=0xe6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x6a}, {.addr=0xc1c3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc1c4, .a=0xae, .x=0xed, .y=0x6a, .sp=0xe7, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x6a}, {.addr=0xc1c3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc1c3, .value=0xee, .type=IO_READ},
        {.addr=0xc1c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0303) {
    const struct CPU_State initial_cpu = {.pc=0x9521, .a=0xec, .x=0x2b, .y=0x7f, .sp=0x75, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x99}, {.addr=0x9521, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9522, .a=0xec, .x=0x2b, .y=0x99, .sp=0x76, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x99}, {.addr=0x9521, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9521, .value=0xee, .type=IO_READ},
        {.addr=0x9522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0304) {
    const struct CPU_State initial_cpu = {.pc=0xfb34, .a=0xb0, .x=0xfc, .y=0x24, .sp=0x9b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x9d}, {.addr=0xfb34, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfb35, .a=0xb0, .x=0xfc, .y=0x9d, .sp=0x9c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x9d}, {.addr=0xfb34, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfb34, .value=0xee, .type=IO_READ},
        {.addr=0xfb35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0305) {
    const struct CPU_State initial_cpu = {.pc=0xcbb4, .a=0x3d, .x=0x86, .y=0xea, .sp=0x56, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x50}, {.addr=0xcbb4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcbb5, .a=0x3d, .x=0x86, .y=0x50, .sp=0x57, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x50}, {.addr=0xcbb4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcbb4, .value=0xee, .type=IO_READ},
        {.addr=0xcbb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0306) {
    const struct CPU_State initial_cpu = {.pc=0xa654, .a=0xf4, .x=0x1b, .y=0xd0, .sp=0x11, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xe4}, {.addr=0xa654, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa655, .a=0xf4, .x=0x1b, .y=0xe4, .sp=0x12, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xe4}, {.addr=0xa654, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa654, .value=0xee, .type=IO_READ},
        {.addr=0xa655, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0307) {
    const struct CPU_State initial_cpu = {.pc=0x1c1d, .a=0x0e, .x=0x4b, .y=0x30, .sp=0xb5, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x21}, {.addr=0x1c1d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1c1e, .a=0x0e, .x=0x4b, .y=0x21, .sp=0xb6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x21}, {.addr=0x1c1d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1c1d, .value=0xee, .type=IO_READ},
        {.addr=0x1c1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9921, .a=0x0b, .x=0xd7, .y=0x71, .sp=0x9c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xbb}, {.addr=0x9921, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9922, .a=0x0b, .x=0xd7, .y=0xbb, .sp=0x9d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xbb}, {.addr=0x9921, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9921, .value=0xee, .type=IO_READ},
        {.addr=0x9922, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0309) {
    const struct CPU_State initial_cpu = {.pc=0xdfd7, .a=0xd0, .x=0x05, .y=0x6e, .sp=0x54, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xcb}, {.addr=0xdfd7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdfd8, .a=0xd0, .x=0x05, .y=0xcb, .sp=0x55, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xcb}, {.addr=0xdfd7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdfd7, .value=0xee, .type=IO_READ},
        {.addr=0xdfd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030A) {
    const struct CPU_State initial_cpu = {.pc=0x08c2, .a=0x4e, .x=0x15, .y=0x37, .sp=0xdf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x79}, {.addr=0x08c2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x08c3, .a=0x4e, .x=0x15, .y=0x79, .sp=0xe0, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x79}, {.addr=0x08c2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x08c2, .value=0xee, .type=IO_READ},
        {.addr=0x08c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030B) {
    const struct CPU_State initial_cpu = {.pc=0xd9be, .a=0xb4, .x=0x5d, .y=0xed, .sp=0x66, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xb3}, {.addr=0xd9be, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd9bf, .a=0xb4, .x=0x5d, .y=0xb3, .sp=0x67, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xb3}, {.addr=0xd9be, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd9be, .value=0xee, .type=IO_READ},
        {.addr=0xd9bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030C) {
    const struct CPU_State initial_cpu = {.pc=0x04bb, .a=0x75, .x=0xeb, .y=0xbc, .sp=0x2c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xc7}, {.addr=0x04bb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x04bc, .a=0x75, .x=0xeb, .y=0xc7, .sp=0x2d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xc7}, {.addr=0x04bb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x04bb, .value=0xee, .type=IO_READ},
        {.addr=0x04bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030D) {
    const struct CPU_State initial_cpu = {.pc=0xab96, .a=0x29, .x=0xc3, .y=0x75, .sp=0xc2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x02}, {.addr=0xab96, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xab97, .a=0x29, .x=0xc3, .y=0x02, .sp=0xc3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x02}, {.addr=0xab96, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xab96, .value=0xee, .type=IO_READ},
        {.addr=0xab97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030E) {
    const struct CPU_State initial_cpu = {.pc=0x5d76, .a=0xf6, .x=0x96, .y=0xd1, .sp=0x78, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x88}, {.addr=0x5d76, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5d77, .a=0xf6, .x=0x96, .y=0x88, .sp=0x79, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x88}, {.addr=0x5d76, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5d76, .value=0xee, .type=IO_READ},
        {.addr=0x5d77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_030F) {
    const struct CPU_State initial_cpu = {.pc=0xbc12, .a=0x8f, .x=0xc8, .y=0xa7, .sp=0x71, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xb7}, {.addr=0xbc12, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbc13, .a=0x8f, .x=0xc8, .y=0xb7, .sp=0x72, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb7}, {.addr=0xbc12, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbc12, .value=0xee, .type=IO_READ},
        {.addr=0xbc13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0310) {
    const struct CPU_State initial_cpu = {.pc=0x9afc, .a=0xdc, .x=0xa2, .y=0x8d, .sp=0xb0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xb6}, {.addr=0x9afc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9afd, .a=0xdc, .x=0xa2, .y=0xb6, .sp=0xb1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xb6}, {.addr=0x9afc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9afc, .value=0xee, .type=IO_READ},
        {.addr=0x9afd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0311) {
    const struct CPU_State initial_cpu = {.pc=0x09a9, .a=0x33, .x=0x72, .y=0xa5, .sp=0x6a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x35}, {.addr=0x09a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x09aa, .a=0x33, .x=0x72, .y=0x35, .sp=0x6b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x35}, {.addr=0x09a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x09a9, .value=0xee, .type=IO_READ},
        {.addr=0x09aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0312) {
    const struct CPU_State initial_cpu = {.pc=0xb85c, .a=0x9e, .x=0xe8, .y=0xdb, .sp=0x0c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xfc}, {.addr=0xb85c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb85d, .a=0x9e, .x=0xe8, .y=0xfc, .sp=0x0d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xfc}, {.addr=0xb85c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb85c, .value=0xee, .type=IO_READ},
        {.addr=0xb85d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0313) {
    const struct CPU_State initial_cpu = {.pc=0xfbe8, .a=0x57, .x=0x26, .y=0xf1, .sp=0x34, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xc6}, {.addr=0xfbe8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfbe9, .a=0x57, .x=0x26, .y=0xc6, .sp=0x35, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc6}, {.addr=0xfbe8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfbe8, .value=0xee, .type=IO_READ},
        {.addr=0xfbe9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0314) {
    const struct CPU_State initial_cpu = {.pc=0x5f54, .a=0xf8, .x=0xe9, .y=0xdd, .sp=0x99, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x0e}, {.addr=0x5f54, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5f55, .a=0xf8, .x=0xe9, .y=0x0e, .sp=0x9a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x0e}, {.addr=0x5f54, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5f54, .value=0xee, .type=IO_READ},
        {.addr=0x5f55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0315) {
    const struct CPU_State initial_cpu = {.pc=0x1545, .a=0x0b, .x=0xd5, .y=0x48, .sp=0x05, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xda}, {.addr=0x1545, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1546, .a=0x0b, .x=0xd5, .y=0xda, .sp=0x06, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xda}, {.addr=0x1545, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1545, .value=0xee, .type=IO_READ},
        {.addr=0x1546, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc219, .a=0xb0, .x=0xa1, .y=0x04, .sp=0xaf, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x9f}, {.addr=0xc219, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc21a, .a=0xb0, .x=0xa1, .y=0x9f, .sp=0xb0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x9f}, {.addr=0xc219, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc219, .value=0xee, .type=IO_READ},
        {.addr=0xc21a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0317) {
    const struct CPU_State initial_cpu = {.pc=0xbe9a, .a=0x7d, .x=0x33, .y=0xe1, .sp=0x22, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xae}, {.addr=0xbe9a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbe9b, .a=0x7d, .x=0x33, .y=0xae, .sp=0x23, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xae}, {.addr=0xbe9a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbe9a, .value=0xee, .type=IO_READ},
        {.addr=0xbe9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0318) {
    const struct CPU_State initial_cpu = {.pc=0x3738, .a=0xe0, .x=0xe2, .y=0xf5, .sp=0xc0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x20}, {.addr=0x3738, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3739, .a=0xe0, .x=0xe2, .y=0x20, .sp=0xc1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x20}, {.addr=0x3738, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3738, .value=0xee, .type=IO_READ},
        {.addr=0x3739, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd53e, .a=0x15, .x=0x9a, .y=0x29, .sp=0x06, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xa1}, {.addr=0xd53e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd53f, .a=0x15, .x=0x9a, .y=0xa1, .sp=0x07, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xa1}, {.addr=0xd53e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd53e, .value=0xee, .type=IO_READ},
        {.addr=0xd53f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031A) {
    const struct CPU_State initial_cpu = {.pc=0x1f30, .a=0xde, .x=0x4f, .y=0xb4, .sp=0xe5, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xe1}, {.addr=0x1f30, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1f31, .a=0xde, .x=0x4f, .y=0xe1, .sp=0xe6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xe1}, {.addr=0x1f30, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1f30, .value=0xee, .type=IO_READ},
        {.addr=0x1f31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031B) {
    const struct CPU_State initial_cpu = {.pc=0x44e8, .a=0x86, .x=0xfa, .y=0xe4, .sp=0x1a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x9b}, {.addr=0x44e8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x44e9, .a=0x86, .x=0xfa, .y=0x9b, .sp=0x1b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x9b}, {.addr=0x44e8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x44e8, .value=0xee, .type=IO_READ},
        {.addr=0x44e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031C) {
    const struct CPU_State initial_cpu = {.pc=0xe838, .a=0x06, .x=0xb6, .y=0x92, .sp=0x8f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x21}, {.addr=0xe838, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe839, .a=0x06, .x=0xb6, .y=0x21, .sp=0x90, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x21}, {.addr=0xe838, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe838, .value=0xee, .type=IO_READ},
        {.addr=0xe839, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031D) {
    const struct CPU_State initial_cpu = {.pc=0x5b65, .a=0x21, .x=0xb3, .y=0xaa, .sp=0xc8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x2a}, {.addr=0x5b65, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5b66, .a=0x21, .x=0xb3, .y=0x2a, .sp=0xc9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x2a}, {.addr=0x5b65, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5b65, .value=0xee, .type=IO_READ},
        {.addr=0x5b66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031E) {
    const struct CPU_State initial_cpu = {.pc=0x313f, .a=0x7d, .x=0x35, .y=0x4e, .sp=0xec, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x47}, {.addr=0x313f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3140, .a=0x7d, .x=0x35, .y=0x47, .sp=0xed, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x47}, {.addr=0x313f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x313f, .value=0xee, .type=IO_READ},
        {.addr=0x3140, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_031F) {
    const struct CPU_State initial_cpu = {.pc=0x6fd7, .a=0xf6, .x=0x1d, .y=0x30, .sp=0xd0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x4a}, {.addr=0x6fd7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6fd8, .a=0xf6, .x=0x1d, .y=0x4a, .sp=0xd1, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x4a}, {.addr=0x6fd7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6fd7, .value=0xee, .type=IO_READ},
        {.addr=0x6fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0320) {
    const struct CPU_State initial_cpu = {.pc=0x17a1, .a=0x10, .x=0xfa, .y=0x49, .sp=0x51, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x71}, {.addr=0x17a1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x17a2, .a=0x10, .x=0xfa, .y=0x71, .sp=0x52, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x71}, {.addr=0x17a1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x17a1, .value=0xee, .type=IO_READ},
        {.addr=0x17a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0321) {
    const struct CPU_State initial_cpu = {.pc=0xfc93, .a=0x92, .x=0xfb, .y=0xb4, .sp=0x86, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xa6}, {.addr=0xfc93, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc94, .a=0x92, .x=0xfb, .y=0xa6, .sp=0x87, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xa6}, {.addr=0xfc93, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc93, .value=0xee, .type=IO_READ},
        {.addr=0xfc94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0322) {
    const struct CPU_State initial_cpu = {.pc=0x94a4, .a=0x57, .x=0x91, .y=0x2d, .sp=0x59, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x1a}, {.addr=0x94a4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x94a5, .a=0x57, .x=0x91, .y=0x1a, .sp=0x5a, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x1a}, {.addr=0x94a4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x94a4, .value=0xee, .type=IO_READ},
        {.addr=0x94a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0323) {
    const struct CPU_State initial_cpu = {.pc=0x2ca8, .a=0x9f, .x=0x30, .y=0x6e, .sp=0x7c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x4e}, {.addr=0x2ca8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2ca9, .a=0x9f, .x=0x30, .y=0x4e, .sp=0x7d, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x4e}, {.addr=0x2ca8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2ca8, .value=0xee, .type=IO_READ},
        {.addr=0x2ca9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0324) {
    const struct CPU_State initial_cpu = {.pc=0x048b, .a=0x47, .x=0x65, .y=0xa7, .sp=0xaf, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xf8}, {.addr=0x048b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x048c, .a=0x47, .x=0x65, .y=0xf8, .sp=0xb0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xf8}, {.addr=0x048b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x048b, .value=0xee, .type=IO_READ},
        {.addr=0x048c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0325) {
    const struct CPU_State initial_cpu = {.pc=0x2629, .a=0x4a, .x=0x66, .y=0xeb, .sp=0x90, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x34}, {.addr=0x2629, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x262a, .a=0x4a, .x=0x66, .y=0x34, .sp=0x91, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x34}, {.addr=0x2629, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2629, .value=0xee, .type=IO_READ},
        {.addr=0x262a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0326) {
    const struct CPU_State initial_cpu = {.pc=0x9279, .a=0x38, .x=0x19, .y=0xf1, .sp=0x1e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x9c}, {.addr=0x9279, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x927a, .a=0x38, .x=0x19, .y=0x9c, .sp=0x1f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x9c}, {.addr=0x9279, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9279, .value=0xee, .type=IO_READ},
        {.addr=0x927a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0327) {
    const struct CPU_State initial_cpu = {.pc=0x8f76, .a=0xc6, .x=0x12, .y=0xb9, .sp=0x03, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xfa}, {.addr=0x8f76, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8f77, .a=0xc6, .x=0x12, .y=0xfa, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xfa}, {.addr=0x8f76, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8f76, .value=0xee, .type=IO_READ},
        {.addr=0x8f77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0328) {
    const struct CPU_State initial_cpu = {.pc=0x38ae, .a=0x0a, .x=0x77, .y=0x00, .sp=0x51, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xea}, {.addr=0x38ae, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x38af, .a=0x0a, .x=0x77, .y=0xea, .sp=0x52, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xea}, {.addr=0x38ae, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x38ae, .value=0xee, .type=IO_READ},
        {.addr=0x38af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0329) {
    const struct CPU_State initial_cpu = {.pc=0x56a8, .a=0x00, .x=0xb3, .y=0x71, .sp=0xcb, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x41}, {.addr=0x56a8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x56a9, .a=0x00, .x=0xb3, .y=0x41, .sp=0xcc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x41}, {.addr=0x56a8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x56a8, .value=0xee, .type=IO_READ},
        {.addr=0x56a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032A) {
    const struct CPU_State initial_cpu = {.pc=0xaa39, .a=0xee, .x=0xf8, .y=0x80, .sp=0x72, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x84}, {.addr=0xaa39, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaa3a, .a=0xee, .x=0xf8, .y=0x84, .sp=0x73, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x84}, {.addr=0xaa39, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaa39, .value=0xee, .type=IO_READ},
        {.addr=0xaa3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032B) {
    const struct CPU_State initial_cpu = {.pc=0xb440, .a=0xd8, .x=0xcb, .y=0x60, .sp=0x55, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xde}, {.addr=0xb440, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb441, .a=0xd8, .x=0xcb, .y=0xde, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xde}, {.addr=0xb440, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb440, .value=0xee, .type=IO_READ},
        {.addr=0xb441, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032C) {
    const struct CPU_State initial_cpu = {.pc=0x1970, .a=0x24, .x=0xd1, .y=0x8d, .sp=0xac, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xa1}, {.addr=0x1970, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1971, .a=0x24, .x=0xd1, .y=0xa1, .sp=0xad, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xa1}, {.addr=0x1970, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1970, .value=0xee, .type=IO_READ},
        {.addr=0x1971, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032D) {
    const struct CPU_State initial_cpu = {.pc=0xfe06, .a=0x17, .x=0x03, .y=0xb8, .sp=0x07, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x7b}, {.addr=0xfe06, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfe07, .a=0x17, .x=0x03, .y=0x7b, .sp=0x08, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x7b}, {.addr=0xfe06, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfe06, .value=0xee, .type=IO_READ},
        {.addr=0xfe07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032E) {
    const struct CPU_State initial_cpu = {.pc=0xb8f1, .a=0xa5, .x=0xe2, .y=0xf9, .sp=0x84, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x38}, {.addr=0xb8f1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb8f2, .a=0xa5, .x=0xe2, .y=0x38, .sp=0x85, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x38}, {.addr=0xb8f1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb8f1, .value=0xee, .type=IO_READ},
        {.addr=0xb8f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_032F) {
    const struct CPU_State initial_cpu = {.pc=0x517e, .a=0x74, .x=0x11, .y=0x8d, .sp=0x81, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x1f}, {.addr=0x517e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x517f, .a=0x74, .x=0x11, .y=0x1f, .sp=0x82, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x1f}, {.addr=0x517e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x517e, .value=0xee, .type=IO_READ},
        {.addr=0x517f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0330) {
    const struct CPU_State initial_cpu = {.pc=0x8817, .a=0x4a, .x=0x3f, .y=0x3c, .sp=0x45, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xf4}, {.addr=0x8817, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8818, .a=0x4a, .x=0x3f, .y=0xf4, .sp=0x46, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xf4}, {.addr=0x8817, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8817, .value=0xee, .type=IO_READ},
        {.addr=0x8818, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0331) {
    const struct CPU_State initial_cpu = {.pc=0x0928, .a=0x24, .x=0x4d, .y=0x4b, .sp=0x0b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x86}, {.addr=0x0928, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0929, .a=0x24, .x=0x4d, .y=0x86, .sp=0x0c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x86}, {.addr=0x0928, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0928, .value=0xee, .type=IO_READ},
        {.addr=0x0929, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe6b8, .a=0x9b, .x=0x1f, .y=0x9f, .sp=0x23, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xfd}, {.addr=0xe6b8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe6b9, .a=0x9b, .x=0x1f, .y=0xfd, .sp=0x24, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xfd}, {.addr=0xe6b8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe6b8, .value=0xee, .type=IO_READ},
        {.addr=0xe6b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0333) {
    const struct CPU_State initial_cpu = {.pc=0x71be, .a=0xf1, .x=0xa0, .y=0x5a, .sp=0x62, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x2b}, {.addr=0x71be, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x71bf, .a=0xf1, .x=0xa0, .y=0x2b, .sp=0x63, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x2b}, {.addr=0x71be, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x71be, .value=0xee, .type=IO_READ},
        {.addr=0x71bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0334) {
    const struct CPU_State initial_cpu = {.pc=0x58e9, .a=0xc4, .x=0x7b, .y=0xe2, .sp=0x7d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x50}, {.addr=0x58e9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x58ea, .a=0xc4, .x=0x7b, .y=0x50, .sp=0x7e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x50}, {.addr=0x58e9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x58e9, .value=0xee, .type=IO_READ},
        {.addr=0x58ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0335) {
    const struct CPU_State initial_cpu = {.pc=0xe054, .a=0x86, .x=0x0e, .y=0x50, .sp=0x7a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x01}, {.addr=0xe054, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe055, .a=0x86, .x=0x0e, .y=0x01, .sp=0x7b, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x01}, {.addr=0xe054, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe054, .value=0xee, .type=IO_READ},
        {.addr=0xe055, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0336) {
    const struct CPU_State initial_cpu = {.pc=0xe7da, .a=0x4a, .x=0x67, .y=0x83, .sp=0xf1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x5e}, {.addr=0xe7da, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe7db, .a=0x4a, .x=0x67, .y=0x5e, .sp=0xf2, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x5e}, {.addr=0xe7da, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe7da, .value=0xee, .type=IO_READ},
        {.addr=0xe7db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0337) {
    const struct CPU_State initial_cpu = {.pc=0x347d, .a=0x5d, .x=0x36, .y=0x03, .sp=0x26, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x15}, {.addr=0x347d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x347e, .a=0x5d, .x=0x36, .y=0x15, .sp=0x27, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x15}, {.addr=0x347d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x347d, .value=0xee, .type=IO_READ},
        {.addr=0x347e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0338) {
    const struct CPU_State initial_cpu = {.pc=0xeb33, .a=0x79, .x=0xa8, .y=0xe7, .sp=0x3d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0xeb33, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xeb34, .a=0x79, .x=0xa8, .y=0x50, .sp=0x3e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x50}, {.addr=0xeb33, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xeb33, .value=0xee, .type=IO_READ},
        {.addr=0xeb34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0339) {
    const struct CPU_State initial_cpu = {.pc=0x2f79, .a=0x39, .x=0xc5, .y=0x8c, .sp=0x42, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x51}, {.addr=0x2f79, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2f7a, .a=0x39, .x=0xc5, .y=0x51, .sp=0x43, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x51}, {.addr=0x2f79, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2f79, .value=0xee, .type=IO_READ},
        {.addr=0x2f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033A) {
    const struct CPU_State initial_cpu = {.pc=0x567f, .a=0xaf, .x=0x4c, .y=0xa2, .sp=0x75, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x93}, {.addr=0x567f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5680, .a=0xaf, .x=0x4c, .y=0x93, .sp=0x76, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x93}, {.addr=0x567f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x567f, .value=0xee, .type=IO_READ},
        {.addr=0x5680, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033B) {
    const struct CPU_State initial_cpu = {.pc=0x4d3d, .a=0x8b, .x=0x45, .y=0xa7, .sp=0x87, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x91}, {.addr=0x4d3d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4d3e, .a=0x8b, .x=0x45, .y=0x91, .sp=0x88, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x91}, {.addr=0x4d3d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4d3d, .value=0xee, .type=IO_READ},
        {.addr=0x4d3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033C) {
    const struct CPU_State initial_cpu = {.pc=0xbe3c, .a=0x3b, .x=0x4a, .y=0x59, .sp=0x6a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xd2}, {.addr=0xbe3c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbe3d, .a=0x3b, .x=0x4a, .y=0xd2, .sp=0x6b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xd2}, {.addr=0xbe3c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbe3c, .value=0xee, .type=IO_READ},
        {.addr=0xbe3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033D) {
    const struct CPU_State initial_cpu = {.pc=0x1575, .a=0x6a, .x=0x85, .y=0xa2, .sp=0x27, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x3e}, {.addr=0x1575, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1576, .a=0x6a, .x=0x85, .y=0x3e, .sp=0x28, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x3e}, {.addr=0x1575, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1575, .value=0xee, .type=IO_READ},
        {.addr=0x1576, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033E) {
    const struct CPU_State initial_cpu = {.pc=0xa058, .a=0x72, .x=0x01, .y=0x4f, .sp=0x49, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xc3}, {.addr=0xa058, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa059, .a=0x72, .x=0x01, .y=0xc3, .sp=0x4a, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xc3}, {.addr=0xa058, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa058, .value=0xee, .type=IO_READ},
        {.addr=0xa059, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_033F) {
    const struct CPU_State initial_cpu = {.pc=0xa0c0, .a=0xdb, .x=0x82, .y=0x43, .sp=0xf4, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xe0}, {.addr=0xa0c0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa0c1, .a=0xdb, .x=0x82, .y=0xe0, .sp=0xf5, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe0}, {.addr=0xa0c0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa0c0, .value=0xee, .type=IO_READ},
        {.addr=0xa0c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0340) {
    const struct CPU_State initial_cpu = {.pc=0x7df2, .a=0x2d, .x=0x90, .y=0x71, .sp=0x9f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x31}, {.addr=0x7df2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7df3, .a=0x2d, .x=0x90, .y=0x31, .sp=0xa0, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x31}, {.addr=0x7df2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7df2, .value=0xee, .type=IO_READ},
        {.addr=0x7df3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0341) {
    const struct CPU_State initial_cpu = {.pc=0xf4d9, .a=0x8e, .x=0x9d, .y=0x5a, .sp=0x98, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xe8}, {.addr=0xf4d9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf4da, .a=0x8e, .x=0x9d, .y=0xe8, .sp=0x99, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xe8}, {.addr=0xf4d9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf4d9, .value=0xee, .type=IO_READ},
        {.addr=0xf4da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0342) {
    const struct CPU_State initial_cpu = {.pc=0x9d52, .a=0x0b, .x=0x0b, .y=0x6b, .sp=0x29, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xa6}, {.addr=0x9d52, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9d53, .a=0x0b, .x=0x0b, .y=0xa6, .sp=0x2a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xa6}, {.addr=0x9d52, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9d52, .value=0xee, .type=IO_READ},
        {.addr=0x9d53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0343) {
    const struct CPU_State initial_cpu = {.pc=0x50c9, .a=0x13, .x=0xf5, .y=0xd4, .sp=0x95, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xbb}, {.addr=0x50c9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x50ca, .a=0x13, .x=0xf5, .y=0xbb, .sp=0x96, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xbb}, {.addr=0x50c9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x50c9, .value=0xee, .type=IO_READ},
        {.addr=0x50ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0344) {
    const struct CPU_State initial_cpu = {.pc=0x89d6, .a=0x3e, .x=0x32, .y=0x78, .sp=0xc0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xff}, {.addr=0x89d6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x89d7, .a=0x3e, .x=0x32, .y=0xff, .sp=0xc1, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xff}, {.addr=0x89d6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x89d6, .value=0xee, .type=IO_READ},
        {.addr=0x89d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0345) {
    const struct CPU_State initial_cpu = {.pc=0x8887, .a=0xa9, .x=0x2d, .y=0xf3, .sp=0x2f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x9c}, {.addr=0x8887, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8888, .a=0xa9, .x=0x2d, .y=0x9c, .sp=0x30, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x9c}, {.addr=0x8887, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8887, .value=0xee, .type=IO_READ},
        {.addr=0x8888, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0346) {
    const struct CPU_State initial_cpu = {.pc=0xcd4c, .a=0x31, .x=0x09, .y=0x65, .sp=0xb0, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x54}, {.addr=0xcd4c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcd4d, .a=0x31, .x=0x09, .y=0x54, .sp=0xb1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x54}, {.addr=0xcd4c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcd4c, .value=0xee, .type=IO_READ},
        {.addr=0xcd4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0347) {
    const struct CPU_State initial_cpu = {.pc=0x3cc3, .a=0x3a, .x=0x46, .y=0x32, .sp=0xc8, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xcc}, {.addr=0x3cc3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3cc4, .a=0x3a, .x=0x46, .y=0xcc, .sp=0xc9, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xcc}, {.addr=0x3cc3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3cc3, .value=0xee, .type=IO_READ},
        {.addr=0x3cc4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0348) {
    const struct CPU_State initial_cpu = {.pc=0x13a7, .a=0x53, .x=0x7f, .y=0x02, .sp=0x96, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xc1}, {.addr=0x13a7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x13a8, .a=0x53, .x=0x7f, .y=0xc1, .sp=0x97, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xc1}, {.addr=0x13a7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x13a7, .value=0xee, .type=IO_READ},
        {.addr=0x13a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0349) {
    const struct CPU_State initial_cpu = {.pc=0x7280, .a=0x6a, .x=0x36, .y=0x82, .sp=0xe8, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x71}, {.addr=0x7280, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7281, .a=0x6a, .x=0x36, .y=0x71, .sp=0xe9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x71}, {.addr=0x7280, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7280, .value=0xee, .type=IO_READ},
        {.addr=0x7281, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034A) {
    const struct CPU_State initial_cpu = {.pc=0x14e6, .a=0x42, .x=0x49, .y=0x30, .sp=0x5e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x72}, {.addr=0x14e6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x14e7, .a=0x42, .x=0x49, .y=0x72, .sp=0x5f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x72}, {.addr=0x14e6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x14e6, .value=0xee, .type=IO_READ},
        {.addr=0x14e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034B) {
    const struct CPU_State initial_cpu = {.pc=0x2fa8, .a=0xf1, .x=0x28, .y=0x9a, .sp=0xb8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x77}, {.addr=0x2fa8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2fa9, .a=0xf1, .x=0x28, .y=0x77, .sp=0xb9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x77}, {.addr=0x2fa8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2fa8, .value=0xee, .type=IO_READ},
        {.addr=0x2fa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034C) {
    const struct CPU_State initial_cpu = {.pc=0xf8be, .a=0x22, .x=0xe2, .y=0x30, .sp=0x35, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x5e}, {.addr=0xf8be, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf8bf, .a=0x22, .x=0xe2, .y=0x5e, .sp=0x36, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x5e}, {.addr=0xf8be, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf8be, .value=0xee, .type=IO_READ},
        {.addr=0xf8bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034D) {
    const struct CPU_State initial_cpu = {.pc=0xc5a5, .a=0x47, .x=0x4f, .y=0xb0, .sp=0x34, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x8d}, {.addr=0xc5a5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc5a6, .a=0x47, .x=0x4f, .y=0x8d, .sp=0x35, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x8d}, {.addr=0xc5a5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc5a5, .value=0xee, .type=IO_READ},
        {.addr=0xc5a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034E) {
    const struct CPU_State initial_cpu = {.pc=0xf481, .a=0x8f, .x=0xc1, .y=0xa9, .sp=0xc9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xc1}, {.addr=0xf481, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf482, .a=0x8f, .x=0xc1, .y=0xc1, .sp=0xca, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xc1}, {.addr=0xf481, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf481, .value=0xee, .type=IO_READ},
        {.addr=0xf482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_034F) {
    const struct CPU_State initial_cpu = {.pc=0x53c7, .a=0x42, .x=0x87, .y=0xb8, .sp=0x97, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x0a}, {.addr=0x53c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53c8, .a=0x42, .x=0x87, .y=0x0a, .sp=0x98, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x0a}, {.addr=0x53c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53c7, .value=0xee, .type=IO_READ},
        {.addr=0x53c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0350) {
    const struct CPU_State initial_cpu = {.pc=0x6142, .a=0xbe, .x=0xf6, .y=0xb7, .sp=0x35, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xbe}, {.addr=0x6142, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6143, .a=0xbe, .x=0xf6, .y=0xbe, .sp=0x36, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xbe}, {.addr=0x6142, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6142, .value=0xee, .type=IO_READ},
        {.addr=0x6143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0351) {
    const struct CPU_State initial_cpu = {.pc=0x911d, .a=0xb5, .x=0x3b, .y=0x2c, .sp=0xa8, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x5c}, {.addr=0x911d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x911e, .a=0xb5, .x=0x3b, .y=0x5c, .sp=0xa9, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x5c}, {.addr=0x911d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x911d, .value=0xee, .type=IO_READ},
        {.addr=0x911e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0352) {
    const struct CPU_State initial_cpu = {.pc=0xcf4f, .a=0xae, .x=0x9d, .y=0x3e, .sp=0x56, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xa9}, {.addr=0xcf4f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcf50, .a=0xae, .x=0x9d, .y=0xa9, .sp=0x57, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xa9}, {.addr=0xcf4f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcf4f, .value=0xee, .type=IO_READ},
        {.addr=0xcf50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0353) {
    const struct CPU_State initial_cpu = {.pc=0x213a, .a=0x57, .x=0x1f, .y=0x01, .sp=0x95, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x95}, {.addr=0x213a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x213b, .a=0x57, .x=0x1f, .y=0x95, .sp=0x96, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x95}, {.addr=0x213a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x213a, .value=0xee, .type=IO_READ},
        {.addr=0x213b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0354) {
    const struct CPU_State initial_cpu = {.pc=0x8351, .a=0x24, .x=0x77, .y=0xce, .sp=0xb4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x1e}, {.addr=0x8351, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8352, .a=0x24, .x=0x77, .y=0x1e, .sp=0xb5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x1e}, {.addr=0x8351, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8351, .value=0xee, .type=IO_READ},
        {.addr=0x8352, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0355) {
    const struct CPU_State initial_cpu = {.pc=0x921f, .a=0x81, .x=0xbd, .y=0x8e, .sp=0xc4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xfc}, {.addr=0x921f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9220, .a=0x81, .x=0xbd, .y=0xfc, .sp=0xc5, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xfc}, {.addr=0x921f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x921f, .value=0xee, .type=IO_READ},
        {.addr=0x9220, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0356) {
    const struct CPU_State initial_cpu = {.pc=0x1c11, .a=0xd5, .x=0x7c, .y=0x33, .sp=0xe9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x2f}, {.addr=0x1c11, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1c12, .a=0xd5, .x=0x7c, .y=0x2f, .sp=0xea, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x2f}, {.addr=0x1c11, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1c11, .value=0xee, .type=IO_READ},
        {.addr=0x1c12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0357) {
    const struct CPU_State initial_cpu = {.pc=0xd31d, .a=0xa4, .x=0xc2, .y=0xb1, .sp=0x22, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x16}, {.addr=0xd31d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd31e, .a=0xa4, .x=0xc2, .y=0x16, .sp=0x23, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x16}, {.addr=0xd31d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd31d, .value=0xee, .type=IO_READ},
        {.addr=0xd31e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0358) {
    const struct CPU_State initial_cpu = {.pc=0x2060, .a=0x4b, .x=0x11, .y=0x26, .sp=0xdf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xfa}, {.addr=0x2060, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2061, .a=0x4b, .x=0x11, .y=0xfa, .sp=0xe0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xfa}, {.addr=0x2060, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2060, .value=0xee, .type=IO_READ},
        {.addr=0x2061, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3f20, .a=0x28, .x=0x2d, .y=0x8b, .sp=0xb3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xc0}, {.addr=0x3f20, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3f21, .a=0x28, .x=0x2d, .y=0xc0, .sp=0xb4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xc0}, {.addr=0x3f20, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3f20, .value=0xee, .type=IO_READ},
        {.addr=0x3f21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035A) {
    const struct CPU_State initial_cpu = {.pc=0xf82c, .a=0x5a, .x=0x3b, .y=0x8c, .sp=0x68, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x32}, {.addr=0xf82c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf82d, .a=0x5a, .x=0x3b, .y=0x32, .sp=0x69, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x32}, {.addr=0xf82c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf82c, .value=0xee, .type=IO_READ},
        {.addr=0xf82d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035B) {
    const struct CPU_State initial_cpu = {.pc=0xfe0a, .a=0xfa, .x=0xe9, .y=0xca, .sp=0x1e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x37}, {.addr=0xfe0a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfe0b, .a=0xfa, .x=0xe9, .y=0x37, .sp=0x1f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x37}, {.addr=0xfe0a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfe0a, .value=0xee, .type=IO_READ},
        {.addr=0xfe0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035C) {
    const struct CPU_State initial_cpu = {.pc=0xccf6, .a=0x98, .x=0x7c, .y=0xe8, .sp=0x9c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x7b}, {.addr=0xccf6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xccf7, .a=0x98, .x=0x7c, .y=0x7b, .sp=0x9d, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x7b}, {.addr=0xccf6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xccf6, .value=0xee, .type=IO_READ},
        {.addr=0xccf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035D) {
    const struct CPU_State initial_cpu = {.pc=0x13c3, .a=0x11, .x=0x79, .y=0x7a, .sp=0xfb, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x84}, {.addr=0x13c3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x13c4, .a=0x11, .x=0x79, .y=0x84, .sp=0xfc, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x84}, {.addr=0x13c3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x13c3, .value=0xee, .type=IO_READ},
        {.addr=0x13c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5e0b, .a=0xb5, .x=0x9a, .y=0x30, .sp=0x05, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x7b}, {.addr=0x5e0b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5e0c, .a=0xb5, .x=0x9a, .y=0x7b, .sp=0x06, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x7b}, {.addr=0x5e0b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5e0b, .value=0xee, .type=IO_READ},
        {.addr=0x5e0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_035F) {
    const struct CPU_State initial_cpu = {.pc=0x02bc, .a=0x8b, .x=0x25, .y=0x81, .sp=0x88, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x54}, {.addr=0x02bc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x02bd, .a=0x8b, .x=0x25, .y=0x54, .sp=0x89, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x54}, {.addr=0x02bc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x02bc, .value=0xee, .type=IO_READ},
        {.addr=0x02bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0360) {
    const struct CPU_State initial_cpu = {.pc=0x82c8, .a=0x34, .x=0x67, .y=0xf3, .sp=0xdb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xf5}, {.addr=0x82c8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x82c9, .a=0x34, .x=0x67, .y=0xf5, .sp=0xdc, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xf5}, {.addr=0x82c8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x82c8, .value=0xee, .type=IO_READ},
        {.addr=0x82c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0707, .a=0x03, .x=0x1f, .y=0x28, .sp=0x58, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x63}, {.addr=0x0707, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0708, .a=0x03, .x=0x1f, .y=0x63, .sp=0x59, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x63}, {.addr=0x0707, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0707, .value=0xee, .type=IO_READ},
        {.addr=0x0708, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0362) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0xba, .x=0xa4, .y=0x08, .sp=0x55, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xfe}, {.addr=0xccbf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xccc0, .a=0xba, .x=0xa4, .y=0xfe, .sp=0x56, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xfe}, {.addr=0xccbf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0xee, .type=IO_READ},
        {.addr=0xccc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0363) {
    const struct CPU_State initial_cpu = {.pc=0x616d, .a=0x43, .x=0x5c, .y=0x44, .sp=0x72, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xc0}, {.addr=0x616d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x616e, .a=0x43, .x=0x5c, .y=0xc0, .sp=0x73, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc0}, {.addr=0x616d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x616d, .value=0xee, .type=IO_READ},
        {.addr=0x616e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf56a, .a=0xb2, .x=0x7c, .y=0x49, .sp=0xf2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x10}, {.addr=0xf56a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf56b, .a=0xb2, .x=0x7c, .y=0x10, .sp=0xf3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x10}, {.addr=0xf56a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf56a, .value=0xee, .type=IO_READ},
        {.addr=0xf56b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0365) {
    const struct CPU_State initial_cpu = {.pc=0xe23a, .a=0x79, .x=0x23, .y=0x4b, .sp=0x85, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xbc}, {.addr=0xe23a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe23b, .a=0x79, .x=0x23, .y=0xbc, .sp=0x86, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xbc}, {.addr=0xe23a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe23a, .value=0xee, .type=IO_READ},
        {.addr=0xe23b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0366) {
    const struct CPU_State initial_cpu = {.pc=0xaed1, .a=0x8c, .x=0xbc, .y=0xb0, .sp=0x16, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xcd}, {.addr=0xaed1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaed2, .a=0x8c, .x=0xbc, .y=0xcd, .sp=0x17, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xcd}, {.addr=0xaed1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaed1, .value=0xee, .type=IO_READ},
        {.addr=0xaed2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0367) {
    const struct CPU_State initial_cpu = {.pc=0x8323, .a=0x5e, .x=0x5d, .y=0x37, .sp=0x19, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x9a}, {.addr=0x8323, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8324, .a=0x5e, .x=0x5d, .y=0x9a, .sp=0x1a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x9a}, {.addr=0x8323, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8323, .value=0xee, .type=IO_READ},
        {.addr=0x8324, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0368) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x54, .x=0xb1, .y=0xe1, .sp=0xed, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xba}, {.addr=0x352b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x352c, .a=0x54, .x=0xb1, .y=0xba, .sp=0xee, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xba}, {.addr=0x352b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0xee, .type=IO_READ},
        {.addr=0x352c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0369) {
    const struct CPU_State initial_cpu = {.pc=0x470b, .a=0x56, .x=0x87, .y=0x57, .sp=0x6d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xcd}, {.addr=0x470b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x470c, .a=0x56, .x=0x87, .y=0xcd, .sp=0x6e, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xcd}, {.addr=0x470b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x470b, .value=0xee, .type=IO_READ},
        {.addr=0x470c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036A) {
    const struct CPU_State initial_cpu = {.pc=0x2672, .a=0x43, .x=0xef, .y=0xd1, .sp=0x0b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xa7}, {.addr=0x2672, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2673, .a=0x43, .x=0xef, .y=0xa7, .sp=0x0c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xa7}, {.addr=0x2672, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2672, .value=0xee, .type=IO_READ},
        {.addr=0x2673, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036B) {
    const struct CPU_State initial_cpu = {.pc=0xfd03, .a=0x47, .x=0x74, .y=0x41, .sp=0x69, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x9f}, {.addr=0xfd03, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfd04, .a=0x47, .x=0x74, .y=0x9f, .sp=0x6a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x9f}, {.addr=0xfd03, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfd03, .value=0xee, .type=IO_READ},
        {.addr=0xfd04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036C) {
    const struct CPU_State initial_cpu = {.pc=0x0521, .a=0x6f, .x=0x28, .y=0x13, .sp=0x99, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xed}, {.addr=0x0521, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0522, .a=0x6f, .x=0x28, .y=0xed, .sp=0x9a, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xed}, {.addr=0x0521, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0521, .value=0xee, .type=IO_READ},
        {.addr=0x0522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036D) {
    const struct CPU_State initial_cpu = {.pc=0x1e6e, .a=0x8b, .x=0xf1, .y=0x96, .sp=0xf5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x63}, {.addr=0x1e6e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1e6f, .a=0x8b, .x=0xf1, .y=0x63, .sp=0xf6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x63}, {.addr=0x1e6e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1e6e, .value=0xee, .type=IO_READ},
        {.addr=0x1e6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036E) {
    const struct CPU_State initial_cpu = {.pc=0x66e6, .a=0xee, .x=0x55, .y=0x46, .sp=0x3c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x8d}, {.addr=0x66e6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x66e7, .a=0xee, .x=0x55, .y=0x8d, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x8d}, {.addr=0x66e6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x66e6, .value=0xee, .type=IO_READ},
        {.addr=0x66e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_036F) {
    const struct CPU_State initial_cpu = {.pc=0xfad1, .a=0x82, .x=0xa5, .y=0x31, .sp=0xca, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xfad1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfad2, .a=0x82, .x=0xa5, .y=0x00, .sp=0xcb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xfad1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfad1, .value=0xee, .type=IO_READ},
        {.addr=0xfad2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0370) {
    const struct CPU_State initial_cpu = {.pc=0xace9, .a=0xee, .x=0x9e, .y=0x5c, .sp=0x64, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x93}, {.addr=0xace9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xacea, .a=0xee, .x=0x9e, .y=0x93, .sp=0x65, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x93}, {.addr=0xace9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xace9, .value=0xee, .type=IO_READ},
        {.addr=0xacea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0371) {
    const struct CPU_State initial_cpu = {.pc=0x5605, .a=0xab, .x=0x84, .y=0x00, .sp=0x8f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x17}, {.addr=0x5605, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5606, .a=0xab, .x=0x84, .y=0x17, .sp=0x90, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x17}, {.addr=0x5605, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5605, .value=0xee, .type=IO_READ},
        {.addr=0x5606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0372) {
    const struct CPU_State initial_cpu = {.pc=0x9ede, .a=0xef, .x=0xca, .y=0x94, .sp=0xe3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x0b}, {.addr=0x9ede, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9edf, .a=0xef, .x=0xca, .y=0x0b, .sp=0xe4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x0b}, {.addr=0x9ede, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9ede, .value=0xee, .type=IO_READ},
        {.addr=0x9edf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0373) {
    const struct CPU_State initial_cpu = {.pc=0x6d8f, .a=0xbd, .x=0x9b, .y=0x63, .sp=0xff, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xd2}, {.addr=0x6d8f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6d90, .a=0xbd, .x=0x9b, .y=0xd2, .sp=0x00, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xd2}, {.addr=0x6d8f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6d8f, .value=0xee, .type=IO_READ},
        {.addr=0x6d90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0374) {
    const struct CPU_State initial_cpu = {.pc=0xfc0c, .a=0x79, .x=0xbe, .y=0x42, .sp=0x2b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x0c}, {.addr=0xfc0c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfc0d, .a=0x79, .x=0xbe, .y=0x0c, .sp=0x2c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x0c}, {.addr=0xfc0c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfc0c, .value=0xee, .type=IO_READ},
        {.addr=0xfc0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0375) {
    const struct CPU_State initial_cpu = {.pc=0x4ccf, .a=0x75, .x=0x45, .y=0x86, .sp=0x3c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x0b}, {.addr=0x4ccf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4cd0, .a=0x75, .x=0x45, .y=0x0b, .sp=0x3d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x0b}, {.addr=0x4ccf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4ccf, .value=0xee, .type=IO_READ},
        {.addr=0x4cd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0376) {
    const struct CPU_State initial_cpu = {.pc=0xd88d, .a=0x87, .x=0x86, .y=0x0c, .sp=0x95, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xae}, {.addr=0xd88d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd88e, .a=0x87, .x=0x86, .y=0xae, .sp=0x96, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xae}, {.addr=0xd88d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd88d, .value=0xee, .type=IO_READ},
        {.addr=0xd88e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0377) {
    const struct CPU_State initial_cpu = {.pc=0x9bd5, .a=0xe6, .x=0x92, .y=0x1a, .sp=0xdb, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xae}, {.addr=0x9bd5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9bd6, .a=0xe6, .x=0x92, .y=0xae, .sp=0xdc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xae}, {.addr=0x9bd5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9bd5, .value=0xee, .type=IO_READ},
        {.addr=0x9bd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0378) {
    const struct CPU_State initial_cpu = {.pc=0xe216, .a=0x5c, .x=0x22, .y=0x1c, .sp=0x98, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xe1}, {.addr=0xe216, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe217, .a=0x5c, .x=0x22, .y=0xe1, .sp=0x99, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xe1}, {.addr=0xe216, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe216, .value=0xee, .type=IO_READ},
        {.addr=0xe217, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0379) {
    const struct CPU_State initial_cpu = {.pc=0xe6ec, .a=0x9c, .x=0x03, .y=0x4d, .sp=0x57, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x88}, {.addr=0xe6ec, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe6ed, .a=0x9c, .x=0x03, .y=0x88, .sp=0x58, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x88}, {.addr=0xe6ec, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe6ec, .value=0xee, .type=IO_READ},
        {.addr=0xe6ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037A) {
    const struct CPU_State initial_cpu = {.pc=0x36c7, .a=0x07, .x=0xc2, .y=0x8f, .sp=0xdb, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xb0}, {.addr=0x36c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x36c8, .a=0x07, .x=0xc2, .y=0xb0, .sp=0xdc, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xb0}, {.addr=0x36c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x36c7, .value=0xee, .type=IO_READ},
        {.addr=0x36c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037B) {
    const struct CPU_State initial_cpu = {.pc=0xc15f, .a=0x55, .x=0x26, .y=0xaf, .sp=0x49, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x3c}, {.addr=0xc15f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc160, .a=0x55, .x=0x26, .y=0x3c, .sp=0x4a, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x3c}, {.addr=0xc15f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc15f, .value=0xee, .type=IO_READ},
        {.addr=0xc160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037C) {
    const struct CPU_State initial_cpu = {.pc=0x9552, .a=0x17, .x=0xde, .y=0xcb, .sp=0xa7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x3c}, {.addr=0x9552, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9553, .a=0x17, .x=0xde, .y=0x3c, .sp=0xa8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x3c}, {.addr=0x9552, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9552, .value=0xee, .type=IO_READ},
        {.addr=0x9553, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037D) {
    const struct CPU_State initial_cpu = {.pc=0x94ec, .a=0x0f, .x=0xfa, .y=0xe9, .sp=0x17, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x2d}, {.addr=0x94ec, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x94ed, .a=0x0f, .x=0xfa, .y=0x2d, .sp=0x18, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x2d}, {.addr=0x94ec, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x94ec, .value=0xee, .type=IO_READ},
        {.addr=0x94ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6b08, .a=0x7f, .x=0x55, .y=0xb1, .sp=0x3e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x59}, {.addr=0x6b08, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6b09, .a=0x7f, .x=0x55, .y=0x59, .sp=0x3f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x59}, {.addr=0x6b08, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6b08, .value=0xee, .type=IO_READ},
        {.addr=0x6b09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_037F) {
    const struct CPU_State initial_cpu = {.pc=0x7961, .a=0xf5, .x=0xef, .y=0x3c, .sp=0x08, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xc4}, {.addr=0x7961, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7962, .a=0xf5, .x=0xef, .y=0xc4, .sp=0x09, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xc4}, {.addr=0x7961, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7961, .value=0xee, .type=IO_READ},
        {.addr=0x7962, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0380) {
    const struct CPU_State initial_cpu = {.pc=0x96a2, .a=0xe7, .x=0x9b, .y=0xc9, .sp=0xaf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x4e}, {.addr=0x96a2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x96a3, .a=0xe7, .x=0x9b, .y=0x4e, .sp=0xb0, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x4e}, {.addr=0x96a2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x96a2, .value=0xee, .type=IO_READ},
        {.addr=0x96a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0381) {
    const struct CPU_State initial_cpu = {.pc=0x0f03, .a=0x7a, .x=0x25, .y=0x39, .sp=0x60, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x4b}, {.addr=0x0f03, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0f04, .a=0x7a, .x=0x25, .y=0x4b, .sp=0x61, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x4b}, {.addr=0x0f03, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0f03, .value=0xee, .type=IO_READ},
        {.addr=0x0f04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0382) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0xff, .x=0xc3, .y=0x11, .sp=0xcc, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x47}, {.addr=0xc2dd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0xff, .x=0xc3, .y=0x47, .sp=0xcd, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x47}, {.addr=0xc2dd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0xee, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0383) {
    const struct CPU_State initial_cpu = {.pc=0x3dc5, .a=0xfb, .x=0xb1, .y=0x27, .sp=0x60, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x07}, {.addr=0x3dc5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3dc6, .a=0xfb, .x=0xb1, .y=0x07, .sp=0x61, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x07}, {.addr=0x3dc5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3dc5, .value=0xee, .type=IO_READ},
        {.addr=0x3dc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0384) {
    const struct CPU_State initial_cpu = {.pc=0xc60a, .a=0x07, .x=0x86, .y=0x9e, .sp=0x06, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x76}, {.addr=0xc60a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc60b, .a=0x07, .x=0x86, .y=0x76, .sp=0x07, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x76}, {.addr=0xc60a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc60a, .value=0xee, .type=IO_READ},
        {.addr=0xc60b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0385) {
    const struct CPU_State initial_cpu = {.pc=0x1a4e, .a=0x8e, .x=0x9a, .y=0xe9, .sp=0xac, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x13}, {.addr=0x1a4e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1a4f, .a=0x8e, .x=0x9a, .y=0x13, .sp=0xad, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x13}, {.addr=0x1a4e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1a4e, .value=0xee, .type=IO_READ},
        {.addr=0x1a4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0386) {
    const struct CPU_State initial_cpu = {.pc=0x77c5, .a=0x5e, .x=0x89, .y=0x19, .sp=0x02, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xe1}, {.addr=0x77c5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x77c6, .a=0x5e, .x=0x89, .y=0xe1, .sp=0x03, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xe1}, {.addr=0x77c5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x77c5, .value=0xee, .type=IO_READ},
        {.addr=0x77c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0387) {
    const struct CPU_State initial_cpu = {.pc=0x1e5f, .a=0x9b, .x=0x3d, .y=0x02, .sp=0x49, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xe8}, {.addr=0x1e5f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1e60, .a=0x9b, .x=0x3d, .y=0xe8, .sp=0x4a, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xe8}, {.addr=0x1e5f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1e5f, .value=0xee, .type=IO_READ},
        {.addr=0x1e60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0388) {
    const struct CPU_State initial_cpu = {.pc=0x2d8a, .a=0x7a, .x=0x55, .y=0x97, .sp=0xc1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x37}, {.addr=0x2d8a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2d8b, .a=0x7a, .x=0x55, .y=0x37, .sp=0xc2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x37}, {.addr=0x2d8a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2d8a, .value=0xee, .type=IO_READ},
        {.addr=0x2d8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0389) {
    const struct CPU_State initial_cpu = {.pc=0x0cf6, .a=0xdb, .x=0xff, .y=0x26, .sp=0x84, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xba}, {.addr=0x0cf6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0cf7, .a=0xdb, .x=0xff, .y=0xba, .sp=0x85, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xba}, {.addr=0x0cf6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0cf6, .value=0xee, .type=IO_READ},
        {.addr=0x0cf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038A) {
    const struct CPU_State initial_cpu = {.pc=0xef73, .a=0xae, .x=0x6e, .y=0x14, .sp=0x64, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x37}, {.addr=0xef73, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xef74, .a=0xae, .x=0x6e, .y=0x37, .sp=0x65, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x37}, {.addr=0xef73, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xef73, .value=0xee, .type=IO_READ},
        {.addr=0xef74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf2ca, .a=0x60, .x=0x15, .y=0xa6, .sp=0x6e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xd8}, {.addr=0xf2ca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf2cb, .a=0x60, .x=0x15, .y=0xd8, .sp=0x6f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xd8}, {.addr=0xf2ca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf2ca, .value=0xee, .type=IO_READ},
        {.addr=0xf2cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038C) {
    const struct CPU_State initial_cpu = {.pc=0xa399, .a=0x45, .x=0x61, .y=0x78, .sp=0xbb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xcc}, {.addr=0xa399, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa39a, .a=0x45, .x=0x61, .y=0xcc, .sp=0xbc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xcc}, {.addr=0xa399, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa399, .value=0xee, .type=IO_READ},
        {.addr=0xa39a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038D) {
    const struct CPU_State initial_cpu = {.pc=0xe2dd, .a=0x76, .x=0xd5, .y=0x3f, .sp=0xbd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x47}, {.addr=0xe2dd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe2de, .a=0x76, .x=0xd5, .y=0x47, .sp=0xbe, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x47}, {.addr=0xe2dd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe2dd, .value=0xee, .type=IO_READ},
        {.addr=0xe2de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038E) {
    const struct CPU_State initial_cpu = {.pc=0x40ca, .a=0xed, .x=0x33, .y=0xee, .sp=0x9b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x84}, {.addr=0x40ca, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x40cb, .a=0xed, .x=0x33, .y=0x84, .sp=0x9c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x84}, {.addr=0x40ca, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x40ca, .value=0xee, .type=IO_READ},
        {.addr=0x40cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_038F) {
    const struct CPU_State initial_cpu = {.pc=0xe953, .a=0x65, .x=0x76, .y=0x7b, .sp=0x9b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x58}, {.addr=0xe953, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe954, .a=0x65, .x=0x76, .y=0x58, .sp=0x9c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x58}, {.addr=0xe953, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe953, .value=0xee, .type=IO_READ},
        {.addr=0xe954, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0390) {
    const struct CPU_State initial_cpu = {.pc=0x969a, .a=0x5d, .x=0x87, .y=0xe9, .sp=0x33, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x9b}, {.addr=0x969a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x969b, .a=0x5d, .x=0x87, .y=0x9b, .sp=0x34, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x9b}, {.addr=0x969a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x969a, .value=0xee, .type=IO_READ},
        {.addr=0x969b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0391) {
    const struct CPU_State initial_cpu = {.pc=0x95b4, .a=0xfc, .x=0x6c, .y=0x5f, .sp=0xe2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x0a}, {.addr=0x95b4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x95b5, .a=0xfc, .x=0x6c, .y=0x0a, .sp=0xe3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x0a}, {.addr=0x95b4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x95b4, .value=0xee, .type=IO_READ},
        {.addr=0x95b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0392) {
    const struct CPU_State initial_cpu = {.pc=0xbb95, .a=0x34, .x=0xbd, .y=0x01, .sp=0x38, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xc4}, {.addr=0xbb95, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbb96, .a=0x34, .x=0xbd, .y=0xc4, .sp=0x39, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xc4}, {.addr=0xbb95, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbb95, .value=0xee, .type=IO_READ},
        {.addr=0xbb96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4bbf, .a=0x54, .x=0x91, .y=0xcc, .sp=0x9e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xc6}, {.addr=0x4bbf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4bc0, .a=0x54, .x=0x91, .y=0xc6, .sp=0x9f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xc6}, {.addr=0x4bbf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4bbf, .value=0xee, .type=IO_READ},
        {.addr=0x4bc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0394) {
    const struct CPU_State initial_cpu = {.pc=0xc975, .a=0x2f, .x=0x41, .y=0xfd, .sp=0x32, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xe0}, {.addr=0xc975, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc976, .a=0x2f, .x=0x41, .y=0xe0, .sp=0x33, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xe0}, {.addr=0xc975, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc975, .value=0xee, .type=IO_READ},
        {.addr=0xc976, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0395) {
    const struct CPU_State initial_cpu = {.pc=0x1316, .a=0xe3, .x=0x00, .y=0x5b, .sp=0x31, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x1b}, {.addr=0x1316, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1317, .a=0xe3, .x=0x00, .y=0x1b, .sp=0x32, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x1b}, {.addr=0x1316, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1316, .value=0xee, .type=IO_READ},
        {.addr=0x1317, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0396) {
    const struct CPU_State initial_cpu = {.pc=0xf6cb, .a=0x80, .x=0x24, .y=0x4d, .sp=0x15, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x6f}, {.addr=0xf6cb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf6cc, .a=0x80, .x=0x24, .y=0x6f, .sp=0x16, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x6f}, {.addr=0xf6cb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf6cb, .value=0xee, .type=IO_READ},
        {.addr=0xf6cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0397) {
    const struct CPU_State initial_cpu = {.pc=0xdadd, .a=0x68, .x=0xe4, .y=0x7d, .sp=0x47, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x70}, {.addr=0xdadd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdade, .a=0x68, .x=0xe4, .y=0x70, .sp=0x48, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x70}, {.addr=0xdadd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdadd, .value=0xee, .type=IO_READ},
        {.addr=0xdade, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0398) {
    const struct CPU_State initial_cpu = {.pc=0xd653, .a=0xfd, .x=0xe5, .y=0xc2, .sp=0x7f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x1e}, {.addr=0xd653, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd654, .a=0xfd, .x=0xe5, .y=0x1e, .sp=0x80, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x1e}, {.addr=0xd653, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd653, .value=0xee, .type=IO_READ},
        {.addr=0xd654, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_0399) {
    const struct CPU_State initial_cpu = {.pc=0x53f2, .a=0xfc, .x=0xb0, .y=0x2c, .sp=0x33, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xd2}, {.addr=0x53f2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x53f3, .a=0xfc, .x=0xb0, .y=0xd2, .sp=0x34, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xd2}, {.addr=0x53f2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x53f2, .value=0xee, .type=IO_READ},
        {.addr=0x53f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039A) {
    const struct CPU_State initial_cpu = {.pc=0x025c, .a=0x6d, .x=0x90, .y=0x54, .sp=0xc6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x25}, {.addr=0x025c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x025d, .a=0x6d, .x=0x90, .y=0x25, .sp=0xc7, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x25}, {.addr=0x025c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x025c, .value=0xee, .type=IO_READ},
        {.addr=0x025d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039B) {
    const struct CPU_State initial_cpu = {.pc=0x60e0, .a=0xc9, .x=0x73, .y=0x5b, .sp=0x15, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x49}, {.addr=0x60e0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x60e1, .a=0xc9, .x=0x73, .y=0x49, .sp=0x16, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x49}, {.addr=0x60e0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x60e0, .value=0xee, .type=IO_READ},
        {.addr=0x60e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039C) {
    const struct CPU_State initial_cpu = {.pc=0xd5cf, .a=0x75, .x=0xe5, .y=0x35, .sp=0xec, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xb3}, {.addr=0xd5cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd5d0, .a=0x75, .x=0xe5, .y=0xb3, .sp=0xed, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xb3}, {.addr=0xd5cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd5cf, .value=0xee, .type=IO_READ},
        {.addr=0xd5d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc626, .a=0x23, .x=0x6d, .y=0x94, .sp=0x21, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x39}, {.addr=0xc626, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc627, .a=0x23, .x=0x6d, .y=0x39, .sp=0x22, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x39}, {.addr=0xc626, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc626, .value=0xee, .type=IO_READ},
        {.addr=0xc627, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039E) {
    const struct CPU_State initial_cpu = {.pc=0x221a, .a=0xfa, .x=0x9c, .y=0xe2, .sp=0x3e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x37}, {.addr=0x221a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x221b, .a=0xfa, .x=0x9c, .y=0x37, .sp=0x3f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x37}, {.addr=0x221a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x221a, .value=0xee, .type=IO_READ},
        {.addr=0x221b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_039F) {
    const struct CPU_State initial_cpu = {.pc=0xcd1a, .a=0x79, .x=0x97, .y=0x2a, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x1f}, {.addr=0xcd1a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xcd1b, .a=0x79, .x=0x97, .y=0x1f, .sp=0x14, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x1f}, {.addr=0xcd1a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xcd1a, .value=0xee, .type=IO_READ},
        {.addr=0xcd1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x047c, .a=0x37, .x=0x3e, .y=0x59, .sp=0x42, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x53}, {.addr=0x047c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x047d, .a=0x37, .x=0x3e, .y=0x53, .sp=0x43, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x53}, {.addr=0x047c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x047c, .value=0xee, .type=IO_READ},
        {.addr=0x047d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xfb18, .a=0x17, .x=0x22, .y=0x69, .sp=0x42, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x9e}, {.addr=0xfb18, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfb19, .a=0x17, .x=0x22, .y=0x9e, .sp=0x43, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x9e}, {.addr=0xfb18, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfb18, .value=0xee, .type=IO_READ},
        {.addr=0xfb19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xdac9, .a=0x08, .x=0xff, .y=0x1d, .sp=0xc4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xae}, {.addr=0xdac9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdaca, .a=0x08, .x=0xff, .y=0xae, .sp=0xc5, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xae}, {.addr=0xdac9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdac9, .value=0xee, .type=IO_READ},
        {.addr=0xdaca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x8b6f, .a=0x07, .x=0xfc, .y=0xba, .sp=0xac, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xbd}, {.addr=0x8b6f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8b70, .a=0x07, .x=0xfc, .y=0xbd, .sp=0xad, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xbd}, {.addr=0x8b6f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8b6f, .value=0xee, .type=IO_READ},
        {.addr=0x8b70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0037, .a=0x60, .x=0xae, .y=0x17, .sp=0x1e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0xee}, {.addr=0x011f, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x0038, .a=0x60, .x=0xae, .y=0xb5, .sp=0x1f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0xee}, {.addr=0x011f, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x0037, .value=0xee, .type=IO_READ},
        {.addr=0x0038, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xf8a0, .a=0x5e, .x=0x70, .y=0xfc, .sp=0x0d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xd8}, {.addr=0xf8a0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf8a1, .a=0x5e, .x=0x70, .y=0xd8, .sp=0x0e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xd8}, {.addr=0xf8a0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf8a0, .value=0xee, .type=IO_READ},
        {.addr=0xf8a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xe655, .a=0x87, .x=0xdd, .y=0xa7, .sp=0xbf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x8a}, {.addr=0xe655, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe656, .a=0x87, .x=0xdd, .y=0x8a, .sp=0xc0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x8a}, {.addr=0xe655, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe655, .value=0xee, .type=IO_READ},
        {.addr=0xe656, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xf79a, .a=0x29, .x=0x0b, .y=0x5b, .sp=0x7b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xe7}, {.addr=0xf79a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf79b, .a=0x29, .x=0x0b, .y=0xe7, .sp=0x7c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xe7}, {.addr=0xf79a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf79a, .value=0xee, .type=IO_READ},
        {.addr=0xf79b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x0c88, .a=0x48, .x=0x04, .y=0x8e, .sp=0xfc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xc5}, {.addr=0x0c88, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0c89, .a=0x48, .x=0x04, .y=0xc5, .sp=0xfd, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xc5}, {.addr=0x0c88, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0c88, .value=0xee, .type=IO_READ},
        {.addr=0x0c89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xee53, .a=0x7e, .x=0x8e, .y=0x72, .sp=0x36, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x87}, {.addr=0xee53, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xee54, .a=0x7e, .x=0x8e, .y=0x87, .sp=0x37, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x87}, {.addr=0xee53, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xee53, .value=0xee, .type=IO_READ},
        {.addr=0xee54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x76d9, .a=0xcc, .x=0xa9, .y=0xd1, .sp=0x9b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xdf}, {.addr=0x76d9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x76da, .a=0xcc, .x=0xa9, .y=0xdf, .sp=0x9c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xdf}, {.addr=0x76d9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x76d9, .value=0xee, .type=IO_READ},
        {.addr=0x76da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x162e, .a=0x30, .x=0x66, .y=0x93, .sp=0x82, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x86}, {.addr=0x162e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x162f, .a=0x30, .x=0x66, .y=0x86, .sp=0x83, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x86}, {.addr=0x162e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x162e, .value=0xee, .type=IO_READ},
        {.addr=0x162f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x9600, .a=0xfc, .x=0xb3, .y=0xa5, .sp=0xb4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xb5}, {.addr=0x9600, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9601, .a=0xfc, .x=0xb3, .y=0xb5, .sp=0xb5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xb5}, {.addr=0x9600, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9600, .value=0xee, .type=IO_READ},
        {.addr=0x9601, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xbf1d, .a=0x4e, .x=0xea, .y=0x4c, .sp=0xc5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xb2}, {.addr=0xbf1d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbf1e, .a=0x4e, .x=0xea, .y=0xb2, .sp=0xc6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xb2}, {.addr=0xbf1d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbf1d, .value=0xee, .type=IO_READ},
        {.addr=0xbf1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x223b, .a=0xf2, .x=0x6f, .y=0x5c, .sp=0x48, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x3f}, {.addr=0x223b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x223c, .a=0xf2, .x=0x6f, .y=0x3f, .sp=0x49, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x3f}, {.addr=0x223b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x223b, .value=0xee, .type=IO_READ},
        {.addr=0x223c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x1e11, .a=0x71, .x=0xa6, .y=0x98, .sp=0x63, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x42}, {.addr=0x1e11, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1e12, .a=0x71, .x=0xa6, .y=0x42, .sp=0x64, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x42}, {.addr=0x1e11, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1e11, .value=0xee, .type=IO_READ},
        {.addr=0x1e12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xba14, .a=0x0b, .x=0xdb, .y=0xe4, .sp=0xea, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x4b}, {.addr=0xba14, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xba15, .a=0x0b, .x=0xdb, .y=0x4b, .sp=0xeb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x4b}, {.addr=0xba14, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xba14, .value=0xee, .type=IO_READ},
        {.addr=0xba15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x8e96, .a=0xcb, .x=0xef, .y=0x69, .sp=0xa6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x6d}, {.addr=0x8e96, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8e97, .a=0xcb, .x=0xef, .y=0x6d, .sp=0xa7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x6d}, {.addr=0x8e96, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8e96, .value=0xee, .type=IO_READ},
        {.addr=0x8e97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x03b8, .a=0xc8, .x=0xf4, .y=0x1e, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x98}, {.addr=0x03b8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x03b9, .a=0xc8, .x=0xf4, .y=0x98, .sp=0xe7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x98}, {.addr=0x03b8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x03b8, .value=0xee, .type=IO_READ},
        {.addr=0x03b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x984f, .a=0x0c, .x=0xbd, .y=0x0d, .sp=0x3a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xec}, {.addr=0x984f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0x0c, .x=0xbd, .y=0xec, .sp=0x3b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xec}, {.addr=0x984f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x984f, .value=0xee, .type=IO_READ},
        {.addr=0x9850, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb544, .a=0x5b, .x=0x36, .y=0x4a, .sp=0x82, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x82}, {.addr=0xb544, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb545, .a=0x5b, .x=0x36, .y=0x82, .sp=0x83, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x82}, {.addr=0xb544, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb544, .value=0xee, .type=IO_READ},
        {.addr=0xb545, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xe2ce, .a=0xdf, .x=0x5c, .y=0x2a, .sp=0xe9, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x5f}, {.addr=0xe2ce, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe2cf, .a=0xdf, .x=0x5c, .y=0x5f, .sp=0xea, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x5f}, {.addr=0xe2ce, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe2ce, .value=0xee, .type=IO_READ},
        {.addr=0xe2cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x8412, .a=0xad, .x=0x69, .y=0x85, .sp=0x1a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xc3}, {.addr=0x8412, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8413, .a=0xad, .x=0x69, .y=0xc3, .sp=0x1b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xc3}, {.addr=0x8412, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8412, .value=0xee, .type=IO_READ},
        {.addr=0x8413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x517f, .a=0x9c, .x=0x41, .y=0x09, .sp=0x3e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xf5}, {.addr=0x517f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5180, .a=0x9c, .x=0x41, .y=0xf5, .sp=0x3f, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xf5}, {.addr=0x517f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x517f, .value=0xee, .type=IO_READ},
        {.addr=0x5180, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xe9d9, .a=0x84, .x=0xa3, .y=0xa1, .sp=0xfd, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x13}, {.addr=0xe9d9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe9da, .a=0x84, .x=0xa3, .y=0x13, .sp=0xfe, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x13}, {.addr=0xe9d9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe9d9, .value=0xee, .type=IO_READ},
        {.addr=0xe9da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x9617, .a=0x71, .x=0x4d, .y=0x70, .sp=0x6b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x9f}, {.addr=0x9617, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9618, .a=0x71, .x=0x4d, .y=0x9f, .sp=0x6c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x9f}, {.addr=0x9617, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9617, .value=0xee, .type=IO_READ},
        {.addr=0x9618, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5dae, .a=0x15, .x=0x25, .y=0xb7, .sp=0x0b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x4c}, {.addr=0x5dae, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5daf, .a=0x15, .x=0x25, .y=0x4c, .sp=0x0c, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x4c}, {.addr=0x5dae, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5dae, .value=0xee, .type=IO_READ},
        {.addr=0x5daf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x93a6, .a=0xab, .x=0x18, .y=0xa3, .sp=0x54, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x5c}, {.addr=0x93a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x93a7, .a=0xab, .x=0x18, .y=0x5c, .sp=0x55, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x5c}, {.addr=0x93a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x93a6, .value=0xee, .type=IO_READ},
        {.addr=0x93a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x97e4, .a=0x01, .x=0xc4, .y=0x3c, .sp=0x0b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x30}, {.addr=0x97e4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x97e5, .a=0x01, .x=0xc4, .y=0x30, .sp=0x0c, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x30}, {.addr=0x97e4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x97e4, .value=0xee, .type=IO_READ},
        {.addr=0x97e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x7b64, .a=0x46, .x=0x60, .y=0xab, .sp=0x20, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xdf}, {.addr=0x7b64, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7b65, .a=0x46, .x=0x60, .y=0xdf, .sp=0x21, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xdf}, {.addr=0x7b64, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7b64, .value=0xee, .type=IO_READ},
        {.addr=0x7b65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xc5f0, .a=0x6d, .x=0x2b, .y=0x10, .sp=0x11, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x27}, {.addr=0xc5f0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc5f1, .a=0x6d, .x=0x2b, .y=0x27, .sp=0x12, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x27}, {.addr=0xc5f0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc5f0, .value=0xee, .type=IO_READ},
        {.addr=0xc5f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xfff9, .a=0x2a, .x=0x88, .y=0x1f, .sp=0xab, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x46}, {.addr=0xfff9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfffa, .a=0x2a, .x=0x88, .y=0x46, .sp=0xac, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x46}, {.addr=0xfff9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfff9, .value=0xee, .type=IO_READ},
        {.addr=0xfffa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x8cfd, .a=0xf2, .x=0xad, .y=0x53, .sp=0x85, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xa0}, {.addr=0x8cfd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8cfe, .a=0xf2, .x=0xad, .y=0xa0, .sp=0x86, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xa0}, {.addr=0x8cfd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8cfd, .value=0xee, .type=IO_READ},
        {.addr=0x8cfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x21b9, .a=0x40, .x=0x54, .y=0x32, .sp=0xef, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xd9}, {.addr=0x21b9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x21ba, .a=0x40, .x=0x54, .y=0xd9, .sp=0xf0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xd9}, {.addr=0x21b9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x21b9, .value=0xee, .type=IO_READ},
        {.addr=0x21ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x689b, .a=0x8d, .x=0xc3, .y=0x18, .sp=0x08, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xf8}, {.addr=0x689b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x689c, .a=0x8d, .x=0xc3, .y=0xf8, .sp=0x09, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xf8}, {.addr=0x689b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x689b, .value=0xee, .type=IO_READ},
        {.addr=0x689c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x5bd0, .a=0xb5, .x=0xb8, .y=0xf5, .sp=0x04, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xf8}, {.addr=0x5bd0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5bd1, .a=0xb5, .x=0xb8, .y=0xf8, .sp=0x05, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xf8}, {.addr=0x5bd0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5bd0, .value=0xee, .type=IO_READ},
        {.addr=0x5bd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x5b94, .a=0x49, .x=0x76, .y=0x91, .sp=0x2f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x21}, {.addr=0x5b94, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5b95, .a=0x49, .x=0x76, .y=0x21, .sp=0x30, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x21}, {.addr=0x5b94, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5b94, .value=0xee, .type=IO_READ},
        {.addr=0x5b95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x1673, .a=0x58, .x=0xd3, .y=0x9c, .sp=0xe7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x49}, {.addr=0x1673, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1674, .a=0x58, .x=0xd3, .y=0x49, .sp=0xe8, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x49}, {.addr=0x1673, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1673, .value=0xee, .type=IO_READ},
        {.addr=0x1674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x9f76, .a=0xf6, .x=0x23, .y=0xf5, .sp=0x13, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x18}, {.addr=0x9f76, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9f77, .a=0xf6, .x=0x23, .y=0x18, .sp=0x14, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x18}, {.addr=0x9f76, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9f76, .value=0xee, .type=IO_READ},
        {.addr=0x9f77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xbe5a, .a=0x9f, .x=0x65, .y=0x5e, .sp=0xa7, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xcd}, {.addr=0xbe5a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbe5b, .a=0x9f, .x=0x65, .y=0xcd, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xcd}, {.addr=0xbe5a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbe5a, .value=0xee, .type=IO_READ},
        {.addr=0xbe5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x98a2, .a=0xa9, .x=0x8c, .y=0xa9, .sp=0xdf, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x13}, {.addr=0x98a2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x98a3, .a=0xa9, .x=0x8c, .y=0x13, .sp=0xe0, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x13}, {.addr=0x98a2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x98a2, .value=0xee, .type=IO_READ},
        {.addr=0x98a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x83b4, .a=0xb1, .x=0x08, .y=0xb4, .sp=0x7d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xe7}, {.addr=0x83b4, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x83b5, .a=0xb1, .x=0x08, .y=0xe7, .sp=0x7e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xe7}, {.addr=0x83b4, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x83b4, .value=0xee, .type=IO_READ},
        {.addr=0x83b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7b73, .a=0x39, .x=0xca, .y=0x41, .sp=0x4f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc6}, {.addr=0x7b73, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7b74, .a=0x39, .x=0xca, .y=0xc6, .sp=0x50, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc6}, {.addr=0x7b73, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7b73, .value=0xee, .type=IO_READ},
        {.addr=0x7b74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x1785, .a=0x03, .x=0xbe, .y=0x49, .sp=0x72, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xb9}, {.addr=0x1785, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1786, .a=0x03, .x=0xbe, .y=0xb9, .sp=0x73, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xb9}, {.addr=0x1785, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1785, .value=0xee, .type=IO_READ},
        {.addr=0x1786, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x4fdc, .a=0xce, .x=0x67, .y=0x72, .sp=0x0e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x19}, {.addr=0x4fdc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4fdd, .a=0xce, .x=0x67, .y=0x19, .sp=0x0f, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x19}, {.addr=0x4fdc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4fdc, .value=0xee, .type=IO_READ},
        {.addr=0x4fdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x0153, .a=0xfe, .x=0x2c, .y=0x23, .sp=0x43, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xea}, {.addr=0x0153, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0154, .a=0xfe, .x=0x2c, .y=0xea, .sp=0x44, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xea}, {.addr=0x0153, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0153, .value=0xee, .type=IO_READ},
        {.addr=0x0154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x7cef, .a=0x2f, .x=0xcd, .y=0xb1, .sp=0x96, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x79}, {.addr=0x7cef, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7cf0, .a=0x2f, .x=0xcd, .y=0x79, .sp=0x97, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x79}, {.addr=0x7cef, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7cef, .value=0xee, .type=IO_READ},
        {.addr=0x7cf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x349c, .a=0x9e, .x=0xe5, .y=0x2b, .sp=0x12, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x65}, {.addr=0x349c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x349d, .a=0x9e, .x=0xe5, .y=0x65, .sp=0x13, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x65}, {.addr=0x349c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x349c, .value=0xee, .type=IO_READ},
        {.addr=0x349d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x3608, .a=0x9c, .x=0x52, .y=0x30, .sp=0xd1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x40}, {.addr=0x3608, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3609, .a=0x9c, .x=0x52, .y=0x40, .sp=0xd2, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x40}, {.addr=0x3608, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3608, .value=0xee, .type=IO_READ},
        {.addr=0x3609, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa0b3, .a=0x32, .x=0x2d, .y=0x9d, .sp=0xb3, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x31}, {.addr=0xa0b3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa0b4, .a=0x32, .x=0x2d, .y=0x31, .sp=0xb4, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x31}, {.addr=0xa0b3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa0b3, .value=0xee, .type=IO_READ},
        {.addr=0xa0b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x2148, .a=0x1f, .x=0xb0, .y=0x6a, .sp=0x0f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xe6}, {.addr=0x2148, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2149, .a=0x1f, .x=0xb0, .y=0xe6, .sp=0x10, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xe6}, {.addr=0x2148, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2148, .value=0xee, .type=IO_READ},
        {.addr=0x2149, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xb4c7, .a=0xde, .x=0x6a, .y=0x1c, .sp=0x21, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x14}, {.addr=0xb4c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb4c8, .a=0xde, .x=0x6a, .y=0x14, .sp=0x22, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x14}, {.addr=0xb4c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb4c7, .value=0xee, .type=IO_READ},
        {.addr=0xb4c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x7ce8, .a=0xec, .x=0x3d, .y=0x10, .sp=0x14, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x35}, {.addr=0x7ce8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7ce9, .a=0xec, .x=0x3d, .y=0x35, .sp=0x15, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x35}, {.addr=0x7ce8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7ce8, .value=0xee, .type=IO_READ},
        {.addr=0x7ce9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x2288, .a=0xed, .x=0xa7, .y=0x4b, .sp=0x0d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x0c}, {.addr=0x2288, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2289, .a=0xed, .x=0xa7, .y=0x0c, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x0c}, {.addr=0x2288, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2288, .value=0xee, .type=IO_READ},
        {.addr=0x2289, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x0bfd, .a=0x64, .x=0x55, .y=0xfe, .sp=0xcb, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x74}, {.addr=0x0bfd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0bfe, .a=0x64, .x=0x55, .y=0x74, .sp=0xcc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x74}, {.addr=0x0bfd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0bfd, .value=0xee, .type=IO_READ},
        {.addr=0x0bfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x118e, .a=0xda, .x=0x63, .y=0xfa, .sp=0xe1, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x67}, {.addr=0x118e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x118f, .a=0xda, .x=0x63, .y=0x67, .sp=0xe2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x67}, {.addr=0x118e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x118e, .value=0xee, .type=IO_READ},
        {.addr=0x118f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x7c64, .a=0x7a, .x=0x8b, .y=0xd8, .sp=0x2f, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xed}, {.addr=0x7c64, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7c65, .a=0x7a, .x=0x8b, .y=0xed, .sp=0x30, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xed}, {.addr=0x7c64, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7c64, .value=0xee, .type=IO_READ},
        {.addr=0x7c65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x0b19, .a=0x63, .x=0x96, .y=0x29, .sp=0x4f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x63}, {.addr=0x0b19, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b1a, .a=0x63, .x=0x96, .y=0x63, .sp=0x50, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x63}, {.addr=0x0b19, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b19, .value=0xee, .type=IO_READ},
        {.addr=0x0b1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x662d, .a=0x6e, .x=0x0c, .y=0xd5, .sp=0xf8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x71}, {.addr=0x662d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x662e, .a=0x6e, .x=0x0c, .y=0x71, .sp=0xf9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x71}, {.addr=0x662d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x662d, .value=0xee, .type=IO_READ},
        {.addr=0x662e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x5108, .a=0xf0, .x=0x3f, .y=0x85, .sp=0x57, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xfa}, {.addr=0x5108, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5109, .a=0xf0, .x=0x3f, .y=0xfa, .sp=0x58, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xfa}, {.addr=0x5108, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5108, .value=0xee, .type=IO_READ},
        {.addr=0x5109, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xdd75, .a=0x35, .x=0xb6, .y=0xda, .sp=0x08, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x72}, {.addr=0xdd75, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdd76, .a=0x35, .x=0xb6, .y=0x72, .sp=0x09, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x72}, {.addr=0xdd75, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdd75, .value=0xee, .type=IO_READ},
        {.addr=0xdd76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x602a, .a=0xb7, .x=0xae, .y=0x00, .sp=0xcc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xb0}, {.addr=0x602a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x602b, .a=0xb7, .x=0xae, .y=0xb0, .sp=0xcd, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xb0}, {.addr=0x602a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x602a, .value=0xee, .type=IO_READ},
        {.addr=0x602b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x0497, .a=0x75, .x=0x95, .y=0xcf, .sp=0xa4, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x5a}, {.addr=0x0497, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0498, .a=0x75, .x=0x95, .y=0x5a, .sp=0xa5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x5a}, {.addr=0x0497, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0497, .value=0xee, .type=IO_READ},
        {.addr=0x0498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xc561, .a=0x1d, .x=0xc6, .y=0x37, .sp=0x80, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x40}, {.addr=0xc561, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc562, .a=0x1d, .x=0xc6, .y=0x40, .sp=0x81, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x40}, {.addr=0xc561, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc561, .value=0xee, .type=IO_READ},
        {.addr=0xc562, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x051e, .a=0x66, .x=0xcb, .y=0xa2, .sp=0xd0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x8c}, {.addr=0x051e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x051f, .a=0x66, .x=0xcb, .y=0x8c, .sp=0xd1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x8c}, {.addr=0x051e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x051e, .value=0xee, .type=IO_READ},
        {.addr=0x051f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xae72, .a=0x29, .x=0x90, .y=0x6b, .sp=0x0b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xaa}, {.addr=0xae72, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xae73, .a=0x29, .x=0x90, .y=0xaa, .sp=0x0c, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xaa}, {.addr=0xae72, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xae72, .value=0xee, .type=IO_READ},
        {.addr=0xae73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x9258, .a=0xf9, .x=0xb4, .y=0x93, .sp=0x8e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0x9258, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9259, .a=0xf9, .x=0xb4, .y=0xb1, .sp=0x8f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0x9258, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9258, .value=0xee, .type=IO_READ},
        {.addr=0x9259, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x4f74, .a=0x72, .x=0x3c, .y=0x03, .sp=0x23, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x6d}, {.addr=0x4f74, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4f75, .a=0x72, .x=0x3c, .y=0x6d, .sp=0x24, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x6d}, {.addr=0x4f74, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4f74, .value=0xee, .type=IO_READ},
        {.addr=0x4f75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x8e4e, .a=0x95, .x=0x0d, .y=0x8f, .sp=0xc7, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x2e}, {.addr=0x8e4e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8e4f, .a=0x95, .x=0x0d, .y=0x2e, .sp=0xc8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x2e}, {.addr=0x8e4e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8e4e, .value=0xee, .type=IO_READ},
        {.addr=0x8e4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc4b3, .a=0x07, .x=0x49, .y=0x08, .sp=0xdf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x64}, {.addr=0xc4b3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc4b4, .a=0x07, .x=0x49, .y=0x64, .sp=0xe0, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x64}, {.addr=0xc4b3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc4b3, .value=0xee, .type=IO_READ},
        {.addr=0xc4b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xac7e, .a=0x56, .x=0x3e, .y=0x00, .sp=0x44, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x8b}, {.addr=0xac7e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xac7f, .a=0x56, .x=0x3e, .y=0x8b, .sp=0x45, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x8b}, {.addr=0xac7e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xac7e, .value=0xee, .type=IO_READ},
        {.addr=0xac7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EE, _EE_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x4501, .a=0x0f, .x=0x15, .y=0x40, .sp=0x3d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x9b}, {.addr=0x4501, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4502, .a=0x0f, .x=0x15, .y=0x9b, .sp=0x3e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x9b}, {.addr=0x4501, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4501, .value=0xee, .type=IO_READ},
        {.addr=0x4502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EE 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
