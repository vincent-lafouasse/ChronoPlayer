#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_CD, _CD_0000) {
    const struct CPU_State initial_cpu = {.pc=0x0436, .a=0xf5, .x=0xa7, .y=0x02, .sp=0x88, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0436, .value=0xcd}, {.addr=0x0437, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0438, .a=0xf5, .x=0x03, .y=0x02, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0436, .value=0xcd}, {.addr=0x0437, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0436, .value=0xcd, .type=IO_READ},
        {.addr=0x0437, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0001) {
    const struct CPU_State initial_cpu = {.pc=0x4dd4, .a=0x51, .x=0x63, .y=0x47, .sp=0xc1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd4, .value=0xcd}, {.addr=0x4dd5, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4dd6, .a=0x51, .x=0xbe, .y=0x47, .sp=0xc1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4dd4, .value=0xcd}, {.addr=0x4dd5, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4dd4, .value=0xcd, .type=IO_READ},
        {.addr=0x4dd5, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0002) {
    const struct CPU_State initial_cpu = {.pc=0x040f, .a=0xb7, .x=0x63, .y=0xfd, .sp=0xf7, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x040f, .value=0xcd}, {.addr=0x0410, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x0411, .a=0xb7, .x=0x0e, .y=0xfd, .sp=0xf7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x040f, .value=0xcd}, {.addr=0x0410, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x040f, .value=0xcd, .type=IO_READ},
        {.addr=0x0410, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0003) {
    const struct CPU_State initial_cpu = {.pc=0x563f, .a=0x52, .x=0x13, .y=0x42, .sp=0x6b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x563f, .value=0xcd}, {.addr=0x5640, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5641, .a=0x52, .x=0xbc, .y=0x42, .sp=0x6b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x563f, .value=0xcd}, {.addr=0x5640, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x563f, .value=0xcd, .type=IO_READ},
        {.addr=0x5640, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0004) {
    const struct CPU_State initial_cpu = {.pc=0x9fcd, .a=0xc2, .x=0xff, .y=0x8e, .sp=0x27, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9fcd, .value=0xcd}, {.addr=0x9fce, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9fcf, .a=0xc2, .x=0xa6, .y=0x8e, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9fcd, .value=0xcd}, {.addr=0x9fce, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9fcd, .value=0xcd, .type=IO_READ},
        {.addr=0x9fce, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0005) {
    const struct CPU_State initial_cpu = {.pc=0x2ddc, .a=0x0c, .x=0x21, .y=0x12, .sp=0x29, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2ddc, .value=0xcd}, {.addr=0x2ddd, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x2dde, .a=0x0c, .x=0x62, .y=0x12, .sp=0x29, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2ddc, .value=0xcd}, {.addr=0x2ddd, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x2ddc, .value=0xcd, .type=IO_READ},
        {.addr=0x2ddd, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0006) {
    const struct CPU_State initial_cpu = {.pc=0x19b8, .a=0x0f, .x=0xc4, .y=0x06, .sp=0xf4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x19b8, .value=0xcd}, {.addr=0x19b9, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x19ba, .a=0x0f, .x=0x6f, .y=0x06, .sp=0xf4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x19b8, .value=0xcd}, {.addr=0x19b9, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x19b8, .value=0xcd, .type=IO_READ},
        {.addr=0x19b9, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0007) {
    const struct CPU_State initial_cpu = {.pc=0xfa3e, .a=0x7a, .x=0xcb, .y=0xf2, .sp=0x01, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3e, .value=0xcd}, {.addr=0xfa3f, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xfa40, .a=0x7a, .x=0x04, .y=0xf2, .sp=0x01, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xfa3e, .value=0xcd}, {.addr=0xfa3f, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xfa3e, .value=0xcd, .type=IO_READ},
        {.addr=0xfa3f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0008) {
    const struct CPU_State initial_cpu = {.pc=0xe463, .a=0x07, .x=0xff, .y=0xcf, .sp=0xe4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xe463, .value=0xcd}, {.addr=0xe464, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xe465, .a=0x07, .x=0xb0, .y=0xcf, .sp=0xe4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe463, .value=0xcd}, {.addr=0xe464, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xe463, .value=0xcd, .type=IO_READ},
        {.addr=0xe464, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0009) {
    const struct CPU_State initial_cpu = {.pc=0xa67e, .a=0x3f, .x=0x58, .y=0x6d, .sp=0x6d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa67e, .value=0xcd}, {.addr=0xa67f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xa680, .a=0x3f, .x=0xba, .y=0x6d, .sp=0x6d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa67e, .value=0xcd}, {.addr=0xa67f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xa67e, .value=0xcd, .type=IO_READ},
        {.addr=0xa67f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000A) {
    const struct CPU_State initial_cpu = {.pc=0x67d8, .a=0x71, .x=0x7d, .y=0x14, .sp=0x1a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x67d8, .value=0xcd}, {.addr=0x67d9, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x67da, .a=0x71, .x=0x04, .y=0x14, .sp=0x1a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x67d8, .value=0xcd}, {.addr=0x67d9, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x67d8, .value=0xcd, .type=IO_READ},
        {.addr=0x67d9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000B) {
    const struct CPU_State initial_cpu = {.pc=0xe25e, .a=0x8c, .x=0x11, .y=0xb3, .sp=0x52, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe25e, .value=0xcd}, {.addr=0xe25f, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xe260, .a=0x8c, .x=0x9b, .y=0xb3, .sp=0x52, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe25e, .value=0xcd}, {.addr=0xe25f, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xe25e, .value=0xcd, .type=IO_READ},
        {.addr=0xe25f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000C) {
    const struct CPU_State initial_cpu = {.pc=0x4df8, .a=0x83, .x=0xc8, .y=0x23, .sp=0x53, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4df8, .value=0xcd}, {.addr=0x4df9, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x4dfa, .a=0x83, .x=0x52, .y=0x23, .sp=0x53, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4df8, .value=0xcd}, {.addr=0x4df9, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x4df8, .value=0xcd, .type=IO_READ},
        {.addr=0x4df9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000D) {
    const struct CPU_State initial_cpu = {.pc=0x7976, .a=0x90, .x=0xf2, .y=0x80, .sp=0x41, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7976, .value=0xcd}, {.addr=0x7977, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x7978, .a=0x90, .x=0x6a, .y=0x80, .sp=0x41, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7976, .value=0xcd}, {.addr=0x7977, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x7976, .value=0xcd, .type=IO_READ},
        {.addr=0x7977, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000E) {
    const struct CPU_State initial_cpu = {.pc=0xc007, .a=0x26, .x=0xfa, .y=0xb0, .sp=0x34, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc007, .value=0xcd}, {.addr=0xc008, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xc009, .a=0x26, .x=0x1e, .y=0xb0, .sp=0x34, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc007, .value=0xcd}, {.addr=0xc008, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xc007, .value=0xcd, .type=IO_READ},
        {.addr=0xc008, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_000F) {
    const struct CPU_State initial_cpu = {.pc=0xc2ea, .a=0x17, .x=0x2f, .y=0x9d, .sp=0x22, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ea, .value=0xcd}, {.addr=0xc2eb, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0x17, .x=0xe5, .y=0x9d, .sp=0x22, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc2ea, .value=0xcd}, {.addr=0xc2eb, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xc2ea, .value=0xcd, .type=IO_READ},
        {.addr=0xc2eb, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0010) {
    const struct CPU_State initial_cpu = {.pc=0x5cac, .a=0x30, .x=0xb1, .y=0xb4, .sp=0x7d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5cac, .value=0xcd}, {.addr=0x5cad, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x5cae, .a=0x30, .x=0xac, .y=0xb4, .sp=0x7d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5cac, .value=0xcd}, {.addr=0x5cad, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x5cac, .value=0xcd, .type=IO_READ},
        {.addr=0x5cad, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0011) {
    const struct CPU_State initial_cpu = {.pc=0x1e9e, .a=0xcb, .x=0x5b, .y=0x25, .sp=0x1b, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9e, .value=0xcd}, {.addr=0x1e9f, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x1ea0, .a=0xcb, .x=0xe4, .y=0x25, .sp=0x1b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1e9e, .value=0xcd}, {.addr=0x1e9f, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1e9e, .value=0xcd, .type=IO_READ},
        {.addr=0x1e9f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0012) {
    const struct CPU_State initial_cpu = {.pc=0x3bcd, .a=0xbd, .x=0xef, .y=0x18, .sp=0xfd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x3bcd, .value=0xcd}, {.addr=0x3bce, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3bcf, .a=0xbd, .x=0xbc, .y=0x18, .sp=0xfd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3bcd, .value=0xcd}, {.addr=0x3bce, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3bcd, .value=0xcd, .type=IO_READ},
        {.addr=0x3bce, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0013) {
    const struct CPU_State initial_cpu = {.pc=0xb321, .a=0x4f, .x=0xd6, .y=0x9d, .sp=0xa6, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb321, .value=0xcd}, {.addr=0xb322, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xb323, .a=0x4f, .x=0x62, .y=0x9d, .sp=0xa6, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb321, .value=0xcd}, {.addr=0xb322, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xb321, .value=0xcd, .type=IO_READ},
        {.addr=0xb322, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0014) {
    const struct CPU_State initial_cpu = {.pc=0x0058, .a=0x31, .x=0x3a, .y=0xef, .sp=0x71, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0xcd}, {.addr=0x0059, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x005a, .a=0x31, .x=0x4e, .y=0xef, .sp=0x71, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xcd}, {.addr=0x0059, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0058, .value=0xcd, .type=IO_READ},
        {.addr=0x0059, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0015) {
    const struct CPU_State initial_cpu = {.pc=0x63aa, .a=0xb8, .x=0xbc, .y=0x85, .sp=0xfc, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x63aa, .value=0xcd}, {.addr=0x63ab, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x63ac, .a=0xb8, .x=0xc5, .y=0x85, .sp=0xfc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x63aa, .value=0xcd}, {.addr=0x63ab, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x63aa, .value=0xcd, .type=IO_READ},
        {.addr=0x63ab, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0016) {
    const struct CPU_State initial_cpu = {.pc=0xda26, .a=0xa4, .x=0xe9, .y=0xf1, .sp=0x98, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xda26, .value=0xcd}, {.addr=0xda27, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xda28, .a=0xa4, .x=0x55, .y=0xf1, .sp=0x98, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xda26, .value=0xcd}, {.addr=0xda27, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xda26, .value=0xcd, .type=IO_READ},
        {.addr=0xda27, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0017) {
    const struct CPU_State initial_cpu = {.pc=0x94b9, .a=0xad, .x=0x88, .y=0x40, .sp=0x80, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x94b9, .value=0xcd}, {.addr=0x94ba, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x94bb, .a=0xad, .x=0xa9, .y=0x40, .sp=0x80, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x94b9, .value=0xcd}, {.addr=0x94ba, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x94b9, .value=0xcd, .type=IO_READ},
        {.addr=0x94ba, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0018) {
    const struct CPU_State initial_cpu = {.pc=0x9f84, .a=0x7c, .x=0x09, .y=0x7f, .sp=0xdc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9f84, .value=0xcd}, {.addr=0x9f85, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x9f86, .a=0x7c, .x=0x7f, .y=0x7f, .sp=0xdc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9f84, .value=0xcd}, {.addr=0x9f85, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x9f84, .value=0xcd, .type=IO_READ},
        {.addr=0x9f85, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1ac0, .a=0x5f, .x=0x4b, .y=0x6f, .sp=0x4a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac0, .value=0xcd}, {.addr=0x1ac1, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x1ac2, .a=0x5f, .x=0x08, .y=0x6f, .sp=0x4a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1ac0, .value=0xcd}, {.addr=0x1ac1, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x1ac0, .value=0xcd, .type=IO_READ},
        {.addr=0x1ac1, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001A) {
    const struct CPU_State initial_cpu = {.pc=0x5a4e, .a=0xc9, .x=0xae, .y=0xb8, .sp=0x55, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5a4e, .value=0xcd}, {.addr=0x5a4f, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x5a50, .a=0xc9, .x=0xff, .y=0xb8, .sp=0x55, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5a4e, .value=0xcd}, {.addr=0x5a4f, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x5a4e, .value=0xcd, .type=IO_READ},
        {.addr=0x5a4f, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001B) {
    const struct CPU_State initial_cpu = {.pc=0x7f27, .a=0x7a, .x=0x97, .y=0x17, .sp=0x83, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7f27, .value=0xcd}, {.addr=0x7f28, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x7f29, .a=0x7a, .x=0x6b, .y=0x17, .sp=0x83, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7f27, .value=0xcd}, {.addr=0x7f28, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x7f27, .value=0xcd, .type=IO_READ},
        {.addr=0x7f28, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001C) {
    const struct CPU_State initial_cpu = {.pc=0x6fed, .a=0xab, .x=0x95, .y=0x28, .sp=0x67, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6fed, .value=0xcd}, {.addr=0x6fee, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x6fef, .a=0xab, .x=0x39, .y=0x28, .sp=0x67, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6fed, .value=0xcd}, {.addr=0x6fee, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6fed, .value=0xcd, .type=IO_READ},
        {.addr=0x6fee, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001D) {
    const struct CPU_State initial_cpu = {.pc=0xeccc, .a=0x31, .x=0x84, .y=0xcd, .sp=0xe8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xeccc, .value=0xcd}, {.addr=0xeccd, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xecce, .a=0x31, .x=0xfe, .y=0xcd, .sp=0xe8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xeccc, .value=0xcd}, {.addr=0xeccd, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xeccc, .value=0xcd, .type=IO_READ},
        {.addr=0xeccd, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001E) {
    const struct CPU_State initial_cpu = {.pc=0x365f, .a=0x3e, .x=0xe3, .y=0xdf, .sp=0x18, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x365f, .value=0xcd}, {.addr=0x3660, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x3661, .a=0x3e, .x=0xe1, .y=0xdf, .sp=0x18, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x365f, .value=0xcd}, {.addr=0x3660, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x365f, .value=0xcd, .type=IO_READ},
        {.addr=0x3660, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa704, .a=0x67, .x=0xf1, .y=0x71, .sp=0xec, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa704, .value=0xcd}, {.addr=0xa705, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xa706, .a=0x67, .x=0x79, .y=0x71, .sp=0xec, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa704, .value=0xcd}, {.addr=0xa705, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xa704, .value=0xcd, .type=IO_READ},
        {.addr=0xa705, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0020) {
    const struct CPU_State initial_cpu = {.pc=0x85ca, .a=0xe0, .x=0x28, .y=0x40, .sp=0x7a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x85ca, .value=0xcd}, {.addr=0x85cb, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x85cc, .a=0xe0, .x=0x34, .y=0x40, .sp=0x7a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x85ca, .value=0xcd}, {.addr=0x85cb, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x85ca, .value=0xcd, .type=IO_READ},
        {.addr=0x85cb, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5237, .a=0xa0, .x=0x2f, .y=0xe0, .sp=0x73, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5237, .value=0xcd}, {.addr=0x5238, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x5239, .a=0xa0, .x=0x47, .y=0xe0, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5237, .value=0xcd}, {.addr=0x5238, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x5237, .value=0xcd, .type=IO_READ},
        {.addr=0x5238, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0022) {
    const struct CPU_State initial_cpu = {.pc=0xd60f, .a=0xa8, .x=0x5c, .y=0xe5, .sp=0x26, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd60f, .value=0xcd}, {.addr=0xd610, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xd611, .a=0xa8, .x=0x9e, .y=0xe5, .sp=0x26, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd60f, .value=0xcd}, {.addr=0xd610, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xd60f, .value=0xcd, .type=IO_READ},
        {.addr=0xd610, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0023) {
    const struct CPU_State initial_cpu = {.pc=0x80c0, .a=0xf8, .x=0xab, .y=0xea, .sp=0x2a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x80c0, .value=0xcd}, {.addr=0x80c1, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x80c2, .a=0xf8, .x=0xf5, .y=0xea, .sp=0x2a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x80c0, .value=0xcd}, {.addr=0x80c1, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x80c0, .value=0xcd, .type=IO_READ},
        {.addr=0x80c1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0024) {
    const struct CPU_State initial_cpu = {.pc=0xa5ac, .a=0x61, .x=0xb1, .y=0x19, .sp=0x83, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ac, .value=0xcd}, {.addr=0xa5ad, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xa5ae, .a=0x61, .x=0x4c, .y=0x19, .sp=0x83, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa5ac, .value=0xcd}, {.addr=0xa5ad, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xa5ac, .value=0xcd, .type=IO_READ},
        {.addr=0xa5ad, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0025) {
    const struct CPU_State initial_cpu = {.pc=0xc3d9, .a=0x21, .x=0xe6, .y=0x17, .sp=0x64, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d9, .value=0xcd}, {.addr=0xc3da, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0x21, .x=0x77, .y=0x17, .sp=0x64, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc3d9, .value=0xcd}, {.addr=0xc3da, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc3d9, .value=0xcd, .type=IO_READ},
        {.addr=0xc3da, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4a8e, .a=0xa2, .x=0xe8, .y=0x73, .sp=0x1a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4a8e, .value=0xcd}, {.addr=0x4a8f, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x4a90, .a=0xa2, .x=0x47, .y=0x73, .sp=0x1a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4a8e, .value=0xcd}, {.addr=0x4a8f, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x4a8e, .value=0xcd, .type=IO_READ},
        {.addr=0x4a8f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0027) {
    const struct CPU_State initial_cpu = {.pc=0x75c2, .a=0x03, .x=0xb2, .y=0x03, .sp=0x0b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x75c2, .value=0xcd}, {.addr=0x75c3, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x75c4, .a=0x03, .x=0x3e, .y=0x03, .sp=0x0b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x75c2, .value=0xcd}, {.addr=0x75c3, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x75c2, .value=0xcd, .type=IO_READ},
        {.addr=0x75c3, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0028) {
    const struct CPU_State initial_cpu = {.pc=0x20b9, .a=0x4c, .x=0xbe, .y=0x01, .sp=0xe9, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x20b9, .value=0xcd}, {.addr=0x20ba, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x20bb, .a=0x4c, .x=0x75, .y=0x01, .sp=0xe9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x20b9, .value=0xcd}, {.addr=0x20ba, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x20b9, .value=0xcd, .type=IO_READ},
        {.addr=0x20ba, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0029) {
    const struct CPU_State initial_cpu = {.pc=0x3b55, .a=0x25, .x=0x3b, .y=0x0a, .sp=0x20, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b55, .value=0xcd}, {.addr=0x3b56, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x3b57, .a=0x25, .x=0xc7, .y=0x0a, .sp=0x20, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3b55, .value=0xcd}, {.addr=0x3b56, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x3b55, .value=0xcd, .type=IO_READ},
        {.addr=0x3b56, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002A) {
    const struct CPU_State initial_cpu = {.pc=0xe475, .a=0x3d, .x=0xe4, .y=0x4a, .sp=0xb9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xe475, .value=0xcd}, {.addr=0xe476, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe477, .a=0x3d, .x=0x84, .y=0x4a, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe475, .value=0xcd}, {.addr=0xe476, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe475, .value=0xcd, .type=IO_READ},
        {.addr=0xe476, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002B) {
    const struct CPU_State initial_cpu = {.pc=0xee9b, .a=0x45, .x=0x4e, .y=0x1f, .sp=0xa2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xee9b, .value=0xcd}, {.addr=0xee9c, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xee9d, .a=0x45, .x=0x18, .y=0x1f, .sp=0xa2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xee9b, .value=0xcd}, {.addr=0xee9c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xee9b, .value=0xcd, .type=IO_READ},
        {.addr=0xee9c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002C) {
    const struct CPU_State initial_cpu = {.pc=0xb2f8, .a=0x75, .x=0x55, .y=0x2e, .sp=0xd5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f8, .value=0xcd}, {.addr=0xb2f9, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xb2fa, .a=0x75, .x=0x4a, .y=0x2e, .sp=0xd5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb2f8, .value=0xcd}, {.addr=0xb2f9, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xb2f8, .value=0xcd, .type=IO_READ},
        {.addr=0xb2f9, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002D) {
    const struct CPU_State initial_cpu = {.pc=0xbffa, .a=0xd5, .x=0xce, .y=0xd9, .sp=0x4b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbffa, .value=0xcd}, {.addr=0xbffb, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xbffc, .a=0xd5, .x=0x03, .y=0xd9, .sp=0x4b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbffa, .value=0xcd}, {.addr=0xbffb, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xbffa, .value=0xcd, .type=IO_READ},
        {.addr=0xbffb, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002E) {
    const struct CPU_State initial_cpu = {.pc=0xeed1, .a=0x08, .x=0xbd, .y=0xd2, .sp=0xa2, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xeed1, .value=0xcd}, {.addr=0xeed2, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xeed3, .a=0x08, .x=0x07, .y=0xd2, .sp=0xa2, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xeed1, .value=0xcd}, {.addr=0xeed2, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xeed1, .value=0xcd, .type=IO_READ},
        {.addr=0xeed2, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_002F) {
    const struct CPU_State initial_cpu = {.pc=0x3edd, .a=0x32, .x=0x16, .y=0xa3, .sp=0x00, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3edd, .value=0xcd}, {.addr=0x3ede, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x3edf, .a=0x32, .x=0x83, .y=0xa3, .sp=0x00, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3edd, .value=0xcd}, {.addr=0x3ede, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x3edd, .value=0xcd, .type=IO_READ},
        {.addr=0x3ede, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0030) {
    const struct CPU_State initial_cpu = {.pc=0xd453, .a=0x8d, .x=0xd7, .y=0xf8, .sp=0x09, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd453, .value=0xcd}, {.addr=0xd454, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd455, .a=0x8d, .x=0x60, .y=0xf8, .sp=0x09, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd453, .value=0xcd}, {.addr=0xd454, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd453, .value=0xcd, .type=IO_READ},
        {.addr=0xd454, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0031) {
    const struct CPU_State initial_cpu = {.pc=0xff0f, .a=0xe5, .x=0xa3, .y=0x43, .sp=0xd8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xff0f, .value=0xcd}, {.addr=0xff10, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xff11, .a=0xe5, .x=0x41, .y=0x43, .sp=0xd8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xff0f, .value=0xcd}, {.addr=0xff10, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xff0f, .value=0xcd, .type=IO_READ},
        {.addr=0xff10, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0032) {
    const struct CPU_State initial_cpu = {.pc=0xfa49, .a=0xc0, .x=0xe3, .y=0x9d, .sp=0xc9, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xfa49, .value=0xcd}, {.addr=0xfa4a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xfa4b, .a=0xc0, .x=0x27, .y=0x9d, .sp=0xc9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xfa49, .value=0xcd}, {.addr=0xfa4a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xfa49, .value=0xcd, .type=IO_READ},
        {.addr=0xfa4a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0033) {
    const struct CPU_State initial_cpu = {.pc=0xb5fd, .a=0x79, .x=0xc7, .y=0x73, .sp=0x7e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb5fd, .value=0xcd}, {.addr=0xb5fe, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xb5ff, .a=0x79, .x=0xd4, .y=0x73, .sp=0x7e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb5fd, .value=0xcd}, {.addr=0xb5fe, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xb5fd, .value=0xcd, .type=IO_READ},
        {.addr=0xb5fe, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0034) {
    const struct CPU_State initial_cpu = {.pc=0x4f41, .a=0xdd, .x=0x5f, .y=0x40, .sp=0x90, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x4f41, .value=0xcd}, {.addr=0x4f42, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4f43, .a=0xdd, .x=0x0e, .y=0x40, .sp=0x90, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4f41, .value=0xcd}, {.addr=0x4f42, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4f41, .value=0xcd, .type=IO_READ},
        {.addr=0x4f42, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0035) {
    const struct CPU_State initial_cpu = {.pc=0x51b7, .a=0x75, .x=0xea, .y=0x1f, .sp=0xa3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x51b7, .value=0xcd}, {.addr=0x51b8, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x51b9, .a=0x75, .x=0xa8, .y=0x1f, .sp=0xa3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x51b7, .value=0xcd}, {.addr=0x51b8, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x51b7, .value=0xcd, .type=IO_READ},
        {.addr=0x51b8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0036) {
    const struct CPU_State initial_cpu = {.pc=0x8824, .a=0x49, .x=0x56, .y=0x9b, .sp=0xf0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8824, .value=0xcd}, {.addr=0x8825, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x8826, .a=0x49, .x=0x93, .y=0x9b, .sp=0xf0, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8824, .value=0xcd}, {.addr=0x8825, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x8824, .value=0xcd, .type=IO_READ},
        {.addr=0x8825, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0037) {
    const struct CPU_State initial_cpu = {.pc=0x8270, .a=0x0a, .x=0x8a, .y=0x53, .sp=0xb4, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8270, .value=0xcd}, {.addr=0x8271, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x8272, .a=0x0a, .x=0xb0, .y=0x53, .sp=0xb4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8270, .value=0xcd}, {.addr=0x8271, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x8270, .value=0xcd, .type=IO_READ},
        {.addr=0x8271, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0038) {
    const struct CPU_State initial_cpu = {.pc=0x8529, .a=0x6f, .x=0xbf, .y=0x86, .sp=0x2e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8529, .value=0xcd}, {.addr=0x852a, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x852b, .a=0x6f, .x=0x8c, .y=0x86, .sp=0x2e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8529, .value=0xcd}, {.addr=0x852a, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x8529, .value=0xcd, .type=IO_READ},
        {.addr=0x852a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0039) {
    const struct CPU_State initial_cpu = {.pc=0x2cc4, .a=0xbb, .x=0xeb, .y=0xc8, .sp=0xed, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc4, .value=0xcd}, {.addr=0x2cc5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2cc6, .a=0xbb, .x=0xdd, .y=0xc8, .sp=0xed, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2cc4, .value=0xcd}, {.addr=0x2cc5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2cc4, .value=0xcd, .type=IO_READ},
        {.addr=0x2cc5, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003A) {
    const struct CPU_State initial_cpu = {.pc=0x7020, .a=0x91, .x=0x99, .y=0x6f, .sp=0x89, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7020, .value=0xcd}, {.addr=0x7021, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x7022, .a=0x91, .x=0x57, .y=0x6f, .sp=0x89, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7020, .value=0xcd}, {.addr=0x7021, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x7020, .value=0xcd, .type=IO_READ},
        {.addr=0x7021, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003B) {
    const struct CPU_State initial_cpu = {.pc=0x6b23, .a=0x33, .x=0xbb, .y=0x4c, .sp=0x9c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6b23, .value=0xcd}, {.addr=0x6b24, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x6b25, .a=0x33, .x=0xfe, .y=0x4c, .sp=0x9c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6b23, .value=0xcd}, {.addr=0x6b24, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x6b23, .value=0xcd, .type=IO_READ},
        {.addr=0x6b24, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003C) {
    const struct CPU_State initial_cpu = {.pc=0xa03b, .a=0xa0, .x=0x57, .y=0x65, .sp=0x43, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa03b, .value=0xcd}, {.addr=0xa03c, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa03d, .a=0xa0, .x=0x7b, .y=0x65, .sp=0x43, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa03b, .value=0xcd}, {.addr=0xa03c, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa03b, .value=0xcd, .type=IO_READ},
        {.addr=0xa03c, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003D) {
    const struct CPU_State initial_cpu = {.pc=0x3e23, .a=0x0f, .x=0x7f, .y=0x2f, .sp=0x0c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3e23, .value=0xcd}, {.addr=0x3e24, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3e25, .a=0x0f, .x=0x49, .y=0x2f, .sp=0x0c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3e23, .value=0xcd}, {.addr=0x3e24, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x3e23, .value=0xcd, .type=IO_READ},
        {.addr=0x3e24, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003E) {
    const struct CPU_State initial_cpu = {.pc=0x32fd, .a=0xe2, .x=0x1a, .y=0xc9, .sp=0x20, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x32fd, .value=0xcd}, {.addr=0x32fe, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x32ff, .a=0xe2, .x=0xc2, .y=0xc9, .sp=0x20, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x32fd, .value=0xcd}, {.addr=0x32fe, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x32fd, .value=0xcd, .type=IO_READ},
        {.addr=0x32fe, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_003F) {
    const struct CPU_State initial_cpu = {.pc=0xc6bd, .a=0xf1, .x=0xd5, .y=0x64, .sp=0xc9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc6bd, .value=0xcd}, {.addr=0xc6be, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc6bf, .a=0xf1, .x=0xb5, .y=0x64, .sp=0xc9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc6bd, .value=0xcd}, {.addr=0xc6be, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc6bd, .value=0xcd, .type=IO_READ},
        {.addr=0xc6be, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0040) {
    const struct CPU_State initial_cpu = {.pc=0x9f80, .a=0xdc, .x=0xda, .y=0x3b, .sp=0x0e, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9f80, .value=0xcd}, {.addr=0x9f81, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x9f82, .a=0xdc, .x=0x36, .y=0x3b, .sp=0x0e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9f80, .value=0xcd}, {.addr=0x9f81, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x9f80, .value=0xcd, .type=IO_READ},
        {.addr=0x9f81, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0041) {
    const struct CPU_State initial_cpu = {.pc=0x481e, .a=0x37, .x=0x93, .y=0xd7, .sp=0xd7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x481e, .value=0xcd}, {.addr=0x481f, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x4820, .a=0x37, .x=0x05, .y=0xd7, .sp=0xd7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x481e, .value=0xcd}, {.addr=0x481f, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x481e, .value=0xcd, .type=IO_READ},
        {.addr=0x481f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0042) {
    const struct CPU_State initial_cpu = {.pc=0x0397, .a=0xb0, .x=0x10, .y=0x5b, .sp=0x8f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0397, .value=0xcd}, {.addr=0x0398, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x0399, .a=0xb0, .x=0x64, .y=0x5b, .sp=0x8f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0397, .value=0xcd}, {.addr=0x0398, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x0397, .value=0xcd, .type=IO_READ},
        {.addr=0x0398, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0043) {
    const struct CPU_State initial_cpu = {.pc=0xa778, .a=0xd0, .x=0x80, .y=0x89, .sp=0x18, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa778, .value=0xcd}, {.addr=0xa779, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa77a, .a=0xd0, .x=0x66, .y=0x89, .sp=0x18, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa778, .value=0xcd}, {.addr=0xa779, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa778, .value=0xcd, .type=IO_READ},
        {.addr=0xa779, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0044) {
    const struct CPU_State initial_cpu = {.pc=0xe29d, .a=0x5b, .x=0xd8, .y=0xd6, .sp=0x1a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe29d, .value=0xcd}, {.addr=0xe29e, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe29f, .a=0x5b, .x=0xbb, .y=0xd6, .sp=0x1a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe29d, .value=0xcd}, {.addr=0xe29e, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe29d, .value=0xcd, .type=IO_READ},
        {.addr=0xe29e, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0045) {
    const struct CPU_State initial_cpu = {.pc=0x5d45, .a=0x4e, .x=0x18, .y=0x93, .sp=0xbf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5d45, .value=0xcd}, {.addr=0x5d46, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5d47, .a=0x4e, .x=0x27, .y=0x93, .sp=0xbf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5d45, .value=0xcd}, {.addr=0x5d46, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5d45, .value=0xcd, .type=IO_READ},
        {.addr=0x5d46, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0046) {
    const struct CPU_State initial_cpu = {.pc=0x562d, .a=0x12, .x=0xf5, .y=0x49, .sp=0x3f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x562d, .value=0xcd}, {.addr=0x562e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x562f, .a=0x12, .x=0x4d, .y=0x49, .sp=0x3f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x562d, .value=0xcd}, {.addr=0x562e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x562d, .value=0xcd, .type=IO_READ},
        {.addr=0x562e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0047) {
    const struct CPU_State initial_cpu = {.pc=0x008b, .a=0xc3, .x=0x98, .y=0x15, .sp=0xd3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xcd}, {.addr=0x008c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x008d, .a=0xc3, .x=0xe6, .y=0x15, .sp=0xd3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xcd}, {.addr=0x008c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x008b, .value=0xcd, .type=IO_READ},
        {.addr=0x008c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0048) {
    const struct CPU_State initial_cpu = {.pc=0x8a56, .a=0x62, .x=0x1e, .y=0xd1, .sp=0x17, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8a56, .value=0xcd}, {.addr=0x8a57, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x8a58, .a=0x62, .x=0x50, .y=0xd1, .sp=0x17, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8a56, .value=0xcd}, {.addr=0x8a57, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x8a56, .value=0xcd, .type=IO_READ},
        {.addr=0x8a57, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2143, .a=0x0d, .x=0xc3, .y=0x34, .sp=0x2a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x2143, .value=0xcd}, {.addr=0x2144, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x2145, .a=0x0d, .x=0x9a, .y=0x34, .sp=0x2a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2143, .value=0xcd}, {.addr=0x2144, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x2143, .value=0xcd, .type=IO_READ},
        {.addr=0x2144, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004A) {
    const struct CPU_State initial_cpu = {.pc=0x6119, .a=0x84, .x=0x96, .y=0x0d, .sp=0xb7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6119, .value=0xcd}, {.addr=0x611a, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x611b, .a=0x84, .x=0xc5, .y=0x0d, .sp=0xb7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6119, .value=0xcd}, {.addr=0x611a, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6119, .value=0xcd, .type=IO_READ},
        {.addr=0x611a, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004B) {
    const struct CPU_State initial_cpu = {.pc=0x24a0, .a=0x77, .x=0x55, .y=0xed, .sp=0x21, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x24a0, .value=0xcd}, {.addr=0x24a1, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x24a2, .a=0x77, .x=0x58, .y=0xed, .sp=0x21, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x24a0, .value=0xcd}, {.addr=0x24a1, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x24a0, .value=0xcd, .type=IO_READ},
        {.addr=0x24a1, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7691, .a=0x06, .x=0xe7, .y=0x34, .sp=0xa3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7691, .value=0xcd}, {.addr=0x7692, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x7693, .a=0x06, .x=0x49, .y=0x34, .sp=0xa3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7691, .value=0xcd}, {.addr=0x7692, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x7691, .value=0xcd, .type=IO_READ},
        {.addr=0x7692, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004D) {
    const struct CPU_State initial_cpu = {.pc=0xa89b, .a=0x3a, .x=0xdd, .y=0x9f, .sp=0x82, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa89b, .value=0xcd}, {.addr=0xa89c, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa89d, .a=0x3a, .x=0xd9, .y=0x9f, .sp=0x82, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa89b, .value=0xcd}, {.addr=0xa89c, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa89b, .value=0xcd, .type=IO_READ},
        {.addr=0xa89c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004E) {
    const struct CPU_State initial_cpu = {.pc=0x8d46, .a=0xce, .x=0x6a, .y=0x4a, .sp=0x18, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d46, .value=0xcd}, {.addr=0x8d47, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x8d48, .a=0xce, .x=0x84, .y=0x4a, .sp=0x18, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8d46, .value=0xcd}, {.addr=0x8d47, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x8d46, .value=0xcd, .type=IO_READ},
        {.addr=0x8d47, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_004F) {
    const struct CPU_State initial_cpu = {.pc=0xf37a, .a=0x51, .x=0x7b, .y=0x5d, .sp=0x76, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf37a, .value=0xcd}, {.addr=0xf37b, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xf37c, .a=0x51, .x=0xc5, .y=0x5d, .sp=0x76, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf37a, .value=0xcd}, {.addr=0xf37b, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xf37a, .value=0xcd, .type=IO_READ},
        {.addr=0xf37b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0050) {
    const struct CPU_State initial_cpu = {.pc=0xc2f6, .a=0x36, .x=0xc1, .y=0x2e, .sp=0xe5, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f6, .value=0xcd}, {.addr=0xc2f7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc2f8, .a=0x36, .x=0x51, .y=0x2e, .sp=0xe5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc2f6, .value=0xcd}, {.addr=0xc2f7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc2f6, .value=0xcd, .type=IO_READ},
        {.addr=0xc2f7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0051) {
    const struct CPU_State initial_cpu = {.pc=0x2e0f, .a=0xc7, .x=0x26, .y=0x5c, .sp=0x26, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2e0f, .value=0xcd}, {.addr=0x2e10, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x2e11, .a=0xc7, .x=0x16, .y=0x5c, .sp=0x26, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2e0f, .value=0xcd}, {.addr=0x2e10, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x2e0f, .value=0xcd, .type=IO_READ},
        {.addr=0x2e10, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0052) {
    const struct CPU_State initial_cpu = {.pc=0x70f6, .a=0x5d, .x=0x48, .y=0x7c, .sp=0xb9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x70f6, .value=0xcd}, {.addr=0x70f7, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x70f8, .a=0x5d, .x=0x94, .y=0x7c, .sp=0xb9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x70f6, .value=0xcd}, {.addr=0x70f7, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x70f6, .value=0xcd, .type=IO_READ},
        {.addr=0x70f7, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0053) {
    const struct CPU_State initial_cpu = {.pc=0x8568, .a=0xe3, .x=0x7b, .y=0xae, .sp=0xba, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x8568, .value=0xcd}, {.addr=0x8569, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x856a, .a=0xe3, .x=0x5c, .y=0xae, .sp=0xba, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8568, .value=0xcd}, {.addr=0x8569, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8568, .value=0xcd, .type=IO_READ},
        {.addr=0x8569, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0054) {
    const struct CPU_State initial_cpu = {.pc=0xdae0, .a=0xe7, .x=0x63, .y=0x8f, .sp=0xc3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdae0, .value=0xcd}, {.addr=0xdae1, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xdae2, .a=0xe7, .x=0xc9, .y=0x8f, .sp=0xc3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdae0, .value=0xcd}, {.addr=0xdae1, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xdae0, .value=0xcd, .type=IO_READ},
        {.addr=0xdae1, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0055) {
    const struct CPU_State initial_cpu = {.pc=0x75c1, .a=0x2a, .x=0x63, .y=0x88, .sp=0xf3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x75c1, .value=0xcd}, {.addr=0x75c2, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x75c3, .a=0x2a, .x=0xcb, .y=0x88, .sp=0xf3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x75c1, .value=0xcd}, {.addr=0x75c2, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x75c1, .value=0xcd, .type=IO_READ},
        {.addr=0x75c2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0056) {
    const struct CPU_State initial_cpu = {.pc=0xa151, .a=0x78, .x=0x38, .y=0x5f, .sp=0x89, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa151, .value=0xcd}, {.addr=0xa152, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa153, .a=0x78, .x=0xc6, .y=0x5f, .sp=0x89, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa151, .value=0xcd}, {.addr=0xa152, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa151, .value=0xcd, .type=IO_READ},
        {.addr=0xa152, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0057) {
    const struct CPU_State initial_cpu = {.pc=0xb72f, .a=0x3c, .x=0xa2, .y=0xef, .sp=0xd8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb72f, .value=0xcd}, {.addr=0xb730, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xb731, .a=0x3c, .x=0xa5, .y=0xef, .sp=0xd8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb72f, .value=0xcd}, {.addr=0xb730, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xb72f, .value=0xcd, .type=IO_READ},
        {.addr=0xb730, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0058) {
    const struct CPU_State initial_cpu = {.pc=0x6160, .a=0x10, .x=0xaf, .y=0x14, .sp=0xe1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6160, .value=0xcd}, {.addr=0x6161, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6162, .a=0x10, .x=0xe5, .y=0x14, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6160, .value=0xcd}, {.addr=0x6161, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6160, .value=0xcd, .type=IO_READ},
        {.addr=0x6161, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6b5a, .a=0x48, .x=0x90, .y=0xb9, .sp=0xa8, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5a, .value=0xcd}, {.addr=0x6b5b, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x6b5c, .a=0x48, .x=0x84, .y=0xb9, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6b5a, .value=0xcd}, {.addr=0x6b5b, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x6b5a, .value=0xcd, .type=IO_READ},
        {.addr=0x6b5b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf487, .a=0x5c, .x=0x80, .y=0xe9, .sp=0xeb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf487, .value=0xcd}, {.addr=0xf488, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf489, .a=0x5c, .x=0x7b, .y=0xe9, .sp=0xeb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf487, .value=0xcd}, {.addr=0xf488, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf487, .value=0xcd, .type=IO_READ},
        {.addr=0xf488, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005B) {
    const struct CPU_State initial_cpu = {.pc=0x921a, .a=0x75, .x=0x84, .y=0x93, .sp=0xf0, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x921a, .value=0xcd}, {.addr=0x921b, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x921c, .a=0x75, .x=0xd1, .y=0x93, .sp=0xf0, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x921a, .value=0xcd}, {.addr=0x921b, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x921a, .value=0xcd, .type=IO_READ},
        {.addr=0x921b, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005C) {
    const struct CPU_State initial_cpu = {.pc=0x300d, .a=0x97, .x=0xa1, .y=0x8d, .sp=0x6e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x300d, .value=0xcd}, {.addr=0x300e, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x300f, .a=0x97, .x=0xff, .y=0x8d, .sp=0x6e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x300d, .value=0xcd}, {.addr=0x300e, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x300d, .value=0xcd, .type=IO_READ},
        {.addr=0x300e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005D) {
    const struct CPU_State initial_cpu = {.pc=0x67ab, .a=0x17, .x=0x3f, .y=0x74, .sp=0x89, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x67ab, .value=0xcd}, {.addr=0x67ac, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x67ad, .a=0x17, .x=0x72, .y=0x74, .sp=0x89, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x67ab, .value=0xcd}, {.addr=0x67ac, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x67ab, .value=0xcd, .type=IO_READ},
        {.addr=0x67ac, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005E) {
    const struct CPU_State initial_cpu = {.pc=0xf3f9, .a=0xc2, .x=0x3e, .y=0x7c, .sp=0xad, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf3f9, .value=0xcd}, {.addr=0xf3fa, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xf3fb, .a=0xc2, .x=0xfa, .y=0x7c, .sp=0xad, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf3f9, .value=0xcd}, {.addr=0xf3fa, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xf3f9, .value=0xcd, .type=IO_READ},
        {.addr=0xf3fa, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_005F) {
    const struct CPU_State initial_cpu = {.pc=0x0f73, .a=0x6c, .x=0xc2, .y=0x2d, .sp=0x8f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0f73, .value=0xcd}, {.addr=0x0f74, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x0f75, .a=0x6c, .x=0x99, .y=0x2d, .sp=0x8f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0f73, .value=0xcd}, {.addr=0x0f74, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x0f73, .value=0xcd, .type=IO_READ},
        {.addr=0x0f74, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0060) {
    const struct CPU_State initial_cpu = {.pc=0xa5ca, .a=0x60, .x=0xbc, .y=0x48, .sp=0x10, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ca, .value=0xcd}, {.addr=0xa5cb, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa5cc, .a=0x60, .x=0x42, .y=0x48, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa5ca, .value=0xcd}, {.addr=0xa5cb, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa5ca, .value=0xcd, .type=IO_READ},
        {.addr=0xa5cb, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0061) {
    const struct CPU_State initial_cpu = {.pc=0xde2e, .a=0xc2, .x=0x29, .y=0xcf, .sp=0x70, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xde2e, .value=0xcd}, {.addr=0xde2f, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xde30, .a=0xc2, .x=0xf4, .y=0xcf, .sp=0x70, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xde2e, .value=0xcd}, {.addr=0xde2f, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xde2e, .value=0xcd, .type=IO_READ},
        {.addr=0xde2f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0062) {
    const struct CPU_State initial_cpu = {.pc=0x7e0c, .a=0x5d, .x=0x6a, .y=0xff, .sp=0x18, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7e0c, .value=0xcd}, {.addr=0x7e0d, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x7e0e, .a=0x5d, .x=0xec, .y=0xff, .sp=0x18, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7e0c, .value=0xcd}, {.addr=0x7e0d, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x7e0c, .value=0xcd, .type=IO_READ},
        {.addr=0x7e0d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0063) {
    const struct CPU_State initial_cpu = {.pc=0x06cf, .a=0xc7, .x=0x3f, .y=0xbc, .sp=0xb1, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x06cf, .value=0xcd}, {.addr=0x06d0, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x06d1, .a=0xc7, .x=0xf4, .y=0xbc, .sp=0xb1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x06cf, .value=0xcd}, {.addr=0x06d0, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x06cf, .value=0xcd, .type=IO_READ},
        {.addr=0x06d0, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0064) {
    const struct CPU_State initial_cpu = {.pc=0x2af0, .a=0xdd, .x=0x09, .y=0x67, .sp=0x25, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2af0, .value=0xcd}, {.addr=0x2af1, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2af2, .a=0xdd, .x=0xa0, .y=0x67, .sp=0x25, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2af0, .value=0xcd}, {.addr=0x2af1, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2af0, .value=0xcd, .type=IO_READ},
        {.addr=0x2af1, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0065) {
    const struct CPU_State initial_cpu = {.pc=0x06d0, .a=0x38, .x=0xee, .y=0x8c, .sp=0xc3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x06d0, .value=0xcd}, {.addr=0x06d1, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x06d2, .a=0x38, .x=0xc4, .y=0x8c, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x06d0, .value=0xcd}, {.addr=0x06d1, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x06d0, .value=0xcd, .type=IO_READ},
        {.addr=0x06d1, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4c44, .a=0x69, .x=0xdb, .y=0x34, .sp=0xe8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4c44, .value=0xcd}, {.addr=0x4c45, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x4c46, .a=0x69, .x=0xd9, .y=0x34, .sp=0xe8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4c44, .value=0xcd}, {.addr=0x4c45, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x4c44, .value=0xcd, .type=IO_READ},
        {.addr=0x4c45, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0067) {
    const struct CPU_State initial_cpu = {.pc=0x211a, .a=0xb0, .x=0xcd, .y=0xe0, .sp=0x5b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x211a, .value=0xcd}, {.addr=0x211b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x211c, .a=0xb0, .x=0xbc, .y=0xe0, .sp=0x5b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x211a, .value=0xcd}, {.addr=0x211b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x211a, .value=0xcd, .type=IO_READ},
        {.addr=0x211b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0068) {
    const struct CPU_State initial_cpu = {.pc=0x5dce, .a=0x03, .x=0x84, .y=0x58, .sp=0x0a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x5dce, .value=0xcd}, {.addr=0x5dcf, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5dd0, .a=0x03, .x=0x6a, .y=0x58, .sp=0x0a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5dce, .value=0xcd}, {.addr=0x5dcf, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5dce, .value=0xcd, .type=IO_READ},
        {.addr=0x5dcf, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0069) {
    const struct CPU_State initial_cpu = {.pc=0x2cd7, .a=0x7e, .x=0xd4, .y=0x5a, .sp=0xcd, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd7, .value=0xcd}, {.addr=0x2cd8, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2cd9, .a=0x7e, .x=0x1a, .y=0x5a, .sp=0xcd, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2cd7, .value=0xcd}, {.addr=0x2cd8, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2cd7, .value=0xcd, .type=IO_READ},
        {.addr=0x2cd8, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006A) {
    const struct CPU_State initial_cpu = {.pc=0x199a, .a=0x63, .x=0x5d, .y=0xec, .sp=0x6d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x199a, .value=0xcd}, {.addr=0x199b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x199c, .a=0x63, .x=0x3d, .y=0xec, .sp=0x6d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x199a, .value=0xcd}, {.addr=0x199b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x199a, .value=0xcd, .type=IO_READ},
        {.addr=0x199b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006B) {
    const struct CPU_State initial_cpu = {.pc=0xdfd1, .a=0x3f, .x=0xb0, .y=0xb0, .sp=0x1f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdfd1, .value=0xcd}, {.addr=0xdfd2, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xdfd3, .a=0x3f, .x=0x50, .y=0xb0, .sp=0x1f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdfd1, .value=0xcd}, {.addr=0xdfd2, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xdfd1, .value=0xcd, .type=IO_READ},
        {.addr=0xdfd2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006C) {
    const struct CPU_State initial_cpu = {.pc=0x22ef, .a=0x30, .x=0x90, .y=0x06, .sp=0xa4, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x22ef, .value=0xcd}, {.addr=0x22f0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x22f1, .a=0x30, .x=0x2a, .y=0x06, .sp=0xa4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x22ef, .value=0xcd}, {.addr=0x22f0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x22ef, .value=0xcd, .type=IO_READ},
        {.addr=0x22f0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006D) {
    const struct CPU_State initial_cpu = {.pc=0x4ad0, .a=0xb2, .x=0x29, .y=0x33, .sp=0x01, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x4ad0, .value=0xcd}, {.addr=0x4ad1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4ad2, .a=0xb2, .x=0xee, .y=0x33, .sp=0x01, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4ad0, .value=0xcd}, {.addr=0x4ad1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4ad0, .value=0xcd, .type=IO_READ},
        {.addr=0x4ad1, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006E) {
    const struct CPU_State initial_cpu = {.pc=0x3300, .a=0x75, .x=0xc6, .y=0x22, .sp=0x1a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x3300, .value=0xcd}, {.addr=0x3301, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3302, .a=0x75, .x=0x4a, .y=0x22, .sp=0x1a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3300, .value=0xcd}, {.addr=0x3301, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3300, .value=0xcd, .type=IO_READ},
        {.addr=0x3301, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_006F) {
    const struct CPU_State initial_cpu = {.pc=0x1c09, .a=0xc4, .x=0x9a, .y=0x3a, .sp=0x17, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x1c09, .value=0xcd}, {.addr=0x1c0a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1c0b, .a=0xc4, .x=0x62, .y=0x3a, .sp=0x17, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1c09, .value=0xcd}, {.addr=0x1c0a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1c09, .value=0xcd, .type=IO_READ},
        {.addr=0x1c0a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7910, .a=0x89, .x=0x52, .y=0x13, .sp=0x21, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7910, .value=0xcd}, {.addr=0x7911, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x7912, .a=0x89, .x=0xfe, .y=0x13, .sp=0x21, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7910, .value=0xcd}, {.addr=0x7911, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x7910, .value=0xcd, .type=IO_READ},
        {.addr=0x7911, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0071) {
    const struct CPU_State initial_cpu = {.pc=0x0749, .a=0x0c, .x=0xcf, .y=0x5f, .sp=0xe2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0749, .value=0xcd}, {.addr=0x074a, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x074b, .a=0x0c, .x=0xf9, .y=0x5f, .sp=0xe2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0749, .value=0xcd}, {.addr=0x074a, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x0749, .value=0xcd, .type=IO_READ},
        {.addr=0x074a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9690, .a=0xe3, .x=0x89, .y=0x49, .sp=0x69, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9690, .value=0xcd}, {.addr=0x9691, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x9692, .a=0xe3, .x=0x29, .y=0x49, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9690, .value=0xcd}, {.addr=0x9691, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x9690, .value=0xcd, .type=IO_READ},
        {.addr=0x9691, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0073) {
    const struct CPU_State initial_cpu = {.pc=0x7f08, .a=0xd5, .x=0xaa, .y=0xb4, .sp=0x79, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7f08, .value=0xcd}, {.addr=0x7f09, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x7f0a, .a=0xd5, .x=0xf8, .y=0xb4, .sp=0x79, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7f08, .value=0xcd}, {.addr=0x7f09, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x7f08, .value=0xcd, .type=IO_READ},
        {.addr=0x7f09, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0074) {
    const struct CPU_State initial_cpu = {.pc=0xd347, .a=0xfd, .x=0x22, .y=0x86, .sp=0x38, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd347, .value=0xcd}, {.addr=0xd348, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xd349, .a=0xfd, .x=0xf2, .y=0x86, .sp=0x38, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd347, .value=0xcd}, {.addr=0xd348, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xd347, .value=0xcd, .type=IO_READ},
        {.addr=0xd348, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0075) {
    const struct CPU_State initial_cpu = {.pc=0xaf24, .a=0xd2, .x=0xa7, .y=0xde, .sp=0x22, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xaf24, .value=0xcd}, {.addr=0xaf25, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xaf26, .a=0xd2, .x=0x2b, .y=0xde, .sp=0x22, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xaf24, .value=0xcd}, {.addr=0xaf25, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xaf24, .value=0xcd, .type=IO_READ},
        {.addr=0xaf25, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0076) {
    const struct CPU_State initial_cpu = {.pc=0x126b, .a=0xf4, .x=0x0c, .y=0x55, .sp=0x01, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x126b, .value=0xcd}, {.addr=0x126c, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x126d, .a=0xf4, .x=0x49, .y=0x55, .sp=0x01, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x126b, .value=0xcd}, {.addr=0x126c, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x126b, .value=0xcd, .type=IO_READ},
        {.addr=0x126c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0077) {
    const struct CPU_State initial_cpu = {.pc=0xacd3, .a=0xcd, .x=0xc1, .y=0xfe, .sp=0x7d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xacd3, .value=0xcd}, {.addr=0xacd4, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xacd5, .a=0xcd, .x=0xfe, .y=0xfe, .sp=0x7d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xacd3, .value=0xcd}, {.addr=0xacd4, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xacd3, .value=0xcd, .type=IO_READ},
        {.addr=0xacd4, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0078) {
    const struct CPU_State initial_cpu = {.pc=0x307e, .a=0xeb, .x=0xaa, .y=0x82, .sp=0xb0, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x307e, .value=0xcd}, {.addr=0x307f, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x3080, .a=0xeb, .x=0x96, .y=0x82, .sp=0xb0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x307e, .value=0xcd}, {.addr=0x307f, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x307e, .value=0xcd, .type=IO_READ},
        {.addr=0x307f, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0079) {
    const struct CPU_State initial_cpu = {.pc=0xb7ad, .a=0xd0, .x=0xac, .y=0xc0, .sp=0xe4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ad, .value=0xcd}, {.addr=0xb7ae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb7af, .a=0xd0, .x=0xae, .y=0xc0, .sp=0xe4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb7ad, .value=0xcd}, {.addr=0xb7ae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb7ad, .value=0xcd, .type=IO_READ},
        {.addr=0xb7ae, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0d38, .a=0x51, .x=0x13, .y=0x74, .sp=0xba, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d38, .value=0xcd}, {.addr=0x0d39, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x0d3a, .a=0x51, .x=0xfe, .y=0x74, .sp=0xba, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0d38, .value=0xcd}, {.addr=0x0d39, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x0d38, .value=0xcd, .type=IO_READ},
        {.addr=0x0d39, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007B) {
    const struct CPU_State initial_cpu = {.pc=0x57ab, .a=0x79, .x=0x8e, .y=0x29, .sp=0xe8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x57ab, .value=0xcd}, {.addr=0x57ac, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x57ad, .a=0x79, .x=0xc5, .y=0x29, .sp=0xe8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x57ab, .value=0xcd}, {.addr=0x57ac, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x57ab, .value=0xcd, .type=IO_READ},
        {.addr=0x57ac, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007C) {
    const struct CPU_State initial_cpu = {.pc=0xe750, .a=0x51, .x=0x90, .y=0x5b, .sp=0x12, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe750, .value=0xcd}, {.addr=0xe751, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe752, .a=0x51, .x=0x6d, .y=0x5b, .sp=0x12, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe750, .value=0xcd}, {.addr=0xe751, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe750, .value=0xcd, .type=IO_READ},
        {.addr=0xe751, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007D) {
    const struct CPU_State initial_cpu = {.pc=0xbf82, .a=0x21, .x=0x31, .y=0xc0, .sp=0xe2, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xbf82, .value=0xcd}, {.addr=0xbf83, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xbf84, .a=0x21, .x=0xb5, .y=0xc0, .sp=0xe2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbf82, .value=0xcd}, {.addr=0xbf83, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xbf82, .value=0xcd, .type=IO_READ},
        {.addr=0xbf83, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8014, .a=0x82, .x=0x16, .y=0x3e, .sp=0x64, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8014, .value=0xcd}, {.addr=0x8015, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x8016, .a=0x82, .x=0xeb, .y=0x3e, .sp=0x64, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8014, .value=0xcd}, {.addr=0x8015, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x8014, .value=0xcd, .type=IO_READ},
        {.addr=0x8015, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_007F) {
    const struct CPU_State initial_cpu = {.pc=0xe051, .a=0x67, .x=0xbc, .y=0x81, .sp=0x33, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xe051, .value=0xcd}, {.addr=0xe052, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe053, .a=0x67, .x=0x2d, .y=0x81, .sp=0x33, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe051, .value=0xcd}, {.addr=0xe052, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe051, .value=0xcd, .type=IO_READ},
        {.addr=0xe052, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0080) {
    const struct CPU_State initial_cpu = {.pc=0x11db, .a=0xd0, .x=0xf5, .y=0x46, .sp=0xa9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x11db, .value=0xcd}, {.addr=0x11dc, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x11dd, .a=0xd0, .x=0x6f, .y=0x46, .sp=0xa9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x11db, .value=0xcd}, {.addr=0x11dc, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x11db, .value=0xcd, .type=IO_READ},
        {.addr=0x11dc, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0081) {
    const struct CPU_State initial_cpu = {.pc=0x5648, .a=0x0c, .x=0xfe, .y=0x45, .sp=0xe7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5648, .value=0xcd}, {.addr=0x5649, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x564a, .a=0x0c, .x=0xe9, .y=0x45, .sp=0xe7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5648, .value=0xcd}, {.addr=0x5649, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x5648, .value=0xcd, .type=IO_READ},
        {.addr=0x5649, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0082) {
    const struct CPU_State initial_cpu = {.pc=0xeed0, .a=0x67, .x=0x02, .y=0x00, .sp=0x09, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xeed0, .value=0xcd}, {.addr=0xeed1, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xeed2, .a=0x67, .x=0xb8, .y=0x00, .sp=0x09, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xeed0, .value=0xcd}, {.addr=0xeed1, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xeed0, .value=0xcd, .type=IO_READ},
        {.addr=0xeed1, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4057, .a=0xd0, .x=0xa5, .y=0x3e, .sp=0x44, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4057, .value=0xcd}, {.addr=0x4058, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4059, .a=0xd0, .x=0xae, .y=0x3e, .sp=0x44, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4057, .value=0xcd}, {.addr=0x4058, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4057, .value=0xcd, .type=IO_READ},
        {.addr=0x4058, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0084) {
    const struct CPU_State initial_cpu = {.pc=0xdede, .a=0x50, .x=0x23, .y=0x55, .sp=0x11, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xdede, .value=0xcd}, {.addr=0xdedf, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xdee0, .a=0x50, .x=0xe3, .y=0x55, .sp=0x11, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xdede, .value=0xcd}, {.addr=0xdedf, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xdede, .value=0xcd, .type=IO_READ},
        {.addr=0xdedf, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0085) {
    const struct CPU_State initial_cpu = {.pc=0x57eb, .a=0x8b, .x=0x60, .y=0x5c, .sp=0x32, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x57eb, .value=0xcd}, {.addr=0x57ec, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x57ed, .a=0x8b, .x=0xd4, .y=0x5c, .sp=0x32, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x57eb, .value=0xcd}, {.addr=0x57ec, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x57eb, .value=0xcd, .type=IO_READ},
        {.addr=0x57ec, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0086) {
    const struct CPU_State initial_cpu = {.pc=0xbaf1, .a=0xd3, .x=0xa0, .y=0x03, .sp=0x96, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xbaf1, .value=0xcd}, {.addr=0xbaf2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbaf3, .a=0xd3, .x=0x66, .y=0x03, .sp=0x96, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbaf1, .value=0xcd}, {.addr=0xbaf2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbaf1, .value=0xcd, .type=IO_READ},
        {.addr=0xbaf2, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0087) {
    const struct CPU_State initial_cpu = {.pc=0xc402, .a=0xe5, .x=0x45, .y=0x3a, .sp=0xbf, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc402, .value=0xcd}, {.addr=0xc403, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xc404, .a=0xe5, .x=0x1a, .y=0x3a, .sp=0xbf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc402, .value=0xcd}, {.addr=0xc403, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xc402, .value=0xcd, .type=IO_READ},
        {.addr=0xc403, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0088) {
    const struct CPU_State initial_cpu = {.pc=0xfe47, .a=0x2e, .x=0x8a, .y=0x88, .sp=0xbd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xfe47, .value=0xcd}, {.addr=0xfe48, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xfe49, .a=0x2e, .x=0x41, .y=0x88, .sp=0xbd, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfe47, .value=0xcd}, {.addr=0xfe48, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xfe47, .value=0xcd, .type=IO_READ},
        {.addr=0xfe48, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0089) {
    const struct CPU_State initial_cpu = {.pc=0xb31d, .a=0xe2, .x=0xf6, .y=0x5a, .sp=0xd7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb31d, .value=0xcd}, {.addr=0xb31e, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xb31f, .a=0xe2, .x=0xf9, .y=0x5a, .sp=0xd7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb31d, .value=0xcd}, {.addr=0xb31e, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xb31d, .value=0xcd, .type=IO_READ},
        {.addr=0xb31e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008A) {
    const struct CPU_State initial_cpu = {.pc=0xf9cc, .a=0x46, .x=0xed, .y=0x61, .sp=0xfd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf9cc, .value=0xcd}, {.addr=0xf9cd, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xf9ce, .a=0x46, .x=0xd6, .y=0x61, .sp=0xfd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf9cc, .value=0xcd}, {.addr=0xf9cd, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xf9cc, .value=0xcd, .type=IO_READ},
        {.addr=0xf9cd, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008B) {
    const struct CPU_State initial_cpu = {.pc=0x8efb, .a=0x55, .x=0xea, .y=0x49, .sp=0x08, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x8efb, .value=0xcd}, {.addr=0x8efc, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x8efd, .a=0x55, .x=0xfa, .y=0x49, .sp=0x08, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8efb, .value=0xcd}, {.addr=0x8efc, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x8efb, .value=0xcd, .type=IO_READ},
        {.addr=0x8efc, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3300, .a=0xb6, .x=0xc0, .y=0x58, .sp=0x8b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3300, .value=0xcd}, {.addr=0x3301, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3302, .a=0xb6, .x=0xc9, .y=0x58, .sp=0x8b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3300, .value=0xcd}, {.addr=0x3301, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3300, .value=0xcd, .type=IO_READ},
        {.addr=0x3301, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8cb3, .a=0xce, .x=0x06, .y=0x1d, .sp=0x05, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb3, .value=0xcd}, {.addr=0x8cb4, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x8cb5, .a=0xce, .x=0xd2, .y=0x1d, .sp=0x05, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8cb3, .value=0xcd}, {.addr=0x8cb4, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x8cb3, .value=0xcd, .type=IO_READ},
        {.addr=0x8cb4, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008E) {
    const struct CPU_State initial_cpu = {.pc=0xcc93, .a=0xa2, .x=0xc7, .y=0x26, .sp=0x0b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xcc93, .value=0xcd}, {.addr=0xcc94, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xcc95, .a=0xa2, .x=0x08, .y=0x26, .sp=0x0b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcc93, .value=0xcd}, {.addr=0xcc94, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xcc93, .value=0xcd, .type=IO_READ},
        {.addr=0xcc94, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3b7e, .a=0xc5, .x=0x9b, .y=0x7b, .sp=0x2f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3b7e, .value=0xcd}, {.addr=0x3b7f, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x3b80, .a=0xc5, .x=0x38, .y=0x7b, .sp=0x2f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3b7e, .value=0xcd}, {.addr=0x3b7f, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3b7e, .value=0xcd, .type=IO_READ},
        {.addr=0x3b7f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0090) {
    const struct CPU_State initial_cpu = {.pc=0x436d, .a=0x6f, .x=0x5d, .y=0xc2, .sp=0x29, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x436d, .value=0xcd}, {.addr=0x436e, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x436f, .a=0x6f, .x=0x12, .y=0xc2, .sp=0x29, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x436d, .value=0xcd}, {.addr=0x436e, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x436d, .value=0xcd, .type=IO_READ},
        {.addr=0x436e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0091) {
    const struct CPU_State initial_cpu = {.pc=0x9639, .a=0x1a, .x=0x2d, .y=0xe9, .sp=0xec, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9639, .value=0xcd}, {.addr=0x963a, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x963b, .a=0x1a, .x=0x78, .y=0xe9, .sp=0xec, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9639, .value=0xcd}, {.addr=0x963a, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x9639, .value=0xcd, .type=IO_READ},
        {.addr=0x963a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0092) {
    const struct CPU_State initial_cpu = {.pc=0x791d, .a=0xd4, .x=0x4b, .y=0xca, .sp=0xfa, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x791d, .value=0xcd}, {.addr=0x791e, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x791f, .a=0xd4, .x=0xbb, .y=0xca, .sp=0xfa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x791d, .value=0xcd}, {.addr=0x791e, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x791d, .value=0xcd, .type=IO_READ},
        {.addr=0x791e, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0093) {
    const struct CPU_State initial_cpu = {.pc=0xa717, .a=0x19, .x=0xde, .y=0xf2, .sp=0x4b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xa717, .value=0xcd}, {.addr=0xa718, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa719, .a=0x19, .x=0x80, .y=0xf2, .sp=0x4b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa717, .value=0xcd}, {.addr=0xa718, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa717, .value=0xcd, .type=IO_READ},
        {.addr=0xa718, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0094) {
    const struct CPU_State initial_cpu = {.pc=0x5f01, .a=0x1b, .x=0xf0, .y=0x73, .sp=0x96, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f01, .value=0xcd}, {.addr=0x5f02, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x5f03, .a=0x1b, .x=0x01, .y=0x73, .sp=0x96, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5f01, .value=0xcd}, {.addr=0x5f02, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x5f01, .value=0xcd, .type=IO_READ},
        {.addr=0x5f02, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0095) {
    const struct CPU_State initial_cpu = {.pc=0x3e2e, .a=0xb0, .x=0xed, .y=0xcc, .sp=0xf6, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x3e2e, .value=0xcd}, {.addr=0x3e2f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x3e30, .a=0xb0, .x=0x1f, .y=0xcc, .sp=0xf6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3e2e, .value=0xcd}, {.addr=0x3e2f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x3e2e, .value=0xcd, .type=IO_READ},
        {.addr=0x3e2f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0096) {
    const struct CPU_State initial_cpu = {.pc=0xf697, .a=0xcd, .x=0x61, .y=0x5d, .sp=0xcc, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf697, .value=0xcd}, {.addr=0xf698, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xf699, .a=0xcd, .x=0x84, .y=0x5d, .sp=0xcc, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf697, .value=0xcd}, {.addr=0xf698, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xf697, .value=0xcd, .type=IO_READ},
        {.addr=0xf698, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0097) {
    const struct CPU_State initial_cpu = {.pc=0xbe8f, .a=0x99, .x=0xc0, .y=0x42, .sp=0x2f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xbe8f, .value=0xcd}, {.addr=0xbe90, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xbe91, .a=0x99, .x=0xc2, .y=0x42, .sp=0x2f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbe8f, .value=0xcd}, {.addr=0xbe90, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xbe8f, .value=0xcd, .type=IO_READ},
        {.addr=0xbe90, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0098) {
    const struct CPU_State initial_cpu = {.pc=0xbc55, .a=0x77, .x=0x96, .y=0xcf, .sp=0x18, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbc55, .value=0xcd}, {.addr=0xbc56, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xbc57, .a=0x77, .x=0x99, .y=0xcf, .sp=0x18, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbc55, .value=0xcd}, {.addr=0xbc56, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xbc55, .value=0xcd, .type=IO_READ},
        {.addr=0xbc56, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0099) {
    const struct CPU_State initial_cpu = {.pc=0x21e8, .a=0x60, .x=0xac, .y=0xd2, .sp=0x6e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x21e8, .value=0xcd}, {.addr=0x21e9, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x21ea, .a=0x60, .x=0x58, .y=0xd2, .sp=0x6e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x21e8, .value=0xcd}, {.addr=0x21e9, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x21e8, .value=0xcd, .type=IO_READ},
        {.addr=0x21e9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009A) {
    const struct CPU_State initial_cpu = {.pc=0x488a, .a=0xac, .x=0xda, .y=0xa8, .sp=0xb9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x488a, .value=0xcd}, {.addr=0x488b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x488c, .a=0xac, .x=0xaa, .y=0xa8, .sp=0xb9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x488a, .value=0xcd}, {.addr=0x488b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x488a, .value=0xcd, .type=IO_READ},
        {.addr=0x488b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009B) {
    const struct CPU_State initial_cpu = {.pc=0x357a, .a=0x32, .x=0x53, .y=0xcc, .sp=0xcb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x357a, .value=0xcd}, {.addr=0x357b, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x357c, .a=0x32, .x=0xea, .y=0xcc, .sp=0xcb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x357a, .value=0xcd}, {.addr=0x357b, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x357a, .value=0xcd, .type=IO_READ},
        {.addr=0x357b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009C) {
    const struct CPU_State initial_cpu = {.pc=0x6abe, .a=0x85, .x=0x4c, .y=0xf4, .sp=0x2a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6abe, .value=0xcd}, {.addr=0x6abf, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x6ac0, .a=0x85, .x=0xa2, .y=0xf4, .sp=0x2a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6abe, .value=0xcd}, {.addr=0x6abf, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x6abe, .value=0xcd, .type=IO_READ},
        {.addr=0x6abf, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009D) {
    const struct CPU_State initial_cpu = {.pc=0x7d1d, .a=0xab, .x=0x4d, .y=0x07, .sp=0xcc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7d1d, .value=0xcd}, {.addr=0x7d1e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7d1f, .a=0xab, .x=0xfd, .y=0x07, .sp=0xcc, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7d1d, .value=0xcd}, {.addr=0x7d1e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7d1d, .value=0xcd, .type=IO_READ},
        {.addr=0x7d1e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009E) {
    const struct CPU_State initial_cpu = {.pc=0x6843, .a=0x27, .x=0xae, .y=0xd3, .sp=0x5c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6843, .value=0xcd}, {.addr=0x6844, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x6845, .a=0x27, .x=0x84, .y=0xd3, .sp=0x5c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6843, .value=0xcd}, {.addr=0x6844, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x6843, .value=0xcd, .type=IO_READ},
        {.addr=0x6844, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_009F) {
    const struct CPU_State initial_cpu = {.pc=0xd399, .a=0xf5, .x=0xf5, .y=0x13, .sp=0xf0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd399, .value=0xcd}, {.addr=0xd39a, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xd39b, .a=0xf5, .x=0x17, .y=0x13, .sp=0xf0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd399, .value=0xcd}, {.addr=0xd39a, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xd399, .value=0xcd, .type=IO_READ},
        {.addr=0xd39a, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x58e4, .a=0xf6, .x=0xdd, .y=0x90, .sp=0x9c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x58e4, .value=0xcd}, {.addr=0x58e5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x58e6, .a=0xf6, .x=0x2d, .y=0x90, .sp=0x9c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x58e4, .value=0xcd}, {.addr=0x58e5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x58e4, .value=0xcd, .type=IO_READ},
        {.addr=0x58e5, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xc9f0, .a=0x0a, .x=0xf2, .y=0xd3, .sp=0x1e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f0, .value=0xcd}, {.addr=0xc9f1, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xc9f2, .a=0x0a, .x=0xfb, .y=0xd3, .sp=0x1e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc9f0, .value=0xcd}, {.addr=0xc9f1, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xc9f0, .value=0xcd, .type=IO_READ},
        {.addr=0xc9f1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xd068, .a=0xea, .x=0x6d, .y=0xf2, .sp=0x57, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd068, .value=0xcd}, {.addr=0xd069, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd06a, .a=0xea, .x=0x3d, .y=0xf2, .sp=0x57, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd068, .value=0xcd}, {.addr=0xd069, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd068, .value=0xcd, .type=IO_READ},
        {.addr=0xd069, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x86c9, .a=0x0d, .x=0x2c, .y=0xba, .sp=0x25, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x86c9, .value=0xcd}, {.addr=0x86ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x86cb, .a=0x0d, .x=0x00, .y=0xba, .sp=0x25, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x86c9, .value=0xcd}, {.addr=0x86ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x86c9, .value=0xcd, .type=IO_READ},
        {.addr=0x86ca, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb96f, .a=0x44, .x=0x5e, .y=0xe4, .sp=0x32, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb96f, .value=0xcd}, {.addr=0xb970, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb971, .a=0x44, .x=0x64, .y=0xe4, .sp=0x32, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb96f, .value=0xcd}, {.addr=0xb970, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb96f, .value=0xcd, .type=IO_READ},
        {.addr=0xb970, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xf4f1, .a=0xb5, .x=0xd4, .y=0x69, .sp=0x86, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf4f1, .value=0xcd}, {.addr=0xf4f2, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xf4f3, .a=0xb5, .x=0x89, .y=0x69, .sp=0x86, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf4f1, .value=0xcd}, {.addr=0xf4f2, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xf4f1, .value=0xcd, .type=IO_READ},
        {.addr=0xf4f2, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xb7af, .a=0x92, .x=0x77, .y=0xb0, .sp=0xf8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb7af, .value=0xcd}, {.addr=0xb7b0, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xb7b1, .a=0x92, .x=0xd8, .y=0xb0, .sp=0xf8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb7af, .value=0xcd}, {.addr=0xb7b0, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xb7af, .value=0xcd, .type=IO_READ},
        {.addr=0xb7b0, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x436f, .a=0x2a, .x=0xa9, .y=0x83, .sp=0x0d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x436f, .value=0xcd}, {.addr=0x4370, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x4371, .a=0x2a, .x=0x72, .y=0x83, .sp=0x0d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x436f, .value=0xcd}, {.addr=0x4370, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x436f, .value=0xcd, .type=IO_READ},
        {.addr=0x4370, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x1968, .a=0xa6, .x=0x13, .y=0x23, .sp=0x39, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x1968, .value=0xcd}, {.addr=0x1969, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x196a, .a=0xa6, .x=0x89, .y=0x23, .sp=0x39, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1968, .value=0xcd}, {.addr=0x1969, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x1968, .value=0xcd, .type=IO_READ},
        {.addr=0x1969, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xfca8, .a=0x8d, .x=0x69, .y=0x13, .sp=0x7c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xfca8, .value=0xcd}, {.addr=0xfca9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfcaa, .a=0x8d, .x=0x6d, .y=0x13, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfca8, .value=0xcd}, {.addr=0xfca9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfca8, .value=0xcd, .type=IO_READ},
        {.addr=0xfca9, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5073, .a=0xeb, .x=0xeb, .y=0xee, .sp=0xb0, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5073, .value=0xcd}, {.addr=0x5074, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x5075, .a=0xeb, .x=0x74, .y=0xee, .sp=0xb0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5073, .value=0xcd}, {.addr=0x5074, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x5073, .value=0xcd, .type=IO_READ},
        {.addr=0x5074, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xd707, .a=0x7e, .x=0x44, .y=0x71, .sp=0x85, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd707, .value=0xcd}, {.addr=0xd708, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd709, .a=0x7e, .x=0xc6, .y=0x71, .sp=0x85, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd707, .value=0xcd}, {.addr=0xd708, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd707, .value=0xcd, .type=IO_READ},
        {.addr=0xd708, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xf360, .a=0x53, .x=0x2a, .y=0x2c, .sp=0x4a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf360, .value=0xcd}, {.addr=0xf361, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xf362, .a=0x53, .x=0xe1, .y=0x2c, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf360, .value=0xcd}, {.addr=0xf361, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xf360, .value=0xcd, .type=IO_READ},
        {.addr=0xf361, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x0761, .a=0x14, .x=0x13, .y=0x40, .sp=0x84, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0761, .value=0xcd}, {.addr=0x0762, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0763, .a=0x14, .x=0xae, .y=0x40, .sp=0x84, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0761, .value=0xcd}, {.addr=0x0762, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0761, .value=0xcd, .type=IO_READ},
        {.addr=0x0762, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x3e0e, .a=0x95, .x=0x45, .y=0xf4, .sp=0xd1, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3e0e, .value=0xcd}, {.addr=0x3e0f, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3e10, .a=0x95, .x=0xc5, .y=0xf4, .sp=0xd1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3e0e, .value=0xcd}, {.addr=0x3e0f, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3e0e, .value=0xcd, .type=IO_READ},
        {.addr=0x3e0f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xb384, .a=0x5d, .x=0x16, .y=0x0f, .sp=0x68, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb384, .value=0xcd}, {.addr=0xb385, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xb386, .a=0x5d, .x=0x5a, .y=0x0f, .sp=0x68, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb384, .value=0xcd}, {.addr=0xb385, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xb384, .value=0xcd, .type=IO_READ},
        {.addr=0xb385, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xc35d, .a=0x33, .x=0xd5, .y=0x07, .sp=0x57, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc35d, .value=0xcd}, {.addr=0xc35e, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc35f, .a=0x33, .x=0xee, .y=0x07, .sp=0x57, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc35d, .value=0xcd}, {.addr=0xc35e, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc35d, .value=0xcd, .type=IO_READ},
        {.addr=0xc35e, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0c18, .a=0xdb, .x=0x15, .y=0x8c, .sp=0x3d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0c18, .value=0xcd}, {.addr=0x0c19, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0c1a, .a=0xdb, .x=0xcd, .y=0x8c, .sp=0x3d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0c18, .value=0xcd}, {.addr=0x0c19, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0c18, .value=0xcd, .type=IO_READ},
        {.addr=0x0c19, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x738d, .a=0x65, .x=0xb3, .y=0xa8, .sp=0xe8, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x738d, .value=0xcd}, {.addr=0x738e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x738f, .a=0x65, .x=0x06, .y=0xa8, .sp=0xe8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x738d, .value=0xcd}, {.addr=0x738e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x738d, .value=0xcd, .type=IO_READ},
        {.addr=0x738e, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x6ea7, .a=0x4b, .x=0xc5, .y=0xe1, .sp=0x3a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea7, .value=0xcd}, {.addr=0x6ea8, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x6ea9, .a=0x4b, .x=0x91, .y=0xe1, .sp=0x3a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6ea7, .value=0xcd}, {.addr=0x6ea8, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x6ea7, .value=0xcd, .type=IO_READ},
        {.addr=0x6ea8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x5377, .a=0xd4, .x=0xbc, .y=0x3a, .sp=0xa1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5377, .value=0xcd}, {.addr=0x5378, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x5379, .a=0xd4, .x=0x28, .y=0x3a, .sp=0xa1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5377, .value=0xcd}, {.addr=0x5378, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x5377, .value=0xcd, .type=IO_READ},
        {.addr=0x5378, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x49a6, .a=0x70, .x=0xc9, .y=0x53, .sp=0xe5, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x49a6, .value=0xcd}, {.addr=0x49a7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x49a8, .a=0x70, .x=0x8e, .y=0x53, .sp=0xe5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x49a6, .value=0xcd}, {.addr=0x49a7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x49a6, .value=0xcd, .type=IO_READ},
        {.addr=0x49a7, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x1cd3, .a=0x85, .x=0xea, .y=0x8e, .sp=0x5a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd3, .value=0xcd}, {.addr=0x1cd4, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x1cd5, .a=0x85, .x=0x23, .y=0x8e, .sp=0x5a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1cd3, .value=0xcd}, {.addr=0x1cd4, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x1cd3, .value=0xcd, .type=IO_READ},
        {.addr=0x1cd4, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xaa6a, .a=0xb1, .x=0xd5, .y=0x14, .sp=0x73, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xaa6a, .value=0xcd}, {.addr=0xaa6b, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xaa6c, .a=0xb1, .x=0x6b, .y=0x14, .sp=0x73, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xaa6a, .value=0xcd}, {.addr=0xaa6b, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xaa6a, .value=0xcd, .type=IO_READ},
        {.addr=0xaa6b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x3333, .a=0xbf, .x=0x2d, .y=0x5a, .sp=0x57, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3333, .value=0xcd}, {.addr=0x3334, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x3335, .a=0xbf, .x=0xc4, .y=0x5a, .sp=0x57, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3333, .value=0xcd}, {.addr=0x3334, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3333, .value=0xcd, .type=IO_READ},
        {.addr=0x3334, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x8ec0, .a=0xe3, .x=0x26, .y=0x86, .sp=0x99, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec0, .value=0xcd}, {.addr=0x8ec1, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x8ec2, .a=0xe3, .x=0x85, .y=0x86, .sp=0x99, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8ec0, .value=0xcd}, {.addr=0x8ec1, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x8ec0, .value=0xcd, .type=IO_READ},
        {.addr=0x8ec1, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x785f, .a=0x85, .x=0x12, .y=0x87, .sp=0xde, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x785f, .value=0xcd}, {.addr=0x7860, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x7861, .a=0x85, .x=0xd6, .y=0x87, .sp=0xde, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x785f, .value=0xcd}, {.addr=0x7860, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x785f, .value=0xcd, .type=IO_READ},
        {.addr=0x7860, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xbed7, .a=0x20, .x=0xf6, .y=0x37, .sp=0xfd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xbed7, .value=0xcd}, {.addr=0xbed8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbed9, .a=0x20, .x=0x2d, .y=0x37, .sp=0xfd, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbed7, .value=0xcd}, {.addr=0xbed8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbed7, .value=0xcd, .type=IO_READ},
        {.addr=0xbed8, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xb2c5, .a=0xb1, .x=0x40, .y=0x48, .sp=0xd8, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb2c5, .value=0xcd}, {.addr=0xb2c6, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xb2c7, .a=0xb1, .x=0x13, .y=0x48, .sp=0xd8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb2c5, .value=0xcd}, {.addr=0xb2c6, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xb2c5, .value=0xcd, .type=IO_READ},
        {.addr=0xb2c6, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xafc9, .a=0x5c, .x=0x31, .y=0xde, .sp=0x5c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xafc9, .value=0xcd}, {.addr=0xafca, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xafcb, .a=0x5c, .x=0xfd, .y=0xde, .sp=0x5c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xafc9, .value=0xcd}, {.addr=0xafca, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xafc9, .value=0xcd, .type=IO_READ},
        {.addr=0xafca, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1d70, .a=0xd8, .x=0xfe, .y=0x68, .sp=0x21, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1d70, .value=0xcd}, {.addr=0x1d71, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x1d72, .a=0xd8, .x=0x48, .y=0x68, .sp=0x21, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1d70, .value=0xcd}, {.addr=0x1d71, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x1d70, .value=0xcd, .type=IO_READ},
        {.addr=0x1d71, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8d46, .a=0x60, .x=0x6c, .y=0x3d, .sp=0x73, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d46, .value=0xcd}, {.addr=0x8d47, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x8d48, .a=0x60, .x=0xb6, .y=0x3d, .sp=0x73, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8d46, .value=0xcd}, {.addr=0x8d47, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8d46, .value=0xcd, .type=IO_READ},
        {.addr=0x8d47, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x7274, .a=0x2a, .x=0xcb, .y=0xc1, .sp=0x58, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x7274, .value=0xcd}, {.addr=0x7275, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x7276, .a=0x2a, .x=0x03, .y=0xc1, .sp=0x58, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7274, .value=0xcd}, {.addr=0x7275, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x7274, .value=0xcd, .type=IO_READ},
        {.addr=0x7275, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xccf1, .a=0xbd, .x=0x6f, .y=0x21, .sp=0x55, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xccf1, .value=0xcd}, {.addr=0xccf2, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xccf3, .a=0xbd, .x=0x23, .y=0x21, .sp=0x55, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xccf1, .value=0xcd}, {.addr=0xccf2, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xccf1, .value=0xcd, .type=IO_READ},
        {.addr=0xccf2, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xa10e, .a=0x25, .x=0x73, .y=0xea, .sp=0xab, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa10e, .value=0xcd}, {.addr=0xa10f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa110, .a=0x25, .x=0xae, .y=0xea, .sp=0xab, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa10e, .value=0xcd}, {.addr=0xa10f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa10e, .value=0xcd, .type=IO_READ},
        {.addr=0xa10f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xc836, .a=0xdc, .x=0x29, .y=0x5b, .sp=0xbc, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc836, .value=0xcd}, {.addr=0xc837, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xc838, .a=0xdc, .x=0x2f, .y=0x5b, .sp=0xbc, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc836, .value=0xcd}, {.addr=0xc837, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xc836, .value=0xcd, .type=IO_READ},
        {.addr=0xc837, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x20bc, .a=0x8b, .x=0x8e, .y=0x06, .sp=0xf8, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x20bc, .value=0xcd}, {.addr=0x20bd, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x20be, .a=0x8b, .x=0x6f, .y=0x06, .sp=0xf8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x20bc, .value=0xcd}, {.addr=0x20bd, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x20bc, .value=0xcd, .type=IO_READ},
        {.addr=0x20bd, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x45c1, .a=0x69, .x=0xbc, .y=0x52, .sp=0xa4, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x45c1, .value=0xcd}, {.addr=0x45c2, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x45c3, .a=0x69, .x=0x79, .y=0x52, .sp=0xa4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x45c1, .value=0xcd}, {.addr=0x45c2, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x45c1, .value=0xcd, .type=IO_READ},
        {.addr=0x45c2, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x81bd, .a=0x7a, .x=0x8e, .y=0x82, .sp=0x6a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x81bd, .value=0xcd}, {.addr=0x81be, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x81bf, .a=0x7a, .x=0x57, .y=0x82, .sp=0x6a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x81bd, .value=0xcd}, {.addr=0x81be, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x81bd, .value=0xcd, .type=IO_READ},
        {.addr=0x81be, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xf885, .a=0x8f, .x=0x42, .y=0xb7, .sp=0x07, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf885, .value=0xcd}, {.addr=0xf886, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xf887, .a=0x8f, .x=0x04, .y=0xb7, .sp=0x07, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf885, .value=0xcd}, {.addr=0xf886, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xf885, .value=0xcd, .type=IO_READ},
        {.addr=0xf886, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x4649, .a=0x3a, .x=0x6b, .y=0xa9, .sp=0xf0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4649, .value=0xcd}, {.addr=0x464a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x464b, .a=0x3a, .x=0x2d, .y=0xa9, .sp=0xf0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4649, .value=0xcd}, {.addr=0x464a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4649, .value=0xcd, .type=IO_READ},
        {.addr=0x464a, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x7650, .a=0xb2, .x=0x44, .y=0x15, .sp=0x8e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7650, .value=0xcd}, {.addr=0x7651, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x7652, .a=0xb2, .x=0x32, .y=0x15, .sp=0x8e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7650, .value=0xcd}, {.addr=0x7651, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x7650, .value=0xcd, .type=IO_READ},
        {.addr=0x7651, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x13f9, .a=0x16, .x=0xac, .y=0xbd, .sp=0xe8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x13f9, .value=0xcd}, {.addr=0x13fa, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x13fb, .a=0x16, .x=0x2e, .y=0xbd, .sp=0xe8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x13f9, .value=0xcd}, {.addr=0x13fa, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x13f9, .value=0xcd, .type=IO_READ},
        {.addr=0x13fa, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xdecd, .a=0x70, .x=0x98, .y=0xbd, .sp=0x6b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xdecd, .value=0xcd}, {.addr=0xdece, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdecf, .a=0x70, .x=0xed, .y=0xbd, .sp=0x6b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xdecd, .value=0xcd}, {.addr=0xdece, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdecd, .value=0xcd, .type=IO_READ},
        {.addr=0xdece, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x78cb, .a=0x25, .x=0xa8, .y=0x14, .sp=0xc5, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x78cb, .value=0xcd}, {.addr=0x78cc, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x78cd, .a=0x25, .x=0xec, .y=0x14, .sp=0xc5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x78cb, .value=0xcd}, {.addr=0x78cc, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x78cb, .value=0xcd, .type=IO_READ},
        {.addr=0x78cc, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x916d, .a=0xab, .x=0x45, .y=0xc1, .sp=0x30, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x916d, .value=0xcd}, {.addr=0x916e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x916f, .a=0xab, .x=0x9d, .y=0xc1, .sp=0x30, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x916d, .value=0xcd}, {.addr=0x916e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x916d, .value=0xcd, .type=IO_READ},
        {.addr=0x916e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x54e0, .a=0xc2, .x=0x37, .y=0x9c, .sp=0x85, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x54e0, .value=0xcd}, {.addr=0x54e1, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x54e2, .a=0xc2, .x=0x31, .y=0x9c, .sp=0x85, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x54e0, .value=0xcd}, {.addr=0x54e1, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x54e0, .value=0xcd, .type=IO_READ},
        {.addr=0x54e1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xde71, .a=0x7f, .x=0xeb, .y=0xf2, .sp=0xeb, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xde71, .value=0xcd}, {.addr=0xde72, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xde73, .a=0x7f, .x=0x6b, .y=0xf2, .sp=0xeb, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xde71, .value=0xcd}, {.addr=0xde72, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xde71, .value=0xcd, .type=IO_READ},
        {.addr=0xde72, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x446d, .a=0x9e, .x=0x4c, .y=0x74, .sp=0x3e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x446d, .value=0xcd}, {.addr=0x446e, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x446f, .a=0x9e, .x=0x22, .y=0x74, .sp=0x3e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x446d, .value=0xcd}, {.addr=0x446e, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x446d, .value=0xcd, .type=IO_READ},
        {.addr=0x446e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x2911, .a=0xaf, .x=0x05, .y=0xbd, .sp=0x3f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2911, .value=0xcd}, {.addr=0x2912, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x2913, .a=0xaf, .x=0xff, .y=0xbd, .sp=0x3f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2911, .value=0xcd}, {.addr=0x2912, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x2911, .value=0xcd, .type=IO_READ},
        {.addr=0x2912, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xff66, .a=0xf2, .x=0xb5, .y=0x71, .sp=0x3d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xff66, .value=0xcd}, {.addr=0xff67, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xff68, .a=0xf2, .x=0x3f, .y=0x71, .sp=0x3d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xff66, .value=0xcd}, {.addr=0xff67, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xff66, .value=0xcd, .type=IO_READ},
        {.addr=0xff67, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x9ad6, .a=0x77, .x=0x52, .y=0x80, .sp=0x8a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad6, .value=0xcd}, {.addr=0x9ad7, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x9ad8, .a=0x77, .x=0xc9, .y=0x80, .sp=0x8a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9ad6, .value=0xcd}, {.addr=0x9ad7, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x9ad6, .value=0xcd, .type=IO_READ},
        {.addr=0x9ad7, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x8d77, .a=0x94, .x=0x84, .y=0xaf, .sp=0x99, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8d77, .value=0xcd}, {.addr=0x8d78, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x8d79, .a=0x94, .x=0xf6, .y=0xaf, .sp=0x99, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8d77, .value=0xcd}, {.addr=0x8d78, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x8d77, .value=0xcd, .type=IO_READ},
        {.addr=0x8d78, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x330c, .a=0xb0, .x=0xb9, .y=0x2a, .sp=0x26, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x330c, .value=0xcd}, {.addr=0x330d, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x330e, .a=0xb0, .x=0x24, .y=0x2a, .sp=0x26, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x330c, .value=0xcd}, {.addr=0x330d, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x330c, .value=0xcd, .type=IO_READ},
        {.addr=0x330d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x8cd2, .a=0xfa, .x=0x1c, .y=0x7a, .sp=0xde, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd2, .value=0xcd}, {.addr=0x8cd3, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x8cd4, .a=0xfa, .x=0x99, .y=0x7a, .sp=0xde, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8cd2, .value=0xcd}, {.addr=0x8cd3, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x8cd2, .value=0xcd, .type=IO_READ},
        {.addr=0x8cd3, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xea44, .a=0xc4, .x=0x55, .y=0x46, .sp=0x15, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xea44, .value=0xcd}, {.addr=0xea45, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xea46, .a=0xc4, .x=0xb8, .y=0x46, .sp=0x15, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xea44, .value=0xcd}, {.addr=0xea45, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xea44, .value=0xcd, .type=IO_READ},
        {.addr=0xea45, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xbe29, .a=0x4e, .x=0xb0, .y=0x18, .sp=0x72, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbe29, .value=0xcd}, {.addr=0xbe2a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xbe2b, .a=0x4e, .x=0x0e, .y=0x18, .sp=0x72, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbe29, .value=0xcd}, {.addr=0xbe2a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xbe29, .value=0xcd, .type=IO_READ},
        {.addr=0xbe2a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x294a, .a=0x42, .x=0x70, .y=0x5f, .sp=0xcf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x294a, .value=0xcd}, {.addr=0x294b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x294c, .a=0x42, .x=0x1c, .y=0x5f, .sp=0xcf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x294a, .value=0xcd}, {.addr=0x294b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x294a, .value=0xcd, .type=IO_READ},
        {.addr=0x294b, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x3bfa, .a=0x5a, .x=0x03, .y=0x15, .sp=0xd2, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3bfa, .value=0xcd}, {.addr=0x3bfb, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3bfc, .a=0x5a, .x=0xa9, .y=0x15, .sp=0xd2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3bfa, .value=0xcd}, {.addr=0x3bfb, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3bfa, .value=0xcd, .type=IO_READ},
        {.addr=0x3bfb, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb9af, .a=0x2d, .x=0x35, .y=0x80, .sp=0xc6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb9af, .value=0xcd}, {.addr=0xb9b0, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xb9b1, .a=0x2d, .x=0xd7, .y=0x80, .sp=0xc6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb9af, .value=0xcd}, {.addr=0xb9b0, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xb9af, .value=0xcd, .type=IO_READ},
        {.addr=0xb9b0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x48a4, .a=0xbd, .x=0x82, .y=0xf6, .sp=0x1e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x48a4, .value=0xcd}, {.addr=0x48a5, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x48a6, .a=0xbd, .x=0xc9, .y=0xf6, .sp=0x1e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x48a4, .value=0xcd}, {.addr=0x48a5, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x48a4, .value=0xcd, .type=IO_READ},
        {.addr=0x48a5, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x5831, .a=0xa1, .x=0xdd, .y=0x9e, .sp=0x87, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5831, .value=0xcd}, {.addr=0x5832, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x5833, .a=0xa1, .x=0x9e, .y=0x9e, .sp=0x87, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5831, .value=0xcd}, {.addr=0x5832, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x5831, .value=0xcd, .type=IO_READ},
        {.addr=0x5832, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x315f, .a=0x97, .x=0x1a, .y=0xbf, .sp=0x47, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x315f, .value=0xcd}, {.addr=0x3160, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x3161, .a=0x97, .x=0x18, .y=0xbf, .sp=0x47, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x315f, .value=0xcd}, {.addr=0x3160, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x315f, .value=0xcd, .type=IO_READ},
        {.addr=0x3160, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x5e53, .a=0xd8, .x=0x8d, .y=0x1e, .sp=0xd1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5e53, .value=0xcd}, {.addr=0x5e54, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x5e55, .a=0xd8, .x=0xd6, .y=0x1e, .sp=0xd1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5e53, .value=0xcd}, {.addr=0x5e54, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x5e53, .value=0xcd, .type=IO_READ},
        {.addr=0x5e54, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x7268, .a=0x20, .x=0x42, .y=0x95, .sp=0xc5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7268, .value=0xcd}, {.addr=0x7269, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x726a, .a=0x20, .x=0x60, .y=0x95, .sp=0xc5, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7268, .value=0xcd}, {.addr=0x7269, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7268, .value=0xcd, .type=IO_READ},
        {.addr=0x7269, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6736, .a=0x64, .x=0xb8, .y=0x18, .sp=0xcc, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6736, .value=0xcd}, {.addr=0x6737, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x6738, .a=0x64, .x=0xa5, .y=0x18, .sp=0xcc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6736, .value=0xcd}, {.addr=0x6737, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x6736, .value=0xcd, .type=IO_READ},
        {.addr=0x6737, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x5b0e, .a=0x6a, .x=0xce, .y=0xac, .sp=0x78, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5b0e, .value=0xcd}, {.addr=0x5b0f, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x5b10, .a=0x6a, .x=0xd5, .y=0xac, .sp=0x78, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5b0e, .value=0xcd}, {.addr=0x5b0f, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x5b0e, .value=0xcd, .type=IO_READ},
        {.addr=0x5b0f, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x0082, .a=0x93, .x=0x43, .y=0x51, .sp=0xbb, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xcd}, {.addr=0x0083, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x0084, .a=0x93, .x=0xb4, .y=0x51, .sp=0xbb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xcd}, {.addr=0x0083, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x0082, .value=0xcd, .type=IO_READ},
        {.addr=0x0083, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x0846, .a=0x68, .x=0x37, .y=0xa1, .sp=0x0f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0846, .value=0xcd}, {.addr=0x0847, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x0848, .a=0x68, .x=0x30, .y=0xa1, .sp=0x0f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0846, .value=0xcd}, {.addr=0x0847, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x0846, .value=0xcd, .type=IO_READ},
        {.addr=0x0847, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x5763, .a=0xe7, .x=0xf8, .y=0x46, .sp=0xba, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5763, .value=0xcd}, {.addr=0x5764, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x5765, .a=0xe7, .x=0xe9, .y=0x46, .sp=0xba, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5763, .value=0xcd}, {.addr=0x5764, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x5763, .value=0xcd, .type=IO_READ},
        {.addr=0x5764, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x6af9, .a=0x8c, .x=0x40, .y=0x75, .sp=0xcf, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6af9, .value=0xcd}, {.addr=0x6afa, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x6afb, .a=0x8c, .x=0x36, .y=0x75, .sp=0xcf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6af9, .value=0xcd}, {.addr=0x6afa, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x6af9, .value=0xcd, .type=IO_READ},
        {.addr=0x6afa, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xc443, .a=0x25, .x=0xba, .y=0x0d, .sp=0x92, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xc443, .value=0xcd}, {.addr=0xc444, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xc445, .a=0x25, .x=0xc5, .y=0x0d, .sp=0x92, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc443, .value=0xcd}, {.addr=0xc444, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xc443, .value=0xcd, .type=IO_READ},
        {.addr=0xc444, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x7a6e, .a=0x11, .x=0x11, .y=0x44, .sp=0x11, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x7a6e, .value=0xcd}, {.addr=0x7a6f, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x7a70, .a=0x11, .x=0x02, .y=0x44, .sp=0x11, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7a6e, .value=0xcd}, {.addr=0x7a6f, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x7a6e, .value=0xcd, .type=IO_READ},
        {.addr=0x7a6f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xd610, .a=0x99, .x=0x79, .y=0x10, .sp=0x10, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd610, .value=0xcd}, {.addr=0xd611, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xd612, .a=0x99, .x=0xac, .y=0x10, .sp=0x10, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xd610, .value=0xcd}, {.addr=0xd611, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xd610, .value=0xcd, .type=IO_READ},
        {.addr=0xd611, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x5205, .a=0xba, .x=0x2e, .y=0x35, .sp=0xb0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5205, .value=0xcd}, {.addr=0x5206, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5207, .a=0xba, .x=0xbd, .y=0x35, .sp=0xb0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x5205, .value=0xcd}, {.addr=0x5206, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5205, .value=0xcd, .type=IO_READ},
        {.addr=0x5206, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xb123, .a=0x24, .x=0x97, .y=0xfa, .sp=0x99, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb123, .value=0xcd}, {.addr=0xb124, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb125, .a=0x24, .x=0x77, .y=0xfa, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb123, .value=0xcd}, {.addr=0xb124, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb123, .value=0xcd, .type=IO_READ},
        {.addr=0xb124, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7b1f, .a=0x8f, .x=0xfb, .y=0xcc, .sp=0xb6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7b1f, .value=0xcd}, {.addr=0x7b20, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x7b21, .a=0x8f, .x=0x17, .y=0xcc, .sp=0xb6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7b1f, .value=0xcd}, {.addr=0x7b20, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x7b1f, .value=0xcd, .type=IO_READ},
        {.addr=0x7b20, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xbec4, .a=0x36, .x=0xc1, .y=0x15, .sp=0x53, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xbec4, .value=0xcd}, {.addr=0xbec5, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xbec6, .a=0x36, .x=0xe5, .y=0x15, .sp=0x53, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xbec4, .value=0xcd}, {.addr=0xbec5, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xbec4, .value=0xcd, .type=IO_READ},
        {.addr=0xbec5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x0001, .a=0xc3, .x=0x05, .y=0x46, .sp=0xa3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xcd}, {.addr=0x0002, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x0003, .a=0xc3, .x=0xb0, .y=0x46, .sp=0xa3, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xcd}, {.addr=0x0002, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x0001, .value=0xcd, .type=IO_READ},
        {.addr=0x0002, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xdd70, .a=0xf9, .x=0x03, .y=0x72, .sp=0xef, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xdd70, .value=0xcd}, {.addr=0xdd71, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xdd72, .a=0xf9, .x=0x21, .y=0x72, .sp=0xef, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xdd70, .value=0xcd}, {.addr=0xdd71, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xdd70, .value=0xcd, .type=IO_READ},
        {.addr=0xdd71, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xaed7, .a=0x67, .x=0x81, .y=0x1b, .sp=0x19, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xaed7, .value=0xcd}, {.addr=0xaed8, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xaed9, .a=0x67, .x=0x03, .y=0x1b, .sp=0x19, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xaed7, .value=0xcd}, {.addr=0xaed8, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xaed7, .value=0xcd, .type=IO_READ},
        {.addr=0xaed8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x1ad3, .a=0x84, .x=0xdd, .y=0xf6, .sp=0x47, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad3, .value=0xcd}, {.addr=0x1ad4, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x1ad5, .a=0x84, .x=0xcc, .y=0xf6, .sp=0x47, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1ad3, .value=0xcd}, {.addr=0x1ad4, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x1ad3, .value=0xcd, .type=IO_READ},
        {.addr=0x1ad4, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xa75b, .a=0x43, .x=0x56, .y=0x3c, .sp=0x8a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa75b, .value=0xcd}, {.addr=0xa75c, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xa75d, .a=0x43, .x=0x70, .y=0x3c, .sp=0x8a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa75b, .value=0xcd}, {.addr=0xa75c, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xa75b, .value=0xcd, .type=IO_READ},
        {.addr=0xa75c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x2e63, .a=0x28, .x=0x6d, .y=0xf3, .sp=0xd5, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2e63, .value=0xcd}, {.addr=0x2e64, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2e65, .a=0x28, .x=0xaf, .y=0xf3, .sp=0xd5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2e63, .value=0xcd}, {.addr=0x2e64, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2e63, .value=0xcd, .type=IO_READ},
        {.addr=0x2e64, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x0318, .a=0x52, .x=0x3b, .y=0xd2, .sp=0x43, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0318, .value=0xcd}, {.addr=0x0319, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x031a, .a=0x52, .x=0x2a, .y=0xd2, .sp=0x43, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0318, .value=0xcd}, {.addr=0x0319, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x0318, .value=0xcd, .type=IO_READ},
        {.addr=0x0319, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xf0ad, .a=0x95, .x=0xdd, .y=0x9e, .sp=0x8f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ad, .value=0xcd}, {.addr=0xf0ae, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xf0af, .a=0x95, .x=0x16, .y=0x9e, .sp=0x8f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf0ad, .value=0xcd}, {.addr=0xf0ae, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xf0ad, .value=0xcd, .type=IO_READ},
        {.addr=0xf0ae, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x95e3, .a=0x8d, .x=0x19, .y=0xeb, .sp=0x7b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x95e3, .value=0xcd}, {.addr=0x95e4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x95e5, .a=0x8d, .x=0x26, .y=0xeb, .sp=0x7b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x95e3, .value=0xcd}, {.addr=0x95e4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x95e3, .value=0xcd, .type=IO_READ},
        {.addr=0x95e4, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x28c0, .a=0x70, .x=0x6d, .y=0xc6, .sp=0xbb, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x28c0, .value=0xcd}, {.addr=0x28c1, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x28c2, .a=0x70, .x=0xb7, .y=0xc6, .sp=0xbb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x28c0, .value=0xcd}, {.addr=0x28c1, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x28c0, .value=0xcd, .type=IO_READ},
        {.addr=0x28c1, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x095f, .a=0xe6, .x=0xf4, .y=0x0c, .sp=0x99, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x095f, .value=0xcd}, {.addr=0x0960, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x0961, .a=0xe6, .x=0xd2, .y=0x0c, .sp=0x99, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x095f, .value=0xcd}, {.addr=0x0960, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x095f, .value=0xcd, .type=IO_READ},
        {.addr=0x0960, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xbf26, .a=0x21, .x=0x80, .y=0x78, .sp=0x41, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xbf26, .value=0xcd}, {.addr=0xbf27, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xbf28, .a=0x21, .x=0x1f, .y=0x78, .sp=0x41, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbf26, .value=0xcd}, {.addr=0xbf27, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xbf26, .value=0xcd, .type=IO_READ},
        {.addr=0xbf27, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x1148, .a=0xbf, .x=0xbb, .y=0x8a, .sp=0x1d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1148, .value=0xcd}, {.addr=0x1149, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x114a, .a=0xbf, .x=0xcc, .y=0x8a, .sp=0x1d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1148, .value=0xcd}, {.addr=0x1149, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x1148, .value=0xcd, .type=IO_READ},
        {.addr=0x1149, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x1e7c, .a=0xba, .x=0x28, .y=0x75, .sp=0x7e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1e7c, .value=0xcd}, {.addr=0x1e7d, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x1e7e, .a=0xba, .x=0x14, .y=0x75, .sp=0x7e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1e7c, .value=0xcd}, {.addr=0x1e7d, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x1e7c, .value=0xcd, .type=IO_READ},
        {.addr=0x1e7d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x21e4, .a=0xf3, .x=0x03, .y=0x19, .sp=0x7a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x21e4, .value=0xcd}, {.addr=0x21e5, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x21e6, .a=0xf3, .x=0x8f, .y=0x19, .sp=0x7a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x21e4, .value=0xcd}, {.addr=0x21e5, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x21e4, .value=0xcd, .type=IO_READ},
        {.addr=0x21e5, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x872b, .a=0x48, .x=0xce, .y=0x0d, .sp=0x1e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x872b, .value=0xcd}, {.addr=0x872c, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x872d, .a=0x48, .x=0x10, .y=0x0d, .sp=0x1e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x872b, .value=0xcd}, {.addr=0x872c, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x872b, .value=0xcd, .type=IO_READ},
        {.addr=0x872c, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xdd2b, .a=0x67, .x=0x0f, .y=0xe6, .sp=0x7f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xdd2b, .value=0xcd}, {.addr=0xdd2c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xdd2d, .a=0x67, .x=0xa1, .y=0xe6, .sp=0x7f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdd2b, .value=0xcd}, {.addr=0xdd2c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xdd2b, .value=0xcd, .type=IO_READ},
        {.addr=0xdd2c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x4419, .a=0x1b, .x=0xd5, .y=0x99, .sp=0x8f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4419, .value=0xcd}, {.addr=0x441a, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x441b, .a=0x1b, .x=0x53, .y=0x99, .sp=0x8f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4419, .value=0xcd}, {.addr=0x441a, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x4419, .value=0xcd, .type=IO_READ},
        {.addr=0x441a, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0100) {
    const struct CPU_State initial_cpu = {.pc=0x54a5, .a=0xef, .x=0x1b, .y=0x58, .sp=0xe9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x54a5, .value=0xcd}, {.addr=0x54a6, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x54a7, .a=0xef, .x=0x51, .y=0x58, .sp=0xe9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x54a5, .value=0xcd}, {.addr=0x54a6, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x54a5, .value=0xcd, .type=IO_READ},
        {.addr=0x54a6, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0101) {
    const struct CPU_State initial_cpu = {.pc=0x564d, .a=0x8b, .x=0xba, .y=0xe4, .sp=0x5c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x564d, .value=0xcd}, {.addr=0x564e, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x564f, .a=0x8b, .x=0x77, .y=0xe4, .sp=0x5c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x564d, .value=0xcd}, {.addr=0x564e, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x564d, .value=0xcd, .type=IO_READ},
        {.addr=0x564e, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0102) {
    const struct CPU_State initial_cpu = {.pc=0xc786, .a=0xfa, .x=0x77, .y=0xf3, .sp=0x0b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc786, .value=0xcd}, {.addr=0xc787, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc788, .a=0xfa, .x=0x6d, .y=0xf3, .sp=0x0b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc786, .value=0xcd}, {.addr=0xc787, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc786, .value=0xcd, .type=IO_READ},
        {.addr=0xc787, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb381, .a=0x00, .x=0x7a, .y=0xf5, .sp=0x5f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb381, .value=0xcd}, {.addr=0xb382, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xb383, .a=0x00, .x=0x1b, .y=0xf5, .sp=0x5f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb381, .value=0xcd}, {.addr=0xb382, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xb381, .value=0xcd, .type=IO_READ},
        {.addr=0xb382, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0104) {
    const struct CPU_State initial_cpu = {.pc=0x48b1, .a=0x05, .x=0x88, .y=0xaa, .sp=0x90, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x48b1, .value=0xcd}, {.addr=0x48b2, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x48b3, .a=0x05, .x=0xba, .y=0xaa, .sp=0x90, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x48b1, .value=0xcd}, {.addr=0x48b2, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x48b1, .value=0xcd, .type=IO_READ},
        {.addr=0x48b2, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0105) {
    const struct CPU_State initial_cpu = {.pc=0xe2c8, .a=0xd7, .x=0x37, .y=0x70, .sp=0x7d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2c8, .value=0xcd}, {.addr=0xe2c9, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xe2ca, .a=0xd7, .x=0x8a, .y=0x70, .sp=0x7d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe2c8, .value=0xcd}, {.addr=0xe2c9, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xe2c8, .value=0xcd, .type=IO_READ},
        {.addr=0xe2c9, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0106) {
    const struct CPU_State initial_cpu = {.pc=0x965a, .a=0xf0, .x=0x4c, .y=0xef, .sp=0x1e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x965a, .value=0xcd}, {.addr=0x965b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x965c, .a=0xf0, .x=0x42, .y=0xef, .sp=0x1e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x965a, .value=0xcd}, {.addr=0x965b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x965a, .value=0xcd, .type=IO_READ},
        {.addr=0x965b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0107) {
    const struct CPU_State initial_cpu = {.pc=0xfe78, .a=0x3e, .x=0x24, .y=0x77, .sp=0xb3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xfe78, .value=0xcd}, {.addr=0xfe79, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xfe7a, .a=0x3e, .x=0x2c, .y=0x77, .sp=0xb3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xfe78, .value=0xcd}, {.addr=0xfe79, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xfe78, .value=0xcd, .type=IO_READ},
        {.addr=0xfe79, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0108) {
    const struct CPU_State initial_cpu = {.pc=0x3528, .a=0x3c, .x=0x86, .y=0x52, .sp=0xe1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3528, .value=0xcd}, {.addr=0x3529, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x352a, .a=0x3c, .x=0x5f, .y=0x52, .sp=0xe1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3528, .value=0xcd}, {.addr=0x3529, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x3528, .value=0xcd, .type=IO_READ},
        {.addr=0x3529, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0109) {
    const struct CPU_State initial_cpu = {.pc=0x7e3f, .a=0xee, .x=0xe4, .y=0xa0, .sp=0xfa, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7e3f, .value=0xcd}, {.addr=0x7e40, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x7e41, .a=0xee, .x=0xfa, .y=0xa0, .sp=0xfa, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7e3f, .value=0xcd}, {.addr=0x7e40, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x7e3f, .value=0xcd, .type=IO_READ},
        {.addr=0x7e40, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010A) {
    const struct CPU_State initial_cpu = {.pc=0x969b, .a=0x58, .x=0x71, .y=0xb1, .sp=0x85, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x969b, .value=0xcd}, {.addr=0x969c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x969d, .a=0x58, .x=0xfc, .y=0xb1, .sp=0x85, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x969b, .value=0xcd}, {.addr=0x969c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x969b, .value=0xcd, .type=IO_READ},
        {.addr=0x969c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa43b, .a=0xea, .x=0x36, .y=0xb6, .sp=0xe0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa43b, .value=0xcd}, {.addr=0xa43c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa43d, .a=0xea, .x=0xc6, .y=0xb6, .sp=0xe0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa43b, .value=0xcd}, {.addr=0xa43c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa43b, .value=0xcd, .type=IO_READ},
        {.addr=0xa43c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010C) {
    const struct CPU_State initial_cpu = {.pc=0x623b, .a=0x02, .x=0xcf, .y=0x7a, .sp=0x13, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x623b, .value=0xcd}, {.addr=0x623c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x623d, .a=0x02, .x=0x5d, .y=0x7a, .sp=0x13, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x623b, .value=0xcd}, {.addr=0x623c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x623b, .value=0xcd, .type=IO_READ},
        {.addr=0x623c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010D) {
    const struct CPU_State initial_cpu = {.pc=0x9e31, .a=0xd7, .x=0x6c, .y=0x13, .sp=0xbb, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9e31, .value=0xcd}, {.addr=0x9e32, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9e33, .a=0xd7, .x=0xf5, .y=0x13, .sp=0xbb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9e31, .value=0xcd}, {.addr=0x9e32, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9e31, .value=0xcd, .type=IO_READ},
        {.addr=0x9e32, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010E) {
    const struct CPU_State initial_cpu = {.pc=0x2e62, .a=0x9a, .x=0x9c, .y=0xfa, .sp=0xde, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2e62, .value=0xcd}, {.addr=0x2e63, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2e64, .a=0x9a, .x=0x8a, .y=0xfa, .sp=0xde, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2e62, .value=0xcd}, {.addr=0x2e63, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x2e62, .value=0xcd, .type=IO_READ},
        {.addr=0x2e63, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_010F) {
    const struct CPU_State initial_cpu = {.pc=0x7b8d, .a=0xb4, .x=0xab, .y=0xeb, .sp=0x18, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8d, .value=0xcd}, {.addr=0x7b8e, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x7b8f, .a=0xb4, .x=0xb4, .y=0xeb, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7b8d, .value=0xcd}, {.addr=0x7b8e, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7b8d, .value=0xcd, .type=IO_READ},
        {.addr=0x7b8e, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0110) {
    const struct CPU_State initial_cpu = {.pc=0xefbd, .a=0x95, .x=0x86, .y=0xf6, .sp=0x8e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xefbd, .value=0xcd}, {.addr=0xefbe, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xefbf, .a=0x95, .x=0x13, .y=0xf6, .sp=0x8e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xefbd, .value=0xcd}, {.addr=0xefbe, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xefbd, .value=0xcd, .type=IO_READ},
        {.addr=0xefbe, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0111) {
    const struct CPU_State initial_cpu = {.pc=0x0e66, .a=0x9b, .x=0x06, .y=0x8b, .sp=0xea, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0e66, .value=0xcd}, {.addr=0x0e67, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0e68, .a=0x9b, .x=0x60, .y=0x8b, .sp=0xea, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0e66, .value=0xcd}, {.addr=0x0e67, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0e66, .value=0xcd, .type=IO_READ},
        {.addr=0x0e67, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0112) {
    const struct CPU_State initial_cpu = {.pc=0x8dc0, .a=0xc4, .x=0xe3, .y=0x57, .sp=0x42, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8dc0, .value=0xcd}, {.addr=0x8dc1, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x8dc2, .a=0xc4, .x=0xee, .y=0x57, .sp=0x42, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8dc0, .value=0xcd}, {.addr=0x8dc1, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x8dc0, .value=0xcd, .type=IO_READ},
        {.addr=0x8dc1, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0113) {
    const struct CPU_State initial_cpu = {.pc=0x66a5, .a=0xf1, .x=0x7e, .y=0x26, .sp=0xfb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x66a5, .value=0xcd}, {.addr=0x66a6, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x66a7, .a=0xf1, .x=0xe4, .y=0x26, .sp=0xfb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x66a5, .value=0xcd}, {.addr=0x66a6, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x66a5, .value=0xcd, .type=IO_READ},
        {.addr=0x66a6, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0114) {
    const struct CPU_State initial_cpu = {.pc=0xe3cb, .a=0x34, .x=0x46, .y=0x73, .sp=0xc8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe3cb, .value=0xcd}, {.addr=0xe3cc, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe3cd, .a=0x34, .x=0x34, .y=0x73, .sp=0xc8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe3cb, .value=0xcd}, {.addr=0xe3cc, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe3cb, .value=0xcd, .type=IO_READ},
        {.addr=0xe3cc, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0115) {
    const struct CPU_State initial_cpu = {.pc=0xf6ff, .a=0xa2, .x=0xf4, .y=0x3d, .sp=0x80, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ff, .value=0xcd}, {.addr=0xf700, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf701, .a=0xa2, .x=0x86, .y=0x3d, .sp=0x80, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf6ff, .value=0xcd}, {.addr=0xf700, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf6ff, .value=0xcd, .type=IO_READ},
        {.addr=0xf700, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0116) {
    const struct CPU_State initial_cpu = {.pc=0xe32f, .a=0xde, .x=0xea, .y=0x7b, .sp=0x77, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe32f, .value=0xcd}, {.addr=0xe330, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe331, .a=0xde, .x=0x8d, .y=0x7b, .sp=0x77, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe32f, .value=0xcd}, {.addr=0xe330, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe32f, .value=0xcd, .type=IO_READ},
        {.addr=0xe330, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0117) {
    const struct CPU_State initial_cpu = {.pc=0xfd74, .a=0x40, .x=0xa2, .y=0xe7, .sp=0xb2, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xfd74, .value=0xcd}, {.addr=0xfd75, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xfd76, .a=0x40, .x=0x04, .y=0xe7, .sp=0xb2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfd74, .value=0xcd}, {.addr=0xfd75, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xfd74, .value=0xcd, .type=IO_READ},
        {.addr=0xfd75, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0118) {
    const struct CPU_State initial_cpu = {.pc=0xf7d7, .a=0x28, .x=0xa9, .y=0xbc, .sp=0x40, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf7d7, .value=0xcd}, {.addr=0xf7d8, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf7d9, .a=0x28, .x=0xdd, .y=0xbc, .sp=0x40, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf7d7, .value=0xcd}, {.addr=0xf7d8, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf7d7, .value=0xcd, .type=IO_READ},
        {.addr=0xf7d8, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0119) {
    const struct CPU_State initial_cpu = {.pc=0x4eaa, .a=0x85, .x=0x79, .y=0xd6, .sp=0xf1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4eaa, .value=0xcd}, {.addr=0x4eab, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x4eac, .a=0x85, .x=0x4a, .y=0xd6, .sp=0xf1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4eaa, .value=0xcd}, {.addr=0x4eab, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x4eaa, .value=0xcd, .type=IO_READ},
        {.addr=0x4eab, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011A) {
    const struct CPU_State initial_cpu = {.pc=0xc19c, .a=0xf9, .x=0x4a, .y=0x94, .sp=0xfc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc19c, .value=0xcd}, {.addr=0xc19d, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc19e, .a=0xf9, .x=0xb5, .y=0x94, .sp=0xfc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc19c, .value=0xcd}, {.addr=0xc19d, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc19c, .value=0xcd, .type=IO_READ},
        {.addr=0xc19d, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011B) {
    const struct CPU_State initial_cpu = {.pc=0x52bf, .a=0xef, .x=0x0f, .y=0x04, .sp=0x4b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x52bf, .value=0xcd}, {.addr=0x52c0, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x52c1, .a=0xef, .x=0x0f, .y=0x04, .sp=0x4b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x52bf, .value=0xcd}, {.addr=0x52c0, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x52bf, .value=0xcd, .type=IO_READ},
        {.addr=0x52c0, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011C) {
    const struct CPU_State initial_cpu = {.pc=0xee3c, .a=0xe2, .x=0xb1, .y=0x96, .sp=0x5f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xee3c, .value=0xcd}, {.addr=0xee3d, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xee3e, .a=0xe2, .x=0x56, .y=0x96, .sp=0x5f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xee3c, .value=0xcd}, {.addr=0xee3d, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xee3c, .value=0xcd, .type=IO_READ},
        {.addr=0xee3d, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011D) {
    const struct CPU_State initial_cpu = {.pc=0x1a61, .a=0x0b, .x=0xcc, .y=0xca, .sp=0xea, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x1a61, .value=0xcd}, {.addr=0x1a62, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x1a63, .a=0x0b, .x=0x96, .y=0xca, .sp=0xea, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1a61, .value=0xcd}, {.addr=0x1a62, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x1a61, .value=0xcd, .type=IO_READ},
        {.addr=0x1a62, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4f05, .a=0x51, .x=0xa8, .y=0x3b, .sp=0x3c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4f05, .value=0xcd}, {.addr=0x4f06, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4f07, .a=0x51, .x=0xaf, .y=0x3b, .sp=0x3c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4f05, .value=0xcd}, {.addr=0x4f06, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4f05, .value=0xcd, .type=IO_READ},
        {.addr=0x4f06, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_011F) {
    const struct CPU_State initial_cpu = {.pc=0x5696, .a=0x23, .x=0x22, .y=0x12, .sp=0x29, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x5696, .value=0xcd}, {.addr=0x5697, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x5698, .a=0x23, .x=0x39, .y=0x12, .sp=0x29, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5696, .value=0xcd}, {.addr=0x5697, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x5696, .value=0xcd, .type=IO_READ},
        {.addr=0x5697, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0120) {
    const struct CPU_State initial_cpu = {.pc=0x1032, .a=0x4f, .x=0xc2, .y=0xa7, .sp=0xe7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1032, .value=0xcd}, {.addr=0x1033, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x1034, .a=0x4f, .x=0x51, .y=0xa7, .sp=0xe7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1032, .value=0xcd}, {.addr=0x1033, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1032, .value=0xcd, .type=IO_READ},
        {.addr=0x1033, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0121) {
    const struct CPU_State initial_cpu = {.pc=0x0203, .a=0x25, .x=0xf4, .y=0x73, .sp=0x7a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0203, .value=0xcd}, {.addr=0x0204, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x0205, .a=0x25, .x=0xa2, .y=0x73, .sp=0x7a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0203, .value=0xcd}, {.addr=0x0204, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x0203, .value=0xcd, .type=IO_READ},
        {.addr=0x0204, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0122) {
    const struct CPU_State initial_cpu = {.pc=0x7470, .a=0x59, .x=0x48, .y=0x32, .sp=0x44, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7470, .value=0xcd}, {.addr=0x7471, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x7472, .a=0x59, .x=0xb5, .y=0x32, .sp=0x44, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7470, .value=0xcd}, {.addr=0x7471, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x7470, .value=0xcd, .type=IO_READ},
        {.addr=0x7471, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0123) {
    const struct CPU_State initial_cpu = {.pc=0x7de0, .a=0x92, .x=0xd8, .y=0x13, .sp=0x6c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7de0, .value=0xcd}, {.addr=0x7de1, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x7de2, .a=0x92, .x=0xf6, .y=0x13, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7de0, .value=0xcd}, {.addr=0x7de1, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x7de0, .value=0xcd, .type=IO_READ},
        {.addr=0x7de1, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9a0e, .a=0xd4, .x=0x8d, .y=0x7d, .sp=0x87, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9a0e, .value=0xcd}, {.addr=0x9a0f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9a10, .a=0xd4, .x=0x4a, .y=0x7d, .sp=0x87, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9a0e, .value=0xcd}, {.addr=0x9a0f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9a0e, .value=0xcd, .type=IO_READ},
        {.addr=0x9a0f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4f30, .a=0x49, .x=0xd5, .y=0x7a, .sp=0x96, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4f30, .value=0xcd}, {.addr=0x4f31, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x4f32, .a=0x49, .x=0x48, .y=0x7a, .sp=0x96, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4f30, .value=0xcd}, {.addr=0x4f31, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x4f30, .value=0xcd, .type=IO_READ},
        {.addr=0x4f31, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0126) {
    const struct CPU_State initial_cpu = {.pc=0x7d62, .a=0xb3, .x=0x5d, .y=0xe8, .sp=0xfb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7d62, .value=0xcd}, {.addr=0x7d63, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x7d64, .a=0xb3, .x=0x17, .y=0xe8, .sp=0xfb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7d62, .value=0xcd}, {.addr=0x7d63, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x7d62, .value=0xcd, .type=IO_READ},
        {.addr=0x7d63, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0127) {
    const struct CPU_State initial_cpu = {.pc=0xcf08, .a=0x70, .x=0x9a, .y=0xff, .sp=0xb2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xcf08, .value=0xcd}, {.addr=0xcf09, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xcf0a, .a=0x70, .x=0x4e, .y=0xff, .sp=0xb2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xcf08, .value=0xcd}, {.addr=0xcf09, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xcf08, .value=0xcd, .type=IO_READ},
        {.addr=0xcf09, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3b57, .a=0x85, .x=0xe2, .y=0x69, .sp=0x40, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3b57, .value=0xcd}, {.addr=0x3b58, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x3b59, .a=0x85, .x=0xc1, .y=0x69, .sp=0x40, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x3b57, .value=0xcd}, {.addr=0x3b58, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x3b57, .value=0xcd, .type=IO_READ},
        {.addr=0x3b58, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0129) {
    const struct CPU_State initial_cpu = {.pc=0x2e77, .a=0x08, .x=0xba, .y=0x00, .sp=0x94, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2e77, .value=0xcd}, {.addr=0x2e78, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x2e79, .a=0x08, .x=0x23, .y=0x00, .sp=0x94, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2e77, .value=0xcd}, {.addr=0x2e78, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x2e77, .value=0xcd, .type=IO_READ},
        {.addr=0x2e78, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012A) {
    const struct CPU_State initial_cpu = {.pc=0x6c5b, .a=0xea, .x=0xf1, .y=0xe7, .sp=0x5d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5b, .value=0xcd}, {.addr=0x6c5c, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x6c5d, .a=0xea, .x=0x14, .y=0xe7, .sp=0x5d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6c5b, .value=0xcd}, {.addr=0x6c5c, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x6c5b, .value=0xcd, .type=IO_READ},
        {.addr=0x6c5c, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012B) {
    const struct CPU_State initial_cpu = {.pc=0x7b16, .a=0xb9, .x=0xf1, .y=0xc7, .sp=0x42, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b16, .value=0xcd}, {.addr=0x7b17, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7b18, .a=0xb9, .x=0x86, .y=0xc7, .sp=0x42, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7b16, .value=0xcd}, {.addr=0x7b17, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7b16, .value=0xcd, .type=IO_READ},
        {.addr=0x7b17, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012C) {
    const struct CPU_State initial_cpu = {.pc=0x5389, .a=0xd4, .x=0x7d, .y=0xfb, .sp=0x21, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5389, .value=0xcd}, {.addr=0x538a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x538b, .a=0xd4, .x=0xf5, .y=0xfb, .sp=0x21, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5389, .value=0xcd}, {.addr=0x538a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x5389, .value=0xcd, .type=IO_READ},
        {.addr=0x538a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012D) {
    const struct CPU_State initial_cpu = {.pc=0x8b61, .a=0xdb, .x=0x20, .y=0xb3, .sp=0x89, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8b61, .value=0xcd}, {.addr=0x8b62, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x8b63, .a=0xdb, .x=0x2b, .y=0xb3, .sp=0x89, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8b61, .value=0xcd}, {.addr=0x8b62, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x8b61, .value=0xcd, .type=IO_READ},
        {.addr=0x8b62, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012E) {
    const struct CPU_State initial_cpu = {.pc=0xf901, .a=0x44, .x=0x64, .y=0xb0, .sp=0xf9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf901, .value=0xcd}, {.addr=0xf902, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf903, .a=0x44, .x=0x4c, .y=0xb0, .sp=0xf9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf901, .value=0xcd}, {.addr=0xf902, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf901, .value=0xcd, .type=IO_READ},
        {.addr=0xf902, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_012F) {
    const struct CPU_State initial_cpu = {.pc=0x6e7b, .a=0x2b, .x=0xa6, .y=0x9f, .sp=0x95, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6e7b, .value=0xcd}, {.addr=0x6e7c, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x6e7d, .a=0x2b, .x=0xe1, .y=0x9f, .sp=0x95, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6e7b, .value=0xcd}, {.addr=0x6e7c, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x6e7b, .value=0xcd, .type=IO_READ},
        {.addr=0x6e7c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0130) {
    const struct CPU_State initial_cpu = {.pc=0xfc23, .a=0xa6, .x=0x31, .y=0xf1, .sp=0x3f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xfc23, .value=0xcd}, {.addr=0xfc24, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xfc25, .a=0xa6, .x=0x77, .y=0xf1, .sp=0x3f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xfc23, .value=0xcd}, {.addr=0xfc24, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xfc23, .value=0xcd, .type=IO_READ},
        {.addr=0xfc24, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0131) {
    const struct CPU_State initial_cpu = {.pc=0x2ba2, .a=0x50, .x=0x37, .y=0x31, .sp=0xba, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba2, .value=0xcd}, {.addr=0x2ba3, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x2ba4, .a=0x50, .x=0x43, .y=0x31, .sp=0xba, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2ba2, .value=0xcd}, {.addr=0x2ba3, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x2ba2, .value=0xcd, .type=IO_READ},
        {.addr=0x2ba3, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0132) {
    const struct CPU_State initial_cpu = {.pc=0xfb22, .a=0xb7, .x=0x9d, .y=0x59, .sp=0x6d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfb22, .value=0xcd}, {.addr=0xfb23, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xfb24, .a=0xb7, .x=0xf4, .y=0x59, .sp=0x6d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfb22, .value=0xcd}, {.addr=0xfb23, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xfb22, .value=0xcd, .type=IO_READ},
        {.addr=0xfb23, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0133) {
    const struct CPU_State initial_cpu = {.pc=0x0020, .a=0x1b, .x=0x66, .y=0x83, .sp=0x63, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xcd}, {.addr=0x0021, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0022, .a=0x1b, .x=0x6c, .y=0x83, .sp=0x63, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xcd}, {.addr=0x0021, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0020, .value=0xcd, .type=IO_READ},
        {.addr=0x0021, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0134) {
    const struct CPU_State initial_cpu = {.pc=0xea47, .a=0xae, .x=0xc9, .y=0x2e, .sp=0x6d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xea47, .value=0xcd}, {.addr=0xea48, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xea49, .a=0xae, .x=0xc8, .y=0x2e, .sp=0x6d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xea47, .value=0xcd}, {.addr=0xea48, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xea47, .value=0xcd, .type=IO_READ},
        {.addr=0xea48, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0135) {
    const struct CPU_State initial_cpu = {.pc=0xfa4d, .a=0x59, .x=0xa2, .y=0x17, .sp=0xf7, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4d, .value=0xcd}, {.addr=0xfa4e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xfa4f, .a=0x59, .x=0x34, .y=0x17, .sp=0xf7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xfa4d, .value=0xcd}, {.addr=0xfa4e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xfa4d, .value=0xcd, .type=IO_READ},
        {.addr=0xfa4e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0136) {
    const struct CPU_State initial_cpu = {.pc=0x7f16, .a=0x86, .x=0x4f, .y=0x9e, .sp=0xc9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7f16, .value=0xcd}, {.addr=0x7f17, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x7f18, .a=0x86, .x=0xc1, .y=0x9e, .sp=0xc9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7f16, .value=0xcd}, {.addr=0x7f17, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x7f16, .value=0xcd, .type=IO_READ},
        {.addr=0x7f17, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0137) {
    const struct CPU_State initial_cpu = {.pc=0x0b8b, .a=0x0f, .x=0xc1, .y=0x5f, .sp=0x58, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8b, .value=0xcd}, {.addr=0x0b8c, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0b8d, .a=0x0f, .x=0x60, .y=0x5f, .sp=0x58, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0b8b, .value=0xcd}, {.addr=0x0b8c, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0b8b, .value=0xcd, .type=IO_READ},
        {.addr=0x0b8c, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0138) {
    const struct CPU_State initial_cpu = {.pc=0x1fb5, .a=0x43, .x=0x97, .y=0x7f, .sp=0x86, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1fb5, .value=0xcd}, {.addr=0x1fb6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1fb7, .a=0x43, .x=0x20, .y=0x7f, .sp=0x86, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1fb5, .value=0xcd}, {.addr=0x1fb6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1fb5, .value=0xcd, .type=IO_READ},
        {.addr=0x1fb6, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe0ba, .a=0x8f, .x=0x95, .y=0xed, .sp=0x87, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ba, .value=0xcd}, {.addr=0xe0bb, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xe0bc, .a=0x8f, .x=0xb0, .y=0xed, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe0ba, .value=0xcd}, {.addr=0xe0bb, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xe0ba, .value=0xcd, .type=IO_READ},
        {.addr=0xe0bb, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_013A) {
    const struct CPU_State initial_cpu = {.pc=0xa31d, .a=0x3d, .x=0x7f, .y=0x1f, .sp=0x38, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa31d, .value=0xcd}, {.addr=0xa31e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa31f, .a=0x3d, .x=0x9d, .y=0x1f, .sp=0x38, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa31d, .value=0xcd}, {.addr=0xa31e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa31d, .value=0xcd, .type=IO_READ},
        {.addr=0xa31e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_013C) {
    const struct CPU_State initial_cpu = {.pc=0x84da, .a=0xe8, .x=0x10, .y=0x4b, .sp=0xb9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x84da, .value=0xcd}, {.addr=0x84db, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x84dc, .a=0xe8, .x=0x84, .y=0x4b, .sp=0xb9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x84da, .value=0xcd}, {.addr=0x84db, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x84da, .value=0xcd, .type=IO_READ},
        {.addr=0x84db, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_013D) {
    const struct CPU_State initial_cpu = {.pc=0x79b1, .a=0xf0, .x=0x4f, .y=0x11, .sp=0xf4, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x79b1, .value=0xcd}, {.addr=0x79b2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x79b3, .a=0xf0, .x=0xae, .y=0x11, .sp=0xf4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x79b1, .value=0xcd}, {.addr=0x79b2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x79b1, .value=0xcd, .type=IO_READ},
        {.addr=0x79b2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_013E) {
    const struct CPU_State initial_cpu = {.pc=0xfb6f, .a=0xb0, .x=0xd6, .y=0xd1, .sp=0xca, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6f, .value=0xcd}, {.addr=0xfb70, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xfb71, .a=0xb0, .x=0x2b, .y=0xd1, .sp=0xca, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfb6f, .value=0xcd}, {.addr=0xfb70, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xfb6f, .value=0xcd, .type=IO_READ},
        {.addr=0xfb70, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_013F) {
    const struct CPU_State initial_cpu = {.pc=0xcf71, .a=0xaf, .x=0xd7, .y=0x00, .sp=0xed, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xcf71, .value=0xcd}, {.addr=0xcf72, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xcf73, .a=0xaf, .x=0x7e, .y=0x00, .sp=0xed, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xcf71, .value=0xcd}, {.addr=0xcf72, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xcf71, .value=0xcd, .type=IO_READ},
        {.addr=0xcf72, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0140) {
    const struct CPU_State initial_cpu = {.pc=0xd1f6, .a=0x7f, .x=0x49, .y=0x60, .sp=0x92, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f6, .value=0xcd}, {.addr=0xd1f7, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xd1f8, .a=0x7f, .x=0x27, .y=0x60, .sp=0x92, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd1f6, .value=0xcd}, {.addr=0xd1f7, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xd1f6, .value=0xcd, .type=IO_READ},
        {.addr=0xd1f7, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0141) {
    const struct CPU_State initial_cpu = {.pc=0xf2b0, .a=0xc0, .x=0xe6, .y=0xd8, .sp=0x80, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b0, .value=0xcd}, {.addr=0xf2b1, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf2b2, .a=0xc0, .x=0x76, .y=0xd8, .sp=0x80, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf2b0, .value=0xcd}, {.addr=0xf2b1, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf2b0, .value=0xcd, .type=IO_READ},
        {.addr=0xf2b1, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0142) {
    const struct CPU_State initial_cpu = {.pc=0xc262, .a=0x74, .x=0x95, .y=0x66, .sp=0xfd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc262, .value=0xcd}, {.addr=0xc263, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc264, .a=0x74, .x=0x5d, .y=0x66, .sp=0xfd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc262, .value=0xcd}, {.addr=0xc263, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc262, .value=0xcd, .type=IO_READ},
        {.addr=0xc263, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0143) {
    const struct CPU_State initial_cpu = {.pc=0xe228, .a=0x62, .x=0x05, .y=0xcc, .sp=0xc1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe228, .value=0xcd}, {.addr=0xe229, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe22a, .a=0x62, .x=0x46, .y=0xcc, .sp=0xc1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe228, .value=0xcd}, {.addr=0xe229, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe228, .value=0xcd, .type=IO_READ},
        {.addr=0xe229, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0144) {
    const struct CPU_State initial_cpu = {.pc=0x231b, .a=0x88, .x=0x3a, .y=0xb9, .sp=0x45, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x231b, .value=0xcd}, {.addr=0x231c, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x231d, .a=0x88, .x=0x93, .y=0xb9, .sp=0x45, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x231b, .value=0xcd}, {.addr=0x231c, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x231b, .value=0xcd, .type=IO_READ},
        {.addr=0x231c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0145) {
    const struct CPU_State initial_cpu = {.pc=0x3e9e, .a=0x54, .x=0x34, .y=0xdd, .sp=0xbe, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e9e, .value=0xcd}, {.addr=0x3e9f, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x3ea0, .a=0x54, .x=0xa4, .y=0xdd, .sp=0xbe, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3e9e, .value=0xcd}, {.addr=0x3e9f, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x3e9e, .value=0xcd, .type=IO_READ},
        {.addr=0x3e9f, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0146) {
    const struct CPU_State initial_cpu = {.pc=0x9b84, .a=0x0b, .x=0x54, .y=0x51, .sp=0xb3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x9b84, .value=0xcd}, {.addr=0x9b85, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x9b86, .a=0x0b, .x=0x85, .y=0x51, .sp=0xb3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9b84, .value=0xcd}, {.addr=0x9b85, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x9b84, .value=0xcd, .type=IO_READ},
        {.addr=0x9b85, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0147) {
    const struct CPU_State initial_cpu = {.pc=0x02bf, .a=0xf2, .x=0xb7, .y=0x5d, .sp=0x02, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x02bf, .value=0xcd}, {.addr=0x02c0, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x02c1, .a=0xf2, .x=0x2f, .y=0x5d, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x02bf, .value=0xcd}, {.addr=0x02c0, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x02bf, .value=0xcd, .type=IO_READ},
        {.addr=0x02c0, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0148) {
    const struct CPU_State initial_cpu = {.pc=0x90ff, .a=0x23, .x=0x88, .y=0x34, .sp=0xf4, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x90ff, .value=0xcd}, {.addr=0x9100, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9101, .a=0x23, .x=0x15, .y=0x34, .sp=0xf4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x90ff, .value=0xcd}, {.addr=0x9100, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x90ff, .value=0xcd, .type=IO_READ},
        {.addr=0x9100, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0149) {
    const struct CPU_State initial_cpu = {.pc=0xc051, .a=0x02, .x=0x72, .y=0x1a, .sp=0x49, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc051, .value=0xcd}, {.addr=0xc052, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xc053, .a=0x02, .x=0x50, .y=0x1a, .sp=0x49, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc051, .value=0xcd}, {.addr=0xc052, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xc051, .value=0xcd, .type=IO_READ},
        {.addr=0xc052, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014A) {
    const struct CPU_State initial_cpu = {.pc=0x8cbd, .a=0x6b, .x=0x4f, .y=0xb3, .sp=0xc1, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8cbd, .value=0xcd}, {.addr=0x8cbe, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x8cbf, .a=0x6b, .x=0x77, .y=0xb3, .sp=0xc1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8cbd, .value=0xcd}, {.addr=0x8cbe, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x8cbd, .value=0xcd, .type=IO_READ},
        {.addr=0x8cbe, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014B) {
    const struct CPU_State initial_cpu = {.pc=0x5feb, .a=0x29, .x=0x2d, .y=0x90, .sp=0x18, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5feb, .value=0xcd}, {.addr=0x5fec, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x5fed, .a=0x29, .x=0x87, .y=0x90, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5feb, .value=0xcd}, {.addr=0x5fec, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x5feb, .value=0xcd, .type=IO_READ},
        {.addr=0x5fec, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014C) {
    const struct CPU_State initial_cpu = {.pc=0xc267, .a=0x12, .x=0x47, .y=0xb4, .sp=0x49, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc267, .value=0xcd}, {.addr=0xc268, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xc269, .a=0x12, .x=0xbb, .y=0xb4, .sp=0x49, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc267, .value=0xcd}, {.addr=0xc268, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xc267, .value=0xcd, .type=IO_READ},
        {.addr=0xc268, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014D) {
    const struct CPU_State initial_cpu = {.pc=0xfa4c, .a=0xd1, .x=0x21, .y=0xb8, .sp=0xf0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4c, .value=0xcd}, {.addr=0xfa4d, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xfa4e, .a=0xd1, .x=0x63, .y=0xb8, .sp=0xf0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfa4c, .value=0xcd}, {.addr=0xfa4d, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xfa4c, .value=0xcd, .type=IO_READ},
        {.addr=0xfa4d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014E) {
    const struct CPU_State initial_cpu = {.pc=0x2a8c, .a=0x90, .x=0x06, .y=0x8b, .sp=0x07, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8c, .value=0xcd}, {.addr=0x2a8d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2a8e, .a=0x90, .x=0xe0, .y=0x8b, .sp=0x07, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2a8c, .value=0xcd}, {.addr=0x2a8d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2a8c, .value=0xcd, .type=IO_READ},
        {.addr=0x2a8d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_014F) {
    const struct CPU_State initial_cpu = {.pc=0x67ab, .a=0xa2, .x=0xc6, .y=0xb0, .sp=0x49, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x67ab, .value=0xcd}, {.addr=0x67ac, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x67ad, .a=0xa2, .x=0xc2, .y=0xb0, .sp=0x49, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x67ab, .value=0xcd}, {.addr=0x67ac, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x67ab, .value=0xcd, .type=IO_READ},
        {.addr=0x67ac, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0150) {
    const struct CPU_State initial_cpu = {.pc=0x1799, .a=0xdc, .x=0x19, .y=0x78, .sp=0xf9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1799, .value=0xcd}, {.addr=0x179a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x179b, .a=0xdc, .x=0x4d, .y=0x78, .sp=0xf9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1799, .value=0xcd}, {.addr=0x179a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1799, .value=0xcd, .type=IO_READ},
        {.addr=0x179a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0151) {
    const struct CPU_State initial_cpu = {.pc=0xb76e, .a=0x0c, .x=0x8b, .y=0x88, .sp=0x96, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xb76e, .value=0xcd}, {.addr=0xb76f, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xb770, .a=0x0c, .x=0xea, .y=0x88, .sp=0x96, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb76e, .value=0xcd}, {.addr=0xb76f, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xb76e, .value=0xcd, .type=IO_READ},
        {.addr=0xb76f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0152) {
    const struct CPU_State initial_cpu = {.pc=0xd3f6, .a=0xe9, .x=0x0d, .y=0x79, .sp=0x72, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f6, .value=0xcd}, {.addr=0xd3f7, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xd3f8, .a=0xe9, .x=0xe9, .y=0x79, .sp=0x72, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd3f6, .value=0xcd}, {.addr=0xd3f7, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xd3f6, .value=0xcd, .type=IO_READ},
        {.addr=0xd3f7, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0153) {
    const struct CPU_State initial_cpu = {.pc=0xb4ac, .a=0x0c, .x=0xf9, .y=0xe0, .sp=0xbc, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ac, .value=0xcd}, {.addr=0xb4ad, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xb4ae, .a=0x0c, .x=0x5b, .y=0xe0, .sp=0xbc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb4ac, .value=0xcd}, {.addr=0xb4ad, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xb4ac, .value=0xcd, .type=IO_READ},
        {.addr=0xb4ad, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0154) {
    const struct CPU_State initial_cpu = {.pc=0x38f0, .a=0x50, .x=0x32, .y=0xb8, .sp=0xd1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x38f0, .value=0xcd}, {.addr=0x38f1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x38f2, .a=0x50, .x=0xa6, .y=0xb8, .sp=0xd1, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x38f0, .value=0xcd}, {.addr=0x38f1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x38f0, .value=0xcd, .type=IO_READ},
        {.addr=0x38f1, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4869, .a=0x1d, .x=0xcc, .y=0x9b, .sp=0xae, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4869, .value=0xcd}, {.addr=0x486a, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x486b, .a=0x1d, .x=0x1b, .y=0x9b, .sp=0xae, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4869, .value=0xcd}, {.addr=0x486a, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x4869, .value=0xcd, .type=IO_READ},
        {.addr=0x486a, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0156) {
    const struct CPU_State initial_cpu = {.pc=0x63c2, .a=0xc9, .x=0x9d, .y=0xd5, .sp=0x12, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x63c2, .value=0xcd}, {.addr=0x63c3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x63c4, .a=0xc9, .x=0xbf, .y=0xd5, .sp=0x12, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x63c2, .value=0xcd}, {.addr=0x63c3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x63c2, .value=0xcd, .type=IO_READ},
        {.addr=0x63c3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0157) {
    const struct CPU_State initial_cpu = {.pc=0xea09, .a=0xd3, .x=0x1c, .y=0xe9, .sp=0x7a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xea09, .value=0xcd}, {.addr=0xea0a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xea0b, .a=0xd3, .x=0x2d, .y=0xe9, .sp=0x7a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xea09, .value=0xcd}, {.addr=0xea0a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xea09, .value=0xcd, .type=IO_READ},
        {.addr=0xea0a, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0158) {
    const struct CPU_State initial_cpu = {.pc=0xebe6, .a=0x96, .x=0x22, .y=0x91, .sp=0xf9, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xebe6, .value=0xcd}, {.addr=0xebe7, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xebe8, .a=0x96, .x=0xd4, .y=0x91, .sp=0xf9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xebe6, .value=0xcd}, {.addr=0xebe7, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xebe6, .value=0xcd, .type=IO_READ},
        {.addr=0xebe7, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2d87, .a=0x85, .x=0x49, .y=0x32, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x2d87, .value=0xcd}, {.addr=0x2d88, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x2d89, .a=0x85, .x=0xa4, .y=0x32, .sp=0x7b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2d87, .value=0xcd}, {.addr=0x2d88, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x2d87, .value=0xcd, .type=IO_READ},
        {.addr=0x2d88, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015A) {
    const struct CPU_State initial_cpu = {.pc=0xc046, .a=0x0f, .x=0x1c, .y=0xd3, .sp=0x7d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc046, .value=0xcd}, {.addr=0xc047, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xc048, .a=0x0f, .x=0xeb, .y=0xd3, .sp=0x7d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc046, .value=0xcd}, {.addr=0xc047, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xc046, .value=0xcd, .type=IO_READ},
        {.addr=0xc047, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015B) {
    const struct CPU_State initial_cpu = {.pc=0x6f88, .a=0x84, .x=0x7a, .y=0x97, .sp=0xdb, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6f88, .value=0xcd}, {.addr=0x6f89, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x6f8a, .a=0x84, .x=0xe4, .y=0x97, .sp=0xdb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6f88, .value=0xcd}, {.addr=0x6f89, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x6f88, .value=0xcd, .type=IO_READ},
        {.addr=0x6f89, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015C) {
    const struct CPU_State initial_cpu = {.pc=0x54cc, .a=0xe4, .x=0x22, .y=0x60, .sp=0x17, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x54cc, .value=0xcd}, {.addr=0x54cd, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x54ce, .a=0xe4, .x=0x87, .y=0x60, .sp=0x17, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x54cc, .value=0xcd}, {.addr=0x54cd, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x54cc, .value=0xcd, .type=IO_READ},
        {.addr=0x54cd, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015D) {
    const struct CPU_State initial_cpu = {.pc=0xf5f2, .a=0xee, .x=0x0b, .y=0x6e, .sp=0x1d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f2, .value=0xcd}, {.addr=0xf5f3, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xf5f4, .a=0xee, .x=0xd0, .y=0x6e, .sp=0x1d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf5f2, .value=0xcd}, {.addr=0xf5f3, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xf5f2, .value=0xcd, .type=IO_READ},
        {.addr=0xf5f3, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa1c3, .a=0x43, .x=0x32, .y=0xad, .sp=0x6d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c3, .value=0xcd}, {.addr=0xa1c4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa1c5, .a=0x43, .x=0xbd, .y=0xad, .sp=0x6d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa1c3, .value=0xcd}, {.addr=0xa1c4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa1c3, .value=0xcd, .type=IO_READ},
        {.addr=0xa1c4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_015F) {
    const struct CPU_State initial_cpu = {.pc=0xf467, .a=0x0c, .x=0x24, .y=0xf8, .sp=0x9a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf467, .value=0xcd}, {.addr=0xf468, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xf469, .a=0x0c, .x=0xf9, .y=0xf8, .sp=0x9a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf467, .value=0xcd}, {.addr=0xf468, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xf467, .value=0xcd, .type=IO_READ},
        {.addr=0xf468, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1e62, .a=0x9c, .x=0x03, .y=0x2a, .sp=0x42, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1e62, .value=0xcd}, {.addr=0x1e63, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1e64, .a=0x9c, .x=0xa0, .y=0x2a, .sp=0x42, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1e62, .value=0xcd}, {.addr=0x1e63, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1e62, .value=0xcd, .type=IO_READ},
        {.addr=0x1e63, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0161) {
    const struct CPU_State initial_cpu = {.pc=0xfd0e, .a=0xf4, .x=0x04, .y=0xcd, .sp=0xa9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0e, .value=0xcd}, {.addr=0xfd0f, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xfd10, .a=0xf4, .x=0x59, .y=0xcd, .sp=0xa9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfd0e, .value=0xcd}, {.addr=0xfd0f, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xfd0e, .value=0xcd, .type=IO_READ},
        {.addr=0xfd0f, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0162) {
    const struct CPU_State initial_cpu = {.pc=0xa2e6, .a=0x2b, .x=0xb6, .y=0x1a, .sp=0xad, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e6, .value=0xcd}, {.addr=0xa2e7, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xa2e8, .a=0x2b, .x=0x83, .y=0x1a, .sp=0xad, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa2e6, .value=0xcd}, {.addr=0xa2e7, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xa2e6, .value=0xcd, .type=IO_READ},
        {.addr=0xa2e7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0163) {
    const struct CPU_State initial_cpu = {.pc=0x702c, .a=0x87, .x=0x2b, .y=0x0b, .sp=0xb4, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x702c, .value=0xcd}, {.addr=0x702d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x702e, .a=0x87, .x=0x52, .y=0x0b, .sp=0xb4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x702c, .value=0xcd}, {.addr=0x702d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x702c, .value=0xcd, .type=IO_READ},
        {.addr=0x702d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0164) {
    const struct CPU_State initial_cpu = {.pc=0xb5e1, .a=0xef, .x=0xeb, .y=0x22, .sp=0x1e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e1, .value=0xcd}, {.addr=0xb5e2, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xb5e3, .a=0xef, .x=0x6e, .y=0x22, .sp=0x1e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb5e1, .value=0xcd}, {.addr=0xb5e2, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xb5e1, .value=0xcd, .type=IO_READ},
        {.addr=0xb5e2, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0165) {
    const struct CPU_State initial_cpu = {.pc=0xd5f7, .a=0xfa, .x=0x3c, .y=0xc3, .sp=0x32, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f7, .value=0xcd}, {.addr=0xd5f8, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xd5f9, .a=0xfa, .x=0xfe, .y=0xc3, .sp=0x32, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd5f7, .value=0xcd}, {.addr=0xd5f8, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xd5f7, .value=0xcd, .type=IO_READ},
        {.addr=0xd5f8, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0166) {
    const struct CPU_State initial_cpu = {.pc=0xcb92, .a=0x50, .x=0xc3, .y=0xc6, .sp=0x53, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xcb92, .value=0xcd}, {.addr=0xcb93, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xcb94, .a=0x50, .x=0x11, .y=0xc6, .sp=0x53, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcb92, .value=0xcd}, {.addr=0xcb93, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xcb92, .value=0xcd, .type=IO_READ},
        {.addr=0xcb93, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0167) {
    const struct CPU_State initial_cpu = {.pc=0x59f5, .a=0xb9, .x=0x3b, .y=0x8c, .sp=0xc1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x59f5, .value=0xcd}, {.addr=0x59f6, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x59f7, .a=0xb9, .x=0xb3, .y=0x8c, .sp=0xc1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x59f5, .value=0xcd}, {.addr=0x59f6, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x59f5, .value=0xcd, .type=IO_READ},
        {.addr=0x59f6, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0168) {
    const struct CPU_State initial_cpu = {.pc=0x49ef, .a=0x26, .x=0xed, .y=0x8a, .sp=0x11, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x49ef, .value=0xcd}, {.addr=0x49f0, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x49f1, .a=0x26, .x=0xaa, .y=0x8a, .sp=0x11, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x49ef, .value=0xcd}, {.addr=0x49f0, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x49ef, .value=0xcd, .type=IO_READ},
        {.addr=0x49f0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0169) {
    const struct CPU_State initial_cpu = {.pc=0xbd48, .a=0xdc, .x=0x96, .y=0xf4, .sp=0x00, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xbd48, .value=0xcd}, {.addr=0xbd49, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xbd4a, .a=0xdc, .x=0x09, .y=0xf4, .sp=0x00, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xbd48, .value=0xcd}, {.addr=0xbd49, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xbd48, .value=0xcd, .type=IO_READ},
        {.addr=0xbd49, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016A) {
    const struct CPU_State initial_cpu = {.pc=0x0704, .a=0xb7, .x=0xd4, .y=0xb9, .sp=0xc0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0704, .value=0xcd}, {.addr=0x0705, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x0706, .a=0xb7, .x=0xe9, .y=0xb9, .sp=0xc0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0704, .value=0xcd}, {.addr=0x0705, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x0704, .value=0xcd, .type=IO_READ},
        {.addr=0x0705, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016B) {
    const struct CPU_State initial_cpu = {.pc=0x69db, .a=0x2a, .x=0xc6, .y=0x91, .sp=0x16, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x69db, .value=0xcd}, {.addr=0x69dc, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x69dd, .a=0x2a, .x=0x51, .y=0x91, .sp=0x16, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x69db, .value=0xcd}, {.addr=0x69dc, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x69db, .value=0xcd, .type=IO_READ},
        {.addr=0x69dc, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016C) {
    const struct CPU_State initial_cpu = {.pc=0x61fa, .a=0x43, .x=0xa0, .y=0x01, .sp=0x42, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x61fa, .value=0xcd}, {.addr=0x61fb, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x61fc, .a=0x43, .x=0xc3, .y=0x01, .sp=0x42, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x61fa, .value=0xcd}, {.addr=0x61fb, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x61fa, .value=0xcd, .type=IO_READ},
        {.addr=0x61fb, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016D) {
    const struct CPU_State initial_cpu = {.pc=0xf8bc, .a=0xcf, .x=0x49, .y=0xcd, .sp=0x94, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bc, .value=0xcd}, {.addr=0xf8bd, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xf8be, .a=0xcf, .x=0xf7, .y=0xcd, .sp=0x94, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf8bc, .value=0xcd}, {.addr=0xf8bd, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xf8bc, .value=0xcd, .type=IO_READ},
        {.addr=0xf8bd, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016E) {
    const struct CPU_State initial_cpu = {.pc=0x1724, .a=0x3a, .x=0x62, .y=0xfb, .sp=0x62, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1724, .value=0xcd}, {.addr=0x1725, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x1726, .a=0x3a, .x=0x7f, .y=0xfb, .sp=0x62, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1724, .value=0xcd}, {.addr=0x1725, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x1724, .value=0xcd, .type=IO_READ},
        {.addr=0x1725, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_016F) {
    const struct CPU_State initial_cpu = {.pc=0x6a03, .a=0xfe, .x=0xaf, .y=0x72, .sp=0x1c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6a03, .value=0xcd}, {.addr=0x6a04, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x6a05, .a=0xfe, .x=0x69, .y=0x72, .sp=0x1c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6a03, .value=0xcd}, {.addr=0x6a04, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x6a03, .value=0xcd, .type=IO_READ},
        {.addr=0x6a04, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0170) {
    const struct CPU_State initial_cpu = {.pc=0xce16, .a=0x4d, .x=0xbb, .y=0x7e, .sp=0xeb, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xce16, .value=0xcd}, {.addr=0xce17, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xce18, .a=0x4d, .x=0x44, .y=0x7e, .sp=0xeb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xce16, .value=0xcd}, {.addr=0xce17, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xce16, .value=0xcd, .type=IO_READ},
        {.addr=0xce17, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0171) {
    const struct CPU_State initial_cpu = {.pc=0x6dc9, .a=0x5e, .x=0xf3, .y=0x39, .sp=0x07, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6dc9, .value=0xcd}, {.addr=0x6dca, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6dcb, .a=0x5e, .x=0xdb, .y=0x39, .sp=0x07, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6dc9, .value=0xcd}, {.addr=0x6dca, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6dc9, .value=0xcd, .type=IO_READ},
        {.addr=0x6dca, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0172) {
    const struct CPU_State initial_cpu = {.pc=0xa243, .a=0xac, .x=0x1b, .y=0x88, .sp=0xca, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xa243, .value=0xcd}, {.addr=0xa244, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xa245, .a=0xac, .x=0x90, .y=0x88, .sp=0xca, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa243, .value=0xcd}, {.addr=0xa244, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xa243, .value=0xcd, .type=IO_READ},
        {.addr=0xa244, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0173) {
    const struct CPU_State initial_cpu = {.pc=0xf332, .a=0xcd, .x=0x79, .y=0x7c, .sp=0xc4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf332, .value=0xcd}, {.addr=0xf333, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xf334, .a=0xcd, .x=0xa2, .y=0x7c, .sp=0xc4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf332, .value=0xcd}, {.addr=0xf333, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xf332, .value=0xcd, .type=IO_READ},
        {.addr=0xf333, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0174) {
    const struct CPU_State initial_cpu = {.pc=0x556a, .a=0x36, .x=0xfe, .y=0xf9, .sp=0xb7, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x556a, .value=0xcd}, {.addr=0x556b, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x556c, .a=0x36, .x=0xb2, .y=0xf9, .sp=0xb7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x556a, .value=0xcd}, {.addr=0x556b, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x556a, .value=0xcd, .type=IO_READ},
        {.addr=0x556b, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0175) {
    const struct CPU_State initial_cpu = {.pc=0xbe27, .a=0x06, .x=0x0c, .y=0x5f, .sp=0xab, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xbe27, .value=0xcd}, {.addr=0xbe28, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xbe29, .a=0x06, .x=0x7a, .y=0x5f, .sp=0xab, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xbe27, .value=0xcd}, {.addr=0xbe28, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xbe27, .value=0xcd, .type=IO_READ},
        {.addr=0xbe28, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0176) {
    const struct CPU_State initial_cpu = {.pc=0xc717, .a=0x2e, .x=0xed, .y=0xe7, .sp=0xb3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xc717, .value=0xcd}, {.addr=0xc718, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xc719, .a=0x2e, .x=0x41, .y=0xe7, .sp=0xb3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc717, .value=0xcd}, {.addr=0xc718, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xc717, .value=0xcd, .type=IO_READ},
        {.addr=0xc718, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe966, .a=0x0e, .x=0x99, .y=0xb9, .sp=0xd2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe966, .value=0xcd}, {.addr=0xe967, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xe968, .a=0x0e, .x=0xa2, .y=0xb9, .sp=0xd2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe966, .value=0xcd}, {.addr=0xe967, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xe966, .value=0xcd, .type=IO_READ},
        {.addr=0xe967, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0178) {
    const struct CPU_State initial_cpu = {.pc=0xe9c3, .a=0xcb, .x=0xec, .y=0x69, .sp=0x26, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c3, .value=0xcd}, {.addr=0xe9c4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xe9c5, .a=0xcb, .x=0x42, .y=0x69, .sp=0x26, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe9c3, .value=0xcd}, {.addr=0xe9c4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xe9c3, .value=0xcd, .type=IO_READ},
        {.addr=0xe9c4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0179) {
    const struct CPU_State initial_cpu = {.pc=0x99d7, .a=0x60, .x=0xfc, .y=0xdc, .sp=0x9e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x99d7, .value=0xcd}, {.addr=0x99d8, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x99d9, .a=0x60, .x=0x2e, .y=0xdc, .sp=0x9e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x99d7, .value=0xcd}, {.addr=0x99d8, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x99d7, .value=0xcd, .type=IO_READ},
        {.addr=0x99d8, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5ee2, .a=0xfe, .x=0xbf, .y=0xaa, .sp=0x41, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee2, .value=0xcd}, {.addr=0x5ee3, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5ee4, .a=0xfe, .x=0x32, .y=0xaa, .sp=0x41, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5ee2, .value=0xcd}, {.addr=0x5ee3, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5ee2, .value=0xcd, .type=IO_READ},
        {.addr=0x5ee3, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd20d, .a=0x99, .x=0xaa, .y=0x7e, .sp=0xcf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xd20d, .value=0xcd}, {.addr=0xd20e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd20f, .a=0x99, .x=0xbc, .y=0x7e, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd20d, .value=0xcd}, {.addr=0xd20e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd20d, .value=0xcd, .type=IO_READ},
        {.addr=0xd20e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017C) {
    const struct CPU_State initial_cpu = {.pc=0x3849, .a=0x92, .x=0x6c, .y=0xe5, .sp=0x04, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3849, .value=0xcd}, {.addr=0x384a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x384b, .a=0x92, .x=0x9f, .y=0xe5, .sp=0x04, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3849, .value=0xcd}, {.addr=0x384a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3849, .value=0xcd, .type=IO_READ},
        {.addr=0x384a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017D) {
    const struct CPU_State initial_cpu = {.pc=0xfc07, .a=0x58, .x=0x4f, .y=0xd9, .sp=0x79, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfc07, .value=0xcd}, {.addr=0xfc08, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xfc09, .a=0x58, .x=0x65, .y=0xd9, .sp=0x79, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfc07, .value=0xcd}, {.addr=0xfc08, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xfc07, .value=0xcd, .type=IO_READ},
        {.addr=0xfc08, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4f68, .a=0x1e, .x=0x91, .y=0x97, .sp=0x16, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4f68, .value=0xcd}, {.addr=0x4f69, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4f6a, .a=0x1e, .x=0x6d, .y=0x97, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4f68, .value=0xcd}, {.addr=0x4f69, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4f68, .value=0xcd, .type=IO_READ},
        {.addr=0x4f69, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_017F) {
    const struct CPU_State initial_cpu = {.pc=0xd40f, .a=0x59, .x=0xef, .y=0xe7, .sp=0xd2, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd40f, .value=0xcd}, {.addr=0xd410, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xd411, .a=0x59, .x=0x7f, .y=0xe7, .sp=0xd2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd40f, .value=0xcd}, {.addr=0xd410, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xd40f, .value=0xcd, .type=IO_READ},
        {.addr=0xd410, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0180) {
    const struct CPU_State initial_cpu = {.pc=0x2c03, .a=0x23, .x=0xa9, .y=0xf2, .sp=0xf0, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c03, .value=0xcd}, {.addr=0x2c04, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x2c05, .a=0x23, .x=0x09, .y=0xf2, .sp=0xf0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2c03, .value=0xcd}, {.addr=0x2c04, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x2c03, .value=0xcd, .type=IO_READ},
        {.addr=0x2c04, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0181) {
    const struct CPU_State initial_cpu = {.pc=0x3c4f, .a=0x8e, .x=0xec, .y=0x51, .sp=0x42, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3c4f, .value=0xcd}, {.addr=0x3c50, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x3c51, .a=0x8e, .x=0x38, .y=0x51, .sp=0x42, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3c4f, .value=0xcd}, {.addr=0x3c50, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3c4f, .value=0xcd, .type=IO_READ},
        {.addr=0x3c50, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0182) {
    const struct CPU_State initial_cpu = {.pc=0xd883, .a=0x38, .x=0x7a, .y=0x99, .sp=0x4f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd883, .value=0xcd}, {.addr=0xd884, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xd885, .a=0x38, .x=0x84, .y=0x99, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd883, .value=0xcd}, {.addr=0xd884, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xd883, .value=0xcd, .type=IO_READ},
        {.addr=0xd884, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5610, .a=0x2e, .x=0x61, .y=0x28, .sp=0x7d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5610, .value=0xcd}, {.addr=0x5611, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x5612, .a=0x2e, .x=0x6c, .y=0x28, .sp=0x7d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5610, .value=0xcd}, {.addr=0x5611, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x5610, .value=0xcd, .type=IO_READ},
        {.addr=0x5611, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0184) {
    const struct CPU_State initial_cpu = {.pc=0x9c7c, .a=0x4d, .x=0x23, .y=0x22, .sp=0xf7, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9c7c, .value=0xcd}, {.addr=0x9c7d, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x9c7e, .a=0x4d, .x=0x31, .y=0x22, .sp=0xf7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9c7c, .value=0xcd}, {.addr=0x9c7d, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x9c7c, .value=0xcd, .type=IO_READ},
        {.addr=0x9c7d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0185) {
    const struct CPU_State initial_cpu = {.pc=0xf508, .a=0x6a, .x=0x29, .y=0x4b, .sp=0xc0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf508, .value=0xcd}, {.addr=0xf509, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf50a, .a=0x6a, .x=0x7b, .y=0x4b, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf508, .value=0xcd}, {.addr=0xf509, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf508, .value=0xcd, .type=IO_READ},
        {.addr=0xf509, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0186) {
    const struct CPU_State initial_cpu = {.pc=0xabe5, .a=0x41, .x=0xf7, .y=0xfd, .sp=0x2b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xabe5, .value=0xcd}, {.addr=0xabe6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xabe7, .a=0x41, .x=0x0d, .y=0xfd, .sp=0x2b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xabe5, .value=0xcd}, {.addr=0xabe6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xabe5, .value=0xcd, .type=IO_READ},
        {.addr=0xabe6, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0187) {
    const struct CPU_State initial_cpu = {.pc=0x62ca, .a=0x19, .x=0xd9, .y=0x1a, .sp=0x5f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x62ca, .value=0xcd}, {.addr=0x62cb, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x62cc, .a=0x19, .x=0x05, .y=0x1a, .sp=0x5f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x62ca, .value=0xcd}, {.addr=0x62cb, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x62ca, .value=0xcd, .type=IO_READ},
        {.addr=0x62cb, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9521, .a=0x09, .x=0xeb, .y=0xaa, .sp=0xb6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9521, .value=0xcd}, {.addr=0x9522, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9523, .a=0x09, .x=0x9f, .y=0xaa, .sp=0xb6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9521, .value=0xcd}, {.addr=0x9522, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9521, .value=0xcd, .type=IO_READ},
        {.addr=0x9522, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0189) {
    const struct CPU_State initial_cpu = {.pc=0x1e49, .a=0x5b, .x=0x94, .y=0x6c, .sp=0x96, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1e49, .value=0xcd}, {.addr=0x1e4a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x1e4b, .a=0x5b, .x=0x27, .y=0x6c, .sp=0x96, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1e49, .value=0xcd}, {.addr=0x1e4a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x1e49, .value=0xcd, .type=IO_READ},
        {.addr=0x1e4a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018A) {
    const struct CPU_State initial_cpu = {.pc=0x0e34, .a=0x71, .x=0x47, .y=0x83, .sp=0xd6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0e34, .value=0xcd}, {.addr=0x0e35, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x0e36, .a=0x71, .x=0x04, .y=0x83, .sp=0xd6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0e34, .value=0xcd}, {.addr=0x0e35, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x0e34, .value=0xcd, .type=IO_READ},
        {.addr=0x0e35, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018B) {
    const struct CPU_State initial_cpu = {.pc=0x9171, .a=0x9f, .x=0xfc, .y=0x0c, .sp=0x67, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9171, .value=0xcd}, {.addr=0x9172, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x9173, .a=0x9f, .x=0x8a, .y=0x0c, .sp=0x67, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9171, .value=0xcd}, {.addr=0x9172, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x9171, .value=0xcd, .type=IO_READ},
        {.addr=0x9172, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018C) {
    const struct CPU_State initial_cpu = {.pc=0x26ff, .a=0x87, .x=0x2c, .y=0x4d, .sp=0xf3, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x26ff, .value=0xcd}, {.addr=0x2700, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x2701, .a=0x87, .x=0x85, .y=0x4d, .sp=0xf3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x26ff, .value=0xcd}, {.addr=0x2700, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x26ff, .value=0xcd, .type=IO_READ},
        {.addr=0x2700, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018D) {
    const struct CPU_State initial_cpu = {.pc=0xddf2, .a=0x71, .x=0x17, .y=0xb0, .sp=0x15, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xddf2, .value=0xcd}, {.addr=0xddf3, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xddf4, .a=0x71, .x=0xa8, .y=0xb0, .sp=0x15, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xddf2, .value=0xcd}, {.addr=0xddf3, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xddf2, .value=0xcd, .type=IO_READ},
        {.addr=0xddf3, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf517, .a=0xe9, .x=0xfe, .y=0xb1, .sp=0x1e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf517, .value=0xcd}, {.addr=0xf518, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf519, .a=0xe9, .x=0x21, .y=0xb1, .sp=0x1e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf517, .value=0xcd}, {.addr=0xf518, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf517, .value=0xcd, .type=IO_READ},
        {.addr=0xf518, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_018F) {
    const struct CPU_State initial_cpu = {.pc=0xeaab, .a=0x15, .x=0x82, .y=0x00, .sp=0x64, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xeaab, .value=0xcd}, {.addr=0xeaac, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xeaad, .a=0x15, .x=0x74, .y=0x00, .sp=0x64, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xeaab, .value=0xcd}, {.addr=0xeaac, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xeaab, .value=0xcd, .type=IO_READ},
        {.addr=0xeaac, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0b8d, .a=0x4e, .x=0x1d, .y=0x00, .sp=0x80, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8d, .value=0xcd}, {.addr=0x0b8e, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x0b8f, .a=0x4e, .x=0xd2, .y=0x00, .sp=0x80, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0b8d, .value=0xcd}, {.addr=0x0b8e, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x0b8d, .value=0xcd, .type=IO_READ},
        {.addr=0x0b8e, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0191) {
    const struct CPU_State initial_cpu = {.pc=0xd51b, .a=0x45, .x=0x46, .y=0xdd, .sp=0x92, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xd51b, .value=0xcd}, {.addr=0xd51c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd51d, .a=0x45, .x=0x00, .y=0xdd, .sp=0x92, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xd51b, .value=0xcd}, {.addr=0xd51c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd51b, .value=0xcd, .type=IO_READ},
        {.addr=0xd51c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0192) {
    const struct CPU_State initial_cpu = {.pc=0xcfc4, .a=0x30, .x=0xf1, .y=0xdf, .sp=0x53, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xcfc4, .value=0xcd}, {.addr=0xcfc5, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xcfc6, .a=0x30, .x=0xe2, .y=0xdf, .sp=0x53, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcfc4, .value=0xcd}, {.addr=0xcfc5, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xcfc4, .value=0xcd, .type=IO_READ},
        {.addr=0xcfc5, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0193) {
    const struct CPU_State initial_cpu = {.pc=0xfbfb, .a=0x9b, .x=0xbe, .y=0x6a, .sp=0x31, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xfbfb, .value=0xcd}, {.addr=0xfbfc, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xfbfd, .a=0x9b, .x=0x11, .y=0x6a, .sp=0x31, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfbfb, .value=0xcd}, {.addr=0xfbfc, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xfbfb, .value=0xcd, .type=IO_READ},
        {.addr=0xfbfc, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2dd4, .a=0x47, .x=0xd1, .y=0x70, .sp=0xea, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2dd4, .value=0xcd}, {.addr=0x2dd5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2dd6, .a=0x47, .x=0xc6, .y=0x70, .sp=0xea, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2dd4, .value=0xcd}, {.addr=0x2dd5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2dd4, .value=0xcd, .type=IO_READ},
        {.addr=0x2dd5, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0195) {
    const struct CPU_State initial_cpu = {.pc=0xcce4, .a=0x7e, .x=0x99, .y=0x63, .sp=0x28, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xcce4, .value=0xcd}, {.addr=0xcce5, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xcce6, .a=0x7e, .x=0xcb, .y=0x63, .sp=0x28, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcce4, .value=0xcd}, {.addr=0xcce5, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xcce4, .value=0xcd, .type=IO_READ},
        {.addr=0xcce5, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0196) {
    const struct CPU_State initial_cpu = {.pc=0xe69c, .a=0x08, .x=0xcd, .y=0xb8, .sp=0x09, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe69c, .value=0xcd}, {.addr=0xe69d, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xe69e, .a=0x08, .x=0xa8, .y=0xb8, .sp=0x09, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe69c, .value=0xcd}, {.addr=0xe69d, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xe69c, .value=0xcd, .type=IO_READ},
        {.addr=0xe69d, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0197) {
    const struct CPU_State initial_cpu = {.pc=0x9d78, .a=0x69, .x=0x3c, .y=0x10, .sp=0x46, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9d78, .value=0xcd}, {.addr=0x9d79, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9d7a, .a=0x69, .x=0x00, .y=0x10, .sp=0x46, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x9d78, .value=0xcd}, {.addr=0x9d79, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9d78, .value=0xcd, .type=IO_READ},
        {.addr=0x9d79, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0198) {
    const struct CPU_State initial_cpu = {.pc=0xc50b, .a=0xd9, .x=0x50, .y=0x8d, .sp=0x9b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xc50b, .value=0xcd}, {.addr=0xc50c, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xc50d, .a=0xd9, .x=0x9b, .y=0x8d, .sp=0x9b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc50b, .value=0xcd}, {.addr=0xc50c, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xc50b, .value=0xcd, .type=IO_READ},
        {.addr=0xc50c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0199) {
    const struct CPU_State initial_cpu = {.pc=0xec30, .a=0x3a, .x=0x3b, .y=0x22, .sp=0x8f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xec30, .value=0xcd}, {.addr=0xec31, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xec32, .a=0x3a, .x=0x0f, .y=0x22, .sp=0x8f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xec30, .value=0xcd}, {.addr=0xec31, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xec30, .value=0xcd, .type=IO_READ},
        {.addr=0xec31, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019A) {
    const struct CPU_State initial_cpu = {.pc=0x2e72, .a=0x25, .x=0x85, .y=0x0a, .sp=0x6f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2e72, .value=0xcd}, {.addr=0x2e73, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x2e74, .a=0x25, .x=0x3b, .y=0x0a, .sp=0x6f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2e72, .value=0xcd}, {.addr=0x2e73, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x2e72, .value=0xcd, .type=IO_READ},
        {.addr=0x2e73, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019B) {
    const struct CPU_State initial_cpu = {.pc=0x8664, .a=0x9c, .x=0x6b, .y=0x88, .sp=0x31, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8664, .value=0xcd}, {.addr=0x8665, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x8666, .a=0x9c, .x=0x18, .y=0x88, .sp=0x31, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8664, .value=0xcd}, {.addr=0x8665, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x8664, .value=0xcd, .type=IO_READ},
        {.addr=0x8665, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019C) {
    const struct CPU_State initial_cpu = {.pc=0xc4a8, .a=0xa6, .x=0xc7, .y=0x19, .sp=0x37, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a8, .value=0xcd}, {.addr=0xc4a9, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xc4aa, .a=0xa6, .x=0x64, .y=0x19, .sp=0x37, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc4a8, .value=0xcd}, {.addr=0xc4a9, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xc4a8, .value=0xcd, .type=IO_READ},
        {.addr=0xc4a9, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019D) {
    const struct CPU_State initial_cpu = {.pc=0xa131, .a=0xd1, .x=0xd9, .y=0x21, .sp=0x9b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa131, .value=0xcd}, {.addr=0xa132, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xa133, .a=0xd1, .x=0x54, .y=0x21, .sp=0x9b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa131, .value=0xcd}, {.addr=0xa132, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xa131, .value=0xcd, .type=IO_READ},
        {.addr=0xa132, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019E) {
    const struct CPU_State initial_cpu = {.pc=0xb772, .a=0x87, .x=0xcc, .y=0x01, .sp=0x59, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb772, .value=0xcd}, {.addr=0xb773, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb774, .a=0x87, .x=0xe3, .y=0x01, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb772, .value=0xcd}, {.addr=0xb773, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb772, .value=0xcd, .type=IO_READ},
        {.addr=0xb773, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_019F) {
    const struct CPU_State initial_cpu = {.pc=0xd2e5, .a=0xe2, .x=0xa8, .y=0x94, .sp=0xb5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e5, .value=0xcd}, {.addr=0xd2e6, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xd2e7, .a=0xe2, .x=0xd3, .y=0x94, .sp=0xb5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd2e5, .value=0xcd}, {.addr=0xd2e6, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd2e5, .value=0xcd, .type=IO_READ},
        {.addr=0xd2e6, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x66e6, .a=0xd7, .x=0x87, .y=0x71, .sp=0xe4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x66e6, .value=0xcd}, {.addr=0x66e7, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x66e8, .a=0xd7, .x=0x84, .y=0x71, .sp=0xe4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x66e6, .value=0xcd}, {.addr=0x66e7, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x66e6, .value=0xcd, .type=IO_READ},
        {.addr=0x66e7, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0xf1, .x=0x89, .y=0x29, .sp=0x6b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xfcec, .value=0xcd}, {.addr=0xfced, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfcee, .a=0xf1, .x=0xc0, .y=0x29, .sp=0x6b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xfcec, .value=0xcd}, {.addr=0xfced, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0xcd, .type=IO_READ},
        {.addr=0xfced, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x4b5b, .a=0xe6, .x=0xd8, .y=0x46, .sp=0xc0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b5b, .value=0xcd}, {.addr=0x4b5c, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x4b5d, .a=0xe6, .x=0x2a, .y=0x46, .sp=0xc0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4b5b, .value=0xcd}, {.addr=0x4b5c, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x4b5b, .value=0xcd, .type=IO_READ},
        {.addr=0x4b5c, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xd4bd, .a=0x30, .x=0x8f, .y=0xee, .sp=0x5a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd4bd, .value=0xcd}, {.addr=0xd4be, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xd4bf, .a=0x30, .x=0x4b, .y=0xee, .sp=0x5a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd4bd, .value=0xcd}, {.addr=0xd4be, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xd4bd, .value=0xcd, .type=IO_READ},
        {.addr=0xd4be, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x26ed, .a=0xab, .x=0x07, .y=0x02, .sp=0x40, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x26ed, .value=0xcd}, {.addr=0x26ee, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x26ef, .a=0xab, .x=0xc7, .y=0x02, .sp=0x40, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x26ed, .value=0xcd}, {.addr=0x26ee, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x26ed, .value=0xcd, .type=IO_READ},
        {.addr=0x26ee, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1385, .a=0xe4, .x=0xde, .y=0xbc, .sp=0x5e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1385, .value=0xcd}, {.addr=0x1386, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1387, .a=0xe4, .x=0x52, .y=0xbc, .sp=0x5e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1385, .value=0xcd}, {.addr=0x1386, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1385, .value=0xcd, .type=IO_READ},
        {.addr=0x1386, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0xfe, .x=0x11, .y=0x72, .sp=0x9e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0xcd}, {.addr=0x821c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0xfe, .x=0xfa, .y=0x72, .sp=0x9e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0xcd}, {.addr=0x821c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0xcd, .type=IO_READ},
        {.addr=0x821c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xda10, .a=0x1b, .x=0xc7, .y=0x3a, .sp=0x8e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xda10, .value=0xcd}, {.addr=0xda11, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xda12, .a=0x1b, .x=0xab, .y=0x3a, .sp=0x8e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xda10, .value=0xcd}, {.addr=0xda11, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xda10, .value=0xcd, .type=IO_READ},
        {.addr=0xda11, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x1df3, .a=0x9b, .x=0x22, .y=0xd8, .sp=0xa6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1df3, .value=0xcd}, {.addr=0x1df4, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x1df5, .a=0x9b, .x=0x5e, .y=0xd8, .sp=0xa6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1df3, .value=0xcd}, {.addr=0x1df4, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x1df3, .value=0xcd, .type=IO_READ},
        {.addr=0x1df4, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x4766, .a=0x8e, .x=0x93, .y=0x3c, .sp=0xe5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4766, .value=0xcd}, {.addr=0x4767, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x4768, .a=0x8e, .x=0xc5, .y=0x3c, .sp=0xe5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4766, .value=0xcd}, {.addr=0x4767, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x4766, .value=0xcd, .type=IO_READ},
        {.addr=0x4767, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xbcac, .a=0x64, .x=0x75, .y=0x3c, .sp=0x23, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbcac, .value=0xcd}, {.addr=0xbcad, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xbcae, .a=0x64, .x=0x54, .y=0x3c, .sp=0x23, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbcac, .value=0xcd}, {.addr=0xbcad, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xbcac, .value=0xcd, .type=IO_READ},
        {.addr=0xbcad, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xab62, .a=0x01, .x=0xda, .y=0xe1, .sp=0xe9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xab62, .value=0xcd}, {.addr=0xab63, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xab64, .a=0x01, .x=0x0d, .y=0xe1, .sp=0xe9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xab62, .value=0xcd}, {.addr=0xab63, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xab62, .value=0xcd, .type=IO_READ},
        {.addr=0xab63, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x9a42, .a=0x4b, .x=0x79, .y=0xe1, .sp=0x28, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9a42, .value=0xcd}, {.addr=0x9a43, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x9a44, .a=0x4b, .x=0x92, .y=0xe1, .sp=0x28, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9a42, .value=0xcd}, {.addr=0x9a43, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x9a42, .value=0xcd, .type=IO_READ},
        {.addr=0x9a43, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9837, .a=0x13, .x=0x24, .y=0x9b, .sp=0xaf, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9837, .value=0xcd}, {.addr=0x9838, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x9839, .a=0x13, .x=0xc9, .y=0x9b, .sp=0xaf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9837, .value=0xcd}, {.addr=0x9838, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x9837, .value=0xcd, .type=IO_READ},
        {.addr=0x9838, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x5aea, .a=0xb9, .x=0x26, .y=0xa2, .sp=0x4a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5aea, .value=0xcd}, {.addr=0x5aeb, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x5aec, .a=0xb9, .x=0x8c, .y=0xa2, .sp=0x4a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5aea, .value=0xcd}, {.addr=0x5aeb, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x5aea, .value=0xcd, .type=IO_READ},
        {.addr=0x5aeb, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xabf8, .a=0x89, .x=0x4c, .y=0xb9, .sp=0x25, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xabf8, .value=0xcd}, {.addr=0xabf9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xabfa, .a=0x89, .x=0x60, .y=0xb9, .sp=0x25, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xabf8, .value=0xcd}, {.addr=0xabf9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xabf8, .value=0xcd, .type=IO_READ},
        {.addr=0xabf9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x177a, .a=0x25, .x=0x8c, .y=0xb0, .sp=0x99, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x177a, .value=0xcd}, {.addr=0x177b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x177c, .a=0x25, .x=0xbd, .y=0xb0, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x177a, .value=0xcd}, {.addr=0x177b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x177a, .value=0xcd, .type=IO_READ},
        {.addr=0x177b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x54d7, .a=0x85, .x=0x43, .y=0xa0, .sp=0x7b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x54d7, .value=0xcd}, {.addr=0x54d8, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x54d9, .a=0x85, .x=0xd2, .y=0xa0, .sp=0x7b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x54d7, .value=0xcd}, {.addr=0x54d8, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x54d7, .value=0xcd, .type=IO_READ},
        {.addr=0x54d8, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x92bd, .a=0x22, .x=0x7a, .y=0xad, .sp=0xef, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x92bd, .value=0xcd}, {.addr=0x92be, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x92bf, .a=0x22, .x=0x51, .y=0xad, .sp=0xef, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x92bd, .value=0xcd}, {.addr=0x92be, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x92bd, .value=0xcd, .type=IO_READ},
        {.addr=0x92be, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x8864, .a=0x8a, .x=0xc0, .y=0xac, .sp=0x29, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8864, .value=0xcd}, {.addr=0x8865, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x8866, .a=0x8a, .x=0x32, .y=0xac, .sp=0x29, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8864, .value=0xcd}, {.addr=0x8865, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x8864, .value=0xcd, .type=IO_READ},
        {.addr=0x8865, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x4f26, .a=0x1b, .x=0xef, .y=0x9f, .sp=0xe2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4f26, .value=0xcd}, {.addr=0x4f27, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x4f28, .a=0x1b, .x=0xb1, .y=0x9f, .sp=0xe2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4f26, .value=0xcd}, {.addr=0x4f27, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x4f26, .value=0xcd, .type=IO_READ},
        {.addr=0x4f27, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x4b0a, .a=0x03, .x=0xe5, .y=0xdc, .sp=0xc2, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0a, .value=0xcd}, {.addr=0x4b0b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x4b0c, .a=0x03, .x=0xb4, .y=0xdc, .sp=0xc2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4b0a, .value=0xcd}, {.addr=0x4b0b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x4b0a, .value=0xcd, .type=IO_READ},
        {.addr=0x4b0b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4729, .a=0x97, .x=0x09, .y=0x2e, .sp=0x91, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4729, .value=0xcd}, {.addr=0x472a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x472b, .a=0x97, .x=0x20, .y=0x2e, .sp=0x91, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4729, .value=0xcd}, {.addr=0x472a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4729, .value=0xcd, .type=IO_READ},
        {.addr=0x472a, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x2a51, .a=0x6b, .x=0x6e, .y=0x12, .sp=0x56, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a51, .value=0xcd}, {.addr=0x2a52, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x2a53, .a=0x6b, .x=0xc5, .y=0x12, .sp=0x56, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2a51, .value=0xcd}, {.addr=0x2a52, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x2a51, .value=0xcd, .type=IO_READ},
        {.addr=0x2a52, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xf014, .a=0x77, .x=0xa0, .y=0x1f, .sp=0x47, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf014, .value=0xcd}, {.addr=0xf015, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xf016, .a=0x77, .x=0x3e, .y=0x1f, .sp=0x47, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf014, .value=0xcd}, {.addr=0xf015, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xf014, .value=0xcd, .type=IO_READ},
        {.addr=0xf015, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x4472, .a=0x26, .x=0x3d, .y=0xa0, .sp=0xbb, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x4472, .value=0xcd}, {.addr=0x4473, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4474, .a=0x26, .x=0xeb, .y=0xa0, .sp=0xbb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4472, .value=0xcd}, {.addr=0x4473, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4472, .value=0xcd, .type=IO_READ},
        {.addr=0x4473, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x2a0b, .a=0xa3, .x=0xd6, .y=0x3b, .sp=0xf2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a0b, .value=0xcd}, {.addr=0x2a0c, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x2a0d, .a=0xa3, .x=0xc7, .y=0x3b, .sp=0xf2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2a0b, .value=0xcd}, {.addr=0x2a0c, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x2a0b, .value=0xcd, .type=IO_READ},
        {.addr=0x2a0c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x5f27, .a=0x83, .x=0x5d, .y=0x01, .sp=0xcd, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x5f27, .value=0xcd}, {.addr=0x5f28, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x5f29, .a=0x83, .x=0x3e, .y=0x01, .sp=0xcd, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5f27, .value=0xcd}, {.addr=0x5f28, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x5f27, .value=0xcd, .type=IO_READ},
        {.addr=0x5f28, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xa6d8, .a=0xc1, .x=0x74, .y=0xda, .sp=0xf2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa6d8, .value=0xcd}, {.addr=0xa6d9, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xa6da, .a=0xc1, .x=0xf2, .y=0xda, .sp=0xf2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa6d8, .value=0xcd}, {.addr=0xa6d9, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xa6d8, .value=0xcd, .type=IO_READ},
        {.addr=0xa6d9, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xffb4, .a=0x0d, .x=0xe2, .y=0x42, .sp=0x48, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xffb4, .value=0xcd}, {.addr=0xffb5, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0x0d, .x=0x27, .y=0x42, .sp=0x48, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xffb4, .value=0xcd}, {.addr=0xffb5, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xffb4, .value=0xcd, .type=IO_READ},
        {.addr=0xffb5, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x38fd, .a=0xf4, .x=0xda, .y=0x7c, .sp=0x66, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x38fd, .value=0xcd}, {.addr=0x38fe, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x38ff, .a=0xf4, .x=0xba, .y=0x7c, .sp=0x66, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x38fd, .value=0xcd}, {.addr=0x38fe, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x38fd, .value=0xcd, .type=IO_READ},
        {.addr=0x38fe, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xcf01, .a=0x63, .x=0xe4, .y=0x78, .sp=0x37, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf01, .value=0xcd}, {.addr=0xcf02, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xcf03, .a=0x63, .x=0x47, .y=0x78, .sp=0x37, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcf01, .value=0xcd}, {.addr=0xcf02, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xcf01, .value=0xcd, .type=IO_READ},
        {.addr=0xcf02, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x4070, .a=0x15, .x=0xe2, .y=0x24, .sp=0x26, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4070, .value=0xcd}, {.addr=0x4071, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x4072, .a=0x15, .x=0x38, .y=0x24, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4070, .value=0xcd}, {.addr=0x4071, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x4070, .value=0xcd, .type=IO_READ},
        {.addr=0x4071, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf089, .a=0x14, .x=0x43, .y=0x80, .sp=0x64, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf089, .value=0xcd}, {.addr=0xf08a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf08b, .a=0x14, .x=0xe0, .y=0x80, .sp=0x64, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf089, .value=0xcd}, {.addr=0xf08a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf089, .value=0xcd, .type=IO_READ},
        {.addr=0xf08a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x2386, .a=0x62, .x=0x84, .y=0xcf, .sp=0xbb, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x2386, .value=0xcd}, {.addr=0x2387, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x2388, .a=0x62, .x=0x79, .y=0xcf, .sp=0xbb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2386, .value=0xcd}, {.addr=0x2387, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x2386, .value=0xcd, .type=IO_READ},
        {.addr=0x2387, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x1f9a, .a=0x7f, .x=0xe6, .y=0x02, .sp=0x4c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9a, .value=0xcd}, {.addr=0x1f9b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x1f9c, .a=0x7f, .x=0x32, .y=0x02, .sp=0x4c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1f9a, .value=0xcd}, {.addr=0x1f9b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x1f9a, .value=0xcd, .type=IO_READ},
        {.addr=0x1f9b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x44fb, .a=0xa2, .x=0x95, .y=0x47, .sp=0xfc, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x44fb, .value=0xcd}, {.addr=0x44fc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x44fd, .a=0xa2, .x=0xdc, .y=0x47, .sp=0xfc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x44fb, .value=0xcd}, {.addr=0x44fc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x44fb, .value=0xcd, .type=IO_READ},
        {.addr=0x44fc, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x8af4, .a=0x0f, .x=0xdf, .y=0x7f, .sp=0x4a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8af4, .value=0xcd}, {.addr=0x8af5, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x8af6, .a=0x0f, .x=0x87, .y=0x7f, .sp=0x4a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8af4, .value=0xcd}, {.addr=0x8af5, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x8af4, .value=0xcd, .type=IO_READ},
        {.addr=0x8af5, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf4f7, .a=0xc3, .x=0xa8, .y=0x5c, .sp=0x23, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf4f7, .value=0xcd}, {.addr=0xf4f8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf4f9, .a=0xc3, .x=0x3d, .y=0x5c, .sp=0x23, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf4f7, .value=0xcd}, {.addr=0xf4f8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf4f7, .value=0xcd, .type=IO_READ},
        {.addr=0xf4f8, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x5c2c, .a=0x4f, .x=0xa5, .y=0x8a, .sp=0xf8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2c, .value=0xcd}, {.addr=0x5c2d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5c2e, .a=0x4f, .x=0x99, .y=0x8a, .sp=0xf8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5c2c, .value=0xcd}, {.addr=0x5c2d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5c2c, .value=0xcd, .type=IO_READ},
        {.addr=0x5c2d, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf1f2, .a=0x3a, .x=0x21, .y=0x88, .sp=0xe4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f2, .value=0xcd}, {.addr=0xf1f3, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xf1f4, .a=0x3a, .x=0xd1, .y=0x88, .sp=0xe4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf1f2, .value=0xcd}, {.addr=0xf1f3, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xf1f2, .value=0xcd, .type=IO_READ},
        {.addr=0xf1f3, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x83df, .a=0xb8, .x=0xef, .y=0xb7, .sp=0x12, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x83df, .value=0xcd}, {.addr=0x83e0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x83e1, .a=0xb8, .x=0x80, .y=0xb7, .sp=0x12, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x83df, .value=0xcd}, {.addr=0x83e0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x83df, .value=0xcd, .type=IO_READ},
        {.addr=0x83e0, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8553, .a=0x8f, .x=0xe9, .y=0x6c, .sp=0xf6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x8553, .value=0xcd}, {.addr=0x8554, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x8555, .a=0x8f, .x=0x51, .y=0x6c, .sp=0xf6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8553, .value=0xcd}, {.addr=0x8554, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x8553, .value=0xcd, .type=IO_READ},
        {.addr=0x8554, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x15e3, .a=0xcd, .x=0x6e, .y=0xce, .sp=0xa3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x15e3, .value=0xcd}, {.addr=0x15e4, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x15e5, .a=0xcd, .x=0x69, .y=0xce, .sp=0xa3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x15e3, .value=0xcd}, {.addr=0x15e4, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x15e3, .value=0xcd, .type=IO_READ},
        {.addr=0x15e4, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x89fe, .a=0xf1, .x=0xb6, .y=0xae, .sp=0x74, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x89fe, .value=0xcd}, {.addr=0x89ff, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x8a00, .a=0xf1, .x=0x19, .y=0xae, .sp=0x74, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x89fe, .value=0xcd}, {.addr=0x89ff, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x89fe, .value=0xcd, .type=IO_READ},
        {.addr=0x89ff, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xe1de, .a=0x90, .x=0xd4, .y=0xd5, .sp=0x71, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe1de, .value=0xcd}, {.addr=0xe1df, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe1e0, .a=0x90, .x=0x34, .y=0xd5, .sp=0x71, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe1de, .value=0xcd}, {.addr=0xe1df, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe1de, .value=0xcd, .type=IO_READ},
        {.addr=0xe1df, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x7f10, .a=0x19, .x=0xd6, .y=0x0e, .sp=0x52, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x7f10, .value=0xcd}, {.addr=0x7f11, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7f12, .a=0x19, .x=0x3d, .y=0x0e, .sp=0x52, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7f10, .value=0xcd}, {.addr=0x7f11, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7f10, .value=0xcd, .type=IO_READ},
        {.addr=0x7f11, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xf097, .a=0x22, .x=0xe2, .y=0x56, .sp=0xb8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf097, .value=0xcd}, {.addr=0xf098, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf099, .a=0x22, .x=0x66, .y=0x56, .sp=0xb8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf097, .value=0xcd}, {.addr=0xf098, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf097, .value=0xcd, .type=IO_READ},
        {.addr=0xf098, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x2fa6, .a=0x60, .x=0x8e, .y=0x75, .sp=0xb6, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa6, .value=0xcd}, {.addr=0x2fa7, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x2fa8, .a=0x60, .x=0x63, .y=0x75, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2fa6, .value=0xcd}, {.addr=0x2fa7, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x2fa6, .value=0xcd, .type=IO_READ},
        {.addr=0x2fa7, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xf3d1, .a=0xd0, .x=0x0b, .y=0x0a, .sp=0x1a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d1, .value=0xcd}, {.addr=0xf3d2, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xf3d3, .a=0xd0, .x=0xd8, .y=0x0a, .sp=0x1a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf3d1, .value=0xcd}, {.addr=0xf3d2, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xf3d1, .value=0xcd, .type=IO_READ},
        {.addr=0xf3d2, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x04c2, .a=0x06, .x=0x21, .y=0xeb, .sp=0xa7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x04c2, .value=0xcd}, {.addr=0x04c3, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x04c4, .a=0x06, .x=0xa2, .y=0xeb, .sp=0xa7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x04c2, .value=0xcd}, {.addr=0x04c3, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x04c2, .value=0xcd, .type=IO_READ},
        {.addr=0x04c3, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x1eca, .a=0x56, .x=0xc7, .y=0x2a, .sp=0xd8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x1eca, .value=0xcd}, {.addr=0x1ecb, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x1ecc, .a=0x56, .x=0xe9, .y=0x2a, .sp=0xd8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1eca, .value=0xcd}, {.addr=0x1ecb, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x1eca, .value=0xcd, .type=IO_READ},
        {.addr=0x1ecb, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x6d82, .a=0xb8, .x=0xba, .y=0x39, .sp=0x80, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6d82, .value=0xcd}, {.addr=0x6d83, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x6d84, .a=0xb8, .x=0xeb, .y=0x39, .sp=0x80, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6d82, .value=0xcd}, {.addr=0x6d83, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x6d82, .value=0xcd, .type=IO_READ},
        {.addr=0x6d83, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xaf04, .a=0x59, .x=0x09, .y=0xea, .sp=0xb5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf04, .value=0xcd}, {.addr=0xaf05, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xaf06, .a=0x59, .x=0xf7, .y=0xea, .sp=0xb5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xaf04, .value=0xcd}, {.addr=0xaf05, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xaf04, .value=0xcd, .type=IO_READ},
        {.addr=0xaf05, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x8b17, .a=0x2b, .x=0xe2, .y=0x3a, .sp=0xa1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8b17, .value=0xcd}, {.addr=0x8b18, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x8b19, .a=0x2b, .x=0xec, .y=0x3a, .sp=0xa1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8b17, .value=0xcd}, {.addr=0x8b18, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x8b17, .value=0xcd, .type=IO_READ},
        {.addr=0x8b18, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x09b2, .a=0xb2, .x=0x38, .y=0x18, .sp=0xca, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x09b2, .value=0xcd}, {.addr=0x09b3, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x09b4, .a=0xb2, .x=0x83, .y=0x18, .sp=0xca, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x09b2, .value=0xcd}, {.addr=0x09b3, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x09b2, .value=0xcd, .type=IO_READ},
        {.addr=0x09b3, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xfd0c, .a=0x60, .x=0x2c, .y=0xe2, .sp=0x63, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0c, .value=0xcd}, {.addr=0xfd0d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd0e, .a=0x60, .x=0x00, .y=0xe2, .sp=0x63, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xfd0c, .value=0xcd}, {.addr=0xfd0d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd0c, .value=0xcd, .type=IO_READ},
        {.addr=0xfd0d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3f93, .a=0xb5, .x=0x9b, .y=0x8e, .sp=0x9c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3f93, .value=0xcd}, {.addr=0x3f94, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x3f95, .a=0xb5, .x=0x55, .y=0x8e, .sp=0x9c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3f93, .value=0xcd}, {.addr=0x3f94, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x3f93, .value=0xcd, .type=IO_READ},
        {.addr=0x3f94, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xcbde, .a=0x43, .x=0xef, .y=0x04, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xcbde, .value=0xcd}, {.addr=0xcbdf, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xcbe0, .a=0x43, .x=0x82, .y=0x04, .sp=0x9b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xcbde, .value=0xcd}, {.addr=0xcbdf, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xcbde, .value=0xcd, .type=IO_READ},
        {.addr=0xcbdf, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xc8eb, .a=0xbb, .x=0x83, .y=0x18, .sp=0x48, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc8eb, .value=0xcd}, {.addr=0xc8ec, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc8ed, .a=0xbb, .x=0x3f, .y=0x18, .sp=0x48, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc8eb, .value=0xcd}, {.addr=0xc8ec, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc8eb, .value=0xcd, .type=IO_READ},
        {.addr=0xc8ec, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x38bc, .a=0x85, .x=0x5d, .y=0x7a, .sp=0x15, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x38bc, .value=0xcd}, {.addr=0x38bd, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x38be, .a=0x85, .x=0xa0, .y=0x7a, .sp=0x15, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x38bc, .value=0xcd}, {.addr=0x38bd, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x38bc, .value=0xcd, .type=IO_READ},
        {.addr=0x38bd, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xbe3c, .a=0x38, .x=0x4c, .y=0xb7, .sp=0x2c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3c, .value=0xcd}, {.addr=0xbe3d, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xbe3e, .a=0x38, .x=0x22, .y=0xb7, .sp=0x2c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbe3c, .value=0xcd}, {.addr=0xbe3d, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xbe3c, .value=0xcd, .type=IO_READ},
        {.addr=0xbe3d, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8525, .a=0x12, .x=0x9f, .y=0xb0, .sp=0x7b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8525, .value=0xcd}, {.addr=0x8526, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x8527, .a=0x12, .x=0x0b, .y=0xb0, .sp=0x7b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8525, .value=0xcd}, {.addr=0x8526, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x8525, .value=0xcd, .type=IO_READ},
        {.addr=0x8526, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0515, .a=0xcb, .x=0x46, .y=0x12, .sp=0xaf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0515, .value=0xcd}, {.addr=0x0516, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0517, .a=0xcb, .x=0x9f, .y=0x12, .sp=0xaf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0515, .value=0xcd}, {.addr=0x0516, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0515, .value=0xcd, .type=IO_READ},
        {.addr=0x0516, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x214c, .a=0xb5, .x=0xe1, .y=0xe8, .sp=0x58, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x214c, .value=0xcd}, {.addr=0x214d, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x214e, .a=0xb5, .x=0x36, .y=0xe8, .sp=0x58, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x214c, .value=0xcd}, {.addr=0x214d, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x214c, .value=0xcd, .type=IO_READ},
        {.addr=0x214d, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x3764, .a=0x7c, .x=0xde, .y=0x96, .sp=0x7c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3764, .value=0xcd}, {.addr=0x3765, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3766, .a=0x7c, .x=0xae, .y=0x96, .sp=0x7c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3764, .value=0xcd}, {.addr=0x3765, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3764, .value=0xcd, .type=IO_READ},
        {.addr=0x3765, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0xfc, .x=0x36, .y=0xbf, .sp=0xf4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef6, .value=0xcd}, {.addr=0x9ef7, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x9ef8, .a=0xfc, .x=0xb5, .y=0xbf, .sp=0xf4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9ef6, .value=0xcd}, {.addr=0x9ef7, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0xcd, .type=IO_READ},
        {.addr=0x9ef7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x1378, .a=0x74, .x=0x1d, .y=0x76, .sp=0x35, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1378, .value=0xcd}, {.addr=0x1379, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x137a, .a=0x74, .x=0x06, .y=0x76, .sp=0x35, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1378, .value=0xcd}, {.addr=0x1379, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1378, .value=0xcd, .type=IO_READ},
        {.addr=0x1379, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xad19, .a=0x52, .x=0x38, .y=0x17, .sp=0xeb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xad19, .value=0xcd}, {.addr=0xad1a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xad1b, .a=0x52, .x=0xf5, .y=0x17, .sp=0xeb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xad19, .value=0xcd}, {.addr=0xad1a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xad19, .value=0xcd, .type=IO_READ},
        {.addr=0xad1a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x4f45, .a=0x59, .x=0x71, .y=0x59, .sp=0xd1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4f45, .value=0xcd}, {.addr=0x4f46, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x4f47, .a=0x59, .x=0x55, .y=0x59, .sp=0xd1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4f45, .value=0xcd}, {.addr=0x4f46, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x4f45, .value=0xcd, .type=IO_READ},
        {.addr=0x4f46, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa398, .a=0x41, .x=0x42, .y=0xb2, .sp=0x0c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa398, .value=0xcd}, {.addr=0xa399, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa39a, .a=0x41, .x=0x0d, .y=0xb2, .sp=0x0c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa398, .value=0xcd}, {.addr=0xa399, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa398, .value=0xcd, .type=IO_READ},
        {.addr=0xa399, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x6ecd, .a=0xdd, .x=0xc5, .y=0x7a, .sp=0x4f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x6ecd, .value=0xcd}, {.addr=0x6ece, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x6ecf, .a=0xdd, .x=0xb8, .y=0x7a, .sp=0x4f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6ecd, .value=0xcd}, {.addr=0x6ece, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x6ecd, .value=0xcd, .type=IO_READ},
        {.addr=0x6ece, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xeca2, .a=0xbd, .x=0xdc, .y=0xca, .sp=0xd9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xeca2, .value=0xcd}, {.addr=0xeca3, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xeca4, .a=0xbd, .x=0x89, .y=0xca, .sp=0xd9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xeca2, .value=0xcd}, {.addr=0xeca3, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xeca2, .value=0xcd, .type=IO_READ},
        {.addr=0xeca3, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x7c49, .a=0x84, .x=0x6b, .y=0x00, .sp=0xc3, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7c49, .value=0xcd}, {.addr=0x7c4a, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x7c4b, .a=0x84, .x=0x8c, .y=0x00, .sp=0xc3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7c49, .value=0xcd}, {.addr=0x7c4a, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x7c49, .value=0xcd, .type=IO_READ},
        {.addr=0x7c4a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xa501, .a=0xaf, .x=0x82, .y=0x89, .sp=0x1f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa501, .value=0xcd}, {.addr=0xa502, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xa503, .a=0xaf, .x=0x2b, .y=0x89, .sp=0x1f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa501, .value=0xcd}, {.addr=0xa502, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xa501, .value=0xcd, .type=IO_READ},
        {.addr=0xa502, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xd310, .a=0x1c, .x=0x07, .y=0x76, .sp=0x2e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd310, .value=0xcd}, {.addr=0xd311, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xd312, .a=0x1c, .x=0xa7, .y=0x76, .sp=0x2e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd310, .value=0xcd}, {.addr=0xd311, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xd310, .value=0xcd, .type=IO_READ},
        {.addr=0xd311, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x7823, .a=0x33, .x=0x90, .y=0x7d, .sp=0x45, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x7823, .value=0xcd}, {.addr=0x7824, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7825, .a=0x33, .x=0xed, .y=0x7d, .sp=0x45, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7823, .value=0xcd}, {.addr=0x7824, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7823, .value=0xcd, .type=IO_READ},
        {.addr=0x7824, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4465, .a=0xa2, .x=0xf5, .y=0x7e, .sp=0x5f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x4465, .value=0xcd}, {.addr=0x4466, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4467, .a=0xa2, .x=0xfc, .y=0x7e, .sp=0x5f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4465, .value=0xcd}, {.addr=0x4466, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4465, .value=0xcd, .type=IO_READ},
        {.addr=0x4466, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x80d9, .a=0xe6, .x=0x9a, .y=0x33, .sp=0x09, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x80d9, .value=0xcd}, {.addr=0x80da, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x80db, .a=0xe6, .x=0xcf, .y=0x33, .sp=0x09, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x80d9, .value=0xcd}, {.addr=0x80da, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x80d9, .value=0xcd, .type=IO_READ},
        {.addr=0x80da, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x5713, .a=0x4a, .x=0xf1, .y=0x1b, .sp=0xc7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5713, .value=0xcd}, {.addr=0x5714, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5715, .a=0x4a, .x=0xa3, .y=0x1b, .sp=0xc7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5713, .value=0xcd}, {.addr=0x5714, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5713, .value=0xcd, .type=IO_READ},
        {.addr=0x5714, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xeb64, .a=0x64, .x=0xe7, .y=0x85, .sp=0xc9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb64, .value=0xcd}, {.addr=0xeb65, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xeb66, .a=0x64, .x=0x67, .y=0x85, .sp=0xc9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xeb64, .value=0xcd}, {.addr=0xeb65, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xeb64, .value=0xcd, .type=IO_READ},
        {.addr=0xeb65, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x6a6b, .a=0xc6, .x=0xdf, .y=0x02, .sp=0x9e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a6b, .value=0xcd}, {.addr=0x6a6c, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6a6d, .a=0xc6, .x=0x48, .y=0x02, .sp=0x9e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6a6b, .value=0xcd}, {.addr=0x6a6c, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6a6b, .value=0xcd, .type=IO_READ},
        {.addr=0x6a6c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0x26, .x=0x51, .y=0x18, .sp=0x52, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x2deb, .value=0xcd}, {.addr=0x2dec, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x2ded, .a=0x26, .x=0xec, .y=0x18, .sp=0x52, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x2deb, .value=0xcd}, {.addr=0x2dec, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0xcd, .type=IO_READ},
        {.addr=0x2dec, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xd306, .a=0x24, .x=0xc4, .y=0xb0, .sp=0xf0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd306, .value=0xcd}, {.addr=0xd307, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xd308, .a=0x24, .x=0x92, .y=0xb0, .sp=0xf0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd306, .value=0xcd}, {.addr=0xd307, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xd306, .value=0xcd, .type=IO_READ},
        {.addr=0xd307, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x37f7, .a=0x45, .x=0x97, .y=0xa4, .sp=0x0e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x37f7, .value=0xcd}, {.addr=0x37f8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x37f9, .a=0x45, .x=0x90, .y=0xa4, .sp=0x0e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x37f7, .value=0xcd}, {.addr=0x37f8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x37f7, .value=0xcd, .type=IO_READ},
        {.addr=0x37f8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xa396, .a=0xa4, .x=0xef, .y=0x24, .sp=0xd8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa396, .value=0xcd}, {.addr=0xa397, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa398, .a=0xa4, .x=0x48, .y=0x24, .sp=0xd8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa396, .value=0xcd}, {.addr=0xa397, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa396, .value=0xcd, .type=IO_READ},
        {.addr=0xa397, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x9486, .a=0xf8, .x=0xc4, .y=0xc1, .sp=0x17, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9486, .value=0xcd}, {.addr=0x9487, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9488, .a=0xf8, .x=0x47, .y=0xc1, .sp=0x17, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9486, .value=0xcd}, {.addr=0x9487, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9486, .value=0xcd, .type=IO_READ},
        {.addr=0x9487, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xc64a, .a=0x6d, .x=0xbc, .y=0xd0, .sp=0x4d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc64a, .value=0xcd}, {.addr=0xc64b, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xc64c, .a=0x6d, .x=0x5e, .y=0xd0, .sp=0x4d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xc64a, .value=0xcd}, {.addr=0xc64b, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xc64a, .value=0xcd, .type=IO_READ},
        {.addr=0xc64b, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5c6d, .a=0x64, .x=0x5a, .y=0xde, .sp=0xe7, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5c6d, .value=0xcd}, {.addr=0x5c6e, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x5c6f, .a=0x64, .x=0xa9, .y=0xde, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5c6d, .value=0xcd}, {.addr=0x5c6e, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x5c6d, .value=0xcd, .type=IO_READ},
        {.addr=0x5c6e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6945, .a=0xab, .x=0xcc, .y=0x9c, .sp=0xff, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6945, .value=0xcd}, {.addr=0x6946, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6947, .a=0xab, .x=0xbd, .y=0x9c, .sp=0xff, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6945, .value=0xcd}, {.addr=0x6946, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6945, .value=0xcd, .type=IO_READ},
        {.addr=0x6946, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x08a6, .a=0x45, .x=0x76, .y=0x90, .sp=0x59, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x08a6, .value=0xcd}, {.addr=0x08a7, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x08a8, .a=0x45, .x=0x83, .y=0x90, .sp=0x59, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x08a6, .value=0xcd}, {.addr=0x08a7, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x08a6, .value=0xcd, .type=IO_READ},
        {.addr=0x08a7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x9d4a, .a=0x43, .x=0xfc, .y=0xf8, .sp=0x2f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9d4a, .value=0xcd}, {.addr=0x9d4b, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9d4c, .a=0x43, .x=0xef, .y=0xf8, .sp=0x2f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9d4a, .value=0xcd}, {.addr=0x9d4b, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9d4a, .value=0xcd, .type=IO_READ},
        {.addr=0x9d4b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xaf20, .a=0x2d, .x=0xee, .y=0xf7, .sp=0xc9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf20, .value=0xcd}, {.addr=0xaf21, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xaf22, .a=0x2d, .x=0xbb, .y=0xf7, .sp=0xc9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xaf20, .value=0xcd}, {.addr=0xaf21, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xaf20, .value=0xcd, .type=IO_READ},
        {.addr=0xaf21, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x6829, .a=0x9c, .x=0xfb, .y=0x01, .sp=0xd2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6829, .value=0xcd}, {.addr=0x682a, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x682b, .a=0x9c, .x=0x3e, .y=0x01, .sp=0xd2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6829, .value=0xcd}, {.addr=0x682a, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x6829, .value=0xcd, .type=IO_READ},
        {.addr=0x682a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb49f, .a=0xb5, .x=0xfc, .y=0xe0, .sp=0xaa, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb49f, .value=0xcd}, {.addr=0xb4a0, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xb4a1, .a=0xb5, .x=0x4c, .y=0xe0, .sp=0xaa, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb49f, .value=0xcd}, {.addr=0xb4a0, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xb49f, .value=0xcd, .type=IO_READ},
        {.addr=0xb4a0, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x526d, .a=0xf6, .x=0x5f, .y=0x99, .sp=0x68, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x526d, .value=0xcd}, {.addr=0x526e, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x526f, .a=0xf6, .x=0x7b, .y=0x99, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x526d, .value=0xcd}, {.addr=0x526e, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x526d, .value=0xcd, .type=IO_READ},
        {.addr=0x526e, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0200) {
    const struct CPU_State initial_cpu = {.pc=0xe5fb, .a=0xb3, .x=0xd5, .y=0x43, .sp=0x2a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xe5fb, .value=0xcd}, {.addr=0xe5fc, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xe5fd, .a=0xb3, .x=0xc7, .y=0x43, .sp=0x2a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe5fb, .value=0xcd}, {.addr=0xe5fc, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xe5fb, .value=0xcd, .type=IO_READ},
        {.addr=0xe5fc, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0201) {
    const struct CPU_State initial_cpu = {.pc=0x22a8, .a=0xa2, .x=0x24, .y=0xd5, .sp=0x0c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x22a8, .value=0xcd}, {.addr=0x22a9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x22aa, .a=0xa2, .x=0x9d, .y=0xd5, .sp=0x0c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x22a8, .value=0xcd}, {.addr=0x22a9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x22a8, .value=0xcd, .type=IO_READ},
        {.addr=0x22a9, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa8c4, .a=0x4f, .x=0x44, .y=0x01, .sp=0x2b, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c4, .value=0xcd}, {.addr=0xa8c5, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xa8c6, .a=0x4f, .x=0x1f, .y=0x01, .sp=0x2b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa8c4, .value=0xcd}, {.addr=0xa8c5, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xa8c4, .value=0xcd, .type=IO_READ},
        {.addr=0xa8c5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0203) {
    const struct CPU_State initial_cpu = {.pc=0xdcb5, .a=0x48, .x=0xad, .y=0x5e, .sp=0x70, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb5, .value=0xcd}, {.addr=0xdcb6, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xdcb7, .a=0x48, .x=0xe9, .y=0x5e, .sp=0x70, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdcb5, .value=0xcd}, {.addr=0xdcb6, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xdcb5, .value=0xcd, .type=IO_READ},
        {.addr=0xdcb6, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0204) {
    const struct CPU_State initial_cpu = {.pc=0x4f25, .a=0x88, .x=0xf0, .y=0x62, .sp=0x99, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4f25, .value=0xcd}, {.addr=0x4f26, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x4f27, .a=0x88, .x=0x43, .y=0x62, .sp=0x99, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4f25, .value=0xcd}, {.addr=0x4f26, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x4f25, .value=0xcd, .type=IO_READ},
        {.addr=0x4f26, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0205) {
    const struct CPU_State initial_cpu = {.pc=0x7688, .a=0x85, .x=0xa6, .y=0xb4, .sp=0x48, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7688, .value=0xcd}, {.addr=0x7689, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x768a, .a=0x85, .x=0x09, .y=0xb4, .sp=0x48, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7688, .value=0xcd}, {.addr=0x7689, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x7688, .value=0xcd, .type=IO_READ},
        {.addr=0x7689, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0206) {
    const struct CPU_State initial_cpu = {.pc=0x0e14, .a=0x9a, .x=0xe1, .y=0x08, .sp=0x1a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0e14, .value=0xcd}, {.addr=0x0e15, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x0e16, .a=0x9a, .x=0xe5, .y=0x08, .sp=0x1a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0e14, .value=0xcd}, {.addr=0x0e15, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x0e14, .value=0xcd, .type=IO_READ},
        {.addr=0x0e15, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0207) {
    const struct CPU_State initial_cpu = {.pc=0x7a03, .a=0xff, .x=0x90, .y=0x06, .sp=0xc7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x7a03, .value=0xcd}, {.addr=0x7a04, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x7a05, .a=0xff, .x=0xa2, .y=0x06, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7a03, .value=0xcd}, {.addr=0x7a04, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x7a03, .value=0xcd, .type=IO_READ},
        {.addr=0x7a04, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0bba, .a=0xad, .x=0x84, .y=0x89, .sp=0xc8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0bba, .value=0xcd}, {.addr=0x0bbb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0bbc, .a=0xad, .x=0xbf, .y=0x89, .sp=0xc8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0bba, .value=0xcd}, {.addr=0x0bbb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0bba, .value=0xcd, .type=IO_READ},
        {.addr=0x0bbb, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0209) {
    const struct CPU_State initial_cpu = {.pc=0xdf47, .a=0x34, .x=0x1c, .y=0xed, .sp=0xe5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf47, .value=0xcd}, {.addr=0xdf48, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdf49, .a=0x34, .x=0xae, .y=0xed, .sp=0xe5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xdf47, .value=0xcd}, {.addr=0xdf48, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdf47, .value=0xcd, .type=IO_READ},
        {.addr=0xdf48, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020A) {
    const struct CPU_State initial_cpu = {.pc=0xf96f, .a=0xf8, .x=0x88, .y=0x43, .sp=0x7b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf96f, .value=0xcd}, {.addr=0xf970, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xf971, .a=0xf8, .x=0x2c, .y=0x43, .sp=0x7b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf96f, .value=0xcd}, {.addr=0xf970, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xf96f, .value=0xcd, .type=IO_READ},
        {.addr=0xf970, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020B) {
    const struct CPU_State initial_cpu = {.pc=0xa024, .a=0x18, .x=0xa9, .y=0x87, .sp=0xce, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa024, .value=0xcd}, {.addr=0xa025, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xa026, .a=0x18, .x=0xd2, .y=0x87, .sp=0xce, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa024, .value=0xcd}, {.addr=0xa025, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xa024, .value=0xcd, .type=IO_READ},
        {.addr=0xa025, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020C) {
    const struct CPU_State initial_cpu = {.pc=0x65af, .a=0x08, .x=0x2c, .y=0x88, .sp=0xfb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x65af, .value=0xcd}, {.addr=0x65b0, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x65b1, .a=0x08, .x=0xe5, .y=0x88, .sp=0xfb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x65af, .value=0xcd}, {.addr=0x65b0, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x65af, .value=0xcd, .type=IO_READ},
        {.addr=0x65b0, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020D) {
    const struct CPU_State initial_cpu = {.pc=0x515b, .a=0xeb, .x=0x69, .y=0x76, .sp=0x2c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x515b, .value=0xcd}, {.addr=0x515c, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x515d, .a=0xeb, .x=0x7e, .y=0x76, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x515b, .value=0xcd}, {.addr=0x515c, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x515b, .value=0xcd, .type=IO_READ},
        {.addr=0x515c, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8959, .a=0x4f, .x=0x2f, .y=0x16, .sp=0xcd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8959, .value=0xcd}, {.addr=0x895a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x895b, .a=0x4f, .x=0xfc, .y=0x16, .sp=0xcd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8959, .value=0xcd}, {.addr=0x895a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8959, .value=0xcd, .type=IO_READ},
        {.addr=0x895a, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_020F) {
    const struct CPU_State initial_cpu = {.pc=0xdf9b, .a=0xaa, .x=0x1c, .y=0x9b, .sp=0x23, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xdf9b, .value=0xcd}, {.addr=0xdf9c, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xdf9d, .a=0xaa, .x=0x8c, .y=0x9b, .sp=0x23, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdf9b, .value=0xcd}, {.addr=0xdf9c, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xdf9b, .value=0xcd, .type=IO_READ},
        {.addr=0xdf9c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0210) {
    const struct CPU_State initial_cpu = {.pc=0x7f28, .a=0x15, .x=0x10, .y=0x82, .sp=0x34, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7f28, .value=0xcd}, {.addr=0x7f29, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x7f2a, .a=0x15, .x=0xac, .y=0x82, .sp=0x34, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7f28, .value=0xcd}, {.addr=0x7f29, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x7f28, .value=0xcd, .type=IO_READ},
        {.addr=0x7f29, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0211) {
    const struct CPU_State initial_cpu = {.pc=0x98a7, .a=0x86, .x=0x35, .y=0xa5, .sp=0x4f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x98a7, .value=0xcd}, {.addr=0x98a8, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x98a9, .a=0x86, .x=0xd0, .y=0xa5, .sp=0x4f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x98a7, .value=0xcd}, {.addr=0x98a8, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x98a7, .value=0xcd, .type=IO_READ},
        {.addr=0x98a8, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0212) {
    const struct CPU_State initial_cpu = {.pc=0xe465, .a=0x04, .x=0x1f, .y=0x54, .sp=0xe5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe465, .value=0xcd}, {.addr=0xe466, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe467, .a=0x04, .x=0xe7, .y=0x54, .sp=0xe5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe465, .value=0xcd}, {.addr=0xe466, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe465, .value=0xcd, .type=IO_READ},
        {.addr=0xe466, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0213) {
    const struct CPU_State initial_cpu = {.pc=0x6cb4, .a=0x8a, .x=0xf1, .y=0x37, .sp=0xf4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb4, .value=0xcd}, {.addr=0x6cb5, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x6cb6, .a=0x8a, .x=0x6b, .y=0x37, .sp=0xf4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6cb4, .value=0xcd}, {.addr=0x6cb5, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x6cb4, .value=0xcd, .type=IO_READ},
        {.addr=0x6cb5, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0214) {
    const struct CPU_State initial_cpu = {.pc=0x56de, .a=0x9f, .x=0xb5, .y=0x4b, .sp=0x46, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x56de, .value=0xcd}, {.addr=0x56df, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x56e0, .a=0x9f, .x=0xf1, .y=0x4b, .sp=0x46, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x56de, .value=0xcd}, {.addr=0x56df, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x56de, .value=0xcd, .type=IO_READ},
        {.addr=0x56df, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0215) {
    const struct CPU_State initial_cpu = {.pc=0x8d25, .a=0x88, .x=0xc0, .y=0x4d, .sp=0x15, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8d25, .value=0xcd}, {.addr=0x8d26, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x8d27, .a=0x88, .x=0x9e, .y=0x4d, .sp=0x15, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8d25, .value=0xcd}, {.addr=0x8d26, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x8d25, .value=0xcd, .type=IO_READ},
        {.addr=0x8d26, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0216) {
    const struct CPU_State initial_cpu = {.pc=0x5798, .a=0x66, .x=0x69, .y=0x87, .sp=0xc5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x5798, .value=0xcd}, {.addr=0x5799, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x579a, .a=0x66, .x=0xc8, .y=0x87, .sp=0xc5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5798, .value=0xcd}, {.addr=0x5799, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x5798, .value=0xcd, .type=IO_READ},
        {.addr=0x5799, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5833, .a=0xc3, .x=0x43, .y=0xd5, .sp=0x34, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5833, .value=0xcd}, {.addr=0x5834, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5835, .a=0xc3, .x=0xbd, .y=0xd5, .sp=0x34, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5833, .value=0xcd}, {.addr=0x5834, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5833, .value=0xcd, .type=IO_READ},
        {.addr=0x5834, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe8be, .a=0x9a, .x=0x81, .y=0x54, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe8be, .value=0xcd}, {.addr=0xe8bf, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xe8c0, .a=0x9a, .x=0x54, .y=0x54, .sp=0xe3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe8be, .value=0xcd}, {.addr=0xe8bf, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xe8be, .value=0xcd, .type=IO_READ},
        {.addr=0xe8bf, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0219) {
    const struct CPU_State initial_cpu = {.pc=0x4f70, .a=0x1a, .x=0xf7, .y=0x96, .sp=0xa0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4f70, .value=0xcd}, {.addr=0x4f71, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x4f72, .a=0x1a, .x=0xf0, .y=0x96, .sp=0xa0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4f70, .value=0xcd}, {.addr=0x4f71, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x4f70, .value=0xcd, .type=IO_READ},
        {.addr=0x4f71, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021A) {
    const struct CPU_State initial_cpu = {.pc=0x7ef1, .a=0x0a, .x=0x92, .y=0xae, .sp=0x4a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef1, .value=0xcd}, {.addr=0x7ef2, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x7ef3, .a=0x0a, .x=0x25, .y=0xae, .sp=0x4a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7ef1, .value=0xcd}, {.addr=0x7ef2, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x7ef1, .value=0xcd, .type=IO_READ},
        {.addr=0x7ef2, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021B) {
    const struct CPU_State initial_cpu = {.pc=0x5b3e, .a=0x2b, .x=0xa2, .y=0x4c, .sp=0xaf, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3e, .value=0xcd}, {.addr=0x5b3f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x5b40, .a=0x2b, .x=0x6e, .y=0x4c, .sp=0xaf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5b3e, .value=0xcd}, {.addr=0x5b3f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x5b3e, .value=0xcd, .type=IO_READ},
        {.addr=0x5b3f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021C) {
    const struct CPU_State initial_cpu = {.pc=0xf6d2, .a=0x53, .x=0x5a, .y=0x45, .sp=0x28, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xf6d2, .value=0xcd}, {.addr=0xf6d3, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xf6d4, .a=0x53, .x=0x79, .y=0x45, .sp=0x28, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf6d2, .value=0xcd}, {.addr=0xf6d3, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xf6d2, .value=0xcd, .type=IO_READ},
        {.addr=0xf6d3, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf6c1, .a=0x3e, .x=0x3a, .y=0xa0, .sp=0x6f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf6c1, .value=0xcd}, {.addr=0xf6c2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf6c3, .a=0x3e, .x=0xc6, .y=0xa0, .sp=0x6f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf6c1, .value=0xcd}, {.addr=0xf6c2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf6c1, .value=0xcd, .type=IO_READ},
        {.addr=0xf6c2, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7e9f, .a=0x21, .x=0x9c, .y=0x16, .sp=0xe2, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9f, .value=0xcd}, {.addr=0x7ea0, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x7ea1, .a=0x21, .x=0xb7, .y=0x16, .sp=0xe2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7e9f, .value=0xcd}, {.addr=0x7ea0, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x7e9f, .value=0xcd, .type=IO_READ},
        {.addr=0x7ea0, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_021F) {
    const struct CPU_State initial_cpu = {.pc=0x79fb, .a=0x8e, .x=0xc5, .y=0x4a, .sp=0x80, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x79fb, .value=0xcd}, {.addr=0x79fc, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x79fd, .a=0x8e, .x=0x2c, .y=0x4a, .sp=0x80, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x79fb, .value=0xcd}, {.addr=0x79fc, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x79fb, .value=0xcd, .type=IO_READ},
        {.addr=0x79fc, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0220) {
    const struct CPU_State initial_cpu = {.pc=0x8150, .a=0x58, .x=0x03, .y=0xd4, .sp=0xdf, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8150, .value=0xcd}, {.addr=0x8151, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x8152, .a=0x58, .x=0x41, .y=0xd4, .sp=0xdf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8150, .value=0xcd}, {.addr=0x8151, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x8150, .value=0xcd, .type=IO_READ},
        {.addr=0x8151, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0221) {
    const struct CPU_State initial_cpu = {.pc=0x875d, .a=0xaa, .x=0x27, .y=0xb8, .sp=0x1f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x875d, .value=0xcd}, {.addr=0x875e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x875f, .a=0xaa, .x=0xdd, .y=0xb8, .sp=0x1f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x875d, .value=0xcd}, {.addr=0x875e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x875d, .value=0xcd, .type=IO_READ},
        {.addr=0x875e, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6ba1, .a=0x50, .x=0x50, .y=0x9a, .sp=0x7f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6ba1, .value=0xcd}, {.addr=0x6ba2, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x6ba3, .a=0x50, .x=0x1b, .y=0x9a, .sp=0x7f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6ba1, .value=0xcd}, {.addr=0x6ba2, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x6ba1, .value=0xcd, .type=IO_READ},
        {.addr=0x6ba2, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0223) {
    const struct CPU_State initial_cpu = {.pc=0x01c3, .a=0x05, .x=0x98, .y=0x7c, .sp=0xe9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xcd}, {.addr=0x01c4, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x01c5, .a=0x05, .x=0xd7, .y=0x7c, .sp=0xe9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xcd}, {.addr=0x01c4, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x01c3, .value=0xcd, .type=IO_READ},
        {.addr=0x01c4, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0224) {
    const struct CPU_State initial_cpu = {.pc=0x66d5, .a=0x3a, .x=0x36, .y=0x43, .sp=0x26, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x66d5, .value=0xcd}, {.addr=0x66d6, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x66d7, .a=0x3a, .x=0x69, .y=0x43, .sp=0x26, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x66d5, .value=0xcd}, {.addr=0x66d6, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x66d5, .value=0xcd, .type=IO_READ},
        {.addr=0x66d6, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0225) {
    const struct CPU_State initial_cpu = {.pc=0xc693, .a=0x87, .x=0x47, .y=0x52, .sp=0xdb, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc693, .value=0xcd}, {.addr=0xc694, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc695, .a=0x87, .x=0xdf, .y=0x52, .sp=0xdb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc693, .value=0xcd}, {.addr=0xc694, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc693, .value=0xcd, .type=IO_READ},
        {.addr=0xc694, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0226) {
    const struct CPU_State initial_cpu = {.pc=0x3caf, .a=0x16, .x=0xdc, .y=0x63, .sp=0x6e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3caf, .value=0xcd}, {.addr=0x3cb0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3cb1, .a=0x16, .x=0x0d, .y=0x63, .sp=0x6e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3caf, .value=0xcd}, {.addr=0x3cb0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3caf, .value=0xcd, .type=IO_READ},
        {.addr=0x3cb0, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe6a7, .a=0x09, .x=0x96, .y=0xeb, .sp=0x9e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a7, .value=0xcd}, {.addr=0xe6a8, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xe6a9, .a=0x09, .x=0x05, .y=0xeb, .sp=0x9e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe6a7, .value=0xcd}, {.addr=0xe6a8, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xe6a7, .value=0xcd, .type=IO_READ},
        {.addr=0xe6a8, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0228) {
    const struct CPU_State initial_cpu = {.pc=0x8611, .a=0x8b, .x=0xfe, .y=0x1c, .sp=0x4a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x8611, .value=0xcd}, {.addr=0x8612, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8613, .a=0x8b, .x=0x7c, .y=0x1c, .sp=0x4a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8611, .value=0xcd}, {.addr=0x8612, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8611, .value=0xcd, .type=IO_READ},
        {.addr=0x8612, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4a13, .a=0x9c, .x=0x0b, .y=0x29, .sp=0x32, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a13, .value=0xcd}, {.addr=0x4a14, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x4a15, .a=0x9c, .x=0xd8, .y=0x29, .sp=0x32, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4a13, .value=0xcd}, {.addr=0x4a14, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x4a13, .value=0xcd, .type=IO_READ},
        {.addr=0x4a14, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022A) {
    const struct CPU_State initial_cpu = {.pc=0x210f, .a=0x78, .x=0x62, .y=0x87, .sp=0xd6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x210f, .value=0xcd}, {.addr=0x2110, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x2111, .a=0x78, .x=0x0b, .y=0x87, .sp=0xd6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x210f, .value=0xcd}, {.addr=0x2110, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x210f, .value=0xcd, .type=IO_READ},
        {.addr=0x2110, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022B) {
    const struct CPU_State initial_cpu = {.pc=0xebda, .a=0x9d, .x=0x60, .y=0x26, .sp=0x1d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xebda, .value=0xcd}, {.addr=0xebdb, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xebdc, .a=0x9d, .x=0xc5, .y=0x26, .sp=0x1d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xebda, .value=0xcd}, {.addr=0xebdb, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xebda, .value=0xcd, .type=IO_READ},
        {.addr=0xebdb, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022C) {
    const struct CPU_State initial_cpu = {.pc=0x6b12, .a=0x22, .x=0x5f, .y=0xf4, .sp=0x4f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6b12, .value=0xcd}, {.addr=0x6b13, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6b14, .a=0x22, .x=0xa4, .y=0xf4, .sp=0x4f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6b12, .value=0xcd}, {.addr=0x6b13, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6b12, .value=0xcd, .type=IO_READ},
        {.addr=0x6b13, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022D) {
    const struct CPU_State initial_cpu = {.pc=0xa6fa, .a=0x60, .x=0x36, .y=0x8c, .sp=0x04, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa6fa, .value=0xcd}, {.addr=0xa6fb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa6fc, .a=0x60, .x=0x0d, .y=0x8c, .sp=0x04, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa6fa, .value=0xcd}, {.addr=0xa6fb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa6fa, .value=0xcd, .type=IO_READ},
        {.addr=0xa6fb, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022E) {
    const struct CPU_State initial_cpu = {.pc=0x65b9, .a=0xbd, .x=0xb2, .y=0x8e, .sp=0x74, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x65b9, .value=0xcd}, {.addr=0x65ba, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x65bb, .a=0xbd, .x=0x47, .y=0x8e, .sp=0x74, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x65b9, .value=0xcd}, {.addr=0x65ba, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x65b9, .value=0xcd, .type=IO_READ},
        {.addr=0x65ba, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_022F) {
    const struct CPU_State initial_cpu = {.pc=0x7849, .a=0xde, .x=0xcd, .y=0x7f, .sp=0xa8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7849, .value=0xcd}, {.addr=0x784a, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x784b, .a=0xde, .x=0x52, .y=0x7f, .sp=0xa8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7849, .value=0xcd}, {.addr=0x784a, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7849, .value=0xcd, .type=IO_READ},
        {.addr=0x784a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0230) {
    const struct CPU_State initial_cpu = {.pc=0x74d5, .a=0x10, .x=0xf5, .y=0x36, .sp=0x05, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x74d5, .value=0xcd}, {.addr=0x74d6, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x74d7, .a=0x10, .x=0x4c, .y=0x36, .sp=0x05, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x74d5, .value=0xcd}, {.addr=0x74d6, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x74d5, .value=0xcd, .type=IO_READ},
        {.addr=0x74d6, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0231) {
    const struct CPU_State initial_cpu = {.pc=0xcfd1, .a=0x5a, .x=0xc3, .y=0x9f, .sp=0xae, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xcfd1, .value=0xcd}, {.addr=0xcfd2, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xcfd3, .a=0x5a, .x=0xa5, .y=0x9f, .sp=0xae, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcfd1, .value=0xcd}, {.addr=0xcfd2, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xcfd1, .value=0xcd, .type=IO_READ},
        {.addr=0xcfd2, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0232) {
    const struct CPU_State initial_cpu = {.pc=0x5c78, .a=0x56, .x=0x65, .y=0x2b, .sp=0xa5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c78, .value=0xcd}, {.addr=0x5c79, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x5c7a, .a=0x56, .x=0xcd, .y=0x2b, .sp=0xa5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5c78, .value=0xcd}, {.addr=0x5c79, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x5c78, .value=0xcd, .type=IO_READ},
        {.addr=0x5c79, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0233) {
    const struct CPU_State initial_cpu = {.pc=0x2938, .a=0x6f, .x=0x71, .y=0x98, .sp=0x72, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2938, .value=0xcd}, {.addr=0x2939, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x293a, .a=0x6f, .x=0x41, .y=0x98, .sp=0x72, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2938, .value=0xcd}, {.addr=0x2939, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x2938, .value=0xcd, .type=IO_READ},
        {.addr=0x2939, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0234) {
    const struct CPU_State initial_cpu = {.pc=0x362a, .a=0xf9, .x=0xeb, .y=0xcd, .sp=0xa3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x362a, .value=0xcd}, {.addr=0x362b, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x362c, .a=0xf9, .x=0xfa, .y=0xcd, .sp=0xa3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x362a, .value=0xcd}, {.addr=0x362b, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x362a, .value=0xcd, .type=IO_READ},
        {.addr=0x362b, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0235) {
    const struct CPU_State initial_cpu = {.pc=0xa9d3, .a=0x39, .x=0x30, .y=0x1c, .sp=0x8e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d3, .value=0xcd}, {.addr=0xa9d4, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa9d5, .a=0x39, .x=0xc2, .y=0x1c, .sp=0x8e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa9d3, .value=0xcd}, {.addr=0xa9d4, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa9d3, .value=0xcd, .type=IO_READ},
        {.addr=0xa9d4, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0236) {
    const struct CPU_State initial_cpu = {.pc=0x3441, .a=0xee, .x=0xcd, .y=0xe1, .sp=0xc3, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3441, .value=0xcd}, {.addr=0x3442, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x3443, .a=0xee, .x=0xa7, .y=0xe1, .sp=0xc3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x3441, .value=0xcd}, {.addr=0x3442, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x3441, .value=0xcd, .type=IO_READ},
        {.addr=0x3442, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0237) {
    const struct CPU_State initial_cpu = {.pc=0xe623, .a=0xb3, .x=0x9a, .y=0xe5, .sp=0x7e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe623, .value=0xcd}, {.addr=0xe624, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xe625, .a=0xb3, .x=0xe4, .y=0xe5, .sp=0x7e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe623, .value=0xcd}, {.addr=0xe624, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xe623, .value=0xcd, .type=IO_READ},
        {.addr=0xe624, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0238) {
    const struct CPU_State initial_cpu = {.pc=0xf64c, .a=0x1e, .x=0x2a, .y=0xfd, .sp=0x99, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf64c, .value=0xcd}, {.addr=0xf64d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xf64e, .a=0x1e, .x=0x44, .y=0xfd, .sp=0x99, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf64c, .value=0xcd}, {.addr=0xf64d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xf64c, .value=0xcd, .type=IO_READ},
        {.addr=0xf64d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb51f, .a=0x45, .x=0xcc, .y=0x18, .sp=0x20, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb51f, .value=0xcd}, {.addr=0xb520, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xb521, .a=0x45, .x=0x1f, .y=0x18, .sp=0x20, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb51f, .value=0xcd}, {.addr=0xb520, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xb51f, .value=0xcd, .type=IO_READ},
        {.addr=0xb520, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023A) {
    const struct CPU_State initial_cpu = {.pc=0x8bc8, .a=0x50, .x=0xa6, .y=0xc6, .sp=0x98, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc8, .value=0xcd}, {.addr=0x8bc9, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8bca, .a=0x50, .x=0x88, .y=0xc6, .sp=0x98, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8bc8, .value=0xcd}, {.addr=0x8bc9, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8bc8, .value=0xcd, .type=IO_READ},
        {.addr=0x8bc9, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0437, .a=0xc9, .x=0x21, .y=0x93, .sp=0x72, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0437, .value=0xcd}, {.addr=0x0438, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x0439, .a=0xc9, .x=0x5a, .y=0x93, .sp=0x72, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0437, .value=0xcd}, {.addr=0x0438, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x0437, .value=0xcd, .type=IO_READ},
        {.addr=0x0438, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023C) {
    const struct CPU_State initial_cpu = {.pc=0xe9b0, .a=0xd7, .x=0xf4, .y=0xf6, .sp=0xed, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b0, .value=0xcd}, {.addr=0xe9b1, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xe9b2, .a=0xd7, .x=0x99, .y=0xf6, .sp=0xed, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe9b0, .value=0xcd}, {.addr=0xe9b1, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xe9b0, .value=0xcd, .type=IO_READ},
        {.addr=0xe9b1, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023D) {
    const struct CPU_State initial_cpu = {.pc=0xb230, .a=0x35, .x=0xfd, .y=0xa5, .sp=0xaf, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb230, .value=0xcd}, {.addr=0xb231, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xb232, .a=0x35, .x=0xcb, .y=0xa5, .sp=0xaf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb230, .value=0xcd}, {.addr=0xb231, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xb230, .value=0xcd, .type=IO_READ},
        {.addr=0xb231, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023E) {
    const struct CPU_State initial_cpu = {.pc=0x9e19, .a=0x26, .x=0xfd, .y=0x35, .sp=0xe6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e19, .value=0xcd}, {.addr=0x9e1a, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x9e1b, .a=0x26, .x=0xb7, .y=0x35, .sp=0xe6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9e19, .value=0xcd}, {.addr=0x9e1a, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x9e19, .value=0xcd, .type=IO_READ},
        {.addr=0x9e1a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_023F) {
    const struct CPU_State initial_cpu = {.pc=0xd73a, .a=0x36, .x=0x34, .y=0x18, .sp=0xb3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd73a, .value=0xcd}, {.addr=0xd73b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd73c, .a=0x36, .x=0xc6, .y=0x18, .sp=0xb3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd73a, .value=0xcd}, {.addr=0xd73b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd73a, .value=0xcd, .type=IO_READ},
        {.addr=0xd73b, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0240) {
    const struct CPU_State initial_cpu = {.pc=0x24b4, .a=0x40, .x=0xb0, .y=0xb6, .sp=0x0b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x24b4, .value=0xcd}, {.addr=0x24b5, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x24b6, .a=0x40, .x=0x2f, .y=0xb6, .sp=0x0b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x24b4, .value=0xcd}, {.addr=0x24b5, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x24b4, .value=0xcd, .type=IO_READ},
        {.addr=0x24b5, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0241) {
    const struct CPU_State initial_cpu = {.pc=0xd203, .a=0xc5, .x=0x62, .y=0x1e, .sp=0xb0, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xd203, .value=0xcd}, {.addr=0xd204, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd205, .a=0xc5, .x=0x41, .y=0x1e, .sp=0xb0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd203, .value=0xcd}, {.addr=0xd204, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd203, .value=0xcd, .type=IO_READ},
        {.addr=0xd204, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0242) {
    const struct CPU_State initial_cpu = {.pc=0x1398, .a=0x3d, .x=0x1e, .y=0x2d, .sp=0xd5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1398, .value=0xcd}, {.addr=0x1399, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x139a, .a=0x3d, .x=0x9c, .y=0x2d, .sp=0xd5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1398, .value=0xcd}, {.addr=0x1399, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1398, .value=0xcd, .type=IO_READ},
        {.addr=0x1399, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0243) {
    const struct CPU_State initial_cpu = {.pc=0xe79f, .a=0xdb, .x=0xf8, .y=0x23, .sp=0x06, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe79f, .value=0xcd}, {.addr=0xe7a0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe7a1, .a=0xdb, .x=0x00, .y=0x23, .sp=0x06, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe79f, .value=0xcd}, {.addr=0xe7a0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe79f, .value=0xcd, .type=IO_READ},
        {.addr=0xe7a0, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0244) {
    const struct CPU_State initial_cpu = {.pc=0x7d95, .a=0x85, .x=0x53, .y=0x52, .sp=0x68, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7d95, .value=0xcd}, {.addr=0x7d96, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x7d97, .a=0x85, .x=0x2b, .y=0x52, .sp=0x68, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7d95, .value=0xcd}, {.addr=0x7d96, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x7d95, .value=0xcd, .type=IO_READ},
        {.addr=0x7d96, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0245) {
    const struct CPU_State initial_cpu = {.pc=0x5ed6, .a=0x56, .x=0x29, .y=0x29, .sp=0x57, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed6, .value=0xcd}, {.addr=0x5ed7, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x5ed8, .a=0x56, .x=0xf6, .y=0x29, .sp=0x57, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5ed6, .value=0xcd}, {.addr=0x5ed7, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x5ed6, .value=0xcd, .type=IO_READ},
        {.addr=0x5ed7, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0246) {
    const struct CPU_State initial_cpu = {.pc=0x5b65, .a=0xf1, .x=0xb4, .y=0xf9, .sp=0x02, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5b65, .value=0xcd}, {.addr=0x5b66, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5b67, .a=0xf1, .x=0xbe, .y=0xf9, .sp=0x02, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5b65, .value=0xcd}, {.addr=0x5b66, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5b65, .value=0xcd, .type=IO_READ},
        {.addr=0x5b66, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0247) {
    const struct CPU_State initial_cpu = {.pc=0x0156, .a=0xed, .x=0xe2, .y=0x37, .sp=0x1a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xcd}, {.addr=0x0157, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x0158, .a=0xed, .x=0x51, .y=0x37, .sp=0x1a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xcd}, {.addr=0x0157, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x0156, .value=0xcd, .type=IO_READ},
        {.addr=0x0157, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0248) {
    const struct CPU_State initial_cpu = {.pc=0xbdff, .a=0xeb, .x=0xc2, .y=0xb9, .sp=0x87, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbdff, .value=0xcd}, {.addr=0xbe00, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe01, .a=0xeb, .x=0x9f, .y=0xb9, .sp=0x87, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbdff, .value=0xcd}, {.addr=0xbe00, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbdff, .value=0xcd, .type=IO_READ},
        {.addr=0xbe00, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0249) {
    const struct CPU_State initial_cpu = {.pc=0xddd3, .a=0xdf, .x=0x46, .y=0x73, .sp=0x5e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xddd3, .value=0xcd}, {.addr=0xddd4, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xddd5, .a=0xdf, .x=0x64, .y=0x73, .sp=0x5e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xddd3, .value=0xcd}, {.addr=0xddd4, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xddd3, .value=0xcd, .type=IO_READ},
        {.addr=0xddd4, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024A) {
    const struct CPU_State initial_cpu = {.pc=0x8258, .a=0xc2, .x=0x2e, .y=0xce, .sp=0x00, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8258, .value=0xcd}, {.addr=0x8259, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x825a, .a=0xc2, .x=0x7c, .y=0xce, .sp=0x00, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8258, .value=0xcd}, {.addr=0x8259, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8258, .value=0xcd, .type=IO_READ},
        {.addr=0x8259, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa368, .a=0x65, .x=0x47, .y=0x5a, .sp=0x44, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa368, .value=0xcd}, {.addr=0xa369, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xa36a, .a=0x65, .x=0x99, .y=0x5a, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa368, .value=0xcd}, {.addr=0xa369, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xa368, .value=0xcd, .type=IO_READ},
        {.addr=0xa369, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024C) {
    const struct CPU_State initial_cpu = {.pc=0x2cda, .a=0x5a, .x=0x27, .y=0x1a, .sp=0xc4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2cda, .value=0xcd}, {.addr=0x2cdb, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x2cdc, .a=0x5a, .x=0x07, .y=0x1a, .sp=0xc4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2cda, .value=0xcd}, {.addr=0x2cdb, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x2cda, .value=0xcd, .type=IO_READ},
        {.addr=0x2cdb, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024D) {
    const struct CPU_State initial_cpu = {.pc=0x5b95, .a=0xde, .x=0x51, .y=0xb1, .sp=0x82, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5b95, .value=0xcd}, {.addr=0x5b96, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5b97, .a=0xde, .x=0xe0, .y=0xb1, .sp=0x82, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5b95, .value=0xcd}, {.addr=0x5b96, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5b95, .value=0xcd, .type=IO_READ},
        {.addr=0x5b96, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024E) {
    const struct CPU_State initial_cpu = {.pc=0x3736, .a=0xfa, .x=0x36, .y=0xce, .sp=0x7d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3736, .value=0xcd}, {.addr=0x3737, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x3738, .a=0xfa, .x=0x54, .y=0xce, .sp=0x7d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3736, .value=0xcd}, {.addr=0x3737, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x3736, .value=0xcd, .type=IO_READ},
        {.addr=0x3737, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_024F) {
    const struct CPU_State initial_cpu = {.pc=0xd740, .a=0xef, .x=0xee, .y=0x95, .sp=0xd6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd740, .value=0xcd}, {.addr=0xd741, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xd742, .a=0xef, .x=0xd4, .y=0x95, .sp=0xd6, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd740, .value=0xcd}, {.addr=0xd741, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xd740, .value=0xcd, .type=IO_READ},
        {.addr=0xd741, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb219, .a=0xa6, .x=0x8a, .y=0xe4, .sp=0x6c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb219, .value=0xcd}, {.addr=0xb21a, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb21b, .a=0xa6, .x=0xad, .y=0xe4, .sp=0x6c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb219, .value=0xcd}, {.addr=0xb21a, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb219, .value=0xcd, .type=IO_READ},
        {.addr=0xb21a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0251) {
    const struct CPU_State initial_cpu = {.pc=0xc788, .a=0xac, .x=0x11, .y=0xae, .sp=0x77, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc788, .value=0xcd}, {.addr=0xc789, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xc78a, .a=0xac, .x=0xc5, .y=0xae, .sp=0x77, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc788, .value=0xcd}, {.addr=0xc789, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xc788, .value=0xcd, .type=IO_READ},
        {.addr=0xc789, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0252) {
    const struct CPU_State initial_cpu = {.pc=0x01e5, .a=0xff, .x=0x3a, .y=0x1f, .sp=0x78, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xcd}, {.addr=0x01e6, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x01e7, .a=0xff, .x=0x4e, .y=0x1f, .sp=0x78, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xcd}, {.addr=0x01e6, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x01e5, .value=0xcd, .type=IO_READ},
        {.addr=0x01e6, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0253) {
    const struct CPU_State initial_cpu = {.pc=0xaa81, .a=0x15, .x=0x55, .y=0x0c, .sp=0x2a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa81, .value=0xcd}, {.addr=0xaa82, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xaa83, .a=0x15, .x=0x72, .y=0x0c, .sp=0x2a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xaa81, .value=0xcd}, {.addr=0xaa82, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xaa81, .value=0xcd, .type=IO_READ},
        {.addr=0xaa82, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0254) {
    const struct CPU_State initial_cpu = {.pc=0x1b56, .a=0xb0, .x=0x5f, .y=0x29, .sp=0x3c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1b56, .value=0xcd}, {.addr=0x1b57, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1b58, .a=0xb0, .x=0x86, .y=0x29, .sp=0x3c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1b56, .value=0xcd}, {.addr=0x1b57, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1b56, .value=0xcd, .type=IO_READ},
        {.addr=0x1b57, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0255) {
    const struct CPU_State initial_cpu = {.pc=0x5971, .a=0xed, .x=0xd8, .y=0xf5, .sp=0x00, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5971, .value=0xcd}, {.addr=0x5972, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x5973, .a=0xed, .x=0x28, .y=0xf5, .sp=0x00, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5971, .value=0xcd}, {.addr=0x5972, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x5971, .value=0xcd, .type=IO_READ},
        {.addr=0x5972, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0256) {
    const struct CPU_State initial_cpu = {.pc=0x16c0, .a=0xa5, .x=0x96, .y=0xdd, .sp=0xc0, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x16c0, .value=0xcd}, {.addr=0x16c1, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x16c2, .a=0xa5, .x=0xe1, .y=0xdd, .sp=0xc0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x16c0, .value=0xcd}, {.addr=0x16c1, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x16c0, .value=0xcd, .type=IO_READ},
        {.addr=0x16c1, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0257) {
    const struct CPU_State initial_cpu = {.pc=0xf944, .a=0x15, .x=0x04, .y=0x4d, .sp=0xa5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf944, .value=0xcd}, {.addr=0xf945, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf946, .a=0x15, .x=0xd2, .y=0x4d, .sp=0xa5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf944, .value=0xcd}, {.addr=0xf945, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf944, .value=0xcd, .type=IO_READ},
        {.addr=0xf945, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0258) {
    const struct CPU_State initial_cpu = {.pc=0x637b, .a=0x8c, .x=0x92, .y=0x69, .sp=0x12, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x637b, .value=0xcd}, {.addr=0x637c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x637d, .a=0x8c, .x=0xe4, .y=0x69, .sp=0x12, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x637b, .value=0xcd}, {.addr=0x637c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x637b, .value=0xcd, .type=IO_READ},
        {.addr=0x637c, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0259) {
    const struct CPU_State initial_cpu = {.pc=0xcb72, .a=0xc2, .x=0xbb, .y=0x7c, .sp=0x4b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xcb72, .value=0xcd}, {.addr=0xcb73, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xcb74, .a=0xc2, .x=0x6e, .y=0x7c, .sp=0x4b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xcb72, .value=0xcd}, {.addr=0xcb73, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xcb72, .value=0xcd, .type=IO_READ},
        {.addr=0xcb73, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025A) {
    const struct CPU_State initial_cpu = {.pc=0xacc8, .a=0xfe, .x=0xb3, .y=0x52, .sp=0x87, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xacc8, .value=0xcd}, {.addr=0xacc9, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xacca, .a=0xfe, .x=0xfa, .y=0x52, .sp=0x87, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xacc8, .value=0xcd}, {.addr=0xacc9, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xacc8, .value=0xcd, .type=IO_READ},
        {.addr=0xacc9, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025B) {
    const struct CPU_State initial_cpu = {.pc=0x95be, .a=0xdf, .x=0x4a, .y=0x46, .sp=0x7e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x95be, .value=0xcd}, {.addr=0x95bf, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x95c0, .a=0xdf, .x=0x37, .y=0x46, .sp=0x7e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x95be, .value=0xcd}, {.addr=0x95bf, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x95be, .value=0xcd, .type=IO_READ},
        {.addr=0x95bf, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7a5e, .a=0xf4, .x=0xf3, .y=0xfb, .sp=0x3f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7a5e, .value=0xcd}, {.addr=0x7a5f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7a60, .a=0xf4, .x=0x7d, .y=0xfb, .sp=0x3f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7a5e, .value=0xcd}, {.addr=0x7a5f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7a5e, .value=0xcd, .type=IO_READ},
        {.addr=0x7a5f, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025D) {
    const struct CPU_State initial_cpu = {.pc=0xd597, .a=0x32, .x=0x8f, .y=0xfc, .sp=0xe8, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd597, .value=0xcd}, {.addr=0xd598, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xd599, .a=0x32, .x=0xa1, .y=0xfc, .sp=0xe8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd597, .value=0xcd}, {.addr=0xd598, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xd597, .value=0xcd, .type=IO_READ},
        {.addr=0xd598, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025E) {
    const struct CPU_State initial_cpu = {.pc=0x76c8, .a=0x09, .x=0x54, .y=0x83, .sp=0x77, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x76c8, .value=0xcd}, {.addr=0x76c9, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x76ca, .a=0x09, .x=0xf4, .y=0x83, .sp=0x77, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x76c8, .value=0xcd}, {.addr=0x76c9, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x76c8, .value=0xcd, .type=IO_READ},
        {.addr=0x76c9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_025F) {
    const struct CPU_State initial_cpu = {.pc=0x947c, .a=0x33, .x=0xa2, .y=0xaf, .sp=0xd3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x947c, .value=0xcd}, {.addr=0x947d, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x947e, .a=0x33, .x=0xd8, .y=0xaf, .sp=0xd3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x947c, .value=0xcd}, {.addr=0x947d, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x947c, .value=0xcd, .type=IO_READ},
        {.addr=0x947d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0260) {
    const struct CPU_State initial_cpu = {.pc=0x9395, .a=0xbf, .x=0xd3, .y=0xac, .sp=0xed, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9395, .value=0xcd}, {.addr=0x9396, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x9397, .a=0xbf, .x=0x70, .y=0xac, .sp=0xed, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9395, .value=0xcd}, {.addr=0x9396, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x9395, .value=0xcd, .type=IO_READ},
        {.addr=0x9396, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1942, .a=0xff, .x=0x6d, .y=0x12, .sp=0xbb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1942, .value=0xcd}, {.addr=0x1943, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x1944, .a=0xff, .x=0x3f, .y=0x12, .sp=0xbb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1942, .value=0xcd}, {.addr=0x1943, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x1942, .value=0xcd, .type=IO_READ},
        {.addr=0x1943, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0262) {
    const struct CPU_State initial_cpu = {.pc=0xc96b, .a=0xd5, .x=0x58, .y=0x2e, .sp=0xa8, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xc96b, .value=0xcd}, {.addr=0xc96c, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xc96d, .a=0xd5, .x=0xa7, .y=0x2e, .sp=0xa8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc96b, .value=0xcd}, {.addr=0xc96c, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xc96b, .value=0xcd, .type=IO_READ},
        {.addr=0xc96c, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0263) {
    const struct CPU_State initial_cpu = {.pc=0x0cc3, .a=0x0a, .x=0x26, .y=0x0c, .sp=0x23, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0cc3, .value=0xcd}, {.addr=0x0cc4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0cc5, .a=0x0a, .x=0xdf, .y=0x0c, .sp=0x23, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0cc3, .value=0xcd}, {.addr=0x0cc4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0cc3, .value=0xcd, .type=IO_READ},
        {.addr=0x0cc4, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0264) {
    const struct CPU_State initial_cpu = {.pc=0xbdd9, .a=0xf7, .x=0xd9, .y=0xf4, .sp=0x9f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd9, .value=0xcd}, {.addr=0xbdda, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xbddb, .a=0xf7, .x=0xc5, .y=0xf4, .sp=0x9f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbdd9, .value=0xcd}, {.addr=0xbdda, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xbdd9, .value=0xcd, .type=IO_READ},
        {.addr=0xbdda, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0265) {
    const struct CPU_State initial_cpu = {.pc=0xfef3, .a=0x48, .x=0x81, .y=0xc8, .sp=0x0c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xfef3, .value=0xcd}, {.addr=0xfef4, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xfef5, .a=0x48, .x=0x84, .y=0xc8, .sp=0x0c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xfef3, .value=0xcd}, {.addr=0xfef4, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xfef3, .value=0xcd, .type=IO_READ},
        {.addr=0xfef4, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0266) {
    const struct CPU_State initial_cpu = {.pc=0x2389, .a=0x1b, .x=0x84, .y=0x8b, .sp=0x6d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x2389, .value=0xcd}, {.addr=0x238a, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x238b, .a=0x1b, .x=0xb0, .y=0x8b, .sp=0x6d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2389, .value=0xcd}, {.addr=0x238a, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x2389, .value=0xcd, .type=IO_READ},
        {.addr=0x238a, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0267) {
    const struct CPU_State initial_cpu = {.pc=0x3c41, .a=0xe7, .x=0x17, .y=0x5d, .sp=0x75, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3c41, .value=0xcd}, {.addr=0x3c42, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x3c43, .a=0xe7, .x=0x56, .y=0x5d, .sp=0x75, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3c41, .value=0xcd}, {.addr=0x3c42, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x3c41, .value=0xcd, .type=IO_READ},
        {.addr=0x3c42, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0268) {
    const struct CPU_State initial_cpu = {.pc=0xd34d, .a=0x94, .x=0x39, .y=0xe7, .sp=0x92, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xd34d, .value=0xcd}, {.addr=0xd34e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xd34f, .a=0x94, .x=0xf7, .y=0xe7, .sp=0x92, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd34d, .value=0xcd}, {.addr=0xd34e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xd34d, .value=0xcd, .type=IO_READ},
        {.addr=0xd34e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1da1, .a=0xea, .x=0xf1, .y=0xf5, .sp=0x7d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1da1, .value=0xcd}, {.addr=0x1da2, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1da3, .a=0xea, .x=0x75, .y=0xf5, .sp=0x7d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1da1, .value=0xcd}, {.addr=0x1da2, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x1da1, .value=0xcd, .type=IO_READ},
        {.addr=0x1da2, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026A) {
    const struct CPU_State initial_cpu = {.pc=0xbc78, .a=0xca, .x=0xc9, .y=0x2f, .sp=0x67, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xbc78, .value=0xcd}, {.addr=0xbc79, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xbc7a, .a=0xca, .x=0x27, .y=0x2f, .sp=0x67, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbc78, .value=0xcd}, {.addr=0xbc79, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xbc78, .value=0xcd, .type=IO_READ},
        {.addr=0xbc79, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe45c, .a=0xa3, .x=0x65, .y=0x98, .sp=0x0d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xe45c, .value=0xcd}, {.addr=0xe45d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe45e, .a=0xa3, .x=0x9c, .y=0x98, .sp=0x0d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe45c, .value=0xcd}, {.addr=0xe45d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe45c, .value=0xcd, .type=IO_READ},
        {.addr=0xe45d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026C) {
    const struct CPU_State initial_cpu = {.pc=0x161a, .a=0xac, .x=0xc4, .y=0x42, .sp=0x19, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x161a, .value=0xcd}, {.addr=0x161b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x161c, .a=0xac, .x=0x06, .y=0x42, .sp=0x19, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x161a, .value=0xcd}, {.addr=0x161b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x161a, .value=0xcd, .type=IO_READ},
        {.addr=0x161b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4172, .a=0xb8, .x=0xd2, .y=0xab, .sp=0x9e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4172, .value=0xcd}, {.addr=0x4173, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4174, .a=0xb8, .x=0xf4, .y=0xab, .sp=0x9e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4172, .value=0xcd}, {.addr=0x4173, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4172, .value=0xcd, .type=IO_READ},
        {.addr=0x4173, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026E) {
    const struct CPU_State initial_cpu = {.pc=0x7712, .a=0x1b, .x=0x6c, .y=0x31, .sp=0x08, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7712, .value=0xcd}, {.addr=0x7713, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7714, .a=0x1b, .x=0x20, .y=0x31, .sp=0x08, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7712, .value=0xcd}, {.addr=0x7713, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7712, .value=0xcd, .type=IO_READ},
        {.addr=0x7713, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_026F) {
    const struct CPU_State initial_cpu = {.pc=0xbd0c, .a=0x63, .x=0xc8, .y=0x3b, .sp=0x77, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0c, .value=0xcd}, {.addr=0xbd0d, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xbd0e, .a=0x63, .x=0xfa, .y=0x3b, .sp=0x77, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbd0c, .value=0xcd}, {.addr=0xbd0d, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xbd0c, .value=0xcd, .type=IO_READ},
        {.addr=0xbd0d, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0270) {
    const struct CPU_State initial_cpu = {.pc=0x21df, .a=0x19, .x=0x6e, .y=0xa6, .sp=0xe0, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x21df, .value=0xcd}, {.addr=0x21e0, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x21e1, .a=0x19, .x=0x91, .y=0xa6, .sp=0xe0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x21df, .value=0xcd}, {.addr=0x21e0, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x21df, .value=0xcd, .type=IO_READ},
        {.addr=0x21e0, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0271) {
    const struct CPU_State initial_cpu = {.pc=0xb85c, .a=0x4c, .x=0x7e, .y=0x1d, .sp=0x49, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb85c, .value=0xcd}, {.addr=0xb85d, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xb85e, .a=0x4c, .x=0x53, .y=0x1d, .sp=0x49, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb85c, .value=0xcd}, {.addr=0xb85d, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xb85c, .value=0xcd, .type=IO_READ},
        {.addr=0xb85d, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0272) {
    const struct CPU_State initial_cpu = {.pc=0x937b, .a=0xbd, .x=0x44, .y=0x8c, .sp=0xbb, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x937b, .value=0xcd}, {.addr=0x937c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x937d, .a=0xbd, .x=0x23, .y=0x8c, .sp=0xbb, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x937b, .value=0xcd}, {.addr=0x937c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x937b, .value=0xcd, .type=IO_READ},
        {.addr=0x937c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0273) {
    const struct CPU_State initial_cpu = {.pc=0x216f, .a=0x7a, .x=0x71, .y=0x40, .sp=0xa6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x216f, .value=0xcd}, {.addr=0x2170, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x2171, .a=0x7a, .x=0x90, .y=0x40, .sp=0xa6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x216f, .value=0xcd}, {.addr=0x2170, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x216f, .value=0xcd, .type=IO_READ},
        {.addr=0x2170, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe8ac, .a=0xe7, .x=0x42, .y=0x96, .sp=0x02, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ac, .value=0xcd}, {.addr=0xe8ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe8ae, .a=0xe7, .x=0xe0, .y=0x96, .sp=0x02, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe8ac, .value=0xcd}, {.addr=0xe8ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe8ac, .value=0xcd, .type=IO_READ},
        {.addr=0xe8ad, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7afe, .a=0x87, .x=0xb9, .y=0x72, .sp=0xe5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7afe, .value=0xcd}, {.addr=0x7aff, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x7b00, .a=0x87, .x=0x05, .y=0x72, .sp=0xe5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7afe, .value=0xcd}, {.addr=0x7aff, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x7afe, .value=0xcd, .type=IO_READ},
        {.addr=0x7aff, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0276) {
    const struct CPU_State initial_cpu = {.pc=0x6ff5, .a=0xf3, .x=0xc7, .y=0xe9, .sp=0xce, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6ff5, .value=0xcd}, {.addr=0x6ff6, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x6ff7, .a=0xf3, .x=0x6c, .y=0xe9, .sp=0xce, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6ff5, .value=0xcd}, {.addr=0x6ff6, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x6ff5, .value=0xcd, .type=IO_READ},
        {.addr=0x6ff6, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0277) {
    const struct CPU_State initial_cpu = {.pc=0x9c57, .a=0xa3, .x=0x4a, .y=0x70, .sp=0xd9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c57, .value=0xcd}, {.addr=0x9c58, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9c59, .a=0xa3, .x=0xfc, .y=0x70, .sp=0xd9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9c57, .value=0xcd}, {.addr=0x9c58, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9c57, .value=0xcd, .type=IO_READ},
        {.addr=0x9c58, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0278) {
    const struct CPU_State initial_cpu = {.pc=0xae74, .a=0xdb, .x=0x7d, .y=0x4f, .sp=0x71, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xae74, .value=0xcd}, {.addr=0xae75, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xae76, .a=0xdb, .x=0xbe, .y=0x4f, .sp=0x71, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xae74, .value=0xcd}, {.addr=0xae75, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xae74, .value=0xcd, .type=IO_READ},
        {.addr=0xae75, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0279) {
    const struct CPU_State initial_cpu = {.pc=0xb224, .a=0xc0, .x=0x9c, .y=0xcd, .sp=0xf6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb224, .value=0xcd}, {.addr=0xb225, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xb226, .a=0xc0, .x=0xf0, .y=0xcd, .sp=0xf6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb224, .value=0xcd}, {.addr=0xb225, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xb224, .value=0xcd, .type=IO_READ},
        {.addr=0xb225, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6858, .a=0x0b, .x=0x69, .y=0x79, .sp=0x96, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6858, .value=0xcd}, {.addr=0x6859, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x685a, .a=0x0b, .x=0x5d, .y=0x79, .sp=0x96, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6858, .value=0xcd}, {.addr=0x6859, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6858, .value=0xcd, .type=IO_READ},
        {.addr=0x6859, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027B) {
    const struct CPU_State initial_cpu = {.pc=0xfd2e, .a=0x42, .x=0x88, .y=0xb7, .sp=0x60, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2e, .value=0xcd}, {.addr=0xfd2f, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xfd30, .a=0x42, .x=0x73, .y=0xb7, .sp=0x60, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfd2e, .value=0xcd}, {.addr=0xfd2f, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xfd2e, .value=0xcd, .type=IO_READ},
        {.addr=0xfd2f, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027C) {
    const struct CPU_State initial_cpu = {.pc=0xcbfb, .a=0x8f, .x=0x1f, .y=0x19, .sp=0xa7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcbfb, .value=0xcd}, {.addr=0xcbfc, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xcbfd, .a=0x8f, .x=0xad, .y=0x19, .sp=0xa7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xcbfb, .value=0xcd}, {.addr=0xcbfc, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xcbfb, .value=0xcd, .type=IO_READ},
        {.addr=0xcbfc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027D) {
    const struct CPU_State initial_cpu = {.pc=0x7689, .a=0xa5, .x=0xa7, .y=0xb6, .sp=0x72, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7689, .value=0xcd}, {.addr=0x768a, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x768b, .a=0xa5, .x=0x52, .y=0xb6, .sp=0x72, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7689, .value=0xcd}, {.addr=0x768a, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7689, .value=0xcd, .type=IO_READ},
        {.addr=0x768a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027E) {
    const struct CPU_State initial_cpu = {.pc=0xbc22, .a=0xdd, .x=0x26, .y=0xca, .sp=0x71, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xbc22, .value=0xcd}, {.addr=0xbc23, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbc24, .a=0xdd, .x=0x3d, .y=0xca, .sp=0x71, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbc22, .value=0xcd}, {.addr=0xbc23, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbc22, .value=0xcd, .type=IO_READ},
        {.addr=0xbc23, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_027F) {
    const struct CPU_State initial_cpu = {.pc=0x1797, .a=0xbc, .x=0x29, .y=0x7b, .sp=0xe6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x1797, .value=0xcd}, {.addr=0x1798, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x1799, .a=0xbc, .x=0xa7, .y=0x7b, .sp=0xe6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1797, .value=0xcd}, {.addr=0x1798, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x1797, .value=0xcd, .type=IO_READ},
        {.addr=0x1798, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0280) {
    const struct CPU_State initial_cpu = {.pc=0x2dc2, .a=0xb1, .x=0x7b, .y=0xef, .sp=0x97, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc2, .value=0xcd}, {.addr=0x2dc3, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x2dc4, .a=0xb1, .x=0xa1, .y=0xef, .sp=0x97, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2dc2, .value=0xcd}, {.addr=0x2dc3, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x2dc2, .value=0xcd, .type=IO_READ},
        {.addr=0x2dc3, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0281) {
    const struct CPU_State initial_cpu = {.pc=0x3b23, .a=0xcc, .x=0x84, .y=0x56, .sp=0xea, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3b23, .value=0xcd}, {.addr=0x3b24, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x3b25, .a=0xcc, .x=0x0c, .y=0x56, .sp=0xea, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3b23, .value=0xcd}, {.addr=0x3b24, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x3b23, .value=0xcd, .type=IO_READ},
        {.addr=0x3b24, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0282) {
    const struct CPU_State initial_cpu = {.pc=0xd953, .a=0xfc, .x=0x06, .y=0x08, .sp=0xb6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd953, .value=0xcd}, {.addr=0xd954, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd955, .a=0xfc, .x=0x1c, .y=0x08, .sp=0xb6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd953, .value=0xcd}, {.addr=0xd954, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd953, .value=0xcd, .type=IO_READ},
        {.addr=0xd954, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0283) {
    const struct CPU_State initial_cpu = {.pc=0x0909, .a=0x5f, .x=0x8b, .y=0xb6, .sp=0xb3, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0909, .value=0xcd}, {.addr=0x090a, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x090b, .a=0x5f, .x=0x08, .y=0xb6, .sp=0xb3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0909, .value=0xcd}, {.addr=0x090a, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x0909, .value=0xcd, .type=IO_READ},
        {.addr=0x090a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0284) {
    const struct CPU_State initial_cpu = {.pc=0x4f68, .a=0x34, .x=0x44, .y=0x76, .sp=0x1b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4f68, .value=0xcd}, {.addr=0x4f69, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x4f6a, .a=0x34, .x=0x28, .y=0x76, .sp=0x1b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4f68, .value=0xcd}, {.addr=0x4f69, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x4f68, .value=0xcd, .type=IO_READ},
        {.addr=0x4f69, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0285) {
    const struct CPU_State initial_cpu = {.pc=0xacfc, .a=0xcf, .x=0x87, .y=0x3b, .sp=0x7c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xacfc, .value=0xcd}, {.addr=0xacfd, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xacfe, .a=0xcf, .x=0xe2, .y=0x3b, .sp=0x7c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xacfc, .value=0xcd}, {.addr=0xacfd, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xacfc, .value=0xcd, .type=IO_READ},
        {.addr=0xacfd, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0286) {
    const struct CPU_State initial_cpu = {.pc=0xa403, .a=0xc5, .x=0x31, .y=0x4c, .sp=0xe1, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa403, .value=0xcd}, {.addr=0xa404, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xa405, .a=0xc5, .x=0xe8, .y=0x4c, .sp=0xe1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa403, .value=0xcd}, {.addr=0xa404, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xa403, .value=0xcd, .type=IO_READ},
        {.addr=0xa404, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0287) {
    const struct CPU_State initial_cpu = {.pc=0x99b2, .a=0x34, .x=0xa7, .y=0x63, .sp=0x45, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x99b2, .value=0xcd}, {.addr=0x99b3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x99b4, .a=0x34, .x=0xe6, .y=0x63, .sp=0x45, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x99b2, .value=0xcd}, {.addr=0x99b3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x99b2, .value=0xcd, .type=IO_READ},
        {.addr=0x99b3, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0288) {
    const struct CPU_State initial_cpu = {.pc=0x8aba, .a=0xa9, .x=0x54, .y=0x7c, .sp=0x6f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8aba, .value=0xcd}, {.addr=0x8abb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8abc, .a=0xa9, .x=0x4d, .y=0x7c, .sp=0x6f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8aba, .value=0xcd}, {.addr=0x8abb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8aba, .value=0xcd, .type=IO_READ},
        {.addr=0x8abb, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0289) {
    const struct CPU_State initial_cpu = {.pc=0x6402, .a=0xf5, .x=0xcb, .y=0x69, .sp=0xb0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6402, .value=0xcd}, {.addr=0x6403, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x6404, .a=0xf5, .x=0xba, .y=0x69, .sp=0xb0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6402, .value=0xcd}, {.addr=0x6403, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x6402, .value=0xcd, .type=IO_READ},
        {.addr=0x6403, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028A) {
    const struct CPU_State initial_cpu = {.pc=0xafea, .a=0xd9, .x=0x4e, .y=0xc8, .sp=0x8f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xafea, .value=0xcd}, {.addr=0xafeb, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xafec, .a=0xd9, .x=0xf5, .y=0xc8, .sp=0x8f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xafea, .value=0xcd}, {.addr=0xafeb, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xafea, .value=0xcd, .type=IO_READ},
        {.addr=0xafeb, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028B) {
    const struct CPU_State initial_cpu = {.pc=0x26af, .a=0x40, .x=0xbb, .y=0x8c, .sp=0xd0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x26af, .value=0xcd}, {.addr=0x26b0, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x26b1, .a=0x40, .x=0xa2, .y=0x8c, .sp=0xd0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x26af, .value=0xcd}, {.addr=0x26b0, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x26af, .value=0xcd, .type=IO_READ},
        {.addr=0x26b0, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028C) {
    const struct CPU_State initial_cpu = {.pc=0x3839, .a=0xf6, .x=0xbc, .y=0x20, .sp=0x2b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x3839, .value=0xcd}, {.addr=0x383a, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x383b, .a=0xf6, .x=0xb6, .y=0x20, .sp=0x2b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3839, .value=0xcd}, {.addr=0x383a, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3839, .value=0xcd, .type=IO_READ},
        {.addr=0x383a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028D) {
    const struct CPU_State initial_cpu = {.pc=0xbdd0, .a=0xc4, .x=0xf0, .y=0x87, .sp=0xf8, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd0, .value=0xcd}, {.addr=0xbdd1, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xbdd2, .a=0xc4, .x=0x64, .y=0x87, .sp=0xf8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbdd0, .value=0xcd}, {.addr=0xbdd1, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xbdd0, .value=0xcd, .type=IO_READ},
        {.addr=0xbdd1, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028E) {
    const struct CPU_State initial_cpu = {.pc=0x3fba, .a=0x75, .x=0x28, .y=0x03, .sp=0x28, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x3fba, .value=0xcd}, {.addr=0x3fbb, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x3fbc, .a=0x75, .x=0xba, .y=0x03, .sp=0x28, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3fba, .value=0xcd}, {.addr=0x3fbb, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x3fba, .value=0xcd, .type=IO_READ},
        {.addr=0x3fbb, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_028F) {
    const struct CPU_State initial_cpu = {.pc=0xf7a7, .a=0x8e, .x=0x6c, .y=0x74, .sp=0xec, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a7, .value=0xcd}, {.addr=0xf7a8, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xf7a9, .a=0x8e, .x=0x0b, .y=0x74, .sp=0xec, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf7a7, .value=0xcd}, {.addr=0xf7a8, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xf7a7, .value=0xcd, .type=IO_READ},
        {.addr=0xf7a8, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0290) {
    const struct CPU_State initial_cpu = {.pc=0x1b46, .a=0xbb, .x=0x74, .y=0x4b, .sp=0x07, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1b46, .value=0xcd}, {.addr=0x1b47, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x1b48, .a=0xbb, .x=0x1b, .y=0x4b, .sp=0x07, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1b46, .value=0xcd}, {.addr=0x1b47, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x1b46, .value=0xcd, .type=IO_READ},
        {.addr=0x1b47, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0291) {
    const struct CPU_State initial_cpu = {.pc=0x140b, .a=0x25, .x=0x68, .y=0x91, .sp=0xed, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x140b, .value=0xcd}, {.addr=0x140c, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x140d, .a=0x25, .x=0xc8, .y=0x91, .sp=0xed, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x140b, .value=0xcd}, {.addr=0x140c, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x140b, .value=0xcd, .type=IO_READ},
        {.addr=0x140c, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0292) {
    const struct CPU_State initial_cpu = {.pc=0x7314, .a=0x6f, .x=0xec, .y=0xb0, .sp=0x5c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x7314, .value=0xcd}, {.addr=0x7315, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x7316, .a=0x6f, .x=0x6a, .y=0xb0, .sp=0x5c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7314, .value=0xcd}, {.addr=0x7315, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x7314, .value=0xcd, .type=IO_READ},
        {.addr=0x7315, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0293) {
    const struct CPU_State initial_cpu = {.pc=0xd8b2, .a=0xb1, .x=0x6e, .y=0x75, .sp=0x86, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b2, .value=0xcd}, {.addr=0xd8b3, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xd8b4, .a=0xb1, .x=0xb1, .y=0x75, .sp=0x86, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd8b2, .value=0xcd}, {.addr=0xd8b3, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xd8b2, .value=0xcd, .type=IO_READ},
        {.addr=0xd8b3, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0294) {
    const struct CPU_State initial_cpu = {.pc=0xfd9c, .a=0x97, .x=0x95, .y=0x06, .sp=0xfa, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xfd9c, .value=0xcd}, {.addr=0xfd9d, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xfd9e, .a=0x97, .x=0x75, .y=0x06, .sp=0xfa, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xfd9c, .value=0xcd}, {.addr=0xfd9d, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xfd9c, .value=0xcd, .type=IO_READ},
        {.addr=0xfd9d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0295) {
    const struct CPU_State initial_cpu = {.pc=0x4e93, .a=0x9a, .x=0x7f, .y=0x17, .sp=0x5c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4e93, .value=0xcd}, {.addr=0x4e94, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x4e95, .a=0x9a, .x=0x90, .y=0x17, .sp=0x5c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4e93, .value=0xcd}, {.addr=0x4e94, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x4e93, .value=0xcd, .type=IO_READ},
        {.addr=0x4e94, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0296) {
    const struct CPU_State initial_cpu = {.pc=0x75bc, .a=0xb1, .x=0x0e, .y=0x85, .sp=0x98, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x75bc, .value=0xcd}, {.addr=0x75bd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x75be, .a=0xb1, .x=0x5c, .y=0x85, .sp=0x98, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x75bc, .value=0xcd}, {.addr=0x75bd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x75bc, .value=0xcd, .type=IO_READ},
        {.addr=0x75bd, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0297) {
    const struct CPU_State initial_cpu = {.pc=0xef88, .a=0x29, .x=0x51, .y=0x21, .sp=0x7f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xef88, .value=0xcd}, {.addr=0xef89, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xef8a, .a=0x29, .x=0x76, .y=0x21, .sp=0x7f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xef88, .value=0xcd}, {.addr=0xef89, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xef88, .value=0xcd, .type=IO_READ},
        {.addr=0xef89, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0298) {
    const struct CPU_State initial_cpu = {.pc=0x2833, .a=0xf4, .x=0x0d, .y=0x6c, .sp=0xb2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2833, .value=0xcd}, {.addr=0x2834, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x2835, .a=0xf4, .x=0x9a, .y=0x6c, .sp=0xb2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2833, .value=0xcd}, {.addr=0x2834, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x2833, .value=0xcd, .type=IO_READ},
        {.addr=0x2834, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0299) {
    const struct CPU_State initial_cpu = {.pc=0xe443, .a=0x0c, .x=0x5d, .y=0xc0, .sp=0x30, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe443, .value=0xcd}, {.addr=0xe444, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xe445, .a=0x0c, .x=0x13, .y=0xc0, .sp=0x30, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe443, .value=0xcd}, {.addr=0xe444, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xe443, .value=0xcd, .type=IO_READ},
        {.addr=0xe444, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029A) {
    const struct CPU_State initial_cpu = {.pc=0x82fc, .a=0x5b, .x=0xa8, .y=0x96, .sp=0x89, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x82fc, .value=0xcd}, {.addr=0x82fd, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x82fe, .a=0x5b, .x=0x64, .y=0x96, .sp=0x89, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x82fc, .value=0xcd}, {.addr=0x82fd, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x82fc, .value=0xcd, .type=IO_READ},
        {.addr=0x82fd, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029B) {
    const struct CPU_State initial_cpu = {.pc=0x1a80, .a=0x24, .x=0x26, .y=0x44, .sp=0xa6, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1a80, .value=0xcd}, {.addr=0x1a81, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1a82, .a=0x24, .x=0x52, .y=0x44, .sp=0xa6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1a80, .value=0xcd}, {.addr=0x1a81, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1a80, .value=0xcd, .type=IO_READ},
        {.addr=0x1a81, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029C) {
    const struct CPU_State initial_cpu = {.pc=0x25f3, .a=0x4a, .x=0xa1, .y=0x25, .sp=0x0e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x25f3, .value=0xcd}, {.addr=0x25f4, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x25f5, .a=0x4a, .x=0xa1, .y=0x25, .sp=0x0e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x25f3, .value=0xcd}, {.addr=0x25f4, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x25f3, .value=0xcd, .type=IO_READ},
        {.addr=0x25f4, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029D) {
    const struct CPU_State initial_cpu = {.pc=0xd3fa, .a=0xce, .x=0x32, .y=0x0f, .sp=0xf6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xd3fa, .value=0xcd}, {.addr=0xd3fb, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xd3fc, .a=0xce, .x=0x74, .y=0x0f, .sp=0xf6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd3fa, .value=0xcd}, {.addr=0xd3fb, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xd3fa, .value=0xcd, .type=IO_READ},
        {.addr=0xd3fb, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029E) {
    const struct CPU_State initial_cpu = {.pc=0xd403, .a=0x6f, .x=0xf4, .y=0xc7, .sp=0xe0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd403, .value=0xcd}, {.addr=0xd404, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xd405, .a=0x6f, .x=0xb5, .y=0xc7, .sp=0xe0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd403, .value=0xcd}, {.addr=0xd404, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xd403, .value=0xcd, .type=IO_READ},
        {.addr=0xd404, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_029F) {
    const struct CPU_State initial_cpu = {.pc=0xd395, .a=0xeb, .x=0x3a, .y=0xef, .sp=0xe5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd395, .value=0xcd}, {.addr=0xd396, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd397, .a=0xeb, .x=0x18, .y=0xef, .sp=0xe5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd395, .value=0xcd}, {.addr=0xd396, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd395, .value=0xcd, .type=IO_READ},
        {.addr=0xd396, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x283b, .a=0x83, .x=0x6c, .y=0xbe, .sp=0x07, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x283b, .value=0xcd}, {.addr=0x283c, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x283d, .a=0x83, .x=0x83, .y=0xbe, .sp=0x07, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x283b, .value=0xcd}, {.addr=0x283c, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x283b, .value=0xcd, .type=IO_READ},
        {.addr=0x283c, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x7b53, .a=0x85, .x=0x01, .y=0x2a, .sp=0x19, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7b53, .value=0xcd}, {.addr=0x7b54, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0x85, .x=0x2a, .y=0x2a, .sp=0x19, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7b53, .value=0xcd}, {.addr=0x7b54, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x7b53, .value=0xcd, .type=IO_READ},
        {.addr=0x7b54, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xc566, .a=0xe1, .x=0xe4, .y=0x9f, .sp=0x7f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc566, .value=0xcd}, {.addr=0xc567, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xc568, .a=0xe1, .x=0x7b, .y=0x9f, .sp=0x7f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc566, .value=0xcd}, {.addr=0xc567, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xc566, .value=0xcd, .type=IO_READ},
        {.addr=0xc567, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xa1f8, .a=0xa4, .x=0xb3, .y=0x22, .sp=0xb4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f8, .value=0xcd}, {.addr=0xa1f9, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa1fa, .a=0xa4, .x=0x47, .y=0x22, .sp=0xb4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa1f8, .value=0xcd}, {.addr=0xa1f9, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa1f8, .value=0xcd, .type=IO_READ},
        {.addr=0xa1f9, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x94ac, .a=0x76, .x=0x18, .y=0x82, .sp=0x5d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x94ac, .value=0xcd}, {.addr=0x94ad, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x94ae, .a=0x76, .x=0x5c, .y=0x82, .sp=0x5d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x94ac, .value=0xcd}, {.addr=0x94ad, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x94ac, .value=0xcd, .type=IO_READ},
        {.addr=0x94ad, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xd563, .a=0x22, .x=0x4f, .y=0xb8, .sp=0x56, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd563, .value=0xcd}, {.addr=0xd564, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xd565, .a=0x22, .x=0xa8, .y=0xb8, .sp=0x56, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd563, .value=0xcd}, {.addr=0xd564, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xd563, .value=0xcd, .type=IO_READ},
        {.addr=0xd564, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x185a, .a=0x9e, .x=0xd2, .y=0xbf, .sp=0x6f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x185a, .value=0xcd}, {.addr=0x185b, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x185c, .a=0x9e, .x=0x8f, .y=0xbf, .sp=0x6f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x185a, .value=0xcd}, {.addr=0x185b, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x185a, .value=0xcd, .type=IO_READ},
        {.addr=0x185b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x36d0, .a=0xea, .x=0xff, .y=0x25, .sp=0xaa, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x36d0, .value=0xcd}, {.addr=0x36d1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x36d2, .a=0xea, .x=0x9d, .y=0x25, .sp=0xaa, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x36d0, .value=0xcd}, {.addr=0x36d1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x36d0, .value=0xcd, .type=IO_READ},
        {.addr=0x36d1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x2f09, .a=0x2c, .x=0x2e, .y=0xa6, .sp=0xca, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2f09, .value=0xcd}, {.addr=0x2f0a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2f0b, .a=0x2c, .x=0xdd, .y=0xa6, .sp=0xca, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x2f09, .value=0xcd}, {.addr=0x2f0a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2f09, .value=0xcd, .type=IO_READ},
        {.addr=0x2f0a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x8560, .a=0x24, .x=0x30, .y=0x04, .sp=0x62, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x8560, .value=0xcd}, {.addr=0x8561, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x8562, .a=0x24, .x=0x0e, .y=0x04, .sp=0x62, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8560, .value=0xcd}, {.addr=0x8561, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x8560, .value=0xcd, .type=IO_READ},
        {.addr=0x8561, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x72de, .a=0x20, .x=0xb3, .y=0xb6, .sp=0x90, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x72de, .value=0xcd}, {.addr=0x72df, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x72e0, .a=0x20, .x=0x00, .y=0xb6, .sp=0x90, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x72de, .value=0xcd}, {.addr=0x72df, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x72de, .value=0xcd, .type=IO_READ},
        {.addr=0x72df, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4c9b, .a=0x84, .x=0x44, .y=0xfa, .sp=0xc2, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9b, .value=0xcd}, {.addr=0x4c9c, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x4c9d, .a=0x84, .x=0xda, .y=0xfa, .sp=0xc2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4c9b, .value=0xcd}, {.addr=0x4c9c, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4c9b, .value=0xcd, .type=IO_READ},
        {.addr=0x4c9c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x117d, .a=0x82, .x=0x5e, .y=0x2f, .sp=0xad, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x117d, .value=0xcd}, {.addr=0x117e, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x117f, .a=0x82, .x=0x19, .y=0x2f, .sp=0xad, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x117d, .value=0xcd}, {.addr=0x117e, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x117d, .value=0xcd, .type=IO_READ},
        {.addr=0x117e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x1d41, .a=0xcd, .x=0x0b, .y=0xfe, .sp=0xbc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1d41, .value=0xcd}, {.addr=0x1d42, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x1d43, .a=0xcd, .x=0x22, .y=0xfe, .sp=0xbc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1d41, .value=0xcd}, {.addr=0x1d42, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x1d41, .value=0xcd, .type=IO_READ},
        {.addr=0x1d42, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x2119, .a=0xdb, .x=0x42, .y=0x95, .sp=0x8a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2119, .value=0xcd}, {.addr=0x211a, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x211b, .a=0xdb, .x=0xb9, .y=0x95, .sp=0x8a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2119, .value=0xcd}, {.addr=0x211a, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x2119, .value=0xcd, .type=IO_READ},
        {.addr=0x211a, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xb36c, .a=0x33, .x=0xdd, .y=0x16, .sp=0xfd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb36c, .value=0xcd}, {.addr=0xb36d, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xb36e, .a=0x33, .x=0xe7, .y=0x16, .sp=0xfd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb36c, .value=0xcd}, {.addr=0xb36d, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xb36c, .value=0xcd, .type=IO_READ},
        {.addr=0xb36d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x840a, .a=0xf6, .x=0x5c, .y=0xd2, .sp=0x5c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x840a, .value=0xcd}, {.addr=0x840b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x840c, .a=0xf6, .x=0x20, .y=0xd2, .sp=0x5c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x840a, .value=0xcd}, {.addr=0x840b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x840a, .value=0xcd, .type=IO_READ},
        {.addr=0x840b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xbef3, .a=0x61, .x=0x5f, .y=0x84, .sp=0x7b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xbef3, .value=0xcd}, {.addr=0xbef4, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xbef5, .a=0x61, .x=0x7a, .y=0x84, .sp=0x7b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbef3, .value=0xcd}, {.addr=0xbef4, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xbef3, .value=0xcd, .type=IO_READ},
        {.addr=0xbef4, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xc9d2, .a=0xf6, .x=0x59, .y=0xc2, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc9d2, .value=0xcd}, {.addr=0xc9d3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xc9d4, .a=0xf6, .x=0x15, .y=0xc2, .sp=0x18, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc9d2, .value=0xcd}, {.addr=0xc9d3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xc9d2, .value=0xcd, .type=IO_READ},
        {.addr=0xc9d3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xc78b, .a=0x3b, .x=0x4d, .y=0x37, .sp=0x61, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc78b, .value=0xcd}, {.addr=0xc78c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc78d, .a=0x3b, .x=0x7c, .y=0x37, .sp=0x61, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc78b, .value=0xcd}, {.addr=0xc78c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc78b, .value=0xcd, .type=IO_READ},
        {.addr=0xc78c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x1e0e, .a=0xbe, .x=0xfd, .y=0x2d, .sp=0x8d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0e, .value=0xcd}, {.addr=0x1e0f, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x1e10, .a=0xbe, .x=0xaa, .y=0x2d, .sp=0x8d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1e0e, .value=0xcd}, {.addr=0x1e0f, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x1e0e, .value=0xcd, .type=IO_READ},
        {.addr=0x1e0f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xce9c, .a=0x1a, .x=0x0e, .y=0xb9, .sp=0x22, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xce9c, .value=0xcd}, {.addr=0xce9d, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xce9e, .a=0x1a, .x=0x85, .y=0xb9, .sp=0x22, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xce9c, .value=0xcd}, {.addr=0xce9d, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xce9c, .value=0xcd, .type=IO_READ},
        {.addr=0xce9d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x62c2, .a=0xd5, .x=0x25, .y=0x1d, .sp=0x28, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x62c2, .value=0xcd}, {.addr=0x62c3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x62c4, .a=0xd5, .x=0x80, .y=0x1d, .sp=0x28, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x62c2, .value=0xcd}, {.addr=0x62c3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x62c2, .value=0xcd, .type=IO_READ},
        {.addr=0x62c3, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xb487, .a=0x7b, .x=0x78, .y=0x50, .sp=0x41, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb487, .value=0xcd}, {.addr=0xb488, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb489, .a=0x7b, .x=0xe6, .y=0x50, .sp=0x41, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb487, .value=0xcd}, {.addr=0xb488, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb487, .value=0xcd, .type=IO_READ},
        {.addr=0xb488, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x6ffb, .a=0x62, .x=0xf8, .y=0x7c, .sp=0x52, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffb, .value=0xcd}, {.addr=0x6ffc, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x6ffd, .a=0x62, .x=0x4a, .y=0x7c, .sp=0x52, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6ffb, .value=0xcd}, {.addr=0x6ffc, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x6ffb, .value=0xcd, .type=IO_READ},
        {.addr=0x6ffc, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xbc67, .a=0xf1, .x=0xff, .y=0xb8, .sp=0x63, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbc67, .value=0xcd}, {.addr=0xbc68, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xbc69, .a=0xf1, .x=0xf9, .y=0xb8, .sp=0x63, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xbc67, .value=0xcd}, {.addr=0xbc68, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xbc67, .value=0xcd, .type=IO_READ},
        {.addr=0xbc68, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x97bf, .a=0x77, .x=0x2d, .y=0x8d, .sp=0xec, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x97bf, .value=0xcd}, {.addr=0x97c0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0x77, .x=0xdf, .y=0x8d, .sp=0xec, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x97bf, .value=0xcd}, {.addr=0x97c0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x97bf, .value=0xcd, .type=IO_READ},
        {.addr=0x97c0, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc96a, .a=0x97, .x=0xb4, .y=0x82, .sp=0xe8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc96a, .value=0xcd}, {.addr=0xc96b, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xc96c, .a=0x97, .x=0x7b, .y=0x82, .sp=0xe8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc96a, .value=0xcd}, {.addr=0xc96b, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xc96a, .value=0xcd, .type=IO_READ},
        {.addr=0xc96b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xae9e, .a=0x5b, .x=0xe8, .y=0x38, .sp=0xe3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xae9e, .value=0xcd}, {.addr=0xae9f, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xaea0, .a=0x5b, .x=0x07, .y=0x38, .sp=0xe3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xae9e, .value=0xcd}, {.addr=0xae9f, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xae9e, .value=0xcd, .type=IO_READ},
        {.addr=0xae9f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x442c, .a=0xfd, .x=0xf7, .y=0x65, .sp=0x87, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x442c, .value=0xcd}, {.addr=0x442d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x442e, .a=0xfd, .x=0x89, .y=0x65, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x442c, .value=0xcd}, {.addr=0x442d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x442c, .value=0xcd, .type=IO_READ},
        {.addr=0x442d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x2852, .a=0xa6, .x=0xeb, .y=0xce, .sp=0x13, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x2852, .value=0xcd}, {.addr=0x2853, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2854, .a=0xa6, .x=0x1a, .y=0xce, .sp=0x13, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2852, .value=0xcd}, {.addr=0x2853, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2852, .value=0xcd, .type=IO_READ},
        {.addr=0x2853, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xba93, .a=0xa8, .x=0x3d, .y=0x1a, .sp=0xd6, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xba93, .value=0xcd}, {.addr=0xba94, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xba95, .a=0xa8, .x=0xf5, .y=0x1a, .sp=0xd6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xba93, .value=0xcd}, {.addr=0xba94, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xba93, .value=0xcd, .type=IO_READ},
        {.addr=0xba94, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xc6e2, .a=0x13, .x=0xdb, .y=0x4a, .sp=0xad, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc6e2, .value=0xcd}, {.addr=0xc6e3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc6e4, .a=0x13, .x=0x5d, .y=0x4a, .sp=0xad, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc6e2, .value=0xcd}, {.addr=0xc6e3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc6e2, .value=0xcd, .type=IO_READ},
        {.addr=0xc6e3, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xd244, .a=0x99, .x=0x23, .y=0x0c, .sp=0x93, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd244, .value=0xcd}, {.addr=0xd245, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd246, .a=0x99, .x=0x0d, .y=0x0c, .sp=0x93, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd244, .value=0xcd}, {.addr=0xd245, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd244, .value=0xcd, .type=IO_READ},
        {.addr=0xd245, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x91eb, .a=0xe1, .x=0x0d, .y=0xb9, .sp=0x0f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x91eb, .value=0xcd}, {.addr=0x91ec, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x91ed, .a=0xe1, .x=0x2b, .y=0xb9, .sp=0x0f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x91eb, .value=0xcd}, {.addr=0x91ec, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x91eb, .value=0xcd, .type=IO_READ},
        {.addr=0x91ec, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xabc9, .a=0x81, .x=0xc6, .y=0x69, .sp=0xdf, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xabc9, .value=0xcd}, {.addr=0xabca, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xabcb, .a=0x81, .x=0x27, .y=0x69, .sp=0xdf, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xabc9, .value=0xcd}, {.addr=0xabca, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xabc9, .value=0xcd, .type=IO_READ},
        {.addr=0xabca, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x2452, .a=0xee, .x=0xad, .y=0x06, .sp=0xe0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2452, .value=0xcd}, {.addr=0x2453, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x2454, .a=0xee, .x=0x87, .y=0x06, .sp=0xe0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2452, .value=0xcd}, {.addr=0x2453, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x2452, .value=0xcd, .type=IO_READ},
        {.addr=0x2453, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x98c3, .a=0x5b, .x=0x5e, .y=0xd2, .sp=0xe0, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x98c3, .value=0xcd}, {.addr=0x98c4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x98c5, .a=0x5b, .x=0x1c, .y=0xd2, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x98c3, .value=0xcd}, {.addr=0x98c4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x98c3, .value=0xcd, .type=IO_READ},
        {.addr=0x98c4, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x5019, .a=0xaf, .x=0x0c, .y=0x65, .sp=0x6e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5019, .value=0xcd}, {.addr=0x501a, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x501b, .a=0xaf, .x=0xa8, .y=0x65, .sp=0x6e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5019, .value=0xcd}, {.addr=0x501a, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x5019, .value=0xcd, .type=IO_READ},
        {.addr=0x501a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x1214, .a=0xbd, .x=0x9b, .y=0x65, .sp=0xcc, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1214, .value=0xcd}, {.addr=0x1215, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1216, .a=0xbd, .x=0x53, .y=0x65, .sp=0xcc, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1214, .value=0xcd}, {.addr=0x1215, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1214, .value=0xcd, .type=IO_READ},
        {.addr=0x1215, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x0f0e, .a=0x3a, .x=0x53, .y=0x21, .sp=0x13, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0e, .value=0xcd}, {.addr=0x0f0f, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x0f10, .a=0x3a, .x=0x4e, .y=0x21, .sp=0x13, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0f0e, .value=0xcd}, {.addr=0x0f0f, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0f0e, .value=0xcd, .type=IO_READ},
        {.addr=0x0f0f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x16f0, .a=0xa0, .x=0x5d, .y=0x14, .sp=0x87, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x16f0, .value=0xcd}, {.addr=0x16f1, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x16f2, .a=0xa0, .x=0xa8, .y=0x14, .sp=0x87, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x16f0, .value=0xcd}, {.addr=0x16f1, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x16f0, .value=0xcd, .type=IO_READ},
        {.addr=0x16f1, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x05be, .a=0xf6, .x=0xaa, .y=0xf2, .sp=0x8a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x05be, .value=0xcd}, {.addr=0x05bf, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x05c0, .a=0xf6, .x=0x19, .y=0xf2, .sp=0x8a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x05be, .value=0xcd}, {.addr=0x05bf, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x05be, .value=0xcd, .type=IO_READ},
        {.addr=0x05bf, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x3937, .a=0x76, .x=0x86, .y=0x54, .sp=0x35, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3937, .value=0xcd}, {.addr=0x3938, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x3939, .a=0x76, .x=0x81, .y=0x54, .sp=0x35, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3937, .value=0xcd}, {.addr=0x3938, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x3937, .value=0xcd, .type=IO_READ},
        {.addr=0x3938, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x9b8f, .a=0xeb, .x=0x23, .y=0x42, .sp=0xaf, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9b8f, .value=0xcd}, {.addr=0x9b90, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9b91, .a=0xeb, .x=0x9f, .y=0x42, .sp=0xaf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9b8f, .value=0xcd}, {.addr=0x9b90, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9b8f, .value=0xcd, .type=IO_READ},
        {.addr=0x9b90, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3603, .a=0x9e, .x=0xc2, .y=0x19, .sp=0x44, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3603, .value=0xcd}, {.addr=0x3604, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3605, .a=0x9e, .x=0xb6, .y=0x19, .sp=0x44, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3603, .value=0xcd}, {.addr=0x3604, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3603, .value=0xcd, .type=IO_READ},
        {.addr=0x3604, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x62e4, .a=0x9b, .x=0xd1, .y=0xfb, .sp=0x1a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x62e4, .value=0xcd}, {.addr=0x62e5, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x62e6, .a=0x9b, .x=0xd9, .y=0xfb, .sp=0x1a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x62e4, .value=0xcd}, {.addr=0x62e5, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x62e4, .value=0xcd, .type=IO_READ},
        {.addr=0x62e5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x60f4, .a=0x67, .x=0x4c, .y=0x0d, .sp=0xec, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x60f4, .value=0xcd}, {.addr=0x60f5, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x60f6, .a=0x67, .x=0x36, .y=0x0d, .sp=0xec, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x60f4, .value=0xcd}, {.addr=0x60f5, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x60f4, .value=0xcd, .type=IO_READ},
        {.addr=0x60f5, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xeaae, .a=0x59, .x=0x7b, .y=0x38, .sp=0x74, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xeaae, .value=0xcd}, {.addr=0xeaaf, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xeab0, .a=0x59, .x=0xb7, .y=0x38, .sp=0x74, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xeaae, .value=0xcd}, {.addr=0xeaaf, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xeaae, .value=0xcd, .type=IO_READ},
        {.addr=0xeaaf, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xbefb, .a=0x24, .x=0xed, .y=0x0d, .sp=0xe2, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbefb, .value=0xcd}, {.addr=0xbefc, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xbefd, .a=0x24, .x=0x24, .y=0x0d, .sp=0xe2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xbefb, .value=0xcd}, {.addr=0xbefc, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xbefb, .value=0xcd, .type=IO_READ},
        {.addr=0xbefc, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4dc2, .a=0x97, .x=0x07, .y=0xfb, .sp=0xf5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc2, .value=0xcd}, {.addr=0x4dc3, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x4dc4, .a=0x97, .x=0x96, .y=0xfb, .sp=0xf5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4dc2, .value=0xcd}, {.addr=0x4dc3, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4dc2, .value=0xcd, .type=IO_READ},
        {.addr=0x4dc3, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x9c39, .a=0xcf, .x=0xd9, .y=0x71, .sp=0xc2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9c39, .value=0xcd}, {.addr=0x9c3a, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x9c3b, .a=0xcf, .x=0x63, .y=0x71, .sp=0xc2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9c39, .value=0xcd}, {.addr=0x9c3a, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x9c39, .value=0xcd, .type=IO_READ},
        {.addr=0x9c3a, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xfbf9, .a=0x73, .x=0xdd, .y=0x3e, .sp=0xba, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf9, .value=0xcd}, {.addr=0xfbfa, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xfbfb, .a=0x73, .x=0x71, .y=0x3e, .sp=0xba, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfbf9, .value=0xcd}, {.addr=0xfbfa, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xfbf9, .value=0xcd, .type=IO_READ},
        {.addr=0xfbfa, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xabde, .a=0x4d, .x=0x41, .y=0x7d, .sp=0xe3, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xabde, .value=0xcd}, {.addr=0xabdf, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xabe0, .a=0x4d, .x=0x6a, .y=0x7d, .sp=0xe3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xabde, .value=0xcd}, {.addr=0xabdf, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xabde, .value=0xcd, .type=IO_READ},
        {.addr=0xabdf, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x0657, .a=0x2b, .x=0xfc, .y=0xc0, .sp=0x5f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0657, .value=0xcd}, {.addr=0x0658, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x0659, .a=0x2b, .x=0xcf, .y=0xc0, .sp=0x5f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0657, .value=0xcd}, {.addr=0x0658, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x0657, .value=0xcd, .type=IO_READ},
        {.addr=0x0658, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xd6a6, .a=0x72, .x=0xee, .y=0xc0, .sp=0xe5, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd6a6, .value=0xcd}, {.addr=0xd6a7, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xd6a8, .a=0x72, .x=0x9a, .y=0xc0, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd6a6, .value=0xcd}, {.addr=0xd6a7, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xd6a6, .value=0xcd, .type=IO_READ},
        {.addr=0xd6a7, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5e74, .a=0x9e, .x=0x74, .y=0xee, .sp=0xf9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x5e74, .value=0xcd}, {.addr=0x5e75, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x5e76, .a=0x9e, .x=0x83, .y=0xee, .sp=0xf9, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5e74, .value=0xcd}, {.addr=0x5e75, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x5e74, .value=0xcd, .type=IO_READ},
        {.addr=0x5e75, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xe111, .a=0x6a, .x=0x89, .y=0xb9, .sp=0x72, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe111, .value=0xcd}, {.addr=0xe112, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xe113, .a=0x6a, .x=0x54, .y=0xb9, .sp=0x72, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe111, .value=0xcd}, {.addr=0xe112, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xe111, .value=0xcd, .type=IO_READ},
        {.addr=0xe112, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xf8cb, .a=0xa6, .x=0xfd, .y=0x6f, .sp=0x05, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cb, .value=0xcd}, {.addr=0xf8cc, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xf8cd, .a=0xa6, .x=0xf9, .y=0x6f, .sp=0x05, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf8cb, .value=0xcd}, {.addr=0xf8cc, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xf8cb, .value=0xcd, .type=IO_READ},
        {.addr=0xf8cc, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xa86a, .a=0x10, .x=0x0a, .y=0x81, .sp=0x27, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa86a, .value=0xcd}, {.addr=0xa86b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa86c, .a=0x10, .x=0x42, .y=0x81, .sp=0x27, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa86a, .value=0xcd}, {.addr=0xa86b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa86a, .value=0xcd, .type=IO_READ},
        {.addr=0xa86b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x457c, .a=0x41, .x=0xd9, .y=0xe9, .sp=0x89, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x457c, .value=0xcd}, {.addr=0x457d, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x457e, .a=0x41, .x=0x61, .y=0xe9, .sp=0x89, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x457c, .value=0xcd}, {.addr=0x457d, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x457c, .value=0xcd, .type=IO_READ},
        {.addr=0x457d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xd694, .a=0x06, .x=0x2d, .y=0x94, .sp=0x75, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xd694, .value=0xcd}, {.addr=0xd695, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd696, .a=0x06, .x=0xce, .y=0x94, .sp=0x75, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd694, .value=0xcd}, {.addr=0xd695, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd694, .value=0xcd, .type=IO_READ},
        {.addr=0xd695, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xc5c1, .a=0xc6, .x=0x4c, .y=0xc1, .sp=0xbc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c1, .value=0xcd}, {.addr=0xc5c2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc5c3, .a=0xc6, .x=0x9f, .y=0xc1, .sp=0xbc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc5c1, .value=0xcd}, {.addr=0xc5c2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc5c1, .value=0xcd, .type=IO_READ},
        {.addr=0xc5c2, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x9ac6, .a=0x4f, .x=0x68, .y=0x43, .sp=0x1a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac6, .value=0xcd}, {.addr=0x9ac7, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x9ac8, .a=0x4f, .x=0x1b, .y=0x43, .sp=0x1a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9ac6, .value=0xcd}, {.addr=0x9ac7, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x9ac6, .value=0xcd, .type=IO_READ},
        {.addr=0x9ac7, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x387f, .a=0xdc, .x=0xeb, .y=0xe7, .sp=0x6d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x387f, .value=0xcd}, {.addr=0x3880, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3881, .a=0xdc, .x=0x5c, .y=0xe7, .sp=0x6d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x387f, .value=0xcd}, {.addr=0x3880, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x387f, .value=0xcd, .type=IO_READ},
        {.addr=0x3880, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xe899, .a=0xab, .x=0xf0, .y=0x9c, .sp=0x85, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe899, .value=0xcd}, {.addr=0xe89a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe89b, .a=0xab, .x=0x20, .y=0x9c, .sp=0x85, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe899, .value=0xcd}, {.addr=0xe89a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe899, .value=0xcd, .type=IO_READ},
        {.addr=0xe89a, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xcfe7, .a=0x84, .x=0xa4, .y=0xd0, .sp=0x88, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe7, .value=0xcd}, {.addr=0xcfe8, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xcfe9, .a=0x84, .x=0xbb, .y=0xd0, .sp=0x88, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xcfe7, .value=0xcd}, {.addr=0xcfe8, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xcfe7, .value=0xcd, .type=IO_READ},
        {.addr=0xcfe8, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xd04a, .a=0x34, .x=0xdd, .y=0xef, .sp=0xa5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd04a, .value=0xcd}, {.addr=0xd04b, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd04c, .a=0x34, .x=0x4c, .y=0xef, .sp=0xa5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd04a, .value=0xcd}, {.addr=0xd04b, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd04a, .value=0xcd, .type=IO_READ},
        {.addr=0xd04b, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x287f, .a=0x7c, .x=0xdb, .y=0xd2, .sp=0x5a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x287f, .value=0xcd}, {.addr=0x2880, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2881, .a=0x7c, .x=0xbc, .y=0xd2, .sp=0x5a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x287f, .value=0xcd}, {.addr=0x2880, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x287f, .value=0xcd, .type=IO_READ},
        {.addr=0x2880, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xe7f2, .a=0x1b, .x=0x0e, .y=0xb6, .sp=0xb2, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f2, .value=0xcd}, {.addr=0xe7f3, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe7f4, .a=0x1b, .x=0xf1, .y=0xb6, .sp=0xb2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe7f2, .value=0xcd}, {.addr=0xe7f3, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe7f2, .value=0xcd, .type=IO_READ},
        {.addr=0xe7f3, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x78fe, .a=0x88, .x=0x28, .y=0xf6, .sp=0x75, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x78fe, .value=0xcd}, {.addr=0x78ff, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x7900, .a=0x88, .x=0xb2, .y=0xf6, .sp=0x75, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x78fe, .value=0xcd}, {.addr=0x78ff, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x78fe, .value=0xcd, .type=IO_READ},
        {.addr=0x78ff, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x017a, .a=0x65, .x=0x29, .y=0x34, .sp=0x0f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xcd}, {.addr=0x017b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x017c, .a=0x65, .x=0x20, .y=0x34, .sp=0x0f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xcd}, {.addr=0x017b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x017a, .value=0xcd, .type=IO_READ},
        {.addr=0x017b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x9542, .a=0x14, .x=0x88, .y=0x1e, .sp=0x9d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9542, .value=0xcd}, {.addr=0x9543, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x9544, .a=0x14, .x=0x4c, .y=0x1e, .sp=0x9d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9542, .value=0xcd}, {.addr=0x9543, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x9542, .value=0xcd, .type=IO_READ},
        {.addr=0x9543, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4636, .a=0x69, .x=0xba, .y=0x63, .sp=0x68, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4636, .value=0xcd}, {.addr=0x4637, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4638, .a=0x69, .x=0xe0, .y=0x63, .sp=0x68, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4636, .value=0xcd}, {.addr=0x4637, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4636, .value=0xcd, .type=IO_READ},
        {.addr=0x4637, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xfaf9, .a=0xa4, .x=0xb3, .y=0xa6, .sp=0xc4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xfaf9, .value=0xcd}, {.addr=0xfafa, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xfafb, .a=0xa4, .x=0x17, .y=0xa6, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfaf9, .value=0xcd}, {.addr=0xfafa, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xfaf9, .value=0xcd, .type=IO_READ},
        {.addr=0xfafa, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x9cb1, .a=0xba, .x=0xb4, .y=0xfd, .sp=0x62, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb1, .value=0xcd}, {.addr=0x9cb2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9cb3, .a=0xba, .x=0x46, .y=0xfd, .sp=0x62, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9cb1, .value=0xcd}, {.addr=0x9cb2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9cb1, .value=0xcd, .type=IO_READ},
        {.addr=0x9cb2, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x8ba4, .a=0xfc, .x=0xe5, .y=0x0e, .sp=0x24, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba4, .value=0xcd}, {.addr=0x8ba5, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x8ba6, .a=0xfc, .x=0x37, .y=0x0e, .sp=0x24, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8ba4, .value=0xcd}, {.addr=0x8ba5, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x8ba4, .value=0xcd, .type=IO_READ},
        {.addr=0x8ba5, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x3a16, .a=0xf9, .x=0xe5, .y=0x2d, .sp=0x92, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3a16, .value=0xcd}, {.addr=0x3a17, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x3a18, .a=0xf9, .x=0xd7, .y=0x2d, .sp=0x92, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3a16, .value=0xcd}, {.addr=0x3a17, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x3a16, .value=0xcd, .type=IO_READ},
        {.addr=0x3a17, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xc151, .a=0x33, .x=0xa8, .y=0x8c, .sp=0xe3, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc151, .value=0xcd}, {.addr=0xc152, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xc153, .a=0x33, .x=0x71, .y=0x8c, .sp=0xe3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc151, .value=0xcd}, {.addr=0xc152, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xc151, .value=0xcd, .type=IO_READ},
        {.addr=0xc152, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xb966, .a=0xb5, .x=0xf1, .y=0xdf, .sp=0xb7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb966, .value=0xcd}, {.addr=0xb967, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xb968, .a=0xb5, .x=0x18, .y=0xdf, .sp=0xb7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb966, .value=0xcd}, {.addr=0xb967, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xb966, .value=0xcd, .type=IO_READ},
        {.addr=0xb967, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0xae, .x=0x88, .y=0x0b, .sp=0x52, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9357, .value=0xcd}, {.addr=0x9358, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x9359, .a=0xae, .x=0x88, .y=0x0b, .sp=0x52, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9357, .value=0xcd}, {.addr=0x9358, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0xcd, .type=IO_READ},
        {.addr=0x9358, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xbe4a, .a=0x8f, .x=0x66, .y=0x29, .sp=0xd2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xbe4a, .value=0xcd}, {.addr=0xbe4b, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xbe4c, .a=0x8f, .x=0xc9, .y=0x29, .sp=0xd2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbe4a, .value=0xcd}, {.addr=0xbe4b, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xbe4a, .value=0xcd, .type=IO_READ},
        {.addr=0xbe4b, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x5d7f, .a=0x0e, .x=0x8d, .y=0xc0, .sp=0x99, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d7f, .value=0xcd}, {.addr=0x5d80, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5d81, .a=0x0e, .x=0x3d, .y=0xc0, .sp=0x99, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5d7f, .value=0xcd}, {.addr=0x5d80, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5d7f, .value=0xcd, .type=IO_READ},
        {.addr=0x5d80, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0592, .a=0xc5, .x=0x4c, .y=0x53, .sp=0xa8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0592, .value=0xcd}, {.addr=0x0593, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0594, .a=0xc5, .x=0x6c, .y=0x53, .sp=0xa8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0592, .value=0xcd}, {.addr=0x0593, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0592, .value=0xcd, .type=IO_READ},
        {.addr=0x0593, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe41c, .a=0xc4, .x=0xa1, .y=0xef, .sp=0x17, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xe41c, .value=0xcd}, {.addr=0xe41d, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xe41e, .a=0xc4, .x=0xe5, .y=0xef, .sp=0x17, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe41c, .value=0xcd}, {.addr=0xe41d, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xe41c, .value=0xcd, .type=IO_READ},
        {.addr=0xe41d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x54ad, .a=0xd1, .x=0x87, .y=0x91, .sp=0x57, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x54ad, .value=0xcd}, {.addr=0x54ae, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x54af, .a=0xd1, .x=0x48, .y=0x91, .sp=0x57, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x54ad, .value=0xcd}, {.addr=0x54ae, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x54ad, .value=0xcd, .type=IO_READ},
        {.addr=0x54ae, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x249b, .a=0xd7, .x=0xaf, .y=0x32, .sp=0x02, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x249b, .value=0xcd}, {.addr=0x249c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x249d, .a=0xd7, .x=0xae, .y=0x32, .sp=0x02, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x249b, .value=0xcd}, {.addr=0x249c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x249b, .value=0xcd, .type=IO_READ},
        {.addr=0x249c, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xb8de, .a=0x37, .x=0x24, .y=0x3a, .sp=0x20, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb8de, .value=0xcd}, {.addr=0xb8df, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb8e0, .a=0x37, .x=0xf2, .y=0x3a, .sp=0x20, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb8de, .value=0xcd}, {.addr=0xb8df, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb8de, .value=0xcd, .type=IO_READ},
        {.addr=0xb8df, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x0ccf, .a=0x2f, .x=0x05, .y=0x3f, .sp=0x0a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ccf, .value=0xcd}, {.addr=0x0cd0, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0x2f, .x=0x2c, .y=0x3f, .sp=0x0a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0ccf, .value=0xcd}, {.addr=0x0cd0, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x0ccf, .value=0xcd, .type=IO_READ},
        {.addr=0x0cd0, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x0397, .a=0xfc, .x=0xa0, .y=0x2e, .sp=0x0a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0397, .value=0xcd}, {.addr=0x0398, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x0399, .a=0xfc, .x=0x4c, .y=0x2e, .sp=0x0a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0397, .value=0xcd}, {.addr=0x0398, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0397, .value=0xcd, .type=IO_READ},
        {.addr=0x0398, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xba02, .a=0x1d, .x=0xf7, .y=0x05, .sp=0xc7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xba02, .value=0xcd}, {.addr=0xba03, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xba04, .a=0x1d, .x=0xb6, .y=0x05, .sp=0xc7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xba02, .value=0xcd}, {.addr=0xba03, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xba02, .value=0xcd, .type=IO_READ},
        {.addr=0xba03, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x0fb5, .a=0x3e, .x=0x50, .y=0x24, .sp=0xeb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0fb5, .value=0xcd}, {.addr=0x0fb6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0fb7, .a=0x3e, .x=0x7d, .y=0x24, .sp=0xeb, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0fb5, .value=0xcd}, {.addr=0x0fb6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0fb5, .value=0xcd, .type=IO_READ},
        {.addr=0x0fb6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xa927, .a=0x66, .x=0x35, .y=0xa8, .sp=0xb4, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa927, .value=0xcd}, {.addr=0xa928, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xa929, .a=0x66, .x=0xe2, .y=0xa8, .sp=0xb4, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa927, .value=0xcd}, {.addr=0xa928, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xa927, .value=0xcd, .type=IO_READ},
        {.addr=0xa928, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xbc6f, .a=0xe7, .x=0x43, .y=0x83, .sp=0x42, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc6f, .value=0xcd}, {.addr=0xbc70, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xbc71, .a=0xe7, .x=0xdb, .y=0x83, .sp=0x42, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbc6f, .value=0xcd}, {.addr=0xbc70, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xbc6f, .value=0xcd, .type=IO_READ},
        {.addr=0xbc70, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1f3b, .a=0x08, .x=0xd6, .y=0xe2, .sp=0xeb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1f3b, .value=0xcd}, {.addr=0x1f3c, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1f3d, .a=0x08, .x=0x62, .y=0xe2, .sp=0xeb, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1f3b, .value=0xcd}, {.addr=0x1f3c, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1f3b, .value=0xcd, .type=IO_READ},
        {.addr=0x1f3c, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xdcac, .a=0x16, .x=0xc5, .y=0xe3, .sp=0xf8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xdcac, .value=0xcd}, {.addr=0xdcad, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xdcae, .a=0x16, .x=0x76, .y=0xe3, .sp=0xf8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdcac, .value=0xcd}, {.addr=0xdcad, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xdcac, .value=0xcd, .type=IO_READ},
        {.addr=0xdcad, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0300) {
    const struct CPU_State initial_cpu = {.pc=0x7842, .a=0x36, .x=0x69, .y=0x62, .sp=0xf0, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7842, .value=0xcd}, {.addr=0x7843, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7844, .a=0x36, .x=0xe6, .y=0x62, .sp=0xf0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7842, .value=0xcd}, {.addr=0x7843, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7842, .value=0xcd, .type=IO_READ},
        {.addr=0x7843, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0301) {
    const struct CPU_State initial_cpu = {.pc=0xb04c, .a=0xf6, .x=0x75, .y=0xf6, .sp=0xc9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xb04c, .value=0xcd}, {.addr=0xb04d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb04e, .a=0xf6, .x=0x6c, .y=0xf6, .sp=0xc9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb04c, .value=0xcd}, {.addr=0xb04d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb04c, .value=0xcd, .type=IO_READ},
        {.addr=0xb04d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9cbc, .a=0x17, .x=0x6b, .y=0xde, .sp=0x41, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbc, .value=0xcd}, {.addr=0x9cbd, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x9cbe, .a=0x17, .x=0xe2, .y=0xde, .sp=0x41, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9cbc, .value=0xcd}, {.addr=0x9cbd, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x9cbc, .value=0xcd, .type=IO_READ},
        {.addr=0x9cbd, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0303) {
    const struct CPU_State initial_cpu = {.pc=0xe61d, .a=0x46, .x=0xc2, .y=0xaa, .sp=0x05, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe61d, .value=0xcd}, {.addr=0xe61e, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xe61f, .a=0x46, .x=0x92, .y=0xaa, .sp=0x05, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe61d, .value=0xcd}, {.addr=0xe61e, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xe61d, .value=0xcd, .type=IO_READ},
        {.addr=0xe61e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0304) {
    const struct CPU_State initial_cpu = {.pc=0x9398, .a=0xaf, .x=0x01, .y=0x30, .sp=0x2a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x9398, .value=0xcd}, {.addr=0x9399, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x939a, .a=0xaf, .x=0xbb, .y=0x30, .sp=0x2a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9398, .value=0xcd}, {.addr=0x9399, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x9398, .value=0xcd, .type=IO_READ},
        {.addr=0x9399, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0305) {
    const struct CPU_State initial_cpu = {.pc=0xc9c6, .a=0x95, .x=0x04, .y=0x1f, .sp=0x39, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c6, .value=0xcd}, {.addr=0xc9c7, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xc9c8, .a=0x95, .x=0x29, .y=0x1f, .sp=0x39, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc9c6, .value=0xcd}, {.addr=0xc9c7, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xc9c6, .value=0xcd, .type=IO_READ},
        {.addr=0xc9c7, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1a7b, .a=0x2f, .x=0x6f, .y=0xd1, .sp=0x77, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7b, .value=0xcd}, {.addr=0x1a7c, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x1a7d, .a=0x2f, .x=0x04, .y=0xd1, .sp=0x77, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1a7b, .value=0xcd}, {.addr=0x1a7c, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x1a7b, .value=0xcd, .type=IO_READ},
        {.addr=0x1a7c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0307) {
    const struct CPU_State initial_cpu = {.pc=0x0ecd, .a=0xc1, .x=0x6a, .y=0xf6, .sp=0x29, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecd, .value=0xcd}, {.addr=0x0ece, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x0ecf, .a=0xc1, .x=0x29, .y=0xf6, .sp=0x29, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0ecd, .value=0xcd}, {.addr=0x0ece, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x0ecd, .value=0xcd, .type=IO_READ},
        {.addr=0x0ece, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0308) {
    const struct CPU_State initial_cpu = {.pc=0x07f6, .a=0x88, .x=0x19, .y=0x79, .sp=0x4f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x07f6, .value=0xcd}, {.addr=0x07f7, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x07f8, .a=0x88, .x=0x04, .y=0x79, .sp=0x4f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x07f6, .value=0xcd}, {.addr=0x07f7, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x07f6, .value=0xcd, .type=IO_READ},
        {.addr=0x07f7, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0309) {
    const struct CPU_State initial_cpu = {.pc=0x89b7, .a=0xb8, .x=0x94, .y=0xd0, .sp=0x63, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x89b7, .value=0xcd}, {.addr=0x89b8, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x89b9, .a=0xb8, .x=0xd3, .y=0xd0, .sp=0x63, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x89b7, .value=0xcd}, {.addr=0x89b8, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x89b7, .value=0xcd, .type=IO_READ},
        {.addr=0x89b8, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030A) {
    const struct CPU_State initial_cpu = {.pc=0xb145, .a=0x89, .x=0xbd, .y=0xd0, .sp=0x97, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb145, .value=0xcd}, {.addr=0xb146, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb147, .a=0x89, .x=0x6c, .y=0xd0, .sp=0x97, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb145, .value=0xcd}, {.addr=0xb146, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb145, .value=0xcd, .type=IO_READ},
        {.addr=0xb146, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030B) {
    const struct CPU_State initial_cpu = {.pc=0x5bfa, .a=0x9b, .x=0xc6, .y=0xa8, .sp=0x05, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5bfa, .value=0xcd}, {.addr=0x5bfb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5bfc, .a=0x9b, .x=0x1d, .y=0xa8, .sp=0x05, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5bfa, .value=0xcd}, {.addr=0x5bfb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5bfa, .value=0xcd, .type=IO_READ},
        {.addr=0x5bfb, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030C) {
    const struct CPU_State initial_cpu = {.pc=0x90ed, .a=0xae, .x=0x1a, .y=0x5e, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x90ed, .value=0xcd}, {.addr=0x90ee, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x90ef, .a=0xae, .x=0x7a, .y=0x5e, .sp=0x98, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x90ed, .value=0xcd}, {.addr=0x90ee, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x90ed, .value=0xcd, .type=IO_READ},
        {.addr=0x90ee, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa109, .a=0x2f, .x=0x2d, .y=0xc1, .sp=0x77, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa109, .value=0xcd}, {.addr=0xa10a, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa10b, .a=0x2f, .x=0xb7, .y=0xc1, .sp=0x77, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa109, .value=0xcd}, {.addr=0xa10a, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa109, .value=0xcd, .type=IO_READ},
        {.addr=0xa10a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030E) {
    const struct CPU_State initial_cpu = {.pc=0x00b4, .a=0x90, .x=0x5e, .y=0x68, .sp=0x66, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xcd}, {.addr=0x00b5, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x00b6, .a=0x90, .x=0x62, .y=0x68, .sp=0x66, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xcd}, {.addr=0x00b5, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x00b4, .value=0xcd, .type=IO_READ},
        {.addr=0x00b5, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_030F) {
    const struct CPU_State initial_cpu = {.pc=0xbb7d, .a=0xfd, .x=0x56, .y=0x10, .sp=0xdb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbb7d, .value=0xcd}, {.addr=0xbb7e, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xbb7f, .a=0xfd, .x=0x65, .y=0x10, .sp=0xdb, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbb7d, .value=0xcd}, {.addr=0xbb7e, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xbb7d, .value=0xcd, .type=IO_READ},
        {.addr=0xbb7e, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0310) {
    const struct CPU_State initial_cpu = {.pc=0x96cf, .a=0x5f, .x=0xde, .y=0xdb, .sp=0x79, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x96cf, .value=0xcd}, {.addr=0x96d0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x96d1, .a=0x5f, .x=0xfd, .y=0xdb, .sp=0x79, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x96cf, .value=0xcd}, {.addr=0x96d0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x96cf, .value=0xcd, .type=IO_READ},
        {.addr=0x96d0, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0311) {
    const struct CPU_State initial_cpu = {.pc=0xfa21, .a=0x6b, .x=0xd4, .y=0xdb, .sp=0xc0, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfa21, .value=0xcd}, {.addr=0xfa22, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfa23, .a=0x6b, .x=0xa0, .y=0xdb, .sp=0xc0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfa21, .value=0xcd}, {.addr=0xfa22, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfa21, .value=0xcd, .type=IO_READ},
        {.addr=0xfa22, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc554, .a=0x14, .x=0xdf, .y=0xa9, .sp=0x8e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc554, .value=0xcd}, {.addr=0xc555, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xc556, .a=0x14, .x=0xad, .y=0xa9, .sp=0x8e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc554, .value=0xcd}, {.addr=0xc555, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xc554, .value=0xcd, .type=IO_READ},
        {.addr=0xc555, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0313) {
    const struct CPU_State initial_cpu = {.pc=0x60cd, .a=0x30, .x=0x03, .y=0xdc, .sp=0x4f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x60cd, .value=0xcd}, {.addr=0x60ce, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x60cf, .a=0x30, .x=0xd8, .y=0xdc, .sp=0x4f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x60cd, .value=0xcd}, {.addr=0x60ce, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x60cd, .value=0xcd, .type=IO_READ},
        {.addr=0x60ce, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0314) {
    const struct CPU_State initial_cpu = {.pc=0xdb1f, .a=0x1a, .x=0x69, .y=0x37, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1f, .value=0xcd}, {.addr=0xdb20, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xdb21, .a=0x1a, .x=0x1b, .y=0x37, .sp=0xb7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdb1f, .value=0xcd}, {.addr=0xdb20, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xdb1f, .value=0xcd, .type=IO_READ},
        {.addr=0xdb20, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0315) {
    const struct CPU_State initial_cpu = {.pc=0x2ce5, .a=0xa6, .x=0x50, .y=0x98, .sp=0x3c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x2ce5, .value=0xcd}, {.addr=0x2ce6, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x2ce7, .a=0xa6, .x=0x4e, .y=0x98, .sp=0x3c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2ce5, .value=0xcd}, {.addr=0x2ce6, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x2ce5, .value=0xcd, .type=IO_READ},
        {.addr=0x2ce6, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0316) {
    const struct CPU_State initial_cpu = {.pc=0x43ed, .a=0xa7, .x=0xd8, .y=0xe6, .sp=0xf6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x43ed, .value=0xcd}, {.addr=0x43ee, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x43ef, .a=0xa7, .x=0xa2, .y=0xe6, .sp=0xf6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x43ed, .value=0xcd}, {.addr=0x43ee, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x43ed, .value=0xcd, .type=IO_READ},
        {.addr=0x43ee, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0317) {
    const struct CPU_State initial_cpu = {.pc=0xeca3, .a=0xb5, .x=0x24, .y=0x39, .sp=0xe1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xeca3, .value=0xcd}, {.addr=0xeca4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xeca5, .a=0xb5, .x=0x42, .y=0x39, .sp=0xe1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xeca3, .value=0xcd}, {.addr=0xeca4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xeca3, .value=0xcd, .type=IO_READ},
        {.addr=0xeca4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0318) {
    const struct CPU_State initial_cpu = {.pc=0x9e34, .a=0x1b, .x=0xcd, .y=0x8f, .sp=0xd2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9e34, .value=0xcd}, {.addr=0x9e35, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x9e36, .a=0x1b, .x=0x84, .y=0x8f, .sp=0xd2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9e34, .value=0xcd}, {.addr=0x9e35, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x9e34, .value=0xcd, .type=IO_READ},
        {.addr=0x9e35, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0319) {
    const struct CPU_State initial_cpu = {.pc=0x88e6, .a=0x30, .x=0x2c, .y=0x24, .sp=0x4c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x88e6, .value=0xcd}, {.addr=0x88e7, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x88e8, .a=0x30, .x=0x70, .y=0x24, .sp=0x4c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x88e6, .value=0xcd}, {.addr=0x88e7, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x88e6, .value=0xcd, .type=IO_READ},
        {.addr=0x88e7, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2b3d, .a=0x6c, .x=0xf5, .y=0xc3, .sp=0x88, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3d, .value=0xcd}, {.addr=0x2b3e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x2b3f, .a=0x6c, .x=0x82, .y=0xc3, .sp=0x88, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2b3d, .value=0xcd}, {.addr=0x2b3e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2b3d, .value=0xcd, .type=IO_READ},
        {.addr=0x2b3e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031B) {
    const struct CPU_State initial_cpu = {.pc=0xed2c, .a=0x74, .x=0x93, .y=0x05, .sp=0x1d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xed2c, .value=0xcd}, {.addr=0xed2d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xed2e, .a=0x74, .x=0x4a, .y=0x05, .sp=0x1d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xed2c, .value=0xcd}, {.addr=0xed2d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xed2c, .value=0xcd, .type=IO_READ},
        {.addr=0xed2d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031C) {
    const struct CPU_State initial_cpu = {.pc=0x0e50, .a=0xbe, .x=0x09, .y=0x4b, .sp=0x48, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0e50, .value=0xcd}, {.addr=0x0e51, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x0e52, .a=0xbe, .x=0x51, .y=0x4b, .sp=0x48, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0e50, .value=0xcd}, {.addr=0x0e51, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x0e50, .value=0xcd, .type=IO_READ},
        {.addr=0x0e51, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031D) {
    const struct CPU_State initial_cpu = {.pc=0xeda8, .a=0x34, .x=0x78, .y=0xdf, .sp=0x78, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xeda8, .value=0xcd}, {.addr=0xeda9, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xedaa, .a=0x34, .x=0xd6, .y=0xdf, .sp=0x78, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xeda8, .value=0xcd}, {.addr=0xeda9, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xeda8, .value=0xcd, .type=IO_READ},
        {.addr=0xeda9, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031E) {
    const struct CPU_State initial_cpu = {.pc=0x98ae, .a=0xa1, .x=0x99, .y=0x84, .sp=0xa7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x98ae, .value=0xcd}, {.addr=0x98af, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x98b0, .a=0xa1, .x=0x19, .y=0x84, .sp=0xa7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x98ae, .value=0xcd}, {.addr=0x98af, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x98ae, .value=0xcd, .type=IO_READ},
        {.addr=0x98af, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_031F) {
    const struct CPU_State initial_cpu = {.pc=0x71f4, .a=0x01, .x=0xad, .y=0x2c, .sp=0xee, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x71f4, .value=0xcd}, {.addr=0x71f5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x71f6, .a=0x01, .x=0xed, .y=0x2c, .sp=0xee, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x71f4, .value=0xcd}, {.addr=0x71f5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x71f4, .value=0xcd, .type=IO_READ},
        {.addr=0x71f5, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0320) {
    const struct CPU_State initial_cpu = {.pc=0x7809, .a=0x53, .x=0x8b, .y=0x32, .sp=0xe5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7809, .value=0xcd}, {.addr=0x780a, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x780b, .a=0x53, .x=0xf9, .y=0x32, .sp=0xe5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7809, .value=0xcd}, {.addr=0x780a, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x7809, .value=0xcd, .type=IO_READ},
        {.addr=0x780a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0321) {
    const struct CPU_State initial_cpu = {.pc=0x8dd8, .a=0x79, .x=0xf2, .y=0x8b, .sp=0x99, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd8, .value=0xcd}, {.addr=0x8dd9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8dda, .a=0x79, .x=0x0d, .y=0x8b, .sp=0x99, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8dd8, .value=0xcd}, {.addr=0x8dd9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8dd8, .value=0xcd, .type=IO_READ},
        {.addr=0x8dd9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0322) {
    const struct CPU_State initial_cpu = {.pc=0xf3a1, .a=0x8d, .x=0xa3, .y=0xfc, .sp=0xd4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a1, .value=0xcd}, {.addr=0xf3a2, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xf3a3, .a=0x8d, .x=0xe9, .y=0xfc, .sp=0xd4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf3a1, .value=0xcd}, {.addr=0xf3a2, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xf3a1, .value=0xcd, .type=IO_READ},
        {.addr=0xf3a2, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0323) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0x81, .x=0x21, .y=0x11, .sp=0x8d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x727b, .value=0xcd}, {.addr=0x727c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x727d, .a=0x81, .x=0xa1, .y=0x11, .sp=0x8d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x727b, .value=0xcd}, {.addr=0x727c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0xcd, .type=IO_READ},
        {.addr=0x727c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0324) {
    const struct CPU_State initial_cpu = {.pc=0x3569, .a=0x4d, .x=0xa8, .y=0x9d, .sp=0xfc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3569, .value=0xcd}, {.addr=0x356a, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x356b, .a=0x4d, .x=0xc5, .y=0x9d, .sp=0xfc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3569, .value=0xcd}, {.addr=0x356a, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3569, .value=0xcd, .type=IO_READ},
        {.addr=0x356a, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0325) {
    const struct CPU_State initial_cpu = {.pc=0xb04f, .a=0x5d, .x=0x10, .y=0xe5, .sp=0xd6, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xb04f, .value=0xcd}, {.addr=0xb050, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb051, .a=0x5d, .x=0x8b, .y=0xe5, .sp=0xd6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb04f, .value=0xcd}, {.addr=0xb050, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb04f, .value=0xcd, .type=IO_READ},
        {.addr=0xb050, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0326) {
    const struct CPU_State initial_cpu = {.pc=0x1bf5, .a=0xee, .x=0x93, .y=0x1c, .sp=0x56, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf5, .value=0xcd}, {.addr=0x1bf6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1bf7, .a=0xee, .x=0x6d, .y=0x1c, .sp=0x56, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1bf5, .value=0xcd}, {.addr=0x1bf6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1bf5, .value=0xcd, .type=IO_READ},
        {.addr=0x1bf6, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0327) {
    const struct CPU_State initial_cpu = {.pc=0xe469, .a=0x80, .x=0xa7, .y=0x2d, .sp=0xcc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe469, .value=0xcd}, {.addr=0xe46a, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe46b, .a=0x80, .x=0xbb, .y=0x2d, .sp=0xcc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe469, .value=0xcd}, {.addr=0xe46a, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe469, .value=0xcd, .type=IO_READ},
        {.addr=0xe46a, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0328) {
    const struct CPU_State initial_cpu = {.pc=0xf4e4, .a=0x9a, .x=0xcd, .y=0xf9, .sp=0x43, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e4, .value=0xcd}, {.addr=0xf4e5, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xf4e6, .a=0x9a, .x=0xe3, .y=0xf9, .sp=0x43, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf4e4, .value=0xcd}, {.addr=0xf4e5, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xf4e4, .value=0xcd, .type=IO_READ},
        {.addr=0xf4e5, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0329) {
    const struct CPU_State initial_cpu = {.pc=0x7767, .a=0xfd, .x=0x5e, .y=0xa6, .sp=0x3b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7767, .value=0xcd}, {.addr=0x7768, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x7769, .a=0xfd, .x=0xb0, .y=0xa6, .sp=0x3b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7767, .value=0xcd}, {.addr=0x7768, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x7767, .value=0xcd, .type=IO_READ},
        {.addr=0x7768, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032A) {
    const struct CPU_State initial_cpu = {.pc=0xeacd, .a=0x9c, .x=0xaf, .y=0xd8, .sp=0xcb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xeacd, .value=0xcd}, {.addr=0xeace, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xeacf, .a=0x9c, .x=0x43, .y=0xd8, .sp=0xcb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xeacd, .value=0xcd}, {.addr=0xeace, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xeacd, .value=0xcd, .type=IO_READ},
        {.addr=0xeace, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032B) {
    const struct CPU_State initial_cpu = {.pc=0xecf2, .a=0x8c, .x=0x1b, .y=0x8b, .sp=0xba, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xecf2, .value=0xcd}, {.addr=0xecf3, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xecf4, .a=0x8c, .x=0x39, .y=0x8b, .sp=0xba, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xecf2, .value=0xcd}, {.addr=0xecf3, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xecf2, .value=0xcd, .type=IO_READ},
        {.addr=0xecf3, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032C) {
    const struct CPU_State initial_cpu = {.pc=0xee38, .a=0x3c, .x=0xf3, .y=0x88, .sp=0xdf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xee38, .value=0xcd}, {.addr=0xee39, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xee3a, .a=0x3c, .x=0x7f, .y=0x88, .sp=0xdf, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xee38, .value=0xcd}, {.addr=0xee39, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xee38, .value=0xcd, .type=IO_READ},
        {.addr=0xee39, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032D) {
    const struct CPU_State initial_cpu = {.pc=0xa3ac, .a=0xfd, .x=0xb2, .y=0xbf, .sp=0x41, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ac, .value=0xcd}, {.addr=0xa3ad, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xa3ae, .a=0xfd, .x=0x1f, .y=0xbf, .sp=0x41, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa3ac, .value=0xcd}, {.addr=0xa3ad, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xa3ac, .value=0xcd, .type=IO_READ},
        {.addr=0xa3ad, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032E) {
    const struct CPU_State initial_cpu = {.pc=0x6efd, .a=0xd1, .x=0x1c, .y=0x5b, .sp=0x85, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6efd, .value=0xcd}, {.addr=0x6efe, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x6eff, .a=0xd1, .x=0x17, .y=0x5b, .sp=0x85, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6efd, .value=0xcd}, {.addr=0x6efe, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x6efd, .value=0xcd, .type=IO_READ},
        {.addr=0x6efe, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa48d, .a=0xa6, .x=0x6f, .y=0x20, .sp=0x51, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa48d, .value=0xcd}, {.addr=0xa48e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xa48f, .a=0xa6, .x=0xd7, .y=0x20, .sp=0x51, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa48d, .value=0xcd}, {.addr=0xa48e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xa48d, .value=0xcd, .type=IO_READ},
        {.addr=0xa48e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0330) {
    const struct CPU_State initial_cpu = {.pc=0x1100, .a=0x4e, .x=0x74, .y=0xbe, .sp=0x26, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1100, .value=0xcd}, {.addr=0x1101, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1102, .a=0x4e, .x=0x0d, .y=0xbe, .sp=0x26, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1100, .value=0xcd}, {.addr=0x1101, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1100, .value=0xcd, .type=IO_READ},
        {.addr=0x1101, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0331) {
    const struct CPU_State initial_cpu = {.pc=0x2dfb, .a=0xea, .x=0x1b, .y=0x40, .sp=0x02, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2dfb, .value=0xcd}, {.addr=0x2dfc, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x2dfd, .a=0xea, .x=0x17, .y=0x40, .sp=0x02, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2dfb, .value=0xcd}, {.addr=0x2dfc, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x2dfb, .value=0xcd, .type=IO_READ},
        {.addr=0x2dfc, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0332) {
    const struct CPU_State initial_cpu = {.pc=0x5435, .a=0xe5, .x=0xf1, .y=0x72, .sp=0x9d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5435, .value=0xcd}, {.addr=0x5436, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x5437, .a=0xe5, .x=0x55, .y=0x72, .sp=0x9d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5435, .value=0xcd}, {.addr=0x5436, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x5435, .value=0xcd, .type=IO_READ},
        {.addr=0x5436, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0333) {
    const struct CPU_State initial_cpu = {.pc=0x416c, .a=0xc8, .x=0xba, .y=0x02, .sp=0xad, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x416c, .value=0xcd}, {.addr=0x416d, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x416e, .a=0xc8, .x=0x3a, .y=0x02, .sp=0xad, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x416c, .value=0xcd}, {.addr=0x416d, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x416c, .value=0xcd, .type=IO_READ},
        {.addr=0x416d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9978, .a=0xd1, .x=0xae, .y=0x37, .sp=0xec, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9978, .value=0xcd}, {.addr=0x9979, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x997a, .a=0xd1, .x=0x71, .y=0x37, .sp=0xec, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9978, .value=0xcd}, {.addr=0x9979, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x9978, .value=0xcd, .type=IO_READ},
        {.addr=0x9979, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0335) {
    const struct CPU_State initial_cpu = {.pc=0x2a66, .a=0x95, .x=0x60, .y=0x2f, .sp=0x46, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2a66, .value=0xcd}, {.addr=0x2a67, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2a68, .a=0x95, .x=0x39, .y=0x2f, .sp=0x46, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2a66, .value=0xcd}, {.addr=0x2a67, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2a66, .value=0xcd, .type=IO_READ},
        {.addr=0x2a67, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0336) {
    const struct CPU_State initial_cpu = {.pc=0xd4b8, .a=0xae, .x=0xa6, .y=0xe3, .sp=0x68, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b8, .value=0xcd}, {.addr=0xd4b9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd4ba, .a=0xae, .x=0xa2, .y=0xe3, .sp=0x68, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd4b8, .value=0xcd}, {.addr=0xd4b9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd4b8, .value=0xcd, .type=IO_READ},
        {.addr=0xd4b9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0337) {
    const struct CPU_State initial_cpu = {.pc=0x21e5, .a=0x01, .x=0x1a, .y=0x2b, .sp=0x1f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x21e5, .value=0xcd}, {.addr=0x21e6, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x21e7, .a=0x01, .x=0xd0, .y=0x2b, .sp=0x1f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x21e5, .value=0xcd}, {.addr=0x21e6, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x21e5, .value=0xcd, .type=IO_READ},
        {.addr=0x21e6, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0338) {
    const struct CPU_State initial_cpu = {.pc=0x41ce, .a=0x02, .x=0x40, .y=0xe0, .sp=0xb5, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x41ce, .value=0xcd}, {.addr=0x41cf, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x41d0, .a=0x02, .x=0x2b, .y=0xe0, .sp=0xb5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x41ce, .value=0xcd}, {.addr=0x41cf, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x41ce, .value=0xcd, .type=IO_READ},
        {.addr=0x41cf, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0339) {
    const struct CPU_State initial_cpu = {.pc=0x73fe, .a=0x89, .x=0x03, .y=0xb7, .sp=0xeb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x73fe, .value=0xcd}, {.addr=0x73ff, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x7400, .a=0x89, .x=0xab, .y=0xb7, .sp=0xeb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x73fe, .value=0xcd}, {.addr=0x73ff, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x73fe, .value=0xcd, .type=IO_READ},
        {.addr=0x73ff, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9c08, .a=0xbe, .x=0x97, .y=0x71, .sp=0x71, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9c08, .value=0xcd}, {.addr=0x9c09, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9c0a, .a=0xbe, .x=0x2b, .y=0x71, .sp=0x71, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9c08, .value=0xcd}, {.addr=0x9c09, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x9c08, .value=0xcd, .type=IO_READ},
        {.addr=0x9c09, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8ca2, .a=0x04, .x=0x0d, .y=0x94, .sp=0x09, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca2, .value=0xcd}, {.addr=0x8ca3, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x8ca4, .a=0x04, .x=0x5a, .y=0x94, .sp=0x09, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8ca2, .value=0xcd}, {.addr=0x8ca3, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x8ca2, .value=0xcd, .type=IO_READ},
        {.addr=0x8ca3, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033C) {
    const struct CPU_State initial_cpu = {.pc=0xfc4b, .a=0x2c, .x=0x3e, .y=0xf0, .sp=0xa5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xfc4b, .value=0xcd}, {.addr=0xfc4c, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xfc4d, .a=0x2c, .x=0xf4, .y=0xf0, .sp=0xa5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xfc4b, .value=0xcd}, {.addr=0xfc4c, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xfc4b, .value=0xcd, .type=IO_READ},
        {.addr=0xfc4c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033D) {
    const struct CPU_State initial_cpu = {.pc=0xc8c7, .a=0xae, .x=0x9d, .y=0x32, .sp=0xd2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c7, .value=0xcd}, {.addr=0xc8c8, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xc8c9, .a=0xae, .x=0xd6, .y=0x32, .sp=0xd2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc8c7, .value=0xcd}, {.addr=0xc8c8, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xc8c7, .value=0xcd, .type=IO_READ},
        {.addr=0xc8c8, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033E) {
    const struct CPU_State initial_cpu = {.pc=0xdd26, .a=0xe1, .x=0xac, .y=0xc4, .sp=0x0c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xdd26, .value=0xcd}, {.addr=0xdd27, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdd28, .a=0xe1, .x=0xbf, .y=0xc4, .sp=0x0c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdd26, .value=0xcd}, {.addr=0xdd27, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdd26, .value=0xcd, .type=IO_READ},
        {.addr=0xdd27, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_033F) {
    const struct CPU_State initial_cpu = {.pc=0x74aa, .a=0xc7, .x=0xec, .y=0x09, .sp=0x39, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x74aa, .value=0xcd}, {.addr=0x74ab, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x74ac, .a=0xc7, .x=0x9f, .y=0x09, .sp=0x39, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x74aa, .value=0xcd}, {.addr=0x74ab, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x74aa, .value=0xcd, .type=IO_READ},
        {.addr=0x74ab, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0340) {
    const struct CPU_State initial_cpu = {.pc=0xea4f, .a=0x83, .x=0xba, .y=0x2d, .sp=0xdf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xea4f, .value=0xcd}, {.addr=0xea50, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xea51, .a=0x83, .x=0x47, .y=0x2d, .sp=0xdf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xea4f, .value=0xcd}, {.addr=0xea50, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xea4f, .value=0xcd, .type=IO_READ},
        {.addr=0xea50, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0341) {
    const struct CPU_State initial_cpu = {.pc=0xfc3b, .a=0x95, .x=0xf7, .y=0xc2, .sp=0x88, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xfc3b, .value=0xcd}, {.addr=0xfc3c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xfc3d, .a=0x95, .x=0x4c, .y=0xc2, .sp=0x88, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfc3b, .value=0xcd}, {.addr=0xfc3c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xfc3b, .value=0xcd, .type=IO_READ},
        {.addr=0xfc3c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0342) {
    const struct CPU_State initial_cpu = {.pc=0x9db7, .a=0x48, .x=0x41, .y=0x6a, .sp=0x91, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9db7, .value=0xcd}, {.addr=0x9db8, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9db9, .a=0x48, .x=0x94, .y=0x6a, .sp=0x91, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9db7, .value=0xcd}, {.addr=0x9db8, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9db7, .value=0xcd, .type=IO_READ},
        {.addr=0x9db8, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0343) {
    const struct CPU_State initial_cpu = {.pc=0x144f, .a=0x8d, .x=0xa8, .y=0x28, .sp=0x7f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x144f, .value=0xcd}, {.addr=0x1450, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x1451, .a=0x8d, .x=0x3b, .y=0x28, .sp=0x7f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x144f, .value=0xcd}, {.addr=0x1450, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x144f, .value=0xcd, .type=IO_READ},
        {.addr=0x1450, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0344) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0xf7, .x=0xb0, .y=0xb4, .sp=0x3f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa9, .value=0xcd}, {.addr=0xdfaa, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xdfab, .a=0xf7, .x=0x36, .y=0xb4, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdfa9, .value=0xcd}, {.addr=0xdfaa, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0xcd, .type=IO_READ},
        {.addr=0xdfaa, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0345) {
    const struct CPU_State initial_cpu = {.pc=0x3305, .a=0x6b, .x=0xc9, .y=0xe2, .sp=0x0d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3305, .value=0xcd}, {.addr=0x3306, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3307, .a=0x6b, .x=0x86, .y=0xe2, .sp=0x0d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3305, .value=0xcd}, {.addr=0x3306, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3305, .value=0xcd, .type=IO_READ},
        {.addr=0x3306, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0346) {
    const struct CPU_State initial_cpu = {.pc=0xa5ad, .a=0xa3, .x=0x49, .y=0xe9, .sp=0xb0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ad, .value=0xcd}, {.addr=0xa5ae, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa5af, .a=0xa3, .x=0xa7, .y=0xe9, .sp=0xb0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa5ad, .value=0xcd}, {.addr=0xa5ae, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa5ad, .value=0xcd, .type=IO_READ},
        {.addr=0xa5ae, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0347) {
    const struct CPU_State initial_cpu = {.pc=0x7be9, .a=0xee, .x=0x5d, .y=0x29, .sp=0x4c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7be9, .value=0xcd}, {.addr=0x7bea, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7beb, .a=0xee, .x=0x60, .y=0x29, .sp=0x4c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7be9, .value=0xcd}, {.addr=0x7bea, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7be9, .value=0xcd, .type=IO_READ},
        {.addr=0x7bea, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0348) {
    const struct CPU_State initial_cpu = {.pc=0xa2d2, .a=0xec, .x=0xa0, .y=0x53, .sp=0xc8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d2, .value=0xcd}, {.addr=0xa2d3, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xa2d4, .a=0xec, .x=0x4a, .y=0x53, .sp=0xc8, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa2d2, .value=0xcd}, {.addr=0xa2d3, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xa2d2, .value=0xcd, .type=IO_READ},
        {.addr=0xa2d3, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0349) {
    const struct CPU_State initial_cpu = {.pc=0x2e2b, .a=0xb5, .x=0x3a, .y=0x5a, .sp=0x8f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2e2b, .value=0xcd}, {.addr=0x2e2c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2e2d, .a=0xb5, .x=0x2d, .y=0x5a, .sp=0x8f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2e2b, .value=0xcd}, {.addr=0x2e2c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2e2b, .value=0xcd, .type=IO_READ},
        {.addr=0x2e2c, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034A) {
    const struct CPU_State initial_cpu = {.pc=0x8060, .a=0x50, .x=0xc8, .y=0xae, .sp=0x8d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x8060, .value=0xcd}, {.addr=0x8061, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x8062, .a=0x50, .x=0x5a, .y=0xae, .sp=0x8d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8060, .value=0xcd}, {.addr=0x8061, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x8060, .value=0xcd, .type=IO_READ},
        {.addr=0x8061, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034B) {
    const struct CPU_State initial_cpu = {.pc=0x77ff, .a=0x38, .x=0x9d, .y=0xdc, .sp=0x9f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x77ff, .value=0xcd}, {.addr=0x7800, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x7801, .a=0x38, .x=0x41, .y=0xdc, .sp=0x9f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x77ff, .value=0xcd}, {.addr=0x7800, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x77ff, .value=0xcd, .type=IO_READ},
        {.addr=0x7800, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034C) {
    const struct CPU_State initial_cpu = {.pc=0x811f, .a=0x54, .x=0x8a, .y=0x84, .sp=0xd8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x811f, .value=0xcd}, {.addr=0x8120, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x8121, .a=0x54, .x=0xc7, .y=0x84, .sp=0xd8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x811f, .value=0xcd}, {.addr=0x8120, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x811f, .value=0xcd, .type=IO_READ},
        {.addr=0x8120, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034D) {
    const struct CPU_State initial_cpu = {.pc=0xef76, .a=0x39, .x=0xc9, .y=0xb7, .sp=0xc0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xef76, .value=0xcd}, {.addr=0xef77, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xef78, .a=0x39, .x=0x0e, .y=0xb7, .sp=0xc0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xef76, .value=0xcd}, {.addr=0xef77, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xef76, .value=0xcd, .type=IO_READ},
        {.addr=0xef77, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034E) {
    const struct CPU_State initial_cpu = {.pc=0xc31b, .a=0xe5, .x=0x56, .y=0xcf, .sp=0x77, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xc31b, .value=0xcd}, {.addr=0xc31c, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xc31d, .a=0xe5, .x=0x71, .y=0xcf, .sp=0x77, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc31b, .value=0xcd}, {.addr=0xc31c, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xc31b, .value=0xcd, .type=IO_READ},
        {.addr=0xc31c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_034F) {
    const struct CPU_State initial_cpu = {.pc=0xd963, .a=0xe2, .x=0x2f, .y=0x12, .sp=0x5e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd963, .value=0xcd}, {.addr=0xd964, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xd965, .a=0xe2, .x=0x7a, .y=0x12, .sp=0x5e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd963, .value=0xcd}, {.addr=0xd964, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xd963, .value=0xcd, .type=IO_READ},
        {.addr=0xd964, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0350) {
    const struct CPU_State initial_cpu = {.pc=0x11fd, .a=0x89, .x=0x0d, .y=0xbf, .sp=0xab, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x11fd, .value=0xcd}, {.addr=0x11fe, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x11ff, .a=0x89, .x=0xb2, .y=0xbf, .sp=0xab, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x11fd, .value=0xcd}, {.addr=0x11fe, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x11fd, .value=0xcd, .type=IO_READ},
        {.addr=0x11fe, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5fb9, .a=0xfb, .x=0x5f, .y=0x40, .sp=0xea, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb9, .value=0xcd}, {.addr=0x5fba, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x5fbb, .a=0xfb, .x=0xd7, .y=0x40, .sp=0xea, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5fb9, .value=0xcd}, {.addr=0x5fba, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x5fb9, .value=0xcd, .type=IO_READ},
        {.addr=0x5fba, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0352) {
    const struct CPU_State initial_cpu = {.pc=0x8f1c, .a=0xf9, .x=0x44, .y=0x3c, .sp=0xad, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8f1c, .value=0xcd}, {.addr=0x8f1d, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x8f1e, .a=0xf9, .x=0xc5, .y=0x3c, .sp=0xad, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8f1c, .value=0xcd}, {.addr=0x8f1d, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x8f1c, .value=0xcd, .type=IO_READ},
        {.addr=0x8f1d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0353) {
    const struct CPU_State initial_cpu = {.pc=0x357c, .a=0x48, .x=0x71, .y=0x88, .sp=0x1f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x357c, .value=0xcd}, {.addr=0x357d, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x357e, .a=0x48, .x=0x59, .y=0x88, .sp=0x1f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x357c, .value=0xcd}, {.addr=0x357d, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x357c, .value=0xcd, .type=IO_READ},
        {.addr=0x357d, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0354) {
    const struct CPU_State initial_cpu = {.pc=0x56f3, .a=0x94, .x=0x36, .y=0x71, .sp=0x6a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x56f3, .value=0xcd}, {.addr=0x56f4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x56f5, .a=0x94, .x=0x2d, .y=0x71, .sp=0x6a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x56f3, .value=0xcd}, {.addr=0x56f4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x56f3, .value=0xcd, .type=IO_READ},
        {.addr=0x56f4, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0355) {
    const struct CPU_State initial_cpu = {.pc=0x656b, .a=0x11, .x=0x72, .y=0x86, .sp=0x8b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x656b, .value=0xcd}, {.addr=0x656c, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x656d, .a=0x11, .x=0x36, .y=0x86, .sp=0x8b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x656b, .value=0xcd}, {.addr=0x656c, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x656b, .value=0xcd, .type=IO_READ},
        {.addr=0x656c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0356) {
    const struct CPU_State initial_cpu = {.pc=0x147e, .a=0x48, .x=0xa2, .y=0x74, .sp=0x76, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x147e, .value=0xcd}, {.addr=0x147f, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x1480, .a=0x48, .x=0x73, .y=0x74, .sp=0x76, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x147e, .value=0xcd}, {.addr=0x147f, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x147e, .value=0xcd, .type=IO_READ},
        {.addr=0x147f, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0357) {
    const struct CPU_State initial_cpu = {.pc=0x0050, .a=0x43, .x=0xff, .y=0x3d, .sp=0x04, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xcd}, {.addr=0x0051, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x0052, .a=0x43, .x=0xec, .y=0x3d, .sp=0x04, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xcd}, {.addr=0x0051, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x0050, .value=0xcd, .type=IO_READ},
        {.addr=0x0051, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0358) {
    const struct CPU_State initial_cpu = {.pc=0x0d4c, .a=0x8b, .x=0x62, .y=0x26, .sp=0x26, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0d4c, .value=0xcd}, {.addr=0x0d4d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d4e, .a=0x8b, .x=0x8e, .y=0x26, .sp=0x26, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0d4c, .value=0xcd}, {.addr=0x0d4d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d4c, .value=0xcd, .type=IO_READ},
        {.addr=0x0d4d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0359) {
    const struct CPU_State initial_cpu = {.pc=0x7c11, .a=0x99, .x=0x9d, .y=0x3a, .sp=0x5f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c11, .value=0xcd}, {.addr=0x7c12, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7c13, .a=0x99, .x=0xc6, .y=0x3a, .sp=0x5f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7c11, .value=0xcd}, {.addr=0x7c12, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7c11, .value=0xcd, .type=IO_READ},
        {.addr=0x7c12, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035A) {
    const struct CPU_State initial_cpu = {.pc=0x09bb, .a=0xa3, .x=0x5c, .y=0x28, .sp=0x0e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x09bb, .value=0xcd}, {.addr=0x09bc, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x09bd, .a=0xa3, .x=0x31, .y=0x28, .sp=0x0e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x09bb, .value=0xcd}, {.addr=0x09bc, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x09bb, .value=0xcd, .type=IO_READ},
        {.addr=0x09bc, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035B) {
    const struct CPU_State initial_cpu = {.pc=0x2209, .a=0x3f, .x=0x30, .y=0x5d, .sp=0x5f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2209, .value=0xcd}, {.addr=0x220a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x220b, .a=0x3f, .x=0x38, .y=0x5d, .sp=0x5f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2209, .value=0xcd}, {.addr=0x220a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x2209, .value=0xcd, .type=IO_READ},
        {.addr=0x220a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035C) {
    const struct CPU_State initial_cpu = {.pc=0x21d4, .a=0xae, .x=0xd3, .y=0xca, .sp=0x81, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x21d4, .value=0xcd}, {.addr=0x21d5, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x21d6, .a=0xae, .x=0x22, .y=0xca, .sp=0x81, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x21d4, .value=0xcd}, {.addr=0x21d5, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x21d4, .value=0xcd, .type=IO_READ},
        {.addr=0x21d5, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035D) {
    const struct CPU_State initial_cpu = {.pc=0x466d, .a=0xf2, .x=0xd4, .y=0xa7, .sp=0x64, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x466d, .value=0xcd}, {.addr=0x466e, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x466f, .a=0xf2, .x=0xb1, .y=0xa7, .sp=0x64, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x466d, .value=0xcd}, {.addr=0x466e, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x466d, .value=0xcd, .type=IO_READ},
        {.addr=0x466e, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035E) {
    const struct CPU_State initial_cpu = {.pc=0x0635, .a=0x1a, .x=0xf5, .y=0x7d, .sp=0x6d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0635, .value=0xcd}, {.addr=0x0636, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x0637, .a=0x1a, .x=0xb0, .y=0x7d, .sp=0x6d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0635, .value=0xcd}, {.addr=0x0636, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x0635, .value=0xcd, .type=IO_READ},
        {.addr=0x0636, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_035F) {
    const struct CPU_State initial_cpu = {.pc=0x0664, .a=0x71, .x=0xb4, .y=0x7e, .sp=0x08, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0664, .value=0xcd}, {.addr=0x0665, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x0666, .a=0x71, .x=0x41, .y=0x7e, .sp=0x08, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0664, .value=0xcd}, {.addr=0x0665, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x0664, .value=0xcd, .type=IO_READ},
        {.addr=0x0665, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0360) {
    const struct CPU_State initial_cpu = {.pc=0x662c, .a=0x10, .x=0x13, .y=0xfc, .sp=0xe9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x662c, .value=0xcd}, {.addr=0x662d, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x662e, .a=0x10, .x=0xff, .y=0xfc, .sp=0xe9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x662c, .value=0xcd}, {.addr=0x662d, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x662c, .value=0xcd, .type=IO_READ},
        {.addr=0x662d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0361) {
    const struct CPU_State initial_cpu = {.pc=0xc2e5, .a=0x69, .x=0x7c, .y=0x7e, .sp=0x47, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc2e5, .value=0xcd}, {.addr=0xc2e6, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc2e7, .a=0x69, .x=0xd4, .y=0x7e, .sp=0x47, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc2e5, .value=0xcd}, {.addr=0xc2e6, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc2e5, .value=0xcd, .type=IO_READ},
        {.addr=0xc2e6, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0362) {
    const struct CPU_State initial_cpu = {.pc=0x88dd, .a=0xbb, .x=0x8e, .y=0xf6, .sp=0xd9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x88dd, .value=0xcd}, {.addr=0x88de, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x88df, .a=0xbb, .x=0xc0, .y=0xf6, .sp=0xd9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x88dd, .value=0xcd}, {.addr=0x88de, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x88dd, .value=0xcd, .type=IO_READ},
        {.addr=0x88de, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0363) {
    const struct CPU_State initial_cpu = {.pc=0xdb2e, .a=0x86, .x=0xbc, .y=0x2f, .sp=0x65, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xdb2e, .value=0xcd}, {.addr=0xdb2f, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xdb30, .a=0x86, .x=0xd8, .y=0x2f, .sp=0x65, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xdb2e, .value=0xcd}, {.addr=0xdb2f, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xdb2e, .value=0xcd, .type=IO_READ},
        {.addr=0xdb2f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0364) {
    const struct CPU_State initial_cpu = {.pc=0x3c34, .a=0x70, .x=0x58, .y=0xcf, .sp=0x68, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3c34, .value=0xcd}, {.addr=0x3c35, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x3c36, .a=0x70, .x=0x77, .y=0xcf, .sp=0x68, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3c34, .value=0xcd}, {.addr=0x3c35, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x3c34, .value=0xcd, .type=IO_READ},
        {.addr=0x3c35, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0365) {
    const struct CPU_State initial_cpu = {.pc=0x980d, .a=0x21, .x=0xbf, .y=0x11, .sp=0xf2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x980d, .value=0xcd}, {.addr=0x980e, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x980f, .a=0x21, .x=0x27, .y=0x11, .sp=0xf2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x980d, .value=0xcd}, {.addr=0x980e, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x980d, .value=0xcd, .type=IO_READ},
        {.addr=0x980e, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0366) {
    const struct CPU_State initial_cpu = {.pc=0xa9fb, .a=0x26, .x=0x5e, .y=0x14, .sp=0x64, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa9fb, .value=0xcd}, {.addr=0xa9fc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa9fd, .a=0x26, .x=0xee, .y=0x14, .sp=0x64, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa9fb, .value=0xcd}, {.addr=0xa9fc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa9fb, .value=0xcd, .type=IO_READ},
        {.addr=0xa9fc, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0367) {
    const struct CPU_State initial_cpu = {.pc=0x05ad, .a=0x6a, .x=0x5d, .y=0x91, .sp=0x7b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x05ad, .value=0xcd}, {.addr=0x05ae, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x05af, .a=0x6a, .x=0x92, .y=0x91, .sp=0x7b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x05ad, .value=0xcd}, {.addr=0x05ae, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x05ad, .value=0xcd, .type=IO_READ},
        {.addr=0x05ae, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8096, .a=0x69, .x=0x50, .y=0x7d, .sp=0x60, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8096, .value=0xcd}, {.addr=0x8097, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x8098, .a=0x69, .x=0x74, .y=0x7d, .sp=0x60, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8096, .value=0xcd}, {.addr=0x8097, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x8096, .value=0xcd, .type=IO_READ},
        {.addr=0x8097, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0369) {
    const struct CPU_State initial_cpu = {.pc=0x56a8, .a=0x0a, .x=0x08, .y=0x24, .sp=0xc2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x56a8, .value=0xcd}, {.addr=0x56a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x56aa, .a=0x0a, .x=0x9c, .y=0x24, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x56a8, .value=0xcd}, {.addr=0x56a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x56a8, .value=0xcd, .type=IO_READ},
        {.addr=0x56a9, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036A) {
    const struct CPU_State initial_cpu = {.pc=0xb73d, .a=0x23, .x=0x31, .y=0x43, .sp=0xad, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb73d, .value=0xcd}, {.addr=0xb73e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb73f, .a=0x23, .x=0xa6, .y=0x43, .sp=0xad, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb73d, .value=0xcd}, {.addr=0xb73e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb73d, .value=0xcd, .type=IO_READ},
        {.addr=0xb73e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036B) {
    const struct CPU_State initial_cpu = {.pc=0xad07, .a=0xfe, .x=0x8b, .y=0xc6, .sp=0x8f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xad07, .value=0xcd}, {.addr=0xad08, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xad09, .a=0xfe, .x=0xef, .y=0xc6, .sp=0x8f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xad07, .value=0xcd}, {.addr=0xad08, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xad07, .value=0xcd, .type=IO_READ},
        {.addr=0xad08, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036C) {
    const struct CPU_State initial_cpu = {.pc=0x58ca, .a=0x3b, .x=0xc6, .y=0xb6, .sp=0xeb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x58ca, .value=0xcd}, {.addr=0x58cb, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x58cc, .a=0x3b, .x=0x13, .y=0xb6, .sp=0xeb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x58ca, .value=0xcd}, {.addr=0x58cb, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x58ca, .value=0xcd, .type=IO_READ},
        {.addr=0x58cb, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2cc2, .a=0x0d, .x=0x5a, .y=0x99, .sp=0x84, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc2, .value=0xcd}, {.addr=0x2cc3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2cc4, .a=0x0d, .x=0xe0, .y=0x99, .sp=0x84, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2cc2, .value=0xcd}, {.addr=0x2cc3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2cc2, .value=0xcd, .type=IO_READ},
        {.addr=0x2cc3, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1b6a, .a=0xb0, .x=0xb1, .y=0x48, .sp=0x2a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1b6a, .value=0xcd}, {.addr=0x1b6b, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x1b6c, .a=0xb0, .x=0x36, .y=0x48, .sp=0x2a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1b6a, .value=0xcd}, {.addr=0x1b6b, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x1b6a, .value=0xcd, .type=IO_READ},
        {.addr=0x1b6b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_036F) {
    const struct CPU_State initial_cpu = {.pc=0xff7d, .a=0xde, .x=0x1a, .y=0xd0, .sp=0x42, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xff7d, .value=0xcd}, {.addr=0xff7e, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xff7f, .a=0xde, .x=0x62, .y=0xd0, .sp=0x42, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xff7d, .value=0xcd}, {.addr=0xff7e, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xff7d, .value=0xcd, .type=IO_READ},
        {.addr=0xff7e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0370) {
    const struct CPU_State initial_cpu = {.pc=0xc4bf, .a=0x26, .x=0x76, .y=0x22, .sp=0x1b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bf, .value=0xcd}, {.addr=0xc4c0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xc4c1, .a=0x26, .x=0x6a, .y=0x22, .sp=0x1b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc4bf, .value=0xcd}, {.addr=0xc4c0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xc4bf, .value=0xcd, .type=IO_READ},
        {.addr=0xc4c0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0371) {
    const struct CPU_State initial_cpu = {.pc=0x05db, .a=0xbd, .x=0x43, .y=0x28, .sp=0x02, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x05db, .value=0xcd}, {.addr=0x05dc, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x05dd, .a=0xbd, .x=0x50, .y=0x28, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x05db, .value=0xcd}, {.addr=0x05dc, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x05db, .value=0xcd, .type=IO_READ},
        {.addr=0x05dc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0372) {
    const struct CPU_State initial_cpu = {.pc=0xfbd4, .a=0x56, .x=0xf4, .y=0x4a, .sp=0x3c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd4, .value=0xcd}, {.addr=0xfbd5, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xfbd6, .a=0x56, .x=0x58, .y=0x4a, .sp=0x3c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfbd4, .value=0xcd}, {.addr=0xfbd5, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xfbd4, .value=0xcd, .type=IO_READ},
        {.addr=0xfbd5, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0373) {
    const struct CPU_State initial_cpu = {.pc=0xc634, .a=0x14, .x=0x55, .y=0x23, .sp=0x28, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc634, .value=0xcd}, {.addr=0xc635, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc636, .a=0x14, .x=0x7c, .y=0x23, .sp=0x28, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc634, .value=0xcd}, {.addr=0xc635, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc634, .value=0xcd, .type=IO_READ},
        {.addr=0xc635, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6b2a, .a=0x78, .x=0x7b, .y=0x04, .sp=0x12, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6b2a, .value=0xcd}, {.addr=0x6b2b, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x6b2c, .a=0x78, .x=0x22, .y=0x04, .sp=0x12, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6b2a, .value=0xcd}, {.addr=0x6b2b, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x6b2a, .value=0xcd, .type=IO_READ},
        {.addr=0x6b2b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0375) {
    const struct CPU_State initial_cpu = {.pc=0x730f, .a=0x85, .x=0xa2, .y=0x81, .sp=0x12, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x730f, .value=0xcd}, {.addr=0x7310, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7311, .a=0x85, .x=0x9f, .y=0x81, .sp=0x12, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x730f, .value=0xcd}, {.addr=0x7310, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x730f, .value=0xcd, .type=IO_READ},
        {.addr=0x7310, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0376) {
    const struct CPU_State initial_cpu = {.pc=0xa463, .a=0x4d, .x=0xd5, .y=0x06, .sp=0x8b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa463, .value=0xcd}, {.addr=0xa464, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa465, .a=0x4d, .x=0x46, .y=0x06, .sp=0x8b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa463, .value=0xcd}, {.addr=0xa464, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa463, .value=0xcd, .type=IO_READ},
        {.addr=0xa464, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7ec2, .a=0xd7, .x=0xef, .y=0xb4, .sp=0xfd, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec2, .value=0xcd}, {.addr=0x7ec3, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x7ec4, .a=0xd7, .x=0x18, .y=0xb4, .sp=0xfd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7ec2, .value=0xcd}, {.addr=0x7ec3, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7ec2, .value=0xcd, .type=IO_READ},
        {.addr=0x7ec3, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7784, .a=0x95, .x=0x37, .y=0x0d, .sp=0xaa, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7784, .value=0xcd}, {.addr=0x7785, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7786, .a=0x95, .x=0x80, .y=0x0d, .sp=0xaa, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7784, .value=0xcd}, {.addr=0x7785, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7784, .value=0xcd, .type=IO_READ},
        {.addr=0x7785, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0379) {
    const struct CPU_State initial_cpu = {.pc=0x7584, .a=0x3d, .x=0xdd, .y=0xf7, .sp=0x6a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7584, .value=0xcd}, {.addr=0x7585, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x7586, .a=0x3d, .x=0xc8, .y=0xf7, .sp=0x6a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7584, .value=0xcd}, {.addr=0x7585, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x7584, .value=0xcd, .type=IO_READ},
        {.addr=0x7585, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037A) {
    const struct CPU_State initial_cpu = {.pc=0x3ccd, .a=0x8d, .x=0x59, .y=0x7c, .sp=0xc4, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x3ccd, .value=0xcd}, {.addr=0x3cce, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x3ccf, .a=0x8d, .x=0x4b, .y=0x7c, .sp=0xc4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3ccd, .value=0xcd}, {.addr=0x3cce, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x3ccd, .value=0xcd, .type=IO_READ},
        {.addr=0x3cce, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037B) {
    const struct CPU_State initial_cpu = {.pc=0x55c5, .a=0xf4, .x=0x8e, .y=0xd5, .sp=0x25, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x55c5, .value=0xcd}, {.addr=0x55c6, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x55c7, .a=0xf4, .x=0xf5, .y=0xd5, .sp=0x25, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x55c5, .value=0xcd}, {.addr=0x55c6, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x55c5, .value=0xcd, .type=IO_READ},
        {.addr=0x55c6, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037C) {
    const struct CPU_State initial_cpu = {.pc=0x7020, .a=0x71, .x=0x66, .y=0x15, .sp=0x78, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7020, .value=0xcd}, {.addr=0x7021, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7022, .a=0x71, .x=0xb6, .y=0x15, .sp=0x78, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7020, .value=0xcd}, {.addr=0x7021, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7020, .value=0xcd, .type=IO_READ},
        {.addr=0x7021, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037D) {
    const struct CPU_State initial_cpu = {.pc=0x482b, .a=0xb1, .x=0xe9, .y=0xea, .sp=0xb7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x482b, .value=0xcd}, {.addr=0x482c, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x482d, .a=0xb1, .x=0x90, .y=0xea, .sp=0xb7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x482b, .value=0xcd}, {.addr=0x482c, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x482b, .value=0xcd, .type=IO_READ},
        {.addr=0x482c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037E) {
    const struct CPU_State initial_cpu = {.pc=0xc2f8, .a=0x0d, .x=0xc3, .y=0x15, .sp=0x14, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f8, .value=0xcd}, {.addr=0xc2f9, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xc2fa, .a=0x0d, .x=0x69, .y=0x15, .sp=0x14, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc2f8, .value=0xcd}, {.addr=0xc2f9, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xc2f8, .value=0xcd, .type=IO_READ},
        {.addr=0xc2f9, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_037F) {
    const struct CPU_State initial_cpu = {.pc=0x4bbf, .a=0x3a, .x=0x36, .y=0x28, .sp=0x5a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4bbf, .value=0xcd}, {.addr=0x4bc0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4bc1, .a=0x3a, .x=0x3c, .y=0x28, .sp=0x5a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4bbf, .value=0xcd}, {.addr=0x4bc0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4bbf, .value=0xcd, .type=IO_READ},
        {.addr=0x4bc0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0380) {
    const struct CPU_State initial_cpu = {.pc=0x55bd, .a=0x09, .x=0x26, .y=0x3b, .sp=0xa6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x55bd, .value=0xcd}, {.addr=0x55be, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x55bf, .a=0x09, .x=0xbd, .y=0x3b, .sp=0xa6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x55bd, .value=0xcd}, {.addr=0x55be, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x55bd, .value=0xcd, .type=IO_READ},
        {.addr=0x55be, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0381) {
    const struct CPU_State initial_cpu = {.pc=0x4a84, .a=0xbd, .x=0xc3, .y=0x59, .sp=0x73, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4a84, .value=0xcd}, {.addr=0x4a85, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4a86, .a=0xbd, .x=0xee, .y=0x59, .sp=0x73, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4a84, .value=0xcd}, {.addr=0x4a85, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4a84, .value=0xcd, .type=IO_READ},
        {.addr=0x4a85, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf224, .a=0x2f, .x=0x7d, .y=0x08, .sp=0x66, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf224, .value=0xcd}, {.addr=0xf225, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf226, .a=0x2f, .x=0xb7, .y=0x08, .sp=0x66, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf224, .value=0xcd}, {.addr=0xf225, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf224, .value=0xcd, .type=IO_READ},
        {.addr=0xf225, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0383) {
    const struct CPU_State initial_cpu = {.pc=0x5f09, .a=0x39, .x=0xef, .y=0x21, .sp=0x79, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5f09, .value=0xcd}, {.addr=0x5f0a, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x5f0b, .a=0x39, .x=0x6c, .y=0x21, .sp=0x79, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5f09, .value=0xcd}, {.addr=0x5f0a, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x5f09, .value=0xcd, .type=IO_READ},
        {.addr=0x5f0a, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1824, .a=0x13, .x=0x5d, .y=0x9f, .sp=0x12, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1824, .value=0xcd}, {.addr=0x1825, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x1826, .a=0x13, .x=0xc7, .y=0x9f, .sp=0x12, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1824, .value=0xcd}, {.addr=0x1825, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x1824, .value=0xcd, .type=IO_READ},
        {.addr=0x1825, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0385) {
    const struct CPU_State initial_cpu = {.pc=0x88e7, .a=0x2b, .x=0x5b, .y=0xdb, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x88e7, .value=0xcd}, {.addr=0x88e8, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x88e9, .a=0x2b, .x=0xb6, .y=0xdb, .sp=0xe3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x88e7, .value=0xcd}, {.addr=0x88e8, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x88e7, .value=0xcd, .type=IO_READ},
        {.addr=0x88e8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0386) {
    const struct CPU_State initial_cpu = {.pc=0x8da9, .a=0x51, .x=0xc5, .y=0xdb, .sp=0x99, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x8da9, .value=0xcd}, {.addr=0x8daa, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8dab, .a=0x51, .x=0xc8, .y=0xdb, .sp=0x99, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8da9, .value=0xcd}, {.addr=0x8daa, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x8da9, .value=0xcd, .type=IO_READ},
        {.addr=0x8daa, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0387) {
    const struct CPU_State initial_cpu = {.pc=0x4641, .a=0xc6, .x=0xd0, .y=0x63, .sp=0x51, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4641, .value=0xcd}, {.addr=0x4642, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x4643, .a=0xc6, .x=0xde, .y=0x63, .sp=0x51, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4641, .value=0xcd}, {.addr=0x4642, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x4641, .value=0xcd, .type=IO_READ},
        {.addr=0x4642, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0388) {
    const struct CPU_State initial_cpu = {.pc=0x4fe7, .a=0x9f, .x=0x0f, .y=0x07, .sp=0xd7, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe7, .value=0xcd}, {.addr=0x4fe8, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x4fe9, .a=0x9f, .x=0xa2, .y=0x07, .sp=0xd7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4fe7, .value=0xcd}, {.addr=0x4fe8, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x4fe7, .value=0xcd, .type=IO_READ},
        {.addr=0x4fe8, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5bc5, .a=0x25, .x=0xef, .y=0x76, .sp=0xdf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc5, .value=0xcd}, {.addr=0x5bc6, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5bc7, .a=0x25, .x=0x0f, .y=0x76, .sp=0xdf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5bc5, .value=0xcd}, {.addr=0x5bc6, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5bc5, .value=0xcd, .type=IO_READ},
        {.addr=0x5bc6, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038A) {
    const struct CPU_State initial_cpu = {.pc=0xecf6, .a=0xb1, .x=0xc3, .y=0xfd, .sp=0xed, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xecf6, .value=0xcd}, {.addr=0xecf7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xecf8, .a=0xb1, .x=0x80, .y=0xfd, .sp=0xed, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xecf6, .value=0xcd}, {.addr=0xecf7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xecf6, .value=0xcd, .type=IO_READ},
        {.addr=0xecf7, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038B) {
    const struct CPU_State initial_cpu = {.pc=0xdf18, .a=0xb2, .x=0x79, .y=0x04, .sp=0x8c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xdf18, .value=0xcd}, {.addr=0xdf19, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf1a, .a=0xb2, .x=0x66, .y=0x04, .sp=0x8c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xdf18, .value=0xcd}, {.addr=0xdf19, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf18, .value=0xcd, .type=IO_READ},
        {.addr=0xdf19, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038C) {
    const struct CPU_State initial_cpu = {.pc=0x6b3b, .a=0xee, .x=0xf5, .y=0x1c, .sp=0xc7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3b, .value=0xcd}, {.addr=0x6b3c, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x6b3d, .a=0xee, .x=0x36, .y=0x1c, .sp=0xc7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6b3b, .value=0xcd}, {.addr=0x6b3c, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x6b3b, .value=0xcd, .type=IO_READ},
        {.addr=0x6b3c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038D) {
    const struct CPU_State initial_cpu = {.pc=0x5832, .a=0xc8, .x=0x01, .y=0xa8, .sp=0xd7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5832, .value=0xcd}, {.addr=0x5833, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x5834, .a=0xc8, .x=0x55, .y=0xa8, .sp=0xd7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5832, .value=0xcd}, {.addr=0x5833, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x5832, .value=0xcd, .type=IO_READ},
        {.addr=0x5833, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038E) {
    const struct CPU_State initial_cpu = {.pc=0x1002, .a=0x38, .x=0xe8, .y=0x4a, .sp=0x83, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1002, .value=0xcd}, {.addr=0x1003, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x1004, .a=0x38, .x=0x56, .y=0x4a, .sp=0x83, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1002, .value=0xcd}, {.addr=0x1003, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x1002, .value=0xcd, .type=IO_READ},
        {.addr=0x1003, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_038F) {
    const struct CPU_State initial_cpu = {.pc=0x4fd0, .a=0xe9, .x=0x0a, .y=0xa6, .sp=0xb6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd0, .value=0xcd}, {.addr=0x4fd1, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4fd2, .a=0xe9, .x=0xc8, .y=0xa6, .sp=0xb6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4fd0, .value=0xcd}, {.addr=0x4fd1, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x4fd0, .value=0xcd, .type=IO_READ},
        {.addr=0x4fd1, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0390) {
    const struct CPU_State initial_cpu = {.pc=0x1798, .a=0x71, .x=0x98, .y=0xbd, .sp=0x42, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1798, .value=0xcd}, {.addr=0x1799, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x179a, .a=0x71, .x=0x9f, .y=0xbd, .sp=0x42, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1798, .value=0xcd}, {.addr=0x1799, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1798, .value=0xcd, .type=IO_READ},
        {.addr=0x1799, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0391) {
    const struct CPU_State initial_cpu = {.pc=0x2fe2, .a=0xa0, .x=0x09, .y=0x51, .sp=0x91, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe2, .value=0xcd}, {.addr=0x2fe3, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x2fe4, .a=0xa0, .x=0x44, .y=0x51, .sp=0x91, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2fe2, .value=0xcd}, {.addr=0x2fe3, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x2fe2, .value=0xcd, .type=IO_READ},
        {.addr=0x2fe3, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0392) {
    const struct CPU_State initial_cpu = {.pc=0x109a, .a=0xd5, .x=0xdf, .y=0x52, .sp=0x01, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x109a, .value=0xcd}, {.addr=0x109b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x109c, .a=0xd5, .x=0xfc, .y=0x52, .sp=0x01, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x109a, .value=0xcd}, {.addr=0x109b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x109a, .value=0xcd, .type=IO_READ},
        {.addr=0x109b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0393) {
    const struct CPU_State initial_cpu = {.pc=0x1253, .a=0xf2, .x=0x57, .y=0x95, .sp=0xf0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1253, .value=0xcd}, {.addr=0x1254, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1255, .a=0xf2, .x=0x62, .y=0x95, .sp=0xf0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1253, .value=0xcd}, {.addr=0x1254, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1253, .value=0xcd, .type=IO_READ},
        {.addr=0x1254, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0394) {
    const struct CPU_State initial_cpu = {.pc=0xebe4, .a=0x72, .x=0x22, .y=0x51, .sp=0x44, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xebe4, .value=0xcd}, {.addr=0xebe5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xebe6, .a=0x72, .x=0x40, .y=0x51, .sp=0x44, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xebe4, .value=0xcd}, {.addr=0xebe5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xebe4, .value=0xcd, .type=IO_READ},
        {.addr=0xebe5, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0395) {
    const struct CPU_State initial_cpu = {.pc=0xbce6, .a=0xde, .x=0xa1, .y=0x73, .sp=0x5a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xbce6, .value=0xcd}, {.addr=0xbce7, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xbce8, .a=0xde, .x=0x85, .y=0x73, .sp=0x5a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbce6, .value=0xcd}, {.addr=0xbce7, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xbce6, .value=0xcd, .type=IO_READ},
        {.addr=0xbce7, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0396) {
    const struct CPU_State initial_cpu = {.pc=0xd3c3, .a=0x7b, .x=0xe9, .y=0x96, .sp=0xe8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c3, .value=0xcd}, {.addr=0xd3c4, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xd3c5, .a=0x7b, .x=0xcf, .y=0x96, .sp=0xe8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd3c3, .value=0xcd}, {.addr=0xd3c4, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xd3c3, .value=0xcd, .type=IO_READ},
        {.addr=0xd3c4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0397) {
    const struct CPU_State initial_cpu = {.pc=0x7d26, .a=0x6e, .x=0xaa, .y=0xb5, .sp=0x50, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7d26, .value=0xcd}, {.addr=0x7d27, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x7d28, .a=0x6e, .x=0x18, .y=0xb5, .sp=0x50, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7d26, .value=0xcd}, {.addr=0x7d27, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7d26, .value=0xcd, .type=IO_READ},
        {.addr=0x7d27, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0398) {
    const struct CPU_State initial_cpu = {.pc=0x4c52, .a=0xc1, .x=0xb9, .y=0x29, .sp=0xa9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4c52, .value=0xcd}, {.addr=0x4c53, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4c54, .a=0xc1, .x=0xfd, .y=0x29, .sp=0xa9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4c52, .value=0xcd}, {.addr=0x4c53, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4c52, .value=0xcd, .type=IO_READ},
        {.addr=0x4c53, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc157, .a=0x6e, .x=0x2a, .y=0xec, .sp=0xaa, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xc157, .value=0xcd}, {.addr=0xc158, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc159, .a=0x6e, .x=0xe8, .y=0xec, .sp=0xaa, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc157, .value=0xcd}, {.addr=0xc158, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc157, .value=0xcd, .type=IO_READ},
        {.addr=0xc158, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039A) {
    const struct CPU_State initial_cpu = {.pc=0xe28f, .a=0x67, .x=0xa9, .y=0x66, .sp=0xa9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe28f, .value=0xcd}, {.addr=0xe290, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe291, .a=0x67, .x=0x66, .y=0x66, .sp=0xa9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe28f, .value=0xcd}, {.addr=0xe290, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe28f, .value=0xcd, .type=IO_READ},
        {.addr=0xe290, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039B) {
    const struct CPU_State initial_cpu = {.pc=0x2a37, .a=0x12, .x=0xc8, .y=0x65, .sp=0x58, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2a37, .value=0xcd}, {.addr=0x2a38, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2a39, .a=0x12, .x=0xd5, .y=0x65, .sp=0x58, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2a37, .value=0xcd}, {.addr=0x2a38, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2a37, .value=0xcd, .type=IO_READ},
        {.addr=0x2a38, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039C) {
    const struct CPU_State initial_cpu = {.pc=0x8536, .a=0xd2, .x=0xea, .y=0x65, .sp=0x34, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8536, .value=0xcd}, {.addr=0x8537, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x8538, .a=0xd2, .x=0x2f, .y=0x65, .sp=0x34, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8536, .value=0xcd}, {.addr=0x8537, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x8536, .value=0xcd, .type=IO_READ},
        {.addr=0x8537, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039D) {
    const struct CPU_State initial_cpu = {.pc=0x048f, .a=0xd4, .x=0xf4, .y=0x7b, .sp=0xe9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x048f, .value=0xcd}, {.addr=0x0490, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x0491, .a=0xd4, .x=0xd9, .y=0x7b, .sp=0xe9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x048f, .value=0xcd}, {.addr=0x0490, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x048f, .value=0xcd, .type=IO_READ},
        {.addr=0x0490, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039E) {
    const struct CPU_State initial_cpu = {.pc=0x07c1, .a=0x19, .x=0x27, .y=0x7a, .sp=0x31, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x07c1, .value=0xcd}, {.addr=0x07c2, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x07c3, .a=0x19, .x=0xc3, .y=0x7a, .sp=0x31, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x07c1, .value=0xcd}, {.addr=0x07c2, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x07c1, .value=0xcd, .type=IO_READ},
        {.addr=0x07c2, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_039F) {
    const struct CPU_State initial_cpu = {.pc=0xd1aa, .a=0xed, .x=0xfa, .y=0x36, .sp=0xff, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd1aa, .value=0xcd}, {.addr=0xd1ab, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xd1ac, .a=0xed, .x=0xb1, .y=0x36, .sp=0xff, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd1aa, .value=0xcd}, {.addr=0xd1ab, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xd1aa, .value=0xcd, .type=IO_READ},
        {.addr=0xd1ab, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xedf5, .a=0x2e, .x=0xf7, .y=0x3b, .sp=0xae, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xedf5, .value=0xcd}, {.addr=0xedf6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xedf7, .a=0x2e, .x=0x72, .y=0x3b, .sp=0xae, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xedf5, .value=0xcd}, {.addr=0xedf6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xedf5, .value=0xcd, .type=IO_READ},
        {.addr=0xedf6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7f52, .a=0xe7, .x=0xc9, .y=0x0c, .sp=0x44, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7f52, .value=0xcd}, {.addr=0x7f53, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x7f54, .a=0xe7, .x=0xe9, .y=0x0c, .sp=0x44, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7f52, .value=0xcd}, {.addr=0x7f53, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x7f52, .value=0xcd, .type=IO_READ},
        {.addr=0x7f53, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1151, .a=0xda, .x=0xfa, .y=0xa6, .sp=0xa2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1151, .value=0xcd}, {.addr=0x1152, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x1153, .a=0xda, .x=0x89, .y=0xa6, .sp=0xa2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1151, .value=0xcd}, {.addr=0x1152, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x1151, .value=0xcd, .type=IO_READ},
        {.addr=0x1152, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xb910, .a=0xe6, .x=0x11, .y=0x0f, .sp=0xce, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xb910, .value=0xcd}, {.addr=0xb911, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xb912, .a=0xe6, .x=0xe4, .y=0x0f, .sp=0xce, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb910, .value=0xcd}, {.addr=0xb911, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xb910, .value=0xcd, .type=IO_READ},
        {.addr=0xb911, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xebdd, .a=0x51, .x=0x2f, .y=0x4b, .sp=0x8d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xebdd, .value=0xcd}, {.addr=0xebde, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xebdf, .a=0x51, .x=0x8c, .y=0x4b, .sp=0x8d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xebdd, .value=0xcd}, {.addr=0xebde, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xebdd, .value=0xcd, .type=IO_READ},
        {.addr=0xebde, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xe7de, .a=0xe0, .x=0xba, .y=0x68, .sp=0x77, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe7de, .value=0xcd}, {.addr=0xe7df, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe7e0, .a=0xe0, .x=0x7a, .y=0x68, .sp=0x77, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe7de, .value=0xcd}, {.addr=0xe7df, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xe7de, .value=0xcd, .type=IO_READ},
        {.addr=0xe7df, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x9ab7, .a=0x01, .x=0x8f, .y=0x7b, .sp=0xbf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab7, .value=0xcd}, {.addr=0x9ab8, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9ab9, .a=0x01, .x=0xfa, .y=0x7b, .sp=0xbf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9ab7, .value=0xcd}, {.addr=0x9ab8, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x9ab7, .value=0xcd, .type=IO_READ},
        {.addr=0x9ab8, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xe5f2, .a=0x8b, .x=0x11, .y=0x83, .sp=0xa6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f2, .value=0xcd}, {.addr=0xe5f3, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xe5f4, .a=0x8b, .x=0x11, .y=0x83, .sp=0xa6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe5f2, .value=0xcd}, {.addr=0xe5f3, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xe5f2, .value=0xcd, .type=IO_READ},
        {.addr=0xe5f3, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4896, .a=0x2e, .x=0x5f, .y=0x18, .sp=0x57, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4896, .value=0xcd}, {.addr=0x4897, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x4898, .a=0x2e, .x=0xe4, .y=0x18, .sp=0x57, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4896, .value=0xcd}, {.addr=0x4897, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x4896, .value=0xcd, .type=IO_READ},
        {.addr=0x4897, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8d72, .a=0x5b, .x=0x97, .y=0xcf, .sp=0xac, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8d72, .value=0xcd}, {.addr=0x8d73, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x8d74, .a=0x5b, .x=0xde, .y=0xcf, .sp=0xac, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8d72, .value=0xcd}, {.addr=0x8d73, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x8d72, .value=0xcd, .type=IO_READ},
        {.addr=0x8d73, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x303f, .a=0x5f, .x=0x2b, .y=0x16, .sp=0x30, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x303f, .value=0xcd}, {.addr=0x3040, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x3041, .a=0x5f, .x=0x81, .y=0x16, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x303f, .value=0xcd}, {.addr=0x3040, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x303f, .value=0xcd, .type=IO_READ},
        {.addr=0x3040, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x63bb, .a=0x22, .x=0xae, .y=0x9a, .sp=0x8c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x63bb, .value=0xcd}, {.addr=0x63bc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x63bd, .a=0x22, .x=0xdf, .y=0x9a, .sp=0x8c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x63bb, .value=0xcd}, {.addr=0x63bc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x63bb, .value=0xcd, .type=IO_READ},
        {.addr=0x63bc, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcd07, .a=0x61, .x=0x54, .y=0xc8, .sp=0x28, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd07, .value=0xcd}, {.addr=0xcd08, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xcd09, .a=0x61, .x=0x7d, .y=0xc8, .sp=0x28, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcd07, .value=0xcd}, {.addr=0xcd08, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xcd07, .value=0xcd, .type=IO_READ},
        {.addr=0xcd08, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xa7df, .a=0x31, .x=0x48, .y=0xe0, .sp=0xae, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa7df, .value=0xcd}, {.addr=0xa7e0, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa7e1, .a=0x31, .x=0xc8, .y=0xe0, .sp=0xae, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa7df, .value=0xcd}, {.addr=0xa7e0, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa7df, .value=0xcd, .type=IO_READ},
        {.addr=0xa7e0, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xcbba, .a=0xdd, .x=0x57, .y=0xba, .sp=0x66, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xcbba, .value=0xcd}, {.addr=0xcbbb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcbbc, .a=0xdd, .x=0x7c, .y=0xba, .sp=0x66, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcbba, .value=0xcd}, {.addr=0xcbbb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcbba, .value=0xcd, .type=IO_READ},
        {.addr=0xcbbb, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x874b, .a=0x64, .x=0x10, .y=0x69, .sp=0xf3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x874b, .value=0xcd}, {.addr=0x874c, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x874d, .a=0x64, .x=0xda, .y=0x69, .sp=0xf3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x874b, .value=0xcd}, {.addr=0x874c, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x874b, .value=0xcd, .type=IO_READ},
        {.addr=0x874c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x6c78, .a=0xbd, .x=0x93, .y=0x9d, .sp=0x5d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x6c78, .value=0xcd}, {.addr=0x6c79, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x6c7a, .a=0xbd, .x=0x22, .y=0x9d, .sp=0x5d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6c78, .value=0xcd}, {.addr=0x6c79, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x6c78, .value=0xcd, .type=IO_READ},
        {.addr=0x6c79, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xbc55, .a=0x00, .x=0x71, .y=0x66, .sp=0xa5, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xbc55, .value=0xcd}, {.addr=0xbc56, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xbc57, .a=0x00, .x=0xb4, .y=0x66, .sp=0xa5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbc55, .value=0xcd}, {.addr=0xbc56, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xbc55, .value=0xcd, .type=IO_READ},
        {.addr=0xbc56, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x316f, .a=0xcd, .x=0x09, .y=0x74, .sp=0xad, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x316f, .value=0xcd}, {.addr=0x3170, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x3171, .a=0xcd, .x=0x98, .y=0x74, .sp=0xad, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x316f, .value=0xcd}, {.addr=0x3170, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x316f, .value=0xcd, .type=IO_READ},
        {.addr=0x3170, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xbd78, .a=0x62, .x=0x39, .y=0xdc, .sp=0xeb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xbd78, .value=0xcd}, {.addr=0xbd79, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xbd7a, .a=0x62, .x=0xff, .y=0xdc, .sp=0xeb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbd78, .value=0xcd}, {.addr=0xbd79, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xbd78, .value=0xcd, .type=IO_READ},
        {.addr=0xbd79, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3d1b, .a=0x1b, .x=0x28, .y=0xdf, .sp=0x5f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1b, .value=0xcd}, {.addr=0x3d1c, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3d1d, .a=0x1b, .x=0xe3, .y=0xdf, .sp=0x5f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3d1b, .value=0xcd}, {.addr=0x3d1c, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3d1b, .value=0xcd, .type=IO_READ},
        {.addr=0x3d1c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xd7f0, .a=0x5b, .x=0xa5, .y=0x86, .sp=0x82, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f0, .value=0xcd}, {.addr=0xd7f1, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xd7f2, .a=0x5b, .x=0x27, .y=0x86, .sp=0x82, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd7f0, .value=0xcd}, {.addr=0xd7f1, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xd7f0, .value=0xcd, .type=IO_READ},
        {.addr=0xd7f1, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xe70e, .a=0xb7, .x=0x66, .y=0xb6, .sp=0x0b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe70e, .value=0xcd}, {.addr=0xe70f, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xe710, .a=0xb7, .x=0x8b, .y=0xb6, .sp=0x0b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe70e, .value=0xcd}, {.addr=0xe70f, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xe70e, .value=0xcd, .type=IO_READ},
        {.addr=0xe70f, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x5523, .a=0x2e, .x=0x8b, .y=0x9a, .sp=0x37, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5523, .value=0xcd}, {.addr=0x5524, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x5525, .a=0x2e, .x=0xf5, .y=0x9a, .sp=0x37, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5523, .value=0xcd}, {.addr=0x5524, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x5523, .value=0xcd, .type=IO_READ},
        {.addr=0x5524, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x5b0c, .a=0xc9, .x=0x0c, .y=0xd6, .sp=0x24, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5b0c, .value=0xcd}, {.addr=0x5b0d, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x5b0e, .a=0xc9, .x=0xb6, .y=0xd6, .sp=0x24, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5b0c, .value=0xcd}, {.addr=0x5b0d, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x5b0c, .value=0xcd, .type=IO_READ},
        {.addr=0x5b0d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x6880, .a=0xf9, .x=0xe7, .y=0xfa, .sp=0xd2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6880, .value=0xcd}, {.addr=0x6881, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x6882, .a=0xf9, .x=0xb8, .y=0xfa, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6880, .value=0xcd}, {.addr=0x6881, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x6880, .value=0xcd, .type=IO_READ},
        {.addr=0x6881, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xe3d1, .a=0x6c, .x=0xdc, .y=0x4d, .sp=0xfd, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d1, .value=0xcd}, {.addr=0xe3d2, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe3d3, .a=0x6c, .x=0xd2, .y=0x4d, .sp=0xfd, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe3d1, .value=0xcd}, {.addr=0xe3d2, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe3d1, .value=0xcd, .type=IO_READ},
        {.addr=0xe3d2, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xe99c, .a=0x36, .x=0x7b, .y=0x1a, .sp=0x85, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xe99c, .value=0xcd}, {.addr=0xe99d, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xe99e, .a=0x36, .x=0x24, .y=0x1a, .sp=0x85, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe99c, .value=0xcd}, {.addr=0xe99d, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xe99c, .value=0xcd, .type=IO_READ},
        {.addr=0xe99d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x82cd, .a=0x41, .x=0x34, .y=0xb8, .sp=0xdc, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x82cd, .value=0xcd}, {.addr=0x82ce, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x82cf, .a=0x41, .x=0x3a, .y=0xb8, .sp=0xdc, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x82cd, .value=0xcd}, {.addr=0x82ce, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x82cd, .value=0xcd, .type=IO_READ},
        {.addr=0x82ce, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x9ad7, .a=0x4a, .x=0x89, .y=0x64, .sp=0xa0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad7, .value=0xcd}, {.addr=0x9ad8, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x9ad9, .a=0x4a, .x=0x77, .y=0x64, .sp=0xa0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9ad7, .value=0xcd}, {.addr=0x9ad8, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x9ad7, .value=0xcd, .type=IO_READ},
        {.addr=0x9ad8, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x5bb9, .a=0x5e, .x=0xc4, .y=0x5c, .sp=0xf8, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb9, .value=0xcd}, {.addr=0x5bba, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5bbb, .a=0x5e, .x=0x22, .y=0x5c, .sp=0xf8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5bb9, .value=0xcd}, {.addr=0x5bba, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5bb9, .value=0xcd, .type=IO_READ},
        {.addr=0x5bba, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb33d, .a=0x2c, .x=0xad, .y=0x03, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xb33d, .value=0xcd}, {.addr=0xb33e, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb33f, .a=0x2c, .x=0x9e, .y=0x03, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb33d, .value=0xcd}, {.addr=0xb33e, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb33d, .value=0xcd, .type=IO_READ},
        {.addr=0xb33e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x8f99, .a=0x24, .x=0xf3, .y=0x0e, .sp=0x87, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8f99, .value=0xcd}, {.addr=0x8f9a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x8f9b, .a=0x24, .x=0x82, .y=0x0e, .sp=0x87, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8f99, .value=0xcd}, {.addr=0x8f9a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x8f99, .value=0xcd, .type=IO_READ},
        {.addr=0x8f9a, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x722b, .a=0xec, .x=0xc3, .y=0x8b, .sp=0x83, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x722b, .value=0xcd}, {.addr=0x722c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x722d, .a=0xec, .x=0xc0, .y=0x8b, .sp=0x83, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x722b, .value=0xcd}, {.addr=0x722c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x722b, .value=0xcd, .type=IO_READ},
        {.addr=0x722c, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xb533, .a=0xe2, .x=0x35, .y=0xe0, .sp=0x2c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb533, .value=0xcd}, {.addr=0xb534, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xb535, .a=0xe2, .x=0x38, .y=0xe0, .sp=0x2c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb533, .value=0xcd}, {.addr=0xb534, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xb533, .value=0xcd, .type=IO_READ},
        {.addr=0xb534, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x2d97, .a=0x1c, .x=0x11, .y=0x11, .sp=0x00, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2d97, .value=0xcd}, {.addr=0x2d98, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x2d99, .a=0x1c, .x=0x25, .y=0x11, .sp=0x00, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2d97, .value=0xcd}, {.addr=0x2d98, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x2d97, .value=0xcd, .type=IO_READ},
        {.addr=0x2d98, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x07d0, .a=0xab, .x=0xc0, .y=0x91, .sp=0x87, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x07d0, .value=0xcd}, {.addr=0x07d1, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x07d2, .a=0xab, .x=0x7b, .y=0x91, .sp=0x87, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x07d0, .value=0xcd}, {.addr=0x07d1, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x07d0, .value=0xcd, .type=IO_READ},
        {.addr=0x07d1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x45ce, .a=0x91, .x=0xe6, .y=0x12, .sp=0xda, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x45ce, .value=0xcd}, {.addr=0x45cf, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x45d0, .a=0x91, .x=0xdb, .y=0x12, .sp=0xda, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x45ce, .value=0xcd}, {.addr=0x45cf, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x45ce, .value=0xcd, .type=IO_READ},
        {.addr=0x45cf, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x7330, .a=0x70, .x=0x46, .y=0x63, .sp=0x32, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7330, .value=0xcd}, {.addr=0x7331, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7332, .a=0x70, .x=0xf4, .y=0x63, .sp=0x32, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7330, .value=0xcd}, {.addr=0x7331, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x7330, .value=0xcd, .type=IO_READ},
        {.addr=0x7331, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x2459, .a=0xc8, .x=0x51, .y=0x4e, .sp=0xa5, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2459, .value=0xcd}, {.addr=0x245a, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x245b, .a=0xc8, .x=0xb1, .y=0x4e, .sp=0xa5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2459, .value=0xcd}, {.addr=0x245a, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2459, .value=0xcd, .type=IO_READ},
        {.addr=0x245a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xbf83, .a=0x9f, .x=0x53, .y=0xfc, .sp=0x09, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xbf83, .value=0xcd}, {.addr=0xbf84, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xbf85, .a=0x9f, .x=0xc1, .y=0xfc, .sp=0x09, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbf83, .value=0xcd}, {.addr=0xbf84, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xbf83, .value=0xcd, .type=IO_READ},
        {.addr=0xbf84, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x60a1, .a=0x19, .x=0x81, .y=0x97, .sp=0x59, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x60a1, .value=0xcd}, {.addr=0x60a2, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x60a3, .a=0x19, .x=0x4c, .y=0x97, .sp=0x59, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x60a1, .value=0xcd}, {.addr=0x60a2, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x60a1, .value=0xcd, .type=IO_READ},
        {.addr=0x60a2, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x784e, .a=0x33, .x=0xe7, .y=0x67, .sp=0xfa, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x784e, .value=0xcd}, {.addr=0x784f, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x7850, .a=0x33, .x=0xb8, .y=0x67, .sp=0xfa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x784e, .value=0xcd}, {.addr=0x784f, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x784e, .value=0xcd, .type=IO_READ},
        {.addr=0x784f, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xb438, .a=0xd1, .x=0x8a, .y=0x5b, .sp=0x81, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb438, .value=0xcd}, {.addr=0xb439, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xb43a, .a=0xd1, .x=0x7f, .y=0x5b, .sp=0x81, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb438, .value=0xcd}, {.addr=0xb439, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xb438, .value=0xcd, .type=IO_READ},
        {.addr=0xb439, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xa464, .a=0x78, .x=0xa9, .y=0x81, .sp=0xfa, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa464, .value=0xcd}, {.addr=0xa465, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa466, .a=0x78, .x=0xb5, .y=0x81, .sp=0xfa, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa464, .value=0xcd}, {.addr=0xa465, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa464, .value=0xcd, .type=IO_READ},
        {.addr=0xa465, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa49f, .a=0xce, .x=0x15, .y=0xac, .sp=0x57, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xa49f, .value=0xcd}, {.addr=0xa4a0, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa4a1, .a=0xce, .x=0x48, .y=0xac, .sp=0x57, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa49f, .value=0xcd}, {.addr=0xa4a0, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa49f, .value=0xcd, .type=IO_READ},
        {.addr=0xa4a0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xc256, .a=0x65, .x=0x7c, .y=0x4b, .sp=0x21, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc256, .value=0xcd}, {.addr=0xc257, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc258, .a=0x65, .x=0x3f, .y=0x4b, .sp=0x21, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc256, .value=0xcd}, {.addr=0xc257, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc256, .value=0xcd, .type=IO_READ},
        {.addr=0xc257, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xa431, .a=0x33, .x=0x66, .y=0x29, .sp=0xb1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa431, .value=0xcd}, {.addr=0xa432, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa433, .a=0x33, .x=0x26, .y=0x29, .sp=0xb1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa431, .value=0xcd}, {.addr=0xa432, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa431, .value=0xcd, .type=IO_READ},
        {.addr=0xa432, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x82da, .a=0x80, .x=0x92, .y=0x66, .sp=0xfd, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x82da, .value=0xcd}, {.addr=0x82db, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x82dc, .a=0x80, .x=0x61, .y=0x66, .sp=0xfd, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x82da, .value=0xcd}, {.addr=0x82db, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x82da, .value=0xcd, .type=IO_READ},
        {.addr=0x82db, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x772e, .a=0xcd, .x=0x5a, .y=0x1a, .sp=0xa7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x772e, .value=0xcd}, {.addr=0x772f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x7730, .a=0xcd, .x=0x4a, .y=0x1a, .sp=0xa7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x772e, .value=0xcd}, {.addr=0x772f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x772e, .value=0xcd, .type=IO_READ},
        {.addr=0x772f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xf75c, .a=0xcf, .x=0xc4, .y=0xff, .sp=0x2a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf75c, .value=0xcd}, {.addr=0xf75d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf75e, .a=0xcf, .x=0xb7, .y=0xff, .sp=0x2a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf75c, .value=0xcd}, {.addr=0xf75d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf75c, .value=0xcd, .type=IO_READ},
        {.addr=0xf75d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x83e4, .a=0xd5, .x=0x76, .y=0xf3, .sp=0xe0, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x83e4, .value=0xcd}, {.addr=0x83e5, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x83e6, .a=0xd5, .x=0x1a, .y=0xf3, .sp=0xe0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x83e4, .value=0xcd}, {.addr=0x83e5, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x83e4, .value=0xcd, .type=IO_READ},
        {.addr=0x83e5, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xf2d8, .a=0xc8, .x=0xa9, .y=0x79, .sp=0x96, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d8, .value=0xcd}, {.addr=0xf2d9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf2da, .a=0xc8, .x=0xae, .y=0x79, .sp=0x96, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf2d8, .value=0xcd}, {.addr=0xf2d9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf2d8, .value=0xcd, .type=IO_READ},
        {.addr=0xf2d9, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6458, .a=0x69, .x=0x47, .y=0xd8, .sp=0xc1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6458, .value=0xcd}, {.addr=0x6459, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x645a, .a=0x69, .x=0x10, .y=0xd8, .sp=0xc1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6458, .value=0xcd}, {.addr=0x6459, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6458, .value=0xcd, .type=IO_READ},
        {.addr=0x6459, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6da9, .a=0x5e, .x=0xcc, .y=0xd7, .sp=0xbb, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6da9, .value=0xcd}, {.addr=0x6daa, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x6dab, .a=0x5e, .x=0xf7, .y=0xd7, .sp=0xbb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6da9, .value=0xcd}, {.addr=0x6daa, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x6da9, .value=0xcd, .type=IO_READ},
        {.addr=0x6daa, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x95e4, .a=0x2e, .x=0xfe, .y=0x31, .sp=0x4c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x95e4, .value=0xcd}, {.addr=0x95e5, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x95e6, .a=0x2e, .x=0x6e, .y=0x31, .sp=0x4c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x95e4, .value=0xcd}, {.addr=0x95e5, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x95e4, .value=0xcd, .type=IO_READ},
        {.addr=0x95e5, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xeb22, .a=0x9a, .x=0x67, .y=0x26, .sp=0x32, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xeb22, .value=0xcd}, {.addr=0xeb23, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xeb24, .a=0x9a, .x=0x38, .y=0x26, .sp=0x32, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xeb22, .value=0xcd}, {.addr=0xeb23, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xeb22, .value=0xcd, .type=IO_READ},
        {.addr=0xeb23, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x017b, .a=0x80, .x=0x5a, .y=0xf1, .sp=0x64, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xcd}, {.addr=0x017c, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x017d, .a=0x80, .x=0xec, .y=0xf1, .sp=0x64, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xcd}, {.addr=0x017c, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x017b, .value=0xcd, .type=IO_READ},
        {.addr=0x017c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xef47, .a=0xd1, .x=0x61, .y=0x19, .sp=0xf6, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xef47, .value=0xcd}, {.addr=0xef48, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xef49, .a=0xd1, .x=0x8c, .y=0x19, .sp=0xf6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xef47, .value=0xcd}, {.addr=0xef48, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xef47, .value=0xcd, .type=IO_READ},
        {.addr=0xef48, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xab3c, .a=0x10, .x=0x5e, .y=0x7c, .sp=0x28, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xab3c, .value=0xcd}, {.addr=0xab3d, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xab3e, .a=0x10, .x=0x04, .y=0x7c, .sp=0x28, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xab3c, .value=0xcd}, {.addr=0xab3d, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xab3c, .value=0xcd, .type=IO_READ},
        {.addr=0xab3d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x7c6e, .a=0xce, .x=0xc1, .y=0x52, .sp=0x66, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6e, .value=0xcd}, {.addr=0x7c6f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7c70, .a=0xce, .x=0xba, .y=0x52, .sp=0x66, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7c6e, .value=0xcd}, {.addr=0x7c6f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x7c6e, .value=0xcd, .type=IO_READ},
        {.addr=0x7c6f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x2f11, .a=0x58, .x=0xf6, .y=0xb1, .sp=0xeb, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2f11, .value=0xcd}, {.addr=0x2f12, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x2f13, .a=0x58, .x=0xe3, .y=0xb1, .sp=0xeb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2f11, .value=0xcd}, {.addr=0x2f12, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x2f11, .value=0xcd, .type=IO_READ},
        {.addr=0x2f12, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x8df7, .a=0xab, .x=0x23, .y=0x20, .sp=0xa7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8df7, .value=0xcd}, {.addr=0x8df8, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x8df9, .a=0xab, .x=0x09, .y=0x20, .sp=0xa7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8df7, .value=0xcd}, {.addr=0x8df8, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x8df7, .value=0xcd, .type=IO_READ},
        {.addr=0x8df8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x95fa, .a=0x54, .x=0xd4, .y=0x6f, .sp=0x4e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x95fa, .value=0xcd}, {.addr=0x95fb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x95fc, .a=0x54, .x=0xae, .y=0x6f, .sp=0x4e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x95fa, .value=0xcd}, {.addr=0x95fb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x95fa, .value=0xcd, .type=IO_READ},
        {.addr=0x95fb, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xd056, .a=0x90, .x=0xcf, .y=0xb8, .sp=0xa1, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd056, .value=0xcd}, {.addr=0xd057, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xd058, .a=0x90, .x=0x90, .y=0xb8, .sp=0xa1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd056, .value=0xcd}, {.addr=0xd057, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xd056, .value=0xcd, .type=IO_READ},
        {.addr=0xd057, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x67ad, .a=0xdb, .x=0xee, .y=0x12, .sp=0xb8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x67ad, .value=0xcd}, {.addr=0x67ae, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x67af, .a=0xdb, .x=0x6b, .y=0x12, .sp=0xb8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x67ad, .value=0xcd}, {.addr=0x67ae, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x67ad, .value=0xcd, .type=IO_READ},
        {.addr=0x67ae, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xdadf, .a=0xea, .x=0xbb, .y=0x32, .sp=0x5b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xdadf, .value=0xcd}, {.addr=0xdae0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdae1, .a=0xea, .x=0x20, .y=0x32, .sp=0x5b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xdadf, .value=0xcd}, {.addr=0xdae0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdadf, .value=0xcd, .type=IO_READ},
        {.addr=0xdae0, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7e23, .a=0x3a, .x=0xc9, .y=0x38, .sp=0x7f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7e23, .value=0xcd}, {.addr=0x7e24, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x7e25, .a=0x3a, .x=0x28, .y=0x38, .sp=0x7f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7e23, .value=0xcd}, {.addr=0x7e24, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x7e23, .value=0xcd, .type=IO_READ},
        {.addr=0x7e24, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x4fa5, .a=0xdd, .x=0x42, .y=0xcd, .sp=0x61, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa5, .value=0xcd}, {.addr=0x4fa6, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4fa7, .a=0xdd, .x=0x18, .y=0xcd, .sp=0x61, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4fa5, .value=0xcd}, {.addr=0x4fa6, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4fa5, .value=0xcd, .type=IO_READ},
        {.addr=0x4fa6, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc7ba, .a=0xee, .x=0x4e, .y=0x28, .sp=0x60, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ba, .value=0xcd}, {.addr=0xc7bb, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc7bc, .a=0xee, .x=0x97, .y=0x28, .sp=0x60, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc7ba, .value=0xcd}, {.addr=0xc7bb, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc7ba, .value=0xcd, .type=IO_READ},
        {.addr=0xc7bb, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x2971, .a=0x7f, .x=0x66, .y=0xbb, .sp=0x07, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2971, .value=0xcd}, {.addr=0x2972, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x2973, .a=0x7f, .x=0x8d, .y=0xbb, .sp=0x07, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2971, .value=0xcd}, {.addr=0x2972, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x2971, .value=0xcd, .type=IO_READ},
        {.addr=0x2972, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CD, _CD_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xa010, .a=0x04, .x=0x23, .y=0xec, .sp=0x2a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa010, .value=0xcd}, {.addr=0xa011, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xa012, .a=0x04, .x=0x07, .y=0xec, .sp=0x2a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa010, .value=0xcd}, {.addr=0xa011, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xa010, .value=0xcd, .type=IO_READ},
        {.addr=0xa011, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CD 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
