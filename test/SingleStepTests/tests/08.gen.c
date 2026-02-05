#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_08, _08_0000) {
    const struct CPU_State initial_cpu = {.pc=0x1edf, .a=0x72, .x=0x91, .y=0x18, .sp=0x43, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1edf, .value=0x08}, {.addr=0x1ee0, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x1ee1, .a=0xf6, .x=0x91, .y=0x18, .sp=0x43, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1edf, .value=0x08}, {.addr=0x1ee0, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x1edf, .value=0x08, .type=IO_READ},
        {.addr=0x1ee0, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0001) {
    const struct CPU_State initial_cpu = {.pc=0x71e7, .a=0x9b, .x=0x16, .y=0x34, .sp=0x25, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x71e7, .value=0x08}, {.addr=0x71e8, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x71e9, .a=0xff, .x=0x16, .y=0x34, .sp=0x25, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x71e7, .value=0x08}, {.addr=0x71e8, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x71e7, .value=0x08, .type=IO_READ},
        {.addr=0x71e8, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0002) {
    const struct CPU_State initial_cpu = {.pc=0xcd70, .a=0x8f, .x=0xaf, .y=0x48, .sp=0x6e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xcd70, .value=0x08}, {.addr=0xcd71, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xcd72, .a=0xdf, .x=0xaf, .y=0x48, .sp=0x6e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xcd70, .value=0x08}, {.addr=0xcd71, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xcd70, .value=0x08, .type=IO_READ},
        {.addr=0xcd71, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0003) {
    const struct CPU_State initial_cpu = {.pc=0x7725, .a=0x89, .x=0xbe, .y=0xe7, .sp=0xca, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7725, .value=0x08}, {.addr=0x7726, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7727, .a=0x8f, .x=0xbe, .y=0xe7, .sp=0xca, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7725, .value=0x08}, {.addr=0x7726, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7725, .value=0x08, .type=IO_READ},
        {.addr=0x7726, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0004) {
    const struct CPU_State initial_cpu = {.pc=0x3e06, .a=0xd5, .x=0x86, .y=0xcf, .sp=0x74, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3e06, .value=0x08}, {.addr=0x3e07, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3e08, .a=0xff, .x=0x86, .y=0xcf, .sp=0x74, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3e06, .value=0x08}, {.addr=0x3e07, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3e06, .value=0x08, .type=IO_READ},
        {.addr=0x3e07, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0546, .a=0x6e, .x=0x12, .y=0xf0, .sp=0x88, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0546, .value=0x08}, {.addr=0x0547, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x0548, .a=0x6e, .x=0x12, .y=0xf0, .sp=0x88, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0546, .value=0x08}, {.addr=0x0547, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x0546, .value=0x08, .type=IO_READ},
        {.addr=0x0547, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0006) {
    const struct CPU_State initial_cpu = {.pc=0xe6be, .a=0x08, .x=0x8f, .y=0xea, .sp=0xeb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe6be, .value=0x08}, {.addr=0xe6bf, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xe6c0, .a=0xf8, .x=0x8f, .y=0xea, .sp=0xeb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe6be, .value=0x08}, {.addr=0xe6bf, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xe6be, .value=0x08, .type=IO_READ},
        {.addr=0xe6bf, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0007) {
    const struct CPU_State initial_cpu = {.pc=0x9c7b, .a=0x16, .x=0x04, .y=0xda, .sp=0x8e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9c7b, .value=0x08}, {.addr=0x9c7c, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x9c7d, .a=0xbe, .x=0x04, .y=0xda, .sp=0x8e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9c7b, .value=0x08}, {.addr=0x9c7c, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x9c7b, .value=0x08, .type=IO_READ},
        {.addr=0x9c7c, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0008) {
    const struct CPU_State initial_cpu = {.pc=0x4ddf, .a=0xbc, .x=0x1e, .y=0xf4, .sp=0xc7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4ddf, .value=0x08}, {.addr=0x4de0, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x4de1, .a=0xfe, .x=0x1e, .y=0xf4, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4ddf, .value=0x08}, {.addr=0x4de0, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x4ddf, .value=0x08, .type=IO_READ},
        {.addr=0x4de0, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0009) {
    const struct CPU_State initial_cpu = {.pc=0xa768, .a=0x2c, .x=0xf6, .y=0xc3, .sp=0xf2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa768, .value=0x08}, {.addr=0xa769, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa76a, .a=0xee, .x=0xf6, .y=0xc3, .sp=0xf2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa768, .value=0x08}, {.addr=0xa769, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa768, .value=0x08, .type=IO_READ},
        {.addr=0xa769, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000A) {
    const struct CPU_State initial_cpu = {.pc=0x63cd, .a=0xc7, .x=0x46, .y=0x76, .sp=0x67, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x63cd, .value=0x08}, {.addr=0x63ce, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x63cf, .a=0xef, .x=0x46, .y=0x76, .sp=0x67, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x63cd, .value=0x08}, {.addr=0x63ce, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x63cd, .value=0x08, .type=IO_READ},
        {.addr=0x63ce, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000B) {
    const struct CPU_State initial_cpu = {.pc=0x490e, .a=0xfc, .x=0xb1, .y=0x2e, .sp=0xaf, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x490e, .value=0x08}, {.addr=0x490f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4910, .a=0xfc, .x=0xb1, .y=0x2e, .sp=0xaf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x490e, .value=0x08}, {.addr=0x490f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x490e, .value=0x08, .type=IO_READ},
        {.addr=0x490f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000C) {
    const struct CPU_State initial_cpu = {.pc=0xe4d2, .a=0x5d, .x=0xee, .y=0xf4, .sp=0x24, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d2, .value=0x08}, {.addr=0xe4d3, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xe4d4, .a=0x5d, .x=0xee, .y=0xf4, .sp=0x24, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe4d2, .value=0x08}, {.addr=0xe4d3, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xe4d2, .value=0x08, .type=IO_READ},
        {.addr=0xe4d3, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa137, .a=0xc2, .x=0xcc, .y=0x87, .sp=0x4e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa137, .value=0x08}, {.addr=0xa138, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xa139, .a=0xd7, .x=0xcc, .y=0x87, .sp=0x4e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa137, .value=0x08}, {.addr=0xa138, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xa137, .value=0x08, .type=IO_READ},
        {.addr=0xa138, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000E) {
    const struct CPU_State initial_cpu = {.pc=0x54ff, .a=0xd1, .x=0x5c, .y=0x62, .sp=0x21, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x54ff, .value=0x08}, {.addr=0x5500, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x5501, .a=0xd5, .x=0x5c, .y=0x62, .sp=0x21, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x54ff, .value=0x08}, {.addr=0x5500, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x54ff, .value=0x08, .type=IO_READ},
        {.addr=0x5500, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_000F) {
    const struct CPU_State initial_cpu = {.pc=0xc6ed, .a=0xb9, .x=0x74, .y=0xbb, .sp=0x1d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ed, .value=0x08}, {.addr=0xc6ee, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xc6ef, .a=0xf9, .x=0x74, .y=0xbb, .sp=0x1d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc6ed, .value=0x08}, {.addr=0xc6ee, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xc6ed, .value=0x08, .type=IO_READ},
        {.addr=0xc6ee, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0010) {
    const struct CPU_State initial_cpu = {.pc=0x3d1c, .a=0xfa, .x=0x3f, .y=0x90, .sp=0xb4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1c, .value=0x08}, {.addr=0x3d1d, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x3d1e, .a=0xff, .x=0x3f, .y=0x90, .sp=0xb4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3d1c, .value=0x08}, {.addr=0x3d1d, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x3d1c, .value=0x08, .type=IO_READ},
        {.addr=0x3d1d, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0011) {
    const struct CPU_State initial_cpu = {.pc=0x40f8, .a=0x2b, .x=0xc3, .y=0xb5, .sp=0xe2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x40f8, .value=0x08}, {.addr=0x40f9, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x40fa, .a=0x7b, .x=0xc3, .y=0xb5, .sp=0xe2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x40f8, .value=0x08}, {.addr=0x40f9, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x40f8, .value=0x08, .type=IO_READ},
        {.addr=0x40f9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0012) {
    const struct CPU_State initial_cpu = {.pc=0x900d, .a=0x4b, .x=0x6f, .y=0xf5, .sp=0x51, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x900d, .value=0x08}, {.addr=0x900e, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x900f, .a=0x7f, .x=0x6f, .y=0xf5, .sp=0x51, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x900d, .value=0x08}, {.addr=0x900e, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x900d, .value=0x08, .type=IO_READ},
        {.addr=0x900e, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0263, .a=0x52, .x=0xd2, .y=0xea, .sp=0x3f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0263, .value=0x08}, {.addr=0x0264, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0265, .a=0x73, .x=0xd2, .y=0xea, .sp=0x3f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0263, .value=0x08}, {.addr=0x0264, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0263, .value=0x08, .type=IO_READ},
        {.addr=0x0264, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0014) {
    const struct CPU_State initial_cpu = {.pc=0xc7d5, .a=0x6b, .x=0xf2, .y=0xc6, .sp=0xa8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d5, .value=0x08}, {.addr=0xc7d6, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0x6b, .x=0xf2, .y=0xc6, .sp=0xa8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc7d5, .value=0x08}, {.addr=0xc7d6, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc7d5, .value=0x08, .type=IO_READ},
        {.addr=0xc7d6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0015) {
    const struct CPU_State initial_cpu = {.pc=0x1a01, .a=0xce, .x=0x00, .y=0x95, .sp=0x11, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1a01, .value=0x08}, {.addr=0x1a02, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x1a03, .a=0xfe, .x=0x00, .y=0x95, .sp=0x11, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1a01, .value=0x08}, {.addr=0x1a02, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x1a01, .value=0x08, .type=IO_READ},
        {.addr=0x1a02, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0016) {
    const struct CPU_State initial_cpu = {.pc=0xfcef, .a=0x05, .x=0xa9, .y=0xa5, .sp=0x83, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfcef, .value=0x08}, {.addr=0xfcf0, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xfcf1, .a=0xf5, .x=0xa9, .y=0xa5, .sp=0x83, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xfcef, .value=0x08}, {.addr=0xfcf0, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xfcef, .value=0x08, .type=IO_READ},
        {.addr=0xfcf0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0017) {
    const struct CPU_State initial_cpu = {.pc=0x06c7, .a=0xa1, .x=0x21, .y=0x32, .sp=0xad, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x06c7, .value=0x08}, {.addr=0x06c8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x06c9, .a=0xbf, .x=0x21, .y=0x32, .sp=0xad, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x06c7, .value=0x08}, {.addr=0x06c8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x06c7, .value=0x08, .type=IO_READ},
        {.addr=0x06c8, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0018) {
    const struct CPU_State initial_cpu = {.pc=0x4c48, .a=0xb6, .x=0xa6, .y=0xa7, .sp=0x83, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x4c48, .value=0x08}, {.addr=0x4c49, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x4c4a, .a=0xff, .x=0xa6, .y=0xa7, .sp=0x83, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4c48, .value=0x08}, {.addr=0x4c49, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x4c48, .value=0x08, .type=IO_READ},
        {.addr=0x4c49, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0019) {
    const struct CPU_State initial_cpu = {.pc=0x6801, .a=0xf4, .x=0xee, .y=0x98, .sp=0xb8, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6801, .value=0x08}, {.addr=0x6802, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x6803, .a=0xf5, .x=0xee, .y=0x98, .sp=0xb8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6801, .value=0x08}, {.addr=0x6802, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x6801, .value=0x08, .type=IO_READ},
        {.addr=0x6802, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001A) {
    const struct CPU_State initial_cpu = {.pc=0x50f8, .a=0x94, .x=0x87, .y=0x0b, .sp=0x78, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x50f8, .value=0x08}, {.addr=0x50f9, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0xdf, .x=0x87, .y=0x0b, .sp=0x78, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x50f8, .value=0x08}, {.addr=0x50f9, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x50f8, .value=0x08, .type=IO_READ},
        {.addr=0x50f9, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001B) {
    const struct CPU_State initial_cpu = {.pc=0xa44c, .a=0xe4, .x=0x52, .y=0x83, .sp=0x43, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa44c, .value=0x08}, {.addr=0xa44d, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa44e, .a=0xf5, .x=0x52, .y=0x83, .sp=0x43, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa44c, .value=0x08}, {.addr=0xa44d, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa44c, .value=0x08, .type=IO_READ},
        {.addr=0xa44d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001C) {
    const struct CPU_State initial_cpu = {.pc=0x7c24, .a=0xae, .x=0xcc, .y=0x9c, .sp=0x3e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c24, .value=0x08}, {.addr=0x7c25, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x7c26, .a=0xbe, .x=0xcc, .y=0x9c, .sp=0x3e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7c24, .value=0x08}, {.addr=0x7c25, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x7c24, .value=0x08, .type=IO_READ},
        {.addr=0x7c25, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001D) {
    const struct CPU_State initial_cpu = {.pc=0x3aea, .a=0x0a, .x=0xff, .y=0xa6, .sp=0xed, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3aea, .value=0x08}, {.addr=0x3aeb, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x3aec, .a=0x7f, .x=0xff, .y=0xa6, .sp=0xed, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3aea, .value=0x08}, {.addr=0x3aeb, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x3aea, .value=0x08, .type=IO_READ},
        {.addr=0x3aeb, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001E) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0xd4, .x=0x2d, .y=0x08, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6965, .value=0x08}, {.addr=0x6966, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x6967, .a=0xf4, .x=0x2d, .y=0x08, .sp=0x1d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6965, .value=0x08}, {.addr=0x6966, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0x08, .type=IO_READ},
        {.addr=0x6966, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_001F) {
    const struct CPU_State initial_cpu = {.pc=0x085f, .a=0x44, .x=0xf1, .y=0x3e, .sp=0xc4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x085f, .value=0x08}, {.addr=0x0860, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x0861, .a=0x6e, .x=0xf1, .y=0x3e, .sp=0xc4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x085f, .value=0x08}, {.addr=0x0860, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x085f, .value=0x08, .type=IO_READ},
        {.addr=0x0860, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0020) {
    const struct CPU_State initial_cpu = {.pc=0x1545, .a=0xc2, .x=0xd2, .y=0xf6, .sp=0x1a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1545, .value=0x08}, {.addr=0x1546, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1547, .a=0xee, .x=0xd2, .y=0xf6, .sp=0x1a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1545, .value=0x08}, {.addr=0x1546, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1545, .value=0x08, .type=IO_READ},
        {.addr=0x1546, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0021) {
    const struct CPU_State initial_cpu = {.pc=0xc7b2, .a=0x45, .x=0x26, .y=0x8a, .sp=0x53, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b2, .value=0x08}, {.addr=0xc7b3, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc7b4, .a=0x7f, .x=0x26, .y=0x8a, .sp=0x53, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc7b2, .value=0x08}, {.addr=0xc7b3, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc7b2, .value=0x08, .type=IO_READ},
        {.addr=0xc7b3, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0022) {
    const struct CPU_State initial_cpu = {.pc=0x0f0f, .a=0x13, .x=0x28, .y=0xe1, .sp=0x88, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0f, .value=0x08}, {.addr=0x0f10, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0f11, .a=0x93, .x=0x28, .y=0xe1, .sp=0x88, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0f0f, .value=0x08}, {.addr=0x0f10, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0f0f, .value=0x08, .type=IO_READ},
        {.addr=0x0f10, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0023) {
    const struct CPU_State initial_cpu = {.pc=0x1e27, .a=0xf7, .x=0xed, .y=0xa6, .sp=0xc5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1e27, .value=0x08}, {.addr=0x1e28, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x1e29, .a=0xf7, .x=0xed, .y=0xa6, .sp=0xc5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1e27, .value=0x08}, {.addr=0x1e28, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x1e27, .value=0x08, .type=IO_READ},
        {.addr=0x1e28, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0024) {
    const struct CPU_State initial_cpu = {.pc=0xc060, .a=0x19, .x=0xb9, .y=0xaa, .sp=0x9d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc060, .value=0x08}, {.addr=0xc061, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc062, .a=0x5b, .x=0xb9, .y=0xaa, .sp=0x9d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc060, .value=0x08}, {.addr=0xc061, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc060, .value=0x08, .type=IO_READ},
        {.addr=0xc061, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0025) {
    const struct CPU_State initial_cpu = {.pc=0xe21c, .a=0xb7, .x=0x69, .y=0xcb, .sp=0x11, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe21c, .value=0x08}, {.addr=0xe21d, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xe21e, .a=0xff, .x=0x69, .y=0xcb, .sp=0x11, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe21c, .value=0x08}, {.addr=0xe21d, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xe21c, .value=0x08, .type=IO_READ},
        {.addr=0xe21d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0026) {
    const struct CPU_State initial_cpu = {.pc=0xd7ae, .a=0x03, .x=0x19, .y=0xdc, .sp=0x0c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ae, .value=0x08}, {.addr=0xd7af, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd7b0, .a=0x2b, .x=0x19, .y=0xdc, .sp=0x0c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd7ae, .value=0x08}, {.addr=0xd7af, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd7ae, .value=0x08, .type=IO_READ},
        {.addr=0xd7af, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0027) {
    const struct CPU_State initial_cpu = {.pc=0xae05, .a=0x03, .x=0x36, .y=0x37, .sp=0x30, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xae05, .value=0x08}, {.addr=0xae06, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae07, .a=0x23, .x=0x36, .y=0x37, .sp=0x30, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xae05, .value=0x08}, {.addr=0xae06, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae05, .value=0x08, .type=IO_READ},
        {.addr=0xae06, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0028) {
    const struct CPU_State initial_cpu = {.pc=0x985e, .a=0x0a, .x=0x83, .y=0x2a, .sp=0x0c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x985e, .value=0x08}, {.addr=0x985f, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x9860, .a=0xab, .x=0x83, .y=0x2a, .sp=0x0c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x985e, .value=0x08}, {.addr=0x985f, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x985e, .value=0x08, .type=IO_READ},
        {.addr=0x985f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc596, .a=0x08, .x=0x00, .y=0x22, .sp=0x10, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc596, .value=0x08}, {.addr=0xc597, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc598, .a=0x9f, .x=0x00, .y=0x22, .sp=0x10, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc596, .value=0x08}, {.addr=0xc597, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc596, .value=0x08, .type=IO_READ},
        {.addr=0xc597, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1ae3, .a=0x16, .x=0x6c, .y=0x39, .sp=0xbc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae3, .value=0x08}, {.addr=0x1ae4, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x1ae5, .a=0xb7, .x=0x6c, .y=0x39, .sp=0xbc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1ae3, .value=0x08}, {.addr=0x1ae4, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x1ae3, .value=0x08, .type=IO_READ},
        {.addr=0x1ae4, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9cec, .a=0xac, .x=0xac, .y=0xd1, .sp=0x87, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9cec, .value=0x08}, {.addr=0x9ced, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x9cee, .a=0xec, .x=0xac, .y=0xd1, .sp=0x87, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9cec, .value=0x08}, {.addr=0x9ced, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9cec, .value=0x08, .type=IO_READ},
        {.addr=0x9ced, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002C) {
    const struct CPU_State initial_cpu = {.pc=0xaa90, .a=0x07, .x=0x2e, .y=0xc1, .sp=0x53, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xaa90, .value=0x08}, {.addr=0xaa91, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xaa92, .a=0x9f, .x=0x2e, .y=0xc1, .sp=0x53, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xaa90, .value=0x08}, {.addr=0xaa91, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xaa90, .value=0x08, .type=IO_READ},
        {.addr=0xaa91, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002D) {
    const struct CPU_State initial_cpu = {.pc=0xb358, .a=0x8b, .x=0x2c, .y=0x12, .sp=0xb9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb358, .value=0x08}, {.addr=0xb359, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb35a, .a=0xcf, .x=0x2c, .y=0x12, .sp=0xb9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb358, .value=0x08}, {.addr=0xb359, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb358, .value=0x08, .type=IO_READ},
        {.addr=0xb359, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9b1c, .a=0x38, .x=0x20, .y=0x7a, .sp=0xf7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1c, .value=0x08}, {.addr=0x9b1d, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x9b1e, .a=0x7d, .x=0x20, .y=0x7a, .sp=0xf7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9b1c, .value=0x08}, {.addr=0x9b1d, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x9b1c, .value=0x08, .type=IO_READ},
        {.addr=0x9b1d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_002F) {
    const struct CPU_State initial_cpu = {.pc=0xdcb8, .a=0x1f, .x=0xe3, .y=0xba, .sp=0x93, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb8, .value=0x08}, {.addr=0xdcb9, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xdcba, .a=0x3f, .x=0xe3, .y=0xba, .sp=0x93, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdcb8, .value=0x08}, {.addr=0xdcb9, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xdcb8, .value=0x08, .type=IO_READ},
        {.addr=0xdcb9, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0030) {
    const struct CPU_State initial_cpu = {.pc=0x4974, .a=0x21, .x=0x21, .y=0x37, .sp=0x32, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4974, .value=0x08}, {.addr=0x4975, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x4976, .a=0x37, .x=0x21, .y=0x37, .sp=0x32, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4974, .value=0x08}, {.addr=0x4975, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x4974, .value=0x08, .type=IO_READ},
        {.addr=0x4975, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0031) {
    const struct CPU_State initial_cpu = {.pc=0xda66, .a=0xad, .x=0x79, .y=0xb5, .sp=0xa5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xda66, .value=0x08}, {.addr=0xda67, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xda68, .a=0xbf, .x=0x79, .y=0xb5, .sp=0xa5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xda66, .value=0x08}, {.addr=0xda67, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xda66, .value=0x08, .type=IO_READ},
        {.addr=0xda67, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0032) {
    const struct CPU_State initial_cpu = {.pc=0x9f56, .a=0xa8, .x=0x62, .y=0x6b, .sp=0xa3, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9f56, .value=0x08}, {.addr=0x9f57, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x9f58, .a=0xab, .x=0x62, .y=0x6b, .sp=0xa3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9f56, .value=0x08}, {.addr=0x9f57, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x9f56, .value=0x08, .type=IO_READ},
        {.addr=0x9f57, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0033) {
    const struct CPU_State initial_cpu = {.pc=0x65fe, .a=0x2b, .x=0x8b, .y=0x63, .sp=0x68, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x65fe, .value=0x08}, {.addr=0x65ff, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x6600, .a=0x7b, .x=0x8b, .y=0x63, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x65fe, .value=0x08}, {.addr=0x65ff, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x65fe, .value=0x08, .type=IO_READ},
        {.addr=0x65ff, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0034) {
    const struct CPU_State initial_cpu = {.pc=0x308e, .a=0x2a, .x=0x48, .y=0x6d, .sp=0xc3, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x308e, .value=0x08}, {.addr=0x308f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3090, .a=0xff, .x=0x48, .y=0x6d, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x308e, .value=0x08}, {.addr=0x308f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x308e, .value=0x08, .type=IO_READ},
        {.addr=0x308f, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0035) {
    const struct CPU_State initial_cpu = {.pc=0x5c24, .a=0xd3, .x=0x76, .y=0x0d, .sp=0x3e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5c24, .value=0x08}, {.addr=0x5c25, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x5c26, .a=0xff, .x=0x76, .y=0x0d, .sp=0x3e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5c24, .value=0x08}, {.addr=0x5c25, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x5c24, .value=0x08, .type=IO_READ},
        {.addr=0x5c25, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0036) {
    const struct CPU_State initial_cpu = {.pc=0x066b, .a=0x05, .x=0xc1, .y=0xc9, .sp=0x79, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x066b, .value=0x08}, {.addr=0x066c, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x066d, .a=0x15, .x=0xc1, .y=0xc9, .sp=0x79, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x066b, .value=0x08}, {.addr=0x066c, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x066b, .value=0x08, .type=IO_READ},
        {.addr=0x066c, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0037) {
    const struct CPU_State initial_cpu = {.pc=0x4918, .a=0x00, .x=0xa0, .y=0x47, .sp=0x5b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4918, .value=0x08}, {.addr=0x4919, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x491a, .a=0x41, .x=0xa0, .y=0x47, .sp=0x5b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4918, .value=0x08}, {.addr=0x4919, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x4918, .value=0x08, .type=IO_READ},
        {.addr=0x4919, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0038) {
    const struct CPU_State initial_cpu = {.pc=0x9c45, .a=0x2c, .x=0x43, .y=0x10, .sp=0x8b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9c45, .value=0x08}, {.addr=0x9c46, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9c47, .a=0xbc, .x=0x43, .y=0x10, .sp=0x8b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9c45, .value=0x08}, {.addr=0x9c46, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9c45, .value=0x08, .type=IO_READ},
        {.addr=0x9c46, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0039) {
    const struct CPU_State initial_cpu = {.pc=0x1692, .a=0x74, .x=0xe4, .y=0x7b, .sp=0x74, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1692, .value=0x08}, {.addr=0x1693, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x1694, .a=0x7c, .x=0xe4, .y=0x7b, .sp=0x74, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1692, .value=0x08}, {.addr=0x1693, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x1692, .value=0x08, .type=IO_READ},
        {.addr=0x1693, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003A) {
    const struct CPU_State initial_cpu = {.pc=0x9a6d, .a=0xb1, .x=0x05, .y=0x85, .sp=0x4a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9a6d, .value=0x08}, {.addr=0x9a6e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x9a6f, .a=0xf7, .x=0x05, .y=0x85, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9a6d, .value=0x08}, {.addr=0x9a6e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x9a6d, .value=0x08, .type=IO_READ},
        {.addr=0x9a6e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9d7e, .a=0x93, .x=0x78, .y=0x47, .sp=0xef, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9d7e, .value=0x08}, {.addr=0x9d7f, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x9d80, .a=0xb3, .x=0x78, .y=0x47, .sp=0xef, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9d7e, .value=0x08}, {.addr=0x9d7f, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x9d7e, .value=0x08, .type=IO_READ},
        {.addr=0x9d7f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003C) {
    const struct CPU_State initial_cpu = {.pc=0x9bd6, .a=0xf2, .x=0x3f, .y=0xd6, .sp=0x3a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd6, .value=0x08}, {.addr=0x9bd7, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x9bd8, .a=0xf6, .x=0x3f, .y=0xd6, .sp=0x3a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9bd6, .value=0x08}, {.addr=0x9bd7, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x9bd6, .value=0x08, .type=IO_READ},
        {.addr=0x9bd7, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003D) {
    const struct CPU_State initial_cpu = {.pc=0xc2a8, .a=0x0f, .x=0x4c, .y=0x32, .sp=0xdc, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a8, .value=0x08}, {.addr=0xc2a9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc2aa, .a=0x0f, .x=0x4c, .y=0x32, .sp=0xdc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc2a8, .value=0x08}, {.addr=0xc2a9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc2a8, .value=0x08, .type=IO_READ},
        {.addr=0xc2a9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003E) {
    const struct CPU_State initial_cpu = {.pc=0xfb5c, .a=0x3a, .x=0xab, .y=0x5a, .sp=0x36, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xfb5c, .value=0x08}, {.addr=0xfb5d, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xfb5e, .a=0x7f, .x=0xab, .y=0x5a, .sp=0x36, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfb5c, .value=0x08}, {.addr=0xfb5d, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xfb5c, .value=0x08, .type=IO_READ},
        {.addr=0xfb5d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_003F) {
    const struct CPU_State initial_cpu = {.pc=0x755b, .a=0xbf, .x=0x67, .y=0x45, .sp=0xb1, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x755b, .value=0x08}, {.addr=0x755c, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x755d, .a=0xff, .x=0x67, .y=0x45, .sp=0xb1, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x755b, .value=0x08}, {.addr=0x755c, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x755b, .value=0x08, .type=IO_READ},
        {.addr=0x755c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0040) {
    const struct CPU_State initial_cpu = {.pc=0xce1c, .a=0xbb, .x=0x48, .y=0x94, .sp=0x94, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xce1c, .value=0x08}, {.addr=0xce1d, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xce1e, .a=0xbf, .x=0x48, .y=0x94, .sp=0x94, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xce1c, .value=0x08}, {.addr=0xce1d, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xce1c, .value=0x08, .type=IO_READ},
        {.addr=0xce1d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0041) {
    const struct CPU_State initial_cpu = {.pc=0x5752, .a=0x35, .x=0x4f, .y=0xd4, .sp=0xe8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5752, .value=0x08}, {.addr=0x5753, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5754, .a=0x7d, .x=0x4f, .y=0xd4, .sp=0xe8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5752, .value=0x08}, {.addr=0x5753, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5752, .value=0x08, .type=IO_READ},
        {.addr=0x5753, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0042) {
    const struct CPU_State initial_cpu = {.pc=0x2b0e, .a=0x58, .x=0x87, .y=0x53, .sp=0xa4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0e, .value=0x08}, {.addr=0x2b0f, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x2b10, .a=0xda, .x=0x87, .y=0x53, .sp=0xa4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2b0e, .value=0x08}, {.addr=0x2b0f, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2b0e, .value=0x08, .type=IO_READ},
        {.addr=0x2b0f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0043) {
    const struct CPU_State initial_cpu = {.pc=0xe520, .a=0xec, .x=0x44, .y=0x90, .sp=0xfc, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xe520, .value=0x08}, {.addr=0xe521, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xe522, .a=0xfd, .x=0x44, .y=0x90, .sp=0xfc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe520, .value=0x08}, {.addr=0xe521, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xe520, .value=0x08, .type=IO_READ},
        {.addr=0xe521, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0044) {
    const struct CPU_State initial_cpu = {.pc=0xc642, .a=0xe6, .x=0x73, .y=0x47, .sp=0x19, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc642, .value=0x08}, {.addr=0xc643, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xc644, .a=0xef, .x=0x73, .y=0x47, .sp=0x19, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc642, .value=0x08}, {.addr=0xc643, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xc642, .value=0x08, .type=IO_READ},
        {.addr=0xc643, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0045) {
    const struct CPU_State initial_cpu = {.pc=0x8514, .a=0xe0, .x=0xb8, .y=0x6b, .sp=0x77, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8514, .value=0x08}, {.addr=0x8515, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x8516, .a=0xec, .x=0xb8, .y=0x6b, .sp=0x77, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8514, .value=0x08}, {.addr=0x8515, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x8514, .value=0x08, .type=IO_READ},
        {.addr=0x8515, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0046) {
    const struct CPU_State initial_cpu = {.pc=0x36f7, .a=0x94, .x=0x92, .y=0x8f, .sp=0x6c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x36f7, .value=0x08}, {.addr=0x36f8, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x36f9, .a=0xdd, .x=0x92, .y=0x8f, .sp=0x6c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x36f7, .value=0x08}, {.addr=0x36f8, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x36f7, .value=0x08, .type=IO_READ},
        {.addr=0x36f8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0047) {
    const struct CPU_State initial_cpu = {.pc=0xded6, .a=0x66, .x=0xdd, .y=0xdc, .sp=0x28, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xded6, .value=0x08}, {.addr=0xded7, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xded8, .a=0x7e, .x=0xdd, .y=0xdc, .sp=0x28, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xded6, .value=0x08}, {.addr=0xded7, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xded6, .value=0x08, .type=IO_READ},
        {.addr=0xded7, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd938, .a=0x2e, .x=0x59, .y=0x71, .sp=0xb9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd938, .value=0x08}, {.addr=0xd939, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xd93a, .a=0x3e, .x=0x59, .y=0x71, .sp=0xb9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd938, .value=0x08}, {.addr=0xd939, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xd938, .value=0x08, .type=IO_READ},
        {.addr=0xd939, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0049) {
    const struct CPU_State initial_cpu = {.pc=0xcee0, .a=0x7b, .x=0x3b, .y=0x6e, .sp=0x8f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xcee0, .value=0x08}, {.addr=0xcee1, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xcee2, .a=0x7b, .x=0x3b, .y=0x6e, .sp=0x8f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcee0, .value=0x08}, {.addr=0xcee1, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xcee0, .value=0x08, .type=IO_READ},
        {.addr=0xcee1, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004A) {
    const struct CPU_State initial_cpu = {.pc=0x2d01, .a=0xbc, .x=0xcb, .y=0x9e, .sp=0x49, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d01, .value=0x08}, {.addr=0x2d02, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x2d03, .a=0xbe, .x=0xcb, .y=0x9e, .sp=0x49, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2d01, .value=0x08}, {.addr=0x2d02, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x2d01, .value=0x08, .type=IO_READ},
        {.addr=0x2d02, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004B) {
    const struct CPU_State initial_cpu = {.pc=0x6f02, .a=0x42, .x=0x9c, .y=0x40, .sp=0xcd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6f02, .value=0x08}, {.addr=0x6f03, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6f04, .a=0xfb, .x=0x9c, .y=0x40, .sp=0xcd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6f02, .value=0x08}, {.addr=0x6f03, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x6f02, .value=0x08, .type=IO_READ},
        {.addr=0x6f03, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004C) {
    const struct CPU_State initial_cpu = {.pc=0x6140, .a=0x2d, .x=0x06, .y=0xba, .sp=0x44, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6140, .value=0x08}, {.addr=0x6141, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6142, .a=0x7f, .x=0x06, .y=0xba, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6140, .value=0x08}, {.addr=0x6141, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6140, .value=0x08, .type=IO_READ},
        {.addr=0x6141, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004D) {
    const struct CPU_State initial_cpu = {.pc=0x10fb, .a=0x5d, .x=0xd2, .y=0x3e, .sp=0x7c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x10fb, .value=0x08}, {.addr=0x10fc, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x10fd, .a=0xff, .x=0xd2, .y=0x3e, .sp=0x7c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x10fb, .value=0x08}, {.addr=0x10fc, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x10fb, .value=0x08, .type=IO_READ},
        {.addr=0x10fc, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004E) {
    const struct CPU_State initial_cpu = {.pc=0x1b64, .a=0x6a, .x=0xef, .y=0xb5, .sp=0x4f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1b64, .value=0x08}, {.addr=0x1b65, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x1b66, .a=0x6a, .x=0xef, .y=0xb5, .sp=0x4f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1b64, .value=0x08}, {.addr=0x1b65, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x1b64, .value=0x08, .type=IO_READ},
        {.addr=0x1b65, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_004F) {
    const struct CPU_State initial_cpu = {.pc=0xdde9, .a=0x8a, .x=0x33, .y=0xe0, .sp=0xc5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdde9, .value=0x08}, {.addr=0xddea, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xddeb, .a=0xeb, .x=0x33, .y=0xe0, .sp=0xc5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdde9, .value=0x08}, {.addr=0xddea, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xdde9, .value=0x08, .type=IO_READ},
        {.addr=0xddea, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0050) {
    const struct CPU_State initial_cpu = {.pc=0x998a, .a=0x10, .x=0x7d, .y=0x25, .sp=0x95, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x998a, .value=0x08}, {.addr=0x998b, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x998c, .a=0x39, .x=0x7d, .y=0x25, .sp=0x95, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x998a, .value=0x08}, {.addr=0x998b, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x998a, .value=0x08, .type=IO_READ},
        {.addr=0x998b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0051) {
    const struct CPU_State initial_cpu = {.pc=0xab61, .a=0x93, .x=0x7d, .y=0x0d, .sp=0xf4, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xab61, .value=0x08}, {.addr=0xab62, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xab63, .a=0xbb, .x=0x7d, .y=0x0d, .sp=0xf4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xab61, .value=0x08}, {.addr=0xab62, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xab61, .value=0x08, .type=IO_READ},
        {.addr=0xab62, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0052) {
    const struct CPU_State initial_cpu = {.pc=0xd215, .a=0x20, .x=0x17, .y=0x9b, .sp=0x00, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd215, .value=0x08}, {.addr=0xd216, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xd217, .a=0x7b, .x=0x17, .y=0x9b, .sp=0x00, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd215, .value=0x08}, {.addr=0xd216, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xd215, .value=0x08, .type=IO_READ},
        {.addr=0xd216, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0053) {
    const struct CPU_State initial_cpu = {.pc=0x0464, .a=0x61, .x=0xa6, .y=0x57, .sp=0xe3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0464, .value=0x08}, {.addr=0x0465, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x0466, .a=0xf9, .x=0xa6, .y=0x57, .sp=0xe3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0464, .value=0x08}, {.addr=0x0465, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x0464, .value=0x08, .type=IO_READ},
        {.addr=0x0465, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0054) {
    const struct CPU_State initial_cpu = {.pc=0xc099, .a=0xc5, .x=0x59, .y=0x8d, .sp=0x8b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc099, .value=0x08}, {.addr=0xc09a, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xc09b, .a=0xed, .x=0x59, .y=0x8d, .sp=0x8b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc099, .value=0x08}, {.addr=0xc09a, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xc099, .value=0x08, .type=IO_READ},
        {.addr=0xc09a, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0055) {
    const struct CPU_State initial_cpu = {.pc=0x52d2, .a=0x6e, .x=0x67, .y=0xf4, .sp=0xe8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x52d2, .value=0x08}, {.addr=0x52d3, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x52d4, .a=0xee, .x=0x67, .y=0xf4, .sp=0xe8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x52d2, .value=0x08}, {.addr=0x52d3, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x52d2, .value=0x08, .type=IO_READ},
        {.addr=0x52d3, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0056) {
    const struct CPU_State initial_cpu = {.pc=0x9f9a, .a=0x89, .x=0x6b, .y=0x4f, .sp=0x9f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9a, .value=0x08}, {.addr=0x9f9b, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x9f9c, .a=0xcf, .x=0x6b, .y=0x4f, .sp=0x9f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9f9a, .value=0x08}, {.addr=0x9f9b, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x9f9a, .value=0x08, .type=IO_READ},
        {.addr=0x9f9b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0057) {
    const struct CPU_State initial_cpu = {.pc=0xfd6e, .a=0x15, .x=0x44, .y=0xd4, .sp=0x65, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd6e, .value=0x08}, {.addr=0xfd6f, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xfd70, .a=0xd7, .x=0x44, .y=0xd4, .sp=0x65, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfd6e, .value=0x08}, {.addr=0xfd6f, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xfd6e, .value=0x08, .type=IO_READ},
        {.addr=0xfd6f, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0058) {
    const struct CPU_State initial_cpu = {.pc=0x1ede, .a=0x73, .x=0x89, .y=0x1c, .sp=0x98, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x1ede, .value=0x08}, {.addr=0x1edf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1ee0, .a=0x77, .x=0x89, .y=0x1c, .sp=0x98, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1ede, .value=0x08}, {.addr=0x1edf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1ede, .value=0x08, .type=IO_READ},
        {.addr=0x1edf, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0059) {
    const struct CPU_State initial_cpu = {.pc=0x692e, .a=0xb9, .x=0x82, .y=0xa5, .sp=0xfa, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x692e, .value=0x08}, {.addr=0x692f, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x6930, .a=0xff, .x=0x82, .y=0xa5, .sp=0xfa, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x692e, .value=0x08}, {.addr=0x692f, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x692e, .value=0x08, .type=IO_READ},
        {.addr=0x692f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005A) {
    const struct CPU_State initial_cpu = {.pc=0x8a40, .a=0xff, .x=0x61, .y=0xbc, .sp=0xf2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8a40, .value=0x08}, {.addr=0x8a41, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8a42, .a=0xff, .x=0x61, .y=0xbc, .sp=0xf2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8a40, .value=0x08}, {.addr=0x8a41, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8a40, .value=0x08, .type=IO_READ},
        {.addr=0x8a41, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005B) {
    const struct CPU_State initial_cpu = {.pc=0x67a7, .a=0x27, .x=0x19, .y=0xcb, .sp=0x4b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x67a7, .value=0x08}, {.addr=0x67a8, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x67a9, .a=0x3f, .x=0x19, .y=0xcb, .sp=0x4b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x67a7, .value=0x08}, {.addr=0x67a8, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x67a7, .value=0x08, .type=IO_READ},
        {.addr=0x67a8, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005C) {
    const struct CPU_State initial_cpu = {.pc=0x594a, .a=0xe3, .x=0xcb, .y=0xea, .sp=0x91, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x594a, .value=0x08}, {.addr=0x594b, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x594c, .a=0xf7, .x=0xcb, .y=0xea, .sp=0x91, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x594a, .value=0x08}, {.addr=0x594b, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x594a, .value=0x08, .type=IO_READ},
        {.addr=0x594b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005D) {
    const struct CPU_State initial_cpu = {.pc=0xaae8, .a=0x8b, .x=0xcb, .y=0x80, .sp=0x6e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xaae8, .value=0x08}, {.addr=0xaae9, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xaaea, .a=0xaf, .x=0xcb, .y=0x80, .sp=0x6e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xaae8, .value=0x08}, {.addr=0xaae9, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xaae8, .value=0x08, .type=IO_READ},
        {.addr=0xaae9, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005E) {
    const struct CPU_State initial_cpu = {.pc=0xefe0, .a=0x47, .x=0x55, .y=0x4e, .sp=0x50, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xefe0, .value=0x08}, {.addr=0xefe1, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xefe2, .a=0xd7, .x=0x55, .y=0x4e, .sp=0x50, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xefe0, .value=0x08}, {.addr=0xefe1, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xefe0, .value=0x08, .type=IO_READ},
        {.addr=0xefe1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_005F) {
    const struct CPU_State initial_cpu = {.pc=0xaa49, .a=0x92, .x=0x0a, .y=0x37, .sp=0xdd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xaa49, .value=0x08}, {.addr=0xaa4a, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xaa4b, .a=0xde, .x=0x0a, .y=0x37, .sp=0xdd, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xaa49, .value=0x08}, {.addr=0xaa4a, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xaa49, .value=0x08, .type=IO_READ},
        {.addr=0xaa4a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0060) {
    const struct CPU_State initial_cpu = {.pc=0x8ddf, .a=0x5b, .x=0xe7, .y=0x78, .sp=0x7e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8ddf, .value=0x08}, {.addr=0x8de0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8de1, .a=0xfb, .x=0xe7, .y=0x78, .sp=0x7e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8ddf, .value=0x08}, {.addr=0x8de0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8ddf, .value=0x08, .type=IO_READ},
        {.addr=0x8de0, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0061) {
    const struct CPU_State initial_cpu = {.pc=0x1233, .a=0x5e, .x=0x7e, .y=0x2f, .sp=0xde, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1233, .value=0x08}, {.addr=0x1234, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x1235, .a=0xfe, .x=0x7e, .y=0x2f, .sp=0xde, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1233, .value=0x08}, {.addr=0x1234, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x1233, .value=0x08, .type=IO_READ},
        {.addr=0x1234, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0062) {
    const struct CPU_State initial_cpu = {.pc=0x72d0, .a=0x66, .x=0xd4, .y=0xe7, .sp=0x54, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x72d0, .value=0x08}, {.addr=0x72d1, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x72d2, .a=0x77, .x=0xd4, .y=0xe7, .sp=0x54, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x72d0, .value=0x08}, {.addr=0x72d1, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x72d0, .value=0x08, .type=IO_READ},
        {.addr=0x72d1, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0063) {
    const struct CPU_State initial_cpu = {.pc=0xfd4c, .a=0xb3, .x=0xe0, .y=0x08, .sp=0x5d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xfd4c, .value=0x08}, {.addr=0xfd4d, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xfd4e, .a=0xb3, .x=0xe0, .y=0x08, .sp=0x5d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfd4c, .value=0x08}, {.addr=0xfd4d, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xfd4c, .value=0x08, .type=IO_READ},
        {.addr=0xfd4d, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0064) {
    const struct CPU_State initial_cpu = {.pc=0x60a9, .a=0xf2, .x=0x16, .y=0x6d, .sp=0xbb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x60a9, .value=0x08}, {.addr=0x60aa, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x60ab, .a=0xfb, .x=0x16, .y=0x6d, .sp=0xbb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x60a9, .value=0x08}, {.addr=0x60aa, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x60a9, .value=0x08, .type=IO_READ},
        {.addr=0x60aa, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0065) {
    const struct CPU_State initial_cpu = {.pc=0xd751, .a=0x84, .x=0xe6, .y=0x55, .sp=0xb3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd751, .value=0x08}, {.addr=0xd752, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xd753, .a=0x94, .x=0xe6, .y=0x55, .sp=0xb3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd751, .value=0x08}, {.addr=0xd752, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xd751, .value=0x08, .type=IO_READ},
        {.addr=0xd752, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0066) {
    const struct CPU_State initial_cpu = {.pc=0x989b, .a=0x21, .x=0x51, .y=0x40, .sp=0x49, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x989b, .value=0x08}, {.addr=0x989c, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x989d, .a=0xb3, .x=0x51, .y=0x40, .sp=0x49, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x989b, .value=0x08}, {.addr=0x989c, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x989b, .value=0x08, .type=IO_READ},
        {.addr=0x989c, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0067) {
    const struct CPU_State initial_cpu = {.pc=0x871e, .a=0xc6, .x=0x39, .y=0xb0, .sp=0x50, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x871e, .value=0x08}, {.addr=0x871f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8720, .a=0xee, .x=0x39, .y=0xb0, .sp=0x50, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x871e, .value=0x08}, {.addr=0x871f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x871e, .value=0x08, .type=IO_READ},
        {.addr=0x871f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd469, .a=0x0a, .x=0x51, .y=0x78, .sp=0xec, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd469, .value=0x08}, {.addr=0xd46a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xd46b, .a=0x8b, .x=0x51, .y=0x78, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd469, .value=0x08}, {.addr=0xd46a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xd469, .value=0x08, .type=IO_READ},
        {.addr=0xd46a, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0069) {
    const struct CPU_State initial_cpu = {.pc=0x9435, .a=0xf0, .x=0xa9, .y=0xa5, .sp=0x25, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9435, .value=0x08}, {.addr=0x9436, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x9437, .a=0xfb, .x=0xa9, .y=0xa5, .sp=0x25, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9435, .value=0x08}, {.addr=0x9436, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x9435, .value=0x08, .type=IO_READ},
        {.addr=0x9436, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2dde, .a=0x48, .x=0x33, .y=0x37, .sp=0x5c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2dde, .value=0x08}, {.addr=0x2ddf, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x2de0, .a=0x7f, .x=0x33, .y=0x37, .sp=0x5c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2dde, .value=0x08}, {.addr=0x2ddf, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x2dde, .value=0x08, .type=IO_READ},
        {.addr=0x2ddf, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006B) {
    const struct CPU_State initial_cpu = {.pc=0x4491, .a=0x71, .x=0xe7, .y=0x32, .sp=0x9e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4491, .value=0x08}, {.addr=0x4492, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x4493, .a=0xf3, .x=0xe7, .y=0x32, .sp=0x9e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4491, .value=0x08}, {.addr=0x4492, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x4491, .value=0x08, .type=IO_READ},
        {.addr=0x4492, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006C) {
    const struct CPU_State initial_cpu = {.pc=0xbb97, .a=0xc6, .x=0x4c, .y=0xf8, .sp=0xc6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xbb97, .value=0x08}, {.addr=0xbb98, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xbb99, .a=0xcf, .x=0x4c, .y=0xf8, .sp=0xc6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbb97, .value=0x08}, {.addr=0xbb98, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xbb97, .value=0x08, .type=IO_READ},
        {.addr=0xbb98, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006D) {
    const struct CPU_State initial_cpu = {.pc=0x734b, .a=0x77, .x=0x2b, .y=0x67, .sp=0xf6, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x734b, .value=0x08}, {.addr=0x734c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x734d, .a=0x77, .x=0x2b, .y=0x67, .sp=0xf6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x734b, .value=0x08}, {.addr=0x734c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x734b, .value=0x08, .type=IO_READ},
        {.addr=0x734c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006E) {
    const struct CPU_State initial_cpu = {.pc=0x2382, .a=0xb2, .x=0xd8, .y=0xd3, .sp=0x3f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2382, .value=0x08}, {.addr=0x2383, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x2384, .a=0xff, .x=0xd8, .y=0xd3, .sp=0x3f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2382, .value=0x08}, {.addr=0x2383, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x2382, .value=0x08, .type=IO_READ},
        {.addr=0x2383, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_006F) {
    const struct CPU_State initial_cpu = {.pc=0xe068, .a=0x9e, .x=0x12, .y=0xc9, .sp=0x22, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xe068, .value=0x08}, {.addr=0xe069, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xe06a, .a=0xff, .x=0x12, .y=0xc9, .sp=0x22, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe068, .value=0x08}, {.addr=0xe069, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xe068, .value=0x08, .type=IO_READ},
        {.addr=0xe069, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9464, .a=0x80, .x=0x63, .y=0x16, .sp=0x2c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9464, .value=0x08}, {.addr=0x9465, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x9466, .a=0xb3, .x=0x63, .y=0x16, .sp=0x2c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9464, .value=0x08}, {.addr=0x9465, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x9464, .value=0x08, .type=IO_READ},
        {.addr=0x9465, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf2cb, .a=0x11, .x=0x29, .y=0xef, .sp=0x16, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf2cb, .value=0x08}, {.addr=0xf2cc, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xf2cd, .a=0x13, .x=0x29, .y=0xef, .sp=0x16, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf2cb, .value=0x08}, {.addr=0xf2cc, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xf2cb, .value=0x08, .type=IO_READ},
        {.addr=0xf2cc, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0072) {
    const struct CPU_State initial_cpu = {.pc=0x3ee9, .a=0x27, .x=0x4b, .y=0x78, .sp=0x84, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x3ee9, .value=0x08}, {.addr=0x3eea, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3eeb, .a=0xef, .x=0x4b, .y=0x78, .sp=0x84, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x3ee9, .value=0x08}, {.addr=0x3eea, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3ee9, .value=0x08, .type=IO_READ},
        {.addr=0x3eea, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0073) {
    const struct CPU_State initial_cpu = {.pc=0x5986, .a=0xca, .x=0x45, .y=0x3f, .sp=0x21, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x5986, .value=0x08}, {.addr=0x5987, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5988, .a=0xca, .x=0x45, .y=0x3f, .sp=0x21, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5986, .value=0x08}, {.addr=0x5987, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5986, .value=0x08, .type=IO_READ},
        {.addr=0x5987, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0074) {
    const struct CPU_State initial_cpu = {.pc=0xfff1, .a=0x5d, .x=0xe8, .y=0xc6, .sp=0xf6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xfff1, .value=0x08}, {.addr=0xfff2, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xfff3, .a=0x5f, .x=0xe8, .y=0xc6, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xfff1, .value=0x08}, {.addr=0xfff2, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xfff1, .value=0x08, .type=IO_READ},
        {.addr=0xfff2, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0075) {
    const struct CPU_State initial_cpu = {.pc=0x3812, .a=0xfb, .x=0xca, .y=0x5e, .sp=0x1a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3812, .value=0x08}, {.addr=0x3813, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3814, .a=0xfb, .x=0xca, .y=0x5e, .sp=0x1a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3812, .value=0x08}, {.addr=0x3813, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3812, .value=0x08, .type=IO_READ},
        {.addr=0x3813, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0076) {
    const struct CPU_State initial_cpu = {.pc=0xc06a, .a=0x12, .x=0x88, .y=0x04, .sp=0x60, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc06a, .value=0x08}, {.addr=0xc06b, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xc06c, .a=0xdb, .x=0x88, .y=0x04, .sp=0x60, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc06a, .value=0x08}, {.addr=0xc06b, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xc06a, .value=0x08, .type=IO_READ},
        {.addr=0xc06b, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0077) {
    const struct CPU_State initial_cpu = {.pc=0x3368, .a=0xa4, .x=0xe8, .y=0xd0, .sp=0xa9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3368, .value=0x08}, {.addr=0x3369, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x336a, .a=0xb7, .x=0xe8, .y=0xd0, .sp=0xa9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3368, .value=0x08}, {.addr=0x3369, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x3368, .value=0x08, .type=IO_READ},
        {.addr=0x3369, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0078) {
    const struct CPU_State initial_cpu = {.pc=0xe6bd, .a=0xaa, .x=0x9a, .y=0x76, .sp=0xc4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe6bd, .value=0x08}, {.addr=0xe6be, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe6bf, .a=0xaa, .x=0x9a, .y=0x76, .sp=0xc4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe6bd, .value=0x08}, {.addr=0xe6be, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe6bd, .value=0x08, .type=IO_READ},
        {.addr=0xe6be, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0079) {
    const struct CPU_State initial_cpu = {.pc=0x785e, .a=0x7d, .x=0x6e, .y=0x2c, .sp=0xef, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x785e, .value=0x08}, {.addr=0x785f, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x7860, .a=0x7f, .x=0x6e, .y=0x2c, .sp=0xef, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x785e, .value=0x08}, {.addr=0x785f, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x785e, .value=0x08, .type=IO_READ},
        {.addr=0x785f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007A) {
    const struct CPU_State initial_cpu = {.pc=0xabe2, .a=0x39, .x=0x97, .y=0x7f, .sp=0x1a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xabe2, .value=0x08}, {.addr=0xabe3, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xabe4, .a=0x7f, .x=0x97, .y=0x7f, .sp=0x1a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xabe2, .value=0x08}, {.addr=0xabe3, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xabe2, .value=0x08, .type=IO_READ},
        {.addr=0xabe3, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007B) {
    const struct CPU_State initial_cpu = {.pc=0x321c, .a=0xb4, .x=0xd3, .y=0x29, .sp=0xc1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x321c, .value=0x08}, {.addr=0x321d, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x321e, .a=0xbd, .x=0xd3, .y=0x29, .sp=0xc1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x321c, .value=0x08}, {.addr=0x321d, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x321c, .value=0x08, .type=IO_READ},
        {.addr=0x321d, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007C) {
    const struct CPU_State initial_cpu = {.pc=0x3e7b, .a=0x3c, .x=0x13, .y=0x41, .sp=0xf4, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3e7b, .value=0x08}, {.addr=0x3e7c, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x3e7d, .a=0xbf, .x=0x13, .y=0x41, .sp=0xf4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3e7b, .value=0x08}, {.addr=0x3e7c, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x3e7b, .value=0x08, .type=IO_READ},
        {.addr=0x3e7c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007D) {
    const struct CPU_State initial_cpu = {.pc=0x32e8, .a=0x39, .x=0x52, .y=0x84, .sp=0x4d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x32e8, .value=0x08}, {.addr=0x32e9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x32ea, .a=0xb9, .x=0x52, .y=0x84, .sp=0x4d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x32e8, .value=0x08}, {.addr=0x32e9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x32e8, .value=0x08, .type=IO_READ},
        {.addr=0x32e9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007E) {
    const struct CPU_State initial_cpu = {.pc=0x7fd7, .a=0xba, .x=0xe5, .y=0x78, .sp=0x9c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd7, .value=0x08}, {.addr=0x7fd8, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7fd9, .a=0xff, .x=0xe5, .y=0x78, .sp=0x9c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7fd7, .value=0x08}, {.addr=0x7fd8, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7fd7, .value=0x08, .type=IO_READ},
        {.addr=0x7fd8, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_007F) {
    const struct CPU_State initial_cpu = {.pc=0xd6fb, .a=0xb0, .x=0x1f, .y=0x49, .sp=0xd5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fb, .value=0x08}, {.addr=0xd6fc, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xd6fd, .a=0xb3, .x=0x1f, .y=0x49, .sp=0xd5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd6fb, .value=0x08}, {.addr=0xd6fc, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xd6fb, .value=0x08, .type=IO_READ},
        {.addr=0xd6fc, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0080) {
    const struct CPU_State initial_cpu = {.pc=0xa4b2, .a=0x5a, .x=0xbd, .y=0x0e, .sp=0x2a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b2, .value=0x08}, {.addr=0xa4b3, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xa4b4, .a=0x5f, .x=0xbd, .y=0x0e, .sp=0x2a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa4b2, .value=0x08}, {.addr=0xa4b3, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xa4b2, .value=0x08, .type=IO_READ},
        {.addr=0xa4b3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0081) {
    const struct CPU_State initial_cpu = {.pc=0xf2ec, .a=0xe9, .x=0xc3, .y=0xae, .sp=0xbd, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ec, .value=0x08}, {.addr=0xf2ed, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xf2ee, .a=0xff, .x=0xc3, .y=0xae, .sp=0xbd, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf2ec, .value=0x08}, {.addr=0xf2ed, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xf2ec, .value=0x08, .type=IO_READ},
        {.addr=0xf2ed, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0082) {
    const struct CPU_State initial_cpu = {.pc=0x27c4, .a=0xeb, .x=0xb6, .y=0x84, .sp=0x56, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x27c4, .value=0x08}, {.addr=0x27c5, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x27c6, .a=0xeb, .x=0xb6, .y=0x84, .sp=0x56, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x27c4, .value=0x08}, {.addr=0x27c5, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x27c4, .value=0x08, .type=IO_READ},
        {.addr=0x27c5, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7519, .a=0x06, .x=0x53, .y=0xfd, .sp=0xf1, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7519, .value=0x08}, {.addr=0x751a, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x751b, .a=0x87, .x=0x53, .y=0xfd, .sp=0xf1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7519, .value=0x08}, {.addr=0x751a, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x7519, .value=0x08, .type=IO_READ},
        {.addr=0x751a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0084) {
    const struct CPU_State initial_cpu = {.pc=0x10b7, .a=0xf9, .x=0x88, .y=0x5d, .sp=0xc6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x10b7, .value=0x08}, {.addr=0x10b8, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x10b9, .a=0xfb, .x=0x88, .y=0x5d, .sp=0xc6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x10b7, .value=0x08}, {.addr=0x10b8, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x10b7, .value=0x08, .type=IO_READ},
        {.addr=0x10b8, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0085) {
    const struct CPU_State initial_cpu = {.pc=0x180e, .a=0x55, .x=0x6a, .y=0x80, .sp=0x0c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x180e, .value=0x08}, {.addr=0x180f, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x1810, .a=0xd5, .x=0x6a, .y=0x80, .sp=0x0c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x180e, .value=0x08}, {.addr=0x180f, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x180e, .value=0x08, .type=IO_READ},
        {.addr=0x180f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9a02, .a=0xff, .x=0xe0, .y=0x0b, .sp=0x6b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9a02, .value=0x08}, {.addr=0x9a03, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x9a04, .a=0xff, .x=0xe0, .y=0x0b, .sp=0x6b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9a02, .value=0x08}, {.addr=0x9a03, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x9a02, .value=0x08, .type=IO_READ},
        {.addr=0x9a03, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0087) {
    const struct CPU_State initial_cpu = {.pc=0xd920, .a=0xea, .x=0xb5, .y=0xc2, .sp=0x74, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd920, .value=0x08}, {.addr=0xd921, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xd922, .a=0xfb, .x=0xb5, .y=0xc2, .sp=0x74, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd920, .value=0x08}, {.addr=0xd921, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xd920, .value=0x08, .type=IO_READ},
        {.addr=0xd921, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0088) {
    const struct CPU_State initial_cpu = {.pc=0x5466, .a=0x22, .x=0xfd, .y=0x3b, .sp=0x7b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5466, .value=0x08}, {.addr=0x5467, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x5468, .a=0x27, .x=0xfd, .y=0x3b, .sp=0x7b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5466, .value=0x08}, {.addr=0x5467, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x5466, .value=0x08, .type=IO_READ},
        {.addr=0x5467, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe291, .a=0xe9, .x=0xf0, .y=0x93, .sp=0x58, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe291, .value=0x08}, {.addr=0xe292, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xe293, .a=0xeb, .x=0xf0, .y=0x93, .sp=0x58, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe291, .value=0x08}, {.addr=0xe292, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xe291, .value=0x08, .type=IO_READ},
        {.addr=0xe292, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008A) {
    const struct CPU_State initial_cpu = {.pc=0x1add, .a=0x0a, .x=0xe8, .y=0x01, .sp=0x87, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1add, .value=0x08}, {.addr=0x1ade, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x1adf, .a=0xcf, .x=0xe8, .y=0x01, .sp=0x87, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1add, .value=0x08}, {.addr=0x1ade, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x1add, .value=0x08, .type=IO_READ},
        {.addr=0x1ade, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008B) {
    const struct CPU_State initial_cpu = {.pc=0x55f5, .a=0xdf, .x=0xc7, .y=0x35, .sp=0x4c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x55f5, .value=0x08}, {.addr=0x55f6, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x55f7, .a=0xff, .x=0xc7, .y=0x35, .sp=0x4c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x55f5, .value=0x08}, {.addr=0x55f6, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x55f5, .value=0x08, .type=IO_READ},
        {.addr=0x55f6, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008C) {
    const struct CPU_State initial_cpu = {.pc=0xafe1, .a=0xd2, .x=0xaa, .y=0xe4, .sp=0x99, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xafe1, .value=0x08}, {.addr=0xafe2, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xafe3, .a=0xf7, .x=0xaa, .y=0xe4, .sp=0x99, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xafe1, .value=0x08}, {.addr=0xafe2, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xafe1, .value=0x08, .type=IO_READ},
        {.addr=0xafe2, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008D) {
    const struct CPU_State initial_cpu = {.pc=0xa580, .a=0xac, .x=0x60, .y=0x57, .sp=0x7f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa580, .value=0x08}, {.addr=0xa581, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xa582, .a=0xef, .x=0x60, .y=0x57, .sp=0x7f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa580, .value=0x08}, {.addr=0xa581, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xa580, .value=0x08, .type=IO_READ},
        {.addr=0xa581, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008E) {
    const struct CPU_State initial_cpu = {.pc=0x491e, .a=0xa0, .x=0x54, .y=0x50, .sp=0x07, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x491e, .value=0x08}, {.addr=0x491f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x4920, .a=0xe7, .x=0x54, .y=0x50, .sp=0x07, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x491e, .value=0x08}, {.addr=0x491f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x491e, .value=0x08, .type=IO_READ},
        {.addr=0x491f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_008F) {
    const struct CPU_State initial_cpu = {.pc=0x934c, .a=0x89, .x=0x50, .y=0x50, .sp=0x5d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x934c, .value=0x08}, {.addr=0x934d, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x934e, .a=0x9f, .x=0x50, .y=0x50, .sp=0x5d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x934c, .value=0x08}, {.addr=0x934d, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x934c, .value=0x08, .type=IO_READ},
        {.addr=0x934d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0090) {
    const struct CPU_State initial_cpu = {.pc=0x1e9c, .a=0xbc, .x=0x36, .y=0xd6, .sp=0x50, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9c, .value=0x08}, {.addr=0x1e9d, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x1e9e, .a=0xfe, .x=0x36, .y=0xd6, .sp=0x50, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1e9c, .value=0x08}, {.addr=0x1e9d, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x1e9c, .value=0x08, .type=IO_READ},
        {.addr=0x1e9d, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0091) {
    const struct CPU_State initial_cpu = {.pc=0x64ba, .a=0xdb, .x=0xd0, .y=0x14, .sp=0xc9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x64ba, .value=0x08}, {.addr=0x64bb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x64bc, .a=0xff, .x=0xd0, .y=0x14, .sp=0xc9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x64ba, .value=0x08}, {.addr=0x64bb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x64ba, .value=0x08, .type=IO_READ},
        {.addr=0x64bb, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0092) {
    const struct CPU_State initial_cpu = {.pc=0x9650, .a=0x4d, .x=0x59, .y=0xff, .sp=0xbc, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9650, .value=0x08}, {.addr=0x9651, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x9652, .a=0xdf, .x=0x59, .y=0xff, .sp=0xbc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9650, .value=0x08}, {.addr=0x9651, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9650, .value=0x08, .type=IO_READ},
        {.addr=0x9651, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0093) {
    const struct CPU_State initial_cpu = {.pc=0x6bc0, .a=0x7e, .x=0x8e, .y=0x51, .sp=0x48, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc0, .value=0x08}, {.addr=0x6bc1, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x6bc2, .a=0xff, .x=0x8e, .y=0x51, .sp=0x48, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6bc0, .value=0x08}, {.addr=0x6bc1, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x6bc0, .value=0x08, .type=IO_READ},
        {.addr=0x6bc1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0094) {
    const struct CPU_State initial_cpu = {.pc=0x28f7, .a=0xcc, .x=0x82, .y=0x7f, .sp=0xa4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x28f7, .value=0x08}, {.addr=0x28f8, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x28f9, .a=0xcd, .x=0x82, .y=0x7f, .sp=0xa4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x28f7, .value=0x08}, {.addr=0x28f8, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x28f7, .value=0x08, .type=IO_READ},
        {.addr=0x28f8, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc6c4, .a=0xae, .x=0xad, .y=0x4f, .sp=0xdb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc6c4, .value=0x08}, {.addr=0xc6c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc6c6, .a=0xae, .x=0xad, .y=0x4f, .sp=0xdb, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc6c4, .value=0x08}, {.addr=0xc6c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc6c4, .value=0x08, .type=IO_READ},
        {.addr=0xc6c5, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0096) {
    const struct CPU_State initial_cpu = {.pc=0x7bc9, .a=0x0c, .x=0x37, .y=0x7c, .sp=0x2b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc9, .value=0x08}, {.addr=0x7bca, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x7bcb, .a=0xfc, .x=0x37, .y=0x7c, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7bc9, .value=0x08}, {.addr=0x7bca, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x7bc9, .value=0x08, .type=IO_READ},
        {.addr=0x7bca, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6c72, .a=0x0b, .x=0xe7, .y=0xe8, .sp=0x88, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6c72, .value=0x08}, {.addr=0x6c73, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x6c74, .a=0xcb, .x=0xe7, .y=0xe8, .sp=0x88, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6c72, .value=0x08}, {.addr=0x6c73, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x6c72, .value=0x08, .type=IO_READ},
        {.addr=0x6c73, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0098) {
    const struct CPU_State initial_cpu = {.pc=0x1b17, .a=0xd0, .x=0xd7, .y=0xc5, .sp=0x3d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b17, .value=0x08}, {.addr=0x1b18, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x1b19, .a=0xf1, .x=0xd7, .y=0xc5, .sp=0x3d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1b17, .value=0x08}, {.addr=0x1b18, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x1b17, .value=0x08, .type=IO_READ},
        {.addr=0x1b18, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0099) {
    const struct CPU_State initial_cpu = {.pc=0xc0eb, .a=0x23, .x=0xdd, .y=0xc2, .sp=0xd7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc0eb, .value=0x08}, {.addr=0xc0ec, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xc0ed, .a=0x77, .x=0xdd, .y=0xc2, .sp=0xd7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc0eb, .value=0x08}, {.addr=0xc0ec, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xc0eb, .value=0x08, .type=IO_READ},
        {.addr=0xc0ec, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009A) {
    const struct CPU_State initial_cpu = {.pc=0xd3ab, .a=0xde, .x=0x1d, .y=0x6d, .sp=0x5a, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ab, .value=0x08}, {.addr=0xd3ac, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd3ad, .a=0xdf, .x=0x1d, .y=0x6d, .sp=0x5a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd3ab, .value=0x08}, {.addr=0xd3ac, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd3ab, .value=0x08, .type=IO_READ},
        {.addr=0xd3ac, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009B) {
    const struct CPU_State initial_cpu = {.pc=0xf65c, .a=0x30, .x=0xe3, .y=0x74, .sp=0xfd, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf65c, .value=0x08}, {.addr=0xf65d, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf65e, .a=0xf7, .x=0xe3, .y=0x74, .sp=0xfd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf65c, .value=0x08}, {.addr=0xf65d, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf65c, .value=0x08, .type=IO_READ},
        {.addr=0xf65d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009C) {
    const struct CPU_State initial_cpu = {.pc=0xd24c, .a=0x1d, .x=0x6a, .y=0x81, .sp=0xe6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xd24c, .value=0x08}, {.addr=0xd24d, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xd24e, .a=0xdd, .x=0x6a, .y=0x81, .sp=0xe6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd24c, .value=0x08}, {.addr=0xd24d, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xd24c, .value=0x08, .type=IO_READ},
        {.addr=0xd24d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009D) {
    const struct CPU_State initial_cpu = {.pc=0x1927, .a=0x51, .x=0x93, .y=0xa1, .sp=0x4f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1927, .value=0x08}, {.addr=0x1928, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1929, .a=0x55, .x=0x93, .y=0xa1, .sp=0x4f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1927, .value=0x08}, {.addr=0x1928, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1927, .value=0x08, .type=IO_READ},
        {.addr=0x1928, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009E) {
    const struct CPU_State initial_cpu = {.pc=0xd59c, .a=0x07, .x=0x4b, .y=0xe6, .sp=0x30, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd59c, .value=0x08}, {.addr=0xd59d, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd59e, .a=0xdf, .x=0x4b, .y=0xe6, .sp=0x30, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd59c, .value=0x08}, {.addr=0xd59d, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd59c, .value=0x08, .type=IO_READ},
        {.addr=0xd59d, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_009F) {
    const struct CPU_State initial_cpu = {.pc=0x2b17, .a=0x0e, .x=0x38, .y=0x93, .sp=0x23, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2b17, .value=0x08}, {.addr=0x2b18, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b19, .a=0x9e, .x=0x38, .y=0x93, .sp=0x23, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2b17, .value=0x08}, {.addr=0x2b18, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b17, .value=0x08, .type=IO_READ},
        {.addr=0x2b18, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xc164, .a=0xc8, .x=0x3e, .y=0x5e, .sp=0xea, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc164, .value=0x08}, {.addr=0xc165, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xc166, .a=0xfd, .x=0x3e, .y=0x5e, .sp=0xea, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc164, .value=0x08}, {.addr=0xc165, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xc164, .value=0x08, .type=IO_READ},
        {.addr=0xc165, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x2c5e, .a=0x5a, .x=0x5e, .y=0xb3, .sp=0x6e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5e, .value=0x08}, {.addr=0x2c5f, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x2c60, .a=0xdb, .x=0x5e, .y=0xb3, .sp=0x6e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2c5e, .value=0x08}, {.addr=0x2c5f, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x2c5e, .value=0x08, .type=IO_READ},
        {.addr=0x2c5f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xac01, .a=0x9d, .x=0xdd, .y=0x18, .sp=0x14, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xac01, .value=0x08}, {.addr=0xac02, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xac03, .a=0x9f, .x=0xdd, .y=0x18, .sp=0x14, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xac01, .value=0x08}, {.addr=0xac02, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xac01, .value=0x08, .type=IO_READ},
        {.addr=0xac02, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x2fc4, .a=0xb1, .x=0xcf, .y=0x0a, .sp=0x79, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc4, .value=0x08}, {.addr=0x2fc5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2fc6, .a=0xbf, .x=0xcf, .y=0x0a, .sp=0x79, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2fc4, .value=0x08}, {.addr=0x2fc5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2fc4, .value=0x08, .type=IO_READ},
        {.addr=0x2fc5, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x2a04, .a=0xef, .x=0x9a, .y=0xe6, .sp=0xd1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2a04, .value=0x08}, {.addr=0x2a05, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2a06, .a=0xef, .x=0x9a, .y=0xe6, .sp=0xd1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2a04, .value=0x08}, {.addr=0x2a05, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2a04, .value=0x08, .type=IO_READ},
        {.addr=0x2a05, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x8d15, .a=0x92, .x=0xb0, .y=0x79, .sp=0xab, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8d15, .value=0x08}, {.addr=0x8d16, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x8d17, .a=0xb6, .x=0xb0, .y=0x79, .sp=0xab, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8d15, .value=0x08}, {.addr=0x8d16, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x8d15, .value=0x08, .type=IO_READ},
        {.addr=0x8d16, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xdd48, .a=0x14, .x=0x2a, .y=0x98, .sp=0xc2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdd48, .value=0x08}, {.addr=0xdd49, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdd4a, .a=0xb4, .x=0x2a, .y=0x98, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdd48, .value=0x08}, {.addr=0xdd49, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdd48, .value=0x08, .type=IO_READ},
        {.addr=0xdd49, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x644f, .a=0x94, .x=0x37, .y=0x33, .sp=0x31, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x644f, .value=0x08}, {.addr=0x6450, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6451, .a=0x9e, .x=0x37, .y=0x33, .sp=0x31, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x644f, .value=0x08}, {.addr=0x6450, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x644f, .value=0x08, .type=IO_READ},
        {.addr=0x6450, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6099, .a=0x8c, .x=0x3c, .y=0x99, .sp=0x62, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6099, .value=0x08}, {.addr=0x609a, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x609b, .a=0xdc, .x=0x3c, .y=0x99, .sp=0x62, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6099, .value=0x08}, {.addr=0x609a, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x6099, .value=0x08, .type=IO_READ},
        {.addr=0x609a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x4e78, .a=0x7d, .x=0xe7, .y=0xdd, .sp=0x45, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4e78, .value=0x08}, {.addr=0x4e79, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x4e7a, .a=0x7d, .x=0xe7, .y=0xdd, .sp=0x45, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4e78, .value=0x08}, {.addr=0x4e79, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x4e78, .value=0x08, .type=IO_READ},
        {.addr=0x4e79, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x10f4, .a=0xf8, .x=0x1b, .y=0x89, .sp=0x46, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x10f4, .value=0x08}, {.addr=0x10f5, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x10f6, .a=0xfb, .x=0x1b, .y=0x89, .sp=0x46, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x10f4, .value=0x08}, {.addr=0x10f5, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x10f4, .value=0x08, .type=IO_READ},
        {.addr=0x10f5, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9405, .a=0x11, .x=0x1e, .y=0x93, .sp=0x15, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9405, .value=0x08}, {.addr=0x9406, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x9407, .a=0x79, .x=0x1e, .y=0x93, .sp=0x15, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9405, .value=0x08}, {.addr=0x9406, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x9405, .value=0x08, .type=IO_READ},
        {.addr=0x9406, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xc5a6, .a=0xfe, .x=0xae, .y=0x39, .sp=0xe0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a6, .value=0x08}, {.addr=0xc5a7, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xc5a8, .a=0xff, .x=0xae, .y=0x39, .sp=0xe0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc5a6, .value=0x08}, {.addr=0xc5a7, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xc5a6, .value=0x08, .type=IO_READ},
        {.addr=0xc5a7, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc5f7, .a=0x01, .x=0xb0, .y=0x24, .sp=0x81, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f7, .value=0x08}, {.addr=0xc5f8, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xc5f9, .a=0xc3, .x=0xb0, .y=0x24, .sp=0x81, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc5f7, .value=0x08}, {.addr=0xc5f8, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xc5f7, .value=0x08, .type=IO_READ},
        {.addr=0xc5f8, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x5dcd, .a=0x83, .x=0x45, .y=0x60, .sp=0x0f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcd, .value=0x08}, {.addr=0x5dce, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5dcf, .a=0x8f, .x=0x45, .y=0x60, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5dcd, .value=0x08}, {.addr=0x5dce, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5dcd, .value=0x08, .type=IO_READ},
        {.addr=0x5dce, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x97b8, .a=0x5c, .x=0xfe, .y=0xaf, .sp=0xf3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x97b8, .value=0x08}, {.addr=0x97b9, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x97ba, .a=0xfd, .x=0xfe, .y=0xaf, .sp=0xf3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x97b8, .value=0x08}, {.addr=0x97b9, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x97b8, .value=0x08, .type=IO_READ},
        {.addr=0x97b9, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x0930, .a=0x3d, .x=0xde, .y=0xf6, .sp=0x35, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0930, .value=0x08}, {.addr=0x0931, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x0932, .a=0x3f, .x=0xde, .y=0xf6, .sp=0x35, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0930, .value=0x08}, {.addr=0x0931, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0930, .value=0x08, .type=IO_READ},
        {.addr=0x0931, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x5c2c, .a=0x24, .x=0x19, .y=0xef, .sp=0x10, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2c, .value=0x08}, {.addr=0x5c2d, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x5c2e, .a=0xa5, .x=0x19, .y=0xef, .sp=0x10, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5c2c, .value=0x08}, {.addr=0x5c2d, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x5c2c, .value=0x08, .type=IO_READ},
        {.addr=0x5c2d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x741f, .a=0x2f, .x=0xdd, .y=0x8d, .sp=0xe6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x741f, .value=0x08}, {.addr=0x7420, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7421, .a=0x3f, .x=0xdd, .y=0x8d, .sp=0xe6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x741f, .value=0x08}, {.addr=0x7420, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x741f, .value=0x08, .type=IO_READ},
        {.addr=0x7420, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x0303, .a=0x59, .x=0xcc, .y=0xed, .sp=0x80, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0303, .value=0x08}, {.addr=0x0304, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x0305, .a=0xfb, .x=0xcc, .y=0xed, .sp=0x80, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0303, .value=0x08}, {.addr=0x0304, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x0303, .value=0x08, .type=IO_READ},
        {.addr=0x0304, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0986, .a=0x16, .x=0xdf, .y=0xd2, .sp=0xb0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0986, .value=0x08}, {.addr=0x0987, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x0988, .a=0x17, .x=0xdf, .y=0xd2, .sp=0xb0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0986, .value=0x08}, {.addr=0x0987, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x0986, .value=0x08, .type=IO_READ},
        {.addr=0x0987, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xfa07, .a=0xb2, .x=0x1b, .y=0xfa, .sp=0xb7, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xfa07, .value=0x08}, {.addr=0xfa08, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfa09, .a=0xf2, .x=0x1b, .y=0xfa, .sp=0xb7, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfa07, .value=0x08}, {.addr=0xfa08, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfa07, .value=0x08, .type=IO_READ},
        {.addr=0xfa08, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xd87c, .a=0xdd, .x=0x9c, .y=0x0f, .sp=0xbc, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd87c, .value=0x08}, {.addr=0xd87d, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xd87e, .a=0xff, .x=0x9c, .y=0x0f, .sp=0xbc, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd87c, .value=0x08}, {.addr=0xd87d, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xd87c, .value=0x08, .type=IO_READ},
        {.addr=0xd87d, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x91ac, .a=0x21, .x=0x04, .y=0x94, .sp=0x18, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x91ac, .value=0x08}, {.addr=0x91ad, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x91ae, .a=0xb9, .x=0x04, .y=0x94, .sp=0x18, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x91ac, .value=0x08}, {.addr=0x91ad, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x91ac, .value=0x08, .type=IO_READ},
        {.addr=0x91ad, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xaa24, .a=0x71, .x=0x1e, .y=0x38, .sp=0xfc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xaa24, .value=0x08}, {.addr=0xaa25, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xaa26, .a=0x71, .x=0x1e, .y=0x38, .sp=0xfc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xaa24, .value=0x08}, {.addr=0xaa25, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xaa24, .value=0x08, .type=IO_READ},
        {.addr=0xaa25, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xeca2, .a=0x6e, .x=0x16, .y=0x9e, .sp=0x65, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xeca2, .value=0x08}, {.addr=0xeca3, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xeca4, .a=0xee, .x=0x16, .y=0x9e, .sp=0x65, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xeca2, .value=0x08}, {.addr=0xeca3, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xeca2, .value=0x08, .type=IO_READ},
        {.addr=0xeca3, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x0125, .a=0x00, .x=0xf1, .y=0x6c, .sp=0xff, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x08}, {.addr=0x0126, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0127, .a=0x47, .x=0xf1, .y=0x6c, .sp=0xff, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x08}, {.addr=0x0126, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x0125, .value=0x08, .type=IO_READ},
        {.addr=0x0126, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xaf2c, .a=0x75, .x=0x55, .y=0x55, .sp=0xa1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2c, .value=0x08}, {.addr=0xaf2d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaf2e, .a=0xff, .x=0x55, .y=0x55, .sp=0xa1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xaf2c, .value=0x08}, {.addr=0xaf2d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaf2c, .value=0x08, .type=IO_READ},
        {.addr=0xaf2d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8b30, .a=0x38, .x=0xa7, .y=0xd4, .sp=0xa9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8b30, .value=0x08}, {.addr=0x8b31, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x8b32, .a=0xff, .x=0xa7, .y=0xd4, .sp=0xa9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8b30, .value=0x08}, {.addr=0x8b31, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x8b30, .value=0x08, .type=IO_READ},
        {.addr=0x8b31, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x22f8, .a=0xd8, .x=0x78, .y=0x93, .sp=0xcc, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x22f8, .value=0x08}, {.addr=0x22f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x22fa, .a=0xde, .x=0x78, .y=0x93, .sp=0xcc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x22f8, .value=0x08}, {.addr=0x22f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x22f8, .value=0x08, .type=IO_READ},
        {.addr=0x22f9, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x293d, .a=0x49, .x=0x22, .y=0x33, .sp=0xc7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x293d, .value=0x08}, {.addr=0x293e, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x293f, .a=0x6f, .x=0x22, .y=0x33, .sp=0xc7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x293d, .value=0x08}, {.addr=0x293e, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x293d, .value=0x08, .type=IO_READ},
        {.addr=0x293e, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x3723, .a=0x58, .x=0xb4, .y=0x25, .sp=0xad, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x3723, .value=0x08}, {.addr=0x3724, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x3725, .a=0x79, .x=0xb4, .y=0x25, .sp=0xad, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3723, .value=0x08}, {.addr=0x3724, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x3723, .value=0x08, .type=IO_READ},
        {.addr=0x3724, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x3f57, .a=0xff, .x=0xf3, .y=0x17, .sp=0x60, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3f57, .value=0x08}, {.addr=0x3f58, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x3f59, .a=0xff, .x=0xf3, .y=0x17, .sp=0x60, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3f57, .value=0x08}, {.addr=0x3f58, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x3f57, .value=0x08, .type=IO_READ},
        {.addr=0x3f58, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xc1c8, .a=0x17, .x=0xfd, .y=0xfe, .sp=0xa8, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c8, .value=0x08}, {.addr=0xc1c9, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc1ca, .a=0x57, .x=0xfd, .y=0xfe, .sp=0xa8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc1c8, .value=0x08}, {.addr=0xc1c9, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc1c8, .value=0x08, .type=IO_READ},
        {.addr=0xc1c9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x7e56, .a=0x85, .x=0xd8, .y=0x13, .sp=0x8b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x7e56, .value=0x08}, {.addr=0x7e57, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7e58, .a=0xb7, .x=0xd8, .y=0x13, .sp=0x8b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7e56, .value=0x08}, {.addr=0x7e57, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7e56, .value=0x08, .type=IO_READ},
        {.addr=0x7e57, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xa45c, .a=0x0d, .x=0x1b, .y=0x71, .sp=0x16, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa45c, .value=0x08}, {.addr=0xa45d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa45e, .a=0xfd, .x=0x1b, .y=0x71, .sp=0x16, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa45c, .value=0x08}, {.addr=0xa45d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa45c, .value=0x08, .type=IO_READ},
        {.addr=0xa45d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x714f, .a=0x2f, .x=0x72, .y=0x4e, .sp=0xc0, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x714f, .value=0x08}, {.addr=0x7150, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x7151, .a=0xff, .x=0x72, .y=0x4e, .sp=0xc0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x714f, .value=0x08}, {.addr=0x7150, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x714f, .value=0x08, .type=IO_READ},
        {.addr=0x7150, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x0f53, .a=0x16, .x=0x58, .y=0x64, .sp=0xfb, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0f53, .value=0x08}, {.addr=0x0f54, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x0f55, .a=0x5f, .x=0x58, .y=0x64, .sp=0xfb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0f53, .value=0x08}, {.addr=0x0f54, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x0f53, .value=0x08, .type=IO_READ},
        {.addr=0x0f54, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xaeda, .a=0x63, .x=0x96, .y=0xdc, .sp=0x08, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xaeda, .value=0x08}, {.addr=0xaedb, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xaedc, .a=0x7f, .x=0x96, .y=0xdc, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xaeda, .value=0x08}, {.addr=0xaedb, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xaeda, .value=0x08, .type=IO_READ},
        {.addr=0xaedb, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x0357, .a=0x49, .x=0xf8, .y=0x40, .sp=0x42, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0357, .value=0x08}, {.addr=0x0358, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0359, .a=0x79, .x=0xf8, .y=0x40, .sp=0x42, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0357, .value=0x08}, {.addr=0x0358, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0357, .value=0x08, .type=IO_READ},
        {.addr=0x0358, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5b9c, .a=0x4a, .x=0xdf, .y=0xb6, .sp=0xf1, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5b9c, .value=0x08}, {.addr=0x5b9d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5b9e, .a=0xff, .x=0xdf, .y=0xb6, .sp=0xf1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5b9c, .value=0x08}, {.addr=0x5b9d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5b9c, .value=0x08, .type=IO_READ},
        {.addr=0x5b9d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x658d, .a=0x67, .x=0x48, .y=0x69, .sp=0x38, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x658d, .value=0x08}, {.addr=0x658e, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x658f, .a=0x77, .x=0x48, .y=0x69, .sp=0x38, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x658d, .value=0x08}, {.addr=0x658e, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x658d, .value=0x08, .type=IO_READ},
        {.addr=0x658e, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0fe9, .a=0xf6, .x=0x1b, .y=0x42, .sp=0x74, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe9, .value=0x08}, {.addr=0x0fea, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0feb, .a=0xff, .x=0x1b, .y=0x42, .sp=0x74, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0fe9, .value=0x08}, {.addr=0x0fea, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe9, .value=0x08, .type=IO_READ},
        {.addr=0x0fea, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xd126, .a=0x7c, .x=0x9a, .y=0xcb, .sp=0xf7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd126, .value=0x08}, {.addr=0xd127, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xd128, .a=0x7f, .x=0x9a, .y=0xcb, .sp=0xf7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd126, .value=0x08}, {.addr=0xd127, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xd126, .value=0x08, .type=IO_READ},
        {.addr=0xd127, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2fb1, .a=0x7c, .x=0x1a, .y=0xf9, .sp=0x9e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb1, .value=0x08}, {.addr=0x2fb2, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2fb3, .a=0x7e, .x=0x1a, .y=0xf9, .sp=0x9e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2fb1, .value=0x08}, {.addr=0x2fb2, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2fb1, .value=0x08, .type=IO_READ},
        {.addr=0x2fb2, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9e3e, .a=0x6b, .x=0x95, .y=0x33, .sp=0x49, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3e, .value=0x08}, {.addr=0x9e3f, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x9e40, .a=0xeb, .x=0x95, .y=0x33, .sp=0x49, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9e3e, .value=0x08}, {.addr=0x9e3f, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x9e3e, .value=0x08, .type=IO_READ},
        {.addr=0x9e3f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x22ba, .a=0xaf, .x=0x5e, .y=0x27, .sp=0xae, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x22ba, .value=0x08}, {.addr=0x22bb, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x22bc, .a=0xaf, .x=0x5e, .y=0x27, .sp=0xae, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x22ba, .value=0x08}, {.addr=0x22bb, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x22ba, .value=0x08, .type=IO_READ},
        {.addr=0x22bb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x032c, .a=0x2c, .x=0x14, .y=0x15, .sp=0xc4, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x032c, .value=0x08}, {.addr=0x032d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x032e, .a=0xae, .x=0x14, .y=0x15, .sp=0xc4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x032c, .value=0x08}, {.addr=0x032d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x032c, .value=0x08, .type=IO_READ},
        {.addr=0x032d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0842, .a=0xe9, .x=0x9e, .y=0xc8, .sp=0x5f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0842, .value=0x08}, {.addr=0x0843, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x0844, .a=0xfb, .x=0x9e, .y=0xc8, .sp=0x5f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0842, .value=0x08}, {.addr=0x0843, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x0842, .value=0x08, .type=IO_READ},
        {.addr=0x0843, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x91d8, .a=0xcc, .x=0xc6, .y=0xaf, .sp=0x40, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x91d8, .value=0x08}, {.addr=0x91d9, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x91da, .a=0xde, .x=0xc6, .y=0xaf, .sp=0x40, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x91d8, .value=0x08}, {.addr=0x91d9, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x91d8, .value=0x08, .type=IO_READ},
        {.addr=0x91d9, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9a46, .a=0x2a, .x=0xfa, .y=0xd1, .sp=0x5a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9a46, .value=0x08}, {.addr=0x9a47, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9a48, .a=0xee, .x=0xfa, .y=0xd1, .sp=0x5a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9a46, .value=0x08}, {.addr=0x9a47, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9a46, .value=0x08, .type=IO_READ},
        {.addr=0x9a47, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xeec4, .a=0x42, .x=0xee, .y=0xda, .sp=0xda, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xeec4, .value=0x08}, {.addr=0xeec5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeec6, .a=0x62, .x=0xee, .y=0xda, .sp=0xda, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xeec4, .value=0x08}, {.addr=0xeec5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeec4, .value=0x08, .type=IO_READ},
        {.addr=0xeec5, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x36b8, .a=0x07, .x=0x3f, .y=0x20, .sp=0x3a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x36b8, .value=0x08}, {.addr=0x36b9, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x36ba, .a=0xaf, .x=0x3f, .y=0x20, .sp=0x3a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x36b8, .value=0x08}, {.addr=0x36b9, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x36b8, .value=0x08, .type=IO_READ},
        {.addr=0x36b9, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xdaa5, .a=0x74, .x=0x6c, .y=0x3e, .sp=0xf7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa5, .value=0x08}, {.addr=0xdaa6, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xdaa7, .a=0xff, .x=0x6c, .y=0x3e, .sp=0xf7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xdaa5, .value=0x08}, {.addr=0xdaa6, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xdaa5, .value=0x08, .type=IO_READ},
        {.addr=0xdaa6, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xbccb, .a=0xab, .x=0xe5, .y=0x78, .sp=0xdf, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xbccb, .value=0x08}, {.addr=0xbccc, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xbccd, .a=0xbf, .x=0xe5, .y=0x78, .sp=0xdf, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xbccb, .value=0x08}, {.addr=0xbccc, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xbccb, .value=0x08, .type=IO_READ},
        {.addr=0xbccc, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x6e28, .a=0x20, .x=0x1d, .y=0x2a, .sp=0x00, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6e28, .value=0x08}, {.addr=0x6e29, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x6e2a, .a=0x2f, .x=0x1d, .y=0x2a, .sp=0x00, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6e28, .value=0x08}, {.addr=0x6e29, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x6e28, .value=0x08, .type=IO_READ},
        {.addr=0x6e29, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x1795, .a=0xaa, .x=0x33, .y=0x7f, .sp=0x7c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1795, .value=0x08}, {.addr=0x1796, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x1797, .a=0xfb, .x=0x33, .y=0x7f, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1795, .value=0x08}, {.addr=0x1796, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x1795, .value=0x08, .type=IO_READ},
        {.addr=0x1796, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x71c2, .a=0x79, .x=0x1c, .y=0x6a, .sp=0x7f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x71c2, .value=0x08}, {.addr=0x71c3, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x71c4, .a=0x79, .x=0x1c, .y=0x6a, .sp=0x7f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x71c2, .value=0x08}, {.addr=0x71c3, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x71c2, .value=0x08, .type=IO_READ},
        {.addr=0x71c3, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xcfe1, .a=0xc0, .x=0x9f, .y=0x84, .sp=0xc9, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe1, .value=0x08}, {.addr=0xcfe2, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xcfe3, .a=0xe2, .x=0x9f, .y=0x84, .sp=0xc9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcfe1, .value=0x08}, {.addr=0xcfe2, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xcfe1, .value=0x08, .type=IO_READ},
        {.addr=0xcfe2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xc60a, .a=0x16, .x=0x28, .y=0x74, .sp=0xa1, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc60a, .value=0x08}, {.addr=0xc60b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc60c, .a=0x36, .x=0x28, .y=0x74, .sp=0xa1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc60a, .value=0x08}, {.addr=0xc60b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc60a, .value=0x08, .type=IO_READ},
        {.addr=0xc60b, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x3a79, .a=0x84, .x=0x73, .y=0xf1, .sp=0xc5, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x3a79, .value=0x08}, {.addr=0x3a7a, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3a7b, .a=0xf5, .x=0x73, .y=0xf1, .sp=0xc5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3a79, .value=0x08}, {.addr=0x3a7a, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x3a79, .value=0x08, .type=IO_READ},
        {.addr=0x3a7a, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x0593, .a=0x33, .x=0x88, .y=0x43, .sp=0x55, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0593, .value=0x08}, {.addr=0x0594, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x0595, .a=0x7b, .x=0x88, .y=0x43, .sp=0x55, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0593, .value=0x08}, {.addr=0x0594, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x0593, .value=0x08, .type=IO_READ},
        {.addr=0x0594, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xaa9b, .a=0xed, .x=0xc9, .y=0x6e, .sp=0x8c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa9b, .value=0x08}, {.addr=0xaa9c, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xaa9d, .a=0xef, .x=0xc9, .y=0x6e, .sp=0x8c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xaa9b, .value=0x08}, {.addr=0xaa9c, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xaa9b, .value=0x08, .type=IO_READ},
        {.addr=0xaa9c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x6d6d, .a=0x07, .x=0xce, .y=0xce, .sp=0x10, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6d, .value=0x08}, {.addr=0x6d6e, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x6d6f, .a=0x57, .x=0xce, .y=0xce, .sp=0x10, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6d6d, .value=0x08}, {.addr=0x6d6e, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x6d6d, .value=0x08, .type=IO_READ},
        {.addr=0x6d6e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x365e, .a=0xd3, .x=0x4e, .y=0x0b, .sp=0xe2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x365e, .value=0x08}, {.addr=0x365f, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x3660, .a=0xf3, .x=0x4e, .y=0x0b, .sp=0xe2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x365e, .value=0x08}, {.addr=0x365f, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x365e, .value=0x08, .type=IO_READ},
        {.addr=0x365f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xcb7a, .a=0xd4, .x=0x86, .y=0x51, .sp=0xcf, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7a, .value=0x08}, {.addr=0xcb7b, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xcb7c, .a=0xff, .x=0x86, .y=0x51, .sp=0xcf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcb7a, .value=0x08}, {.addr=0xcb7b, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xcb7a, .value=0x08, .type=IO_READ},
        {.addr=0xcb7b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x282a, .a=0xbe, .x=0x70, .y=0x23, .sp=0x67, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x282a, .value=0x08}, {.addr=0x282b, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x282c, .a=0xff, .x=0x70, .y=0x23, .sp=0x67, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x282a, .value=0x08}, {.addr=0x282b, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x282a, .value=0x08, .type=IO_READ},
        {.addr=0x282b, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x7445, .a=0x5d, .x=0xf0, .y=0x04, .sp=0x82, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x7445, .value=0x08}, {.addr=0x7446, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x7447, .a=0xdf, .x=0xf0, .y=0x04, .sp=0x82, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7445, .value=0x08}, {.addr=0x7446, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x7445, .value=0x08, .type=IO_READ},
        {.addr=0x7446, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xde23, .a=0x8a, .x=0x1b, .y=0xe1, .sp=0x13, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xde23, .value=0x08}, {.addr=0xde24, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xde25, .a=0xbe, .x=0x1b, .y=0xe1, .sp=0x13, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xde23, .value=0x08}, {.addr=0xde24, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xde23, .value=0x08, .type=IO_READ},
        {.addr=0xde24, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xc7a2, .a=0xac, .x=0x6c, .y=0xe3, .sp=0xd1, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc7a2, .value=0x08}, {.addr=0xc7a3, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc7a4, .a=0xbe, .x=0x6c, .y=0xe3, .sp=0xd1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc7a2, .value=0x08}, {.addr=0xc7a3, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc7a2, .value=0x08, .type=IO_READ},
        {.addr=0xc7a3, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xbd6c, .a=0x0b, .x=0xb3, .y=0x24, .sp=0x9f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xbd6c, .value=0x08}, {.addr=0xbd6d, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xbd6e, .a=0x3b, .x=0xb3, .y=0x24, .sp=0x9f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbd6c, .value=0x08}, {.addr=0xbd6d, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xbd6c, .value=0x08, .type=IO_READ},
        {.addr=0xbd6d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x6bc7, .a=0x2b, .x=0x41, .y=0x0d, .sp=0x20, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc7, .value=0x08}, {.addr=0x6bc8, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x6bc9, .a=0x7b, .x=0x41, .y=0x0d, .sp=0x20, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6bc7, .value=0x08}, {.addr=0x6bc8, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6bc7, .value=0x08, .type=IO_READ},
        {.addr=0x6bc8, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x86ad, .a=0xc0, .x=0xb6, .y=0x80, .sp=0x63, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x86ad, .value=0x08}, {.addr=0x86ae, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x86af, .a=0xfe, .x=0xb6, .y=0x80, .sp=0x63, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x86ad, .value=0x08}, {.addr=0x86ae, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x86ad, .value=0x08, .type=IO_READ},
        {.addr=0x86ae, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x908c, .a=0x1b, .x=0x42, .y=0x4d, .sp=0x4e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x908c, .value=0x08}, {.addr=0x908d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x908e, .a=0x9f, .x=0x42, .y=0x4d, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x908c, .value=0x08}, {.addr=0x908d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x908c, .value=0x08, .type=IO_READ},
        {.addr=0x908d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7dd1, .a=0x5e, .x=0x25, .y=0x39, .sp=0xea, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd1, .value=0x08}, {.addr=0x7dd2, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x7dd3, .a=0xdf, .x=0x25, .y=0x39, .sp=0xea, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7dd1, .value=0x08}, {.addr=0x7dd2, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x7dd1, .value=0x08, .type=IO_READ},
        {.addr=0x7dd2, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x0bad, .a=0xed, .x=0x3a, .y=0xe0, .sp=0x9e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0bad, .value=0x08}, {.addr=0x0bae, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0baf, .a=0xfd, .x=0x3a, .y=0xe0, .sp=0x9e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0bad, .value=0x08}, {.addr=0x0bae, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0bad, .value=0x08, .type=IO_READ},
        {.addr=0x0bae, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xe90a, .a=0xff, .x=0xe0, .y=0xe0, .sp=0x8e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xe90a, .value=0x08}, {.addr=0xe90b, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xe90c, .a=0xff, .x=0xe0, .y=0xe0, .sp=0x8e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe90a, .value=0x08}, {.addr=0xe90b, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xe90a, .value=0x08, .type=IO_READ},
        {.addr=0xe90b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xe1b5, .a=0x28, .x=0x18, .y=0xee, .sp=0x0f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b5, .value=0x08}, {.addr=0xe1b6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe1b7, .a=0x3c, .x=0x18, .y=0xee, .sp=0x0f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe1b5, .value=0x08}, {.addr=0xe1b6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe1b5, .value=0x08, .type=IO_READ},
        {.addr=0xe1b6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x09af, .a=0x0f, .x=0x3f, .y=0xb1, .sp=0xa2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x09af, .value=0x08}, {.addr=0x09b0, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x09b1, .a=0xff, .x=0x3f, .y=0xb1, .sp=0xa2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x09af, .value=0x08}, {.addr=0x09b0, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x09af, .value=0x08, .type=IO_READ},
        {.addr=0x09b0, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x456b, .a=0x87, .x=0x3e, .y=0xe1, .sp=0x95, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x456b, .value=0x08}, {.addr=0x456c, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x456d, .a=0xdf, .x=0x3e, .y=0xe1, .sp=0x95, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x456b, .value=0x08}, {.addr=0x456c, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x456b, .value=0x08, .type=IO_READ},
        {.addr=0x456c, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xd632, .a=0x38, .x=0x78, .y=0x0f, .sp=0xd0, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd632, .value=0x08}, {.addr=0xd633, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xd634, .a=0x3a, .x=0x78, .y=0x0f, .sp=0xd0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd632, .value=0x08}, {.addr=0xd633, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xd632, .value=0x08, .type=IO_READ},
        {.addr=0xd633, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xb1b2, .a=0x50, .x=0x78, .y=0xa9, .sp=0xfc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xb1b2, .value=0x08}, {.addr=0xb1b3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb1b4, .a=0xfd, .x=0x78, .y=0xa9, .sp=0xfc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb1b2, .value=0x08}, {.addr=0xb1b3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb1b2, .value=0x08, .type=IO_READ},
        {.addr=0xb1b3, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xba52, .a=0x10, .x=0x2a, .y=0x82, .sp=0x56, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xba52, .value=0x08}, {.addr=0xba53, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xba54, .a=0x9b, .x=0x2a, .y=0x82, .sp=0x56, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xba52, .value=0x08}, {.addr=0xba53, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xba52, .value=0x08, .type=IO_READ},
        {.addr=0xba53, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc957, .a=0x4d, .x=0xe6, .y=0xb5, .sp=0x61, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc957, .value=0x08}, {.addr=0xc958, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xc959, .a=0x5f, .x=0xe6, .y=0xb5, .sp=0x61, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc957, .value=0x08}, {.addr=0xc958, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xc957, .value=0x08, .type=IO_READ},
        {.addr=0xc958, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x113a, .a=0x78, .x=0x2b, .y=0xf0, .sp=0x46, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x113a, .value=0x08}, {.addr=0x113b, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x113c, .a=0x7e, .x=0x2b, .y=0xf0, .sp=0x46, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x113a, .value=0x08}, {.addr=0x113b, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x113a, .value=0x08, .type=IO_READ},
        {.addr=0x113b, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x46dd, .a=0xb2, .x=0xbf, .y=0x53, .sp=0x3d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x46dd, .value=0x08}, {.addr=0x46de, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x46df, .a=0xfe, .x=0xbf, .y=0x53, .sp=0x3d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x46dd, .value=0x08}, {.addr=0x46de, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x46dd, .value=0x08, .type=IO_READ},
        {.addr=0x46de, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0334, .a=0x4f, .x=0x9e, .y=0x45, .sp=0x1d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0334, .value=0x08}, {.addr=0x0335, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x0336, .a=0x4f, .x=0x9e, .y=0x45, .sp=0x1d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0334, .value=0x08}, {.addr=0x0335, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0334, .value=0x08, .type=IO_READ},
        {.addr=0x0335, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0xaf, .x=0x34, .y=0x50, .sp=0xe1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xb5de, .value=0x08}, {.addr=0xb5df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb5e0, .a=0xaf, .x=0x34, .y=0x50, .sp=0xe1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb5de, .value=0x08}, {.addr=0xb5df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0x08, .type=IO_READ},
        {.addr=0xb5df, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x725a, .a=0x56, .x=0x75, .y=0xb4, .sp=0x8c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x725a, .value=0x08}, {.addr=0x725b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x725c, .a=0x57, .x=0x75, .y=0xb4, .sp=0x8c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x725a, .value=0x08}, {.addr=0x725b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x725a, .value=0x08, .type=IO_READ},
        {.addr=0x725b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x48af, .a=0x1b, .x=0x70, .y=0x7d, .sp=0x4b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x48af, .value=0x08}, {.addr=0x48b0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x48b1, .a=0x3b, .x=0x70, .y=0x7d, .sp=0x4b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x48af, .value=0x08}, {.addr=0x48b0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x48af, .value=0x08, .type=IO_READ},
        {.addr=0x48b0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x6d21, .a=0x01, .x=0x4e, .y=0x7b, .sp=0xf7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6d21, .value=0x08}, {.addr=0x6d22, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6d23, .a=0x73, .x=0x4e, .y=0x7b, .sp=0xf7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6d21, .value=0x08}, {.addr=0x6d22, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6d21, .value=0x08, .type=IO_READ},
        {.addr=0x6d22, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x6b89, .a=0xec, .x=0x33, .y=0xdc, .sp=0x5b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6b89, .value=0x08}, {.addr=0x6b8a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6b8b, .a=0xfc, .x=0x33, .y=0xdc, .sp=0x5b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6b89, .value=0x08}, {.addr=0x6b8a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6b89, .value=0x08, .type=IO_READ},
        {.addr=0x6b8a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2ef1, .a=0x0e, .x=0x12, .y=0x18, .sp=0x7c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef1, .value=0x08}, {.addr=0x2ef2, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2ef3, .a=0xbf, .x=0x12, .y=0x18, .sp=0x7c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2ef1, .value=0x08}, {.addr=0x2ef2, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2ef1, .value=0x08, .type=IO_READ},
        {.addr=0x2ef2, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x274e, .a=0xfe, .x=0x1b, .y=0xff, .sp=0xbc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x274e, .value=0x08}, {.addr=0x274f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x2750, .a=0xfe, .x=0x1b, .y=0xff, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x274e, .value=0x08}, {.addr=0x274f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x274e, .value=0x08, .type=IO_READ},
        {.addr=0x274f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xda34, .a=0x6e, .x=0xc6, .y=0xb3, .sp=0x3d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xda34, .value=0x08}, {.addr=0xda35, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xda36, .a=0x6f, .x=0xc6, .y=0xb3, .sp=0x3d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xda34, .value=0x08}, {.addr=0xda35, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xda34, .value=0x08, .type=IO_READ},
        {.addr=0xda35, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xc79d, .a=0x04, .x=0xbe, .y=0x7c, .sp=0xa2, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc79d, .value=0x08}, {.addr=0xc79e, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xc79f, .a=0x0e, .x=0xbe, .y=0x7c, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc79d, .value=0x08}, {.addr=0xc79e, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xc79d, .value=0x08, .type=IO_READ},
        {.addr=0xc79e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0100) {
    const struct CPU_State initial_cpu = {.pc=0xb107, .a=0xf9, .x=0xc1, .y=0x92, .sp=0x34, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xb107, .value=0x08}, {.addr=0xb108, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xb109, .a=0xf9, .x=0xc1, .y=0x92, .sp=0x34, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb107, .value=0x08}, {.addr=0xb108, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xb107, .value=0x08, .type=IO_READ},
        {.addr=0xb108, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0101) {
    const struct CPU_State initial_cpu = {.pc=0xd674, .a=0x34, .x=0xab, .y=0xdc, .sp=0x12, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd674, .value=0x08}, {.addr=0xd675, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xd676, .a=0xff, .x=0xab, .y=0xdc, .sp=0x12, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd674, .value=0x08}, {.addr=0xd675, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xd674, .value=0x08, .type=IO_READ},
        {.addr=0xd675, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0102) {
    const struct CPU_State initial_cpu = {.pc=0x385a, .a=0xdf, .x=0xec, .y=0x59, .sp=0x5a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x385a, .value=0x08}, {.addr=0x385b, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x385c, .a=0xff, .x=0xec, .y=0x59, .sp=0x5a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x385a, .value=0x08}, {.addr=0x385b, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x385a, .value=0x08, .type=IO_READ},
        {.addr=0x385b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0103) {
    const struct CPU_State initial_cpu = {.pc=0x486a, .a=0x1b, .x=0xd8, .y=0x6d, .sp=0xc8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x486a, .value=0x08}, {.addr=0x486b, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x486c, .a=0x9b, .x=0xd8, .y=0x6d, .sp=0xc8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x486a, .value=0x08}, {.addr=0x486b, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x486a, .value=0x08, .type=IO_READ},
        {.addr=0x486b, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd7c9, .a=0x61, .x=0x6c, .y=0x6d, .sp=0xa8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c9, .value=0x08}, {.addr=0xd7ca, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xd7cb, .a=0x63, .x=0x6c, .y=0x6d, .sp=0xa8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd7c9, .value=0x08}, {.addr=0xd7ca, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xd7c9, .value=0x08, .type=IO_READ},
        {.addr=0xd7ca, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0105) {
    const struct CPU_State initial_cpu = {.pc=0x484f, .a=0x0f, .x=0xf1, .y=0x0a, .sp=0x36, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x484f, .value=0x08}, {.addr=0x4850, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x4851, .a=0x2f, .x=0xf1, .y=0x0a, .sp=0x36, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x484f, .value=0x08}, {.addr=0x4850, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x484f, .value=0x08, .type=IO_READ},
        {.addr=0x4850, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0106) {
    const struct CPU_State initial_cpu = {.pc=0x2558, .a=0x10, .x=0xdf, .y=0x2d, .sp=0x64, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2558, .value=0x08}, {.addr=0x2559, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x255a, .a=0xb1, .x=0xdf, .y=0x2d, .sp=0x64, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2558, .value=0x08}, {.addr=0x2559, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x2558, .value=0x08, .type=IO_READ},
        {.addr=0x2559, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0107) {
    const struct CPU_State initial_cpu = {.pc=0xba1f, .a=0xb9, .x=0x98, .y=0x8e, .sp=0xc4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xba1f, .value=0x08}, {.addr=0xba20, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xba21, .a=0xfd, .x=0x98, .y=0x8e, .sp=0xc4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xba1f, .value=0x08}, {.addr=0xba20, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xba1f, .value=0x08, .type=IO_READ},
        {.addr=0xba20, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7954, .a=0xf7, .x=0xa4, .y=0x54, .sp=0x32, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7954, .value=0x08}, {.addr=0x7955, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7956, .a=0xf7, .x=0xa4, .y=0x54, .sp=0x32, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7954, .value=0x08}, {.addr=0x7955, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x7954, .value=0x08, .type=IO_READ},
        {.addr=0x7955, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa89b, .a=0x92, .x=0x00, .y=0xd1, .sp=0xf0, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa89b, .value=0x08}, {.addr=0xa89c, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa89d, .a=0xd2, .x=0x00, .y=0xd1, .sp=0xf0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa89b, .value=0x08}, {.addr=0xa89c, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa89b, .value=0x08, .type=IO_READ},
        {.addr=0xa89c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010A) {
    const struct CPU_State initial_cpu = {.pc=0x1f9d, .a=0xed, .x=0x02, .y=0x04, .sp=0x29, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9d, .value=0x08}, {.addr=0x1f9e, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1f9f, .a=0xff, .x=0x02, .y=0x04, .sp=0x29, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x1f9d, .value=0x08}, {.addr=0x1f9e, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1f9d, .value=0x08, .type=IO_READ},
        {.addr=0x1f9e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010B) {
    const struct CPU_State initial_cpu = {.pc=0x9eec, .a=0xaa, .x=0x4b, .y=0x19, .sp=0xd8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9eec, .value=0x08}, {.addr=0x9eed, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9eee, .a=0xaa, .x=0x4b, .y=0x19, .sp=0xd8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9eec, .value=0x08}, {.addr=0x9eed, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x9eec, .value=0x08, .type=IO_READ},
        {.addr=0x9eed, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010C) {
    const struct CPU_State initial_cpu = {.pc=0x0b6b, .a=0x54, .x=0x76, .y=0x7b, .sp=0x1c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6b, .value=0x08}, {.addr=0x0b6c, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x0b6d, .a=0xf6, .x=0x76, .y=0x7b, .sp=0x1c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0b6b, .value=0x08}, {.addr=0x0b6c, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x0b6b, .value=0x08, .type=IO_READ},
        {.addr=0x0b6c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010D) {
    const struct CPU_State initial_cpu = {.pc=0x3cc3, .a=0xb6, .x=0xa8, .y=0x58, .sp=0xfc, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc3, .value=0x08}, {.addr=0x3cc4, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3cc5, .a=0xff, .x=0xa8, .y=0x58, .sp=0xfc, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3cc3, .value=0x08}, {.addr=0x3cc4, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3cc3, .value=0x08, .type=IO_READ},
        {.addr=0x3cc4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010E) {
    const struct CPU_State initial_cpu = {.pc=0x6d51, .a=0xf1, .x=0x93, .y=0xd9, .sp=0x8b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6d51, .value=0x08}, {.addr=0x6d52, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x6d53, .a=0xf5, .x=0x93, .y=0xd9, .sp=0x8b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6d51, .value=0x08}, {.addr=0x6d52, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6d51, .value=0x08, .type=IO_READ},
        {.addr=0x6d52, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_010F) {
    const struct CPU_State initial_cpu = {.pc=0xeb5d, .a=0x28, .x=0xe9, .y=0x75, .sp=0x56, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5d, .value=0x08}, {.addr=0xeb5e, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xeb5f, .a=0xfa, .x=0xe9, .y=0x75, .sp=0x56, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeb5d, .value=0x08}, {.addr=0xeb5e, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xeb5d, .value=0x08, .type=IO_READ},
        {.addr=0xeb5e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa57c, .a=0x55, .x=0xfb, .y=0xcd, .sp=0x8a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa57c, .value=0x08}, {.addr=0xa57d, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xa57e, .a=0x77, .x=0xfb, .y=0xcd, .sp=0x8a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa57c, .value=0x08}, {.addr=0xa57d, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xa57c, .value=0x08, .type=IO_READ},
        {.addr=0xa57d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0111) {
    const struct CPU_State initial_cpu = {.pc=0x8119, .a=0xa9, .x=0x25, .y=0xe5, .sp=0x86, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8119, .value=0x08}, {.addr=0x811a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x811b, .a=0xfd, .x=0x25, .y=0xe5, .sp=0x86, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8119, .value=0x08}, {.addr=0x811a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8119, .value=0x08, .type=IO_READ},
        {.addr=0x811a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0112) {
    const struct CPU_State initial_cpu = {.pc=0x9c56, .a=0x02, .x=0x5c, .y=0x8e, .sp=0x13, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9c56, .value=0x08}, {.addr=0x9c57, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x9c58, .a=0xa7, .x=0x5c, .y=0x8e, .sp=0x13, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9c56, .value=0x08}, {.addr=0x9c57, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x9c56, .value=0x08, .type=IO_READ},
        {.addr=0x9c57, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa020, .a=0x6e, .x=0x28, .y=0xb2, .sp=0xac, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa020, .value=0x08}, {.addr=0xa021, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xa022, .a=0xef, .x=0x28, .y=0xb2, .sp=0xac, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa020, .value=0x08}, {.addr=0xa021, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa020, .value=0x08, .type=IO_READ},
        {.addr=0xa021, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf13e, .a=0x10, .x=0xf2, .y=0xfb, .sp=0x70, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xf13e, .value=0x08}, {.addr=0xf13f, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf140, .a=0xff, .x=0xf2, .y=0xfb, .sp=0x70, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf13e, .value=0x08}, {.addr=0xf13f, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf13e, .value=0x08, .type=IO_READ},
        {.addr=0xf13f, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0115) {
    const struct CPU_State initial_cpu = {.pc=0x9e14, .a=0xa8, .x=0x3f, .y=0xab, .sp=0x32, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e14, .value=0x08}, {.addr=0x9e15, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9e16, .a=0xae, .x=0x3f, .y=0xab, .sp=0x32, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9e14, .value=0x08}, {.addr=0x9e15, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9e14, .value=0x08, .type=IO_READ},
        {.addr=0x9e15, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0116) {
    const struct CPU_State initial_cpu = {.pc=0x91b5, .a=0x00, .x=0x20, .y=0xa4, .sp=0x18, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x91b5, .value=0x08}, {.addr=0x91b6, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x91b7, .a=0x76, .x=0x20, .y=0xa4, .sp=0x18, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x91b5, .value=0x08}, {.addr=0x91b6, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x91b5, .value=0x08, .type=IO_READ},
        {.addr=0x91b6, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0117) {
    const struct CPU_State initial_cpu = {.pc=0x7f75, .a=0x1c, .x=0xa3, .y=0xd3, .sp=0x78, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7f75, .value=0x08}, {.addr=0x7f76, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x7f77, .a=0x7f, .x=0xa3, .y=0xd3, .sp=0x78, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7f75, .value=0x08}, {.addr=0x7f76, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x7f75, .value=0x08, .type=IO_READ},
        {.addr=0x7f76, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0118) {
    const struct CPU_State initial_cpu = {.pc=0x9437, .a=0xc7, .x=0xd1, .y=0x6d, .sp=0x93, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9437, .value=0x08}, {.addr=0x9438, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x9439, .a=0xdf, .x=0xd1, .y=0x6d, .sp=0x93, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9437, .value=0x08}, {.addr=0x9438, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x9437, .value=0x08, .type=IO_READ},
        {.addr=0x9438, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0119) {
    const struct CPU_State initial_cpu = {.pc=0x5639, .a=0x66, .x=0x93, .y=0x2e, .sp=0x43, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5639, .value=0x08}, {.addr=0x563a, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x563b, .a=0xe6, .x=0x93, .y=0x2e, .sp=0x43, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5639, .value=0x08}, {.addr=0x563a, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5639, .value=0x08, .type=IO_READ},
        {.addr=0x563a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011A) {
    const struct CPU_State initial_cpu = {.pc=0xb0a3, .a=0x32, .x=0xa2, .y=0x31, .sp=0x03, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a3, .value=0x08}, {.addr=0xb0a4, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xb0a5, .a=0xf7, .x=0xa2, .y=0x31, .sp=0x03, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb0a3, .value=0x08}, {.addr=0xb0a4, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xb0a3, .value=0x08, .type=IO_READ},
        {.addr=0xb0a4, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd200, .a=0x03, .x=0x6a, .y=0x4a, .sp=0xb6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xd200, .value=0x08}, {.addr=0xd201, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xd202, .a=0x53, .x=0x6a, .y=0x4a, .sp=0xb6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd200, .value=0x08}, {.addr=0xd201, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xd200, .value=0x08, .type=IO_READ},
        {.addr=0xd201, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011C) {
    const struct CPU_State initial_cpu = {.pc=0x1442, .a=0xb7, .x=0x01, .y=0x5f, .sp=0x2b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1442, .value=0x08}, {.addr=0x1443, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x1444, .a=0xf7, .x=0x01, .y=0x5f, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1442, .value=0x08}, {.addr=0x1443, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1442, .value=0x08, .type=IO_READ},
        {.addr=0x1443, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011D) {
    const struct CPU_State initial_cpu = {.pc=0x9f62, .a=0x53, .x=0x4c, .y=0xf0, .sp=0xd8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9f62, .value=0x08}, {.addr=0x9f63, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f64, .a=0xff, .x=0x4c, .y=0xf0, .sp=0xd8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9f62, .value=0x08}, {.addr=0x9f63, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f62, .value=0x08, .type=IO_READ},
        {.addr=0x9f63, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011E) {
    const struct CPU_State initial_cpu = {.pc=0xaaf3, .a=0x6d, .x=0x11, .y=0x58, .sp=0x66, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf3, .value=0x08}, {.addr=0xaaf4, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xaaf5, .a=0x6d, .x=0x11, .y=0x58, .sp=0x66, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xaaf3, .value=0x08}, {.addr=0xaaf4, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xaaf3, .value=0x08, .type=IO_READ},
        {.addr=0xaaf4, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_011F) {
    const struct CPU_State initial_cpu = {.pc=0xc130, .a=0x23, .x=0x82, .y=0x8d, .sp=0xaf, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc130, .value=0x08}, {.addr=0xc131, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc132, .a=0xab, .x=0x82, .y=0x8d, .sp=0xaf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc130, .value=0x08}, {.addr=0xc131, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc130, .value=0x08, .type=IO_READ},
        {.addr=0xc131, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0120) {
    const struct CPU_State initial_cpu = {.pc=0x01a6, .a=0xb6, .x=0x02, .y=0x5f, .sp=0xb7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x08}, {.addr=0x01a7, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x01a8, .a=0xfe, .x=0x02, .y=0x5f, .sp=0xb7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x08}, {.addr=0x01a7, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x01a6, .value=0x08, .type=IO_READ},
        {.addr=0x01a7, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6292, .a=0x4e, .x=0xf4, .y=0xa0, .sp=0x13, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6292, .value=0x08}, {.addr=0x6293, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x6294, .a=0x5e, .x=0xf4, .y=0xa0, .sp=0x13, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6292, .value=0x08}, {.addr=0x6293, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6292, .value=0x08, .type=IO_READ},
        {.addr=0x6293, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0122) {
    const struct CPU_State initial_cpu = {.pc=0xdd39, .a=0x50, .x=0x0e, .y=0x7d, .sp=0xe4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xdd39, .value=0x08}, {.addr=0xdd3a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xdd3b, .a=0xfa, .x=0x0e, .y=0x7d, .sp=0xe4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdd39, .value=0x08}, {.addr=0xdd3a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xdd39, .value=0x08, .type=IO_READ},
        {.addr=0xdd3a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0123) {
    const struct CPU_State initial_cpu = {.pc=0xc816, .a=0xbf, .x=0xf4, .y=0x40, .sp=0x44, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc816, .value=0x08}, {.addr=0xc817, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc818, .a=0xff, .x=0xf4, .y=0x40, .sp=0x44, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc816, .value=0x08}, {.addr=0xc817, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc816, .value=0x08, .type=IO_READ},
        {.addr=0xc817, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0124) {
    const struct CPU_State initial_cpu = {.pc=0xf884, .a=0x5a, .x=0xe5, .y=0x7b, .sp=0xa0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xf884, .value=0x08}, {.addr=0xf885, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xf886, .a=0xfe, .x=0xe5, .y=0x7b, .sp=0xa0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf884, .value=0x08}, {.addr=0xf885, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xf884, .value=0x08, .type=IO_READ},
        {.addr=0xf885, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe5a1, .a=0xd2, .x=0x69, .y=0xc8, .sp=0xf5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a1, .value=0x08}, {.addr=0xe5a2, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xe5a3, .a=0xfe, .x=0x69, .y=0xc8, .sp=0xf5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe5a1, .value=0x08}, {.addr=0xe5a2, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xe5a1, .value=0x08, .type=IO_READ},
        {.addr=0xe5a2, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0126) {
    const struct CPU_State initial_cpu = {.pc=0xe51c, .a=0x1c, .x=0x1e, .y=0x44, .sp=0x6b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe51c, .value=0x08}, {.addr=0xe51d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe51e, .a=0x3c, .x=0x1e, .y=0x44, .sp=0x6b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe51c, .value=0x08}, {.addr=0xe51d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe51c, .value=0x08, .type=IO_READ},
        {.addr=0xe51d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0127) {
    const struct CPU_State initial_cpu = {.pc=0xfd3a, .a=0x34, .x=0x49, .y=0x1f, .sp=0x52, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3a, .value=0x08}, {.addr=0xfd3b, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xfd3c, .a=0xbe, .x=0x49, .y=0x1f, .sp=0x52, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xfd3a, .value=0x08}, {.addr=0xfd3b, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xfd3a, .value=0x08, .type=IO_READ},
        {.addr=0xfd3b, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0128) {
    const struct CPU_State initial_cpu = {.pc=0xab06, .a=0x86, .x=0x61, .y=0x73, .sp=0x24, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xab06, .value=0x08}, {.addr=0xab07, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xab08, .a=0xbf, .x=0x61, .y=0x73, .sp=0x24, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xab06, .value=0x08}, {.addr=0xab07, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xab06, .value=0x08, .type=IO_READ},
        {.addr=0xab07, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0129) {
    const struct CPU_State initial_cpu = {.pc=0x6cab, .a=0xb9, .x=0xa6, .y=0x7d, .sp=0xc5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6cab, .value=0x08}, {.addr=0x6cac, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6cad, .a=0xfb, .x=0xa6, .y=0x7d, .sp=0xc5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6cab, .value=0x08}, {.addr=0x6cac, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6cab, .value=0x08, .type=IO_READ},
        {.addr=0x6cac, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012A) {
    const struct CPU_State initial_cpu = {.pc=0x1fe8, .a=0xaa, .x=0xed, .y=0x54, .sp=0x7f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe8, .value=0x08}, {.addr=0x1fe9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1fea, .a=0xbf, .x=0xed, .y=0x54, .sp=0x7f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1fe8, .value=0x08}, {.addr=0x1fe9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1fe8, .value=0x08, .type=IO_READ},
        {.addr=0x1fe9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012B) {
    const struct CPU_State initial_cpu = {.pc=0xe0f5, .a=0xc6, .x=0x3b, .y=0x5c, .sp=0x1f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f5, .value=0x08}, {.addr=0xe0f6, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xe0f7, .a=0xc6, .x=0x3b, .y=0x5c, .sp=0x1f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe0f5, .value=0x08}, {.addr=0xe0f6, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xe0f5, .value=0x08, .type=IO_READ},
        {.addr=0xe0f6, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012C) {
    const struct CPU_State initial_cpu = {.pc=0xb14c, .a=0xf3, .x=0x1c, .y=0x4a, .sp=0x95, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb14c, .value=0x08}, {.addr=0xb14d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb14e, .a=0xff, .x=0x1c, .y=0x4a, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb14c, .value=0x08}, {.addr=0xb14d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb14c, .value=0x08, .type=IO_READ},
        {.addr=0xb14d, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012D) {
    const struct CPU_State initial_cpu = {.pc=0x97f7, .a=0xaa, .x=0x08, .y=0xcf, .sp=0x25, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x97f7, .value=0x08}, {.addr=0x97f8, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x97f9, .a=0xfa, .x=0x08, .y=0xcf, .sp=0x25, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x97f7, .value=0x08}, {.addr=0x97f8, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x97f7, .value=0x08, .type=IO_READ},
        {.addr=0x97f8, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012E) {
    const struct CPU_State initial_cpu = {.pc=0x10e1, .a=0x69, .x=0x88, .y=0x4e, .sp=0xbc, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x10e1, .value=0x08}, {.addr=0x10e2, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x10e3, .a=0x79, .x=0x88, .y=0x4e, .sp=0xbc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x10e1, .value=0x08}, {.addr=0x10e2, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x10e1, .value=0x08, .type=IO_READ},
        {.addr=0x10e2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_012F) {
    const struct CPU_State initial_cpu = {.pc=0x3d58, .a=0x48, .x=0x49, .y=0x7c, .sp=0xab, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x3d58, .value=0x08}, {.addr=0x3d59, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x3d5a, .a=0x6f, .x=0x49, .y=0x7c, .sp=0xab, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3d58, .value=0x08}, {.addr=0x3d59, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x3d58, .value=0x08, .type=IO_READ},
        {.addr=0x3d59, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0130) {
    const struct CPU_State initial_cpu = {.pc=0xcc6c, .a=0x6d, .x=0xce, .y=0xa1, .sp=0xc2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6c, .value=0x08}, {.addr=0xcc6d, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xcc6e, .a=0xfd, .x=0xce, .y=0xa1, .sp=0xc2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcc6c, .value=0x08}, {.addr=0xcc6d, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xcc6c, .value=0x08, .type=IO_READ},
        {.addr=0xcc6d, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0131) {
    const struct CPU_State initial_cpu = {.pc=0xcba7, .a=0x30, .x=0xfb, .y=0x9a, .sp=0x88, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xcba7, .value=0x08}, {.addr=0xcba8, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xcba9, .a=0xb8, .x=0xfb, .y=0x9a, .sp=0x88, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcba7, .value=0x08}, {.addr=0xcba8, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xcba7, .value=0x08, .type=IO_READ},
        {.addr=0xcba8, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0132) {
    const struct CPU_State initial_cpu = {.pc=0xd732, .a=0x0b, .x=0xa0, .y=0x40, .sp=0xef, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xd732, .value=0x08}, {.addr=0xd733, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xd734, .a=0xfb, .x=0xa0, .y=0x40, .sp=0xef, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd732, .value=0x08}, {.addr=0xd733, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xd732, .value=0x08, .type=IO_READ},
        {.addr=0xd733, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0133) {
    const struct CPU_State initial_cpu = {.pc=0x07fa, .a=0xf1, .x=0xec, .y=0xa4, .sp=0x85, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x07fa, .value=0x08}, {.addr=0x07fb, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x07fc, .a=0xf3, .x=0xec, .y=0xa4, .sp=0x85, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x07fa, .value=0x08}, {.addr=0x07fb, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x07fa, .value=0x08, .type=IO_READ},
        {.addr=0x07fb, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0134) {
    const struct CPU_State initial_cpu = {.pc=0x2fd6, .a=0x7a, .x=0xc2, .y=0x9a, .sp=0xea, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd6, .value=0x08}, {.addr=0x2fd7, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x2fd8, .a=0xfb, .x=0xc2, .y=0x9a, .sp=0xea, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2fd6, .value=0x08}, {.addr=0x2fd7, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x2fd6, .value=0x08, .type=IO_READ},
        {.addr=0x2fd7, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0135) {
    const struct CPU_State initial_cpu = {.pc=0x2e74, .a=0xc5, .x=0xf6, .y=0xe1, .sp=0xd9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2e74, .value=0x08}, {.addr=0x2e75, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x2e76, .a=0xd7, .x=0xf6, .y=0xe1, .sp=0xd9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2e74, .value=0x08}, {.addr=0x2e75, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x2e74, .value=0x08, .type=IO_READ},
        {.addr=0x2e75, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0136) {
    const struct CPU_State initial_cpu = {.pc=0xa251, .a=0x9f, .x=0x7b, .y=0x8e, .sp=0x20, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa251, .value=0x08}, {.addr=0xa252, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xa253, .a=0xff, .x=0x7b, .y=0x8e, .sp=0x20, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa251, .value=0x08}, {.addr=0xa252, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xa251, .value=0x08, .type=IO_READ},
        {.addr=0xa252, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0137) {
    const struct CPU_State initial_cpu = {.pc=0x91d5, .a=0x79, .x=0x94, .y=0xcb, .sp=0xb7, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x91d5, .value=0x08}, {.addr=0x91d6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x91d7, .a=0x7f, .x=0x94, .y=0xcb, .sp=0xb7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x91d5, .value=0x08}, {.addr=0x91d6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x91d5, .value=0x08, .type=IO_READ},
        {.addr=0x91d6, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0138) {
    const struct CPU_State initial_cpu = {.pc=0x93a4, .a=0x4c, .x=0x35, .y=0x03, .sp=0xd6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x93a4, .value=0x08}, {.addr=0x93a5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x93a6, .a=0xfc, .x=0x35, .y=0x03, .sp=0xd6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x93a4, .value=0x08}, {.addr=0x93a5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x93a4, .value=0x08, .type=IO_READ},
        {.addr=0x93a5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0139) {
    const struct CPU_State initial_cpu = {.pc=0x62ad, .a=0x68, .x=0x56, .y=0x2b, .sp=0x1c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x62ad, .value=0x08}, {.addr=0x62ae, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x62af, .a=0x79, .x=0x56, .y=0x2b, .sp=0x1c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x62ad, .value=0x08}, {.addr=0x62ae, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x62ad, .value=0x08, .type=IO_READ},
        {.addr=0x62ae, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013A) {
    const struct CPU_State initial_cpu = {.pc=0xac33, .a=0xd0, .x=0xf7, .y=0x95, .sp=0x9d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xac33, .value=0x08}, {.addr=0xac34, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xac35, .a=0xff, .x=0xf7, .y=0x95, .sp=0x9d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xac33, .value=0x08}, {.addr=0xac34, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xac33, .value=0x08, .type=IO_READ},
        {.addr=0xac34, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013B) {
    const struct CPU_State initial_cpu = {.pc=0xcbbd, .a=0xef, .x=0xc3, .y=0x6f, .sp=0xbc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xcbbd, .value=0x08}, {.addr=0xcbbe, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xcbbf, .a=0xff, .x=0xc3, .y=0x6f, .sp=0xbc, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xcbbd, .value=0x08}, {.addr=0xcbbe, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xcbbd, .value=0x08, .type=IO_READ},
        {.addr=0xcbbe, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013C) {
    const struct CPU_State initial_cpu = {.pc=0x647b, .a=0xb0, .x=0xdd, .y=0xe8, .sp=0x8a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x647b, .value=0x08}, {.addr=0x647c, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0xf9, .x=0xdd, .y=0xe8, .sp=0x8a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x647b, .value=0x08}, {.addr=0x647c, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x647b, .value=0x08, .type=IO_READ},
        {.addr=0x647c, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013D) {
    const struct CPU_State initial_cpu = {.pc=0x7f92, .a=0x92, .x=0xea, .y=0x5e, .sp=0x12, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7f92, .value=0x08}, {.addr=0x7f93, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7f94, .a=0xb6, .x=0xea, .y=0x5e, .sp=0x12, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7f92, .value=0x08}, {.addr=0x7f93, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7f92, .value=0x08, .type=IO_READ},
        {.addr=0x7f93, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013E) {
    const struct CPU_State initial_cpu = {.pc=0xe5c4, .a=0xd1, .x=0xc9, .y=0xb1, .sp=0xa3, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c4, .value=0x08}, {.addr=0xe5c5, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xe5c6, .a=0xdd, .x=0xc9, .y=0xb1, .sp=0xa3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe5c4, .value=0x08}, {.addr=0xe5c5, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xe5c4, .value=0x08, .type=IO_READ},
        {.addr=0xe5c5, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_013F) {
    const struct CPU_State initial_cpu = {.pc=0xc076, .a=0xb1, .x=0x71, .y=0x20, .sp=0x3e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc076, .value=0x08}, {.addr=0xc077, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xc078, .a=0xff, .x=0x71, .y=0x20, .sp=0x3e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc076, .value=0x08}, {.addr=0xc077, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xc076, .value=0x08, .type=IO_READ},
        {.addr=0xc077, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0140) {
    const struct CPU_State initial_cpu = {.pc=0x2724, .a=0xb4, .x=0x83, .y=0x83, .sp=0x2b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2724, .value=0x08}, {.addr=0x2725, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x2726, .a=0xf7, .x=0x83, .y=0x83, .sp=0x2b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2724, .value=0x08}, {.addr=0x2725, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x2724, .value=0x08, .type=IO_READ},
        {.addr=0x2725, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe60d, .a=0x83, .x=0x48, .y=0xa6, .sp=0x72, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe60d, .value=0x08}, {.addr=0xe60e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xe60f, .a=0xcb, .x=0x48, .y=0xa6, .sp=0x72, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe60d, .value=0x08}, {.addr=0xe60e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xe60d, .value=0x08, .type=IO_READ},
        {.addr=0xe60e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0142) {
    const struct CPU_State initial_cpu = {.pc=0x510d, .a=0xde, .x=0x13, .y=0xe3, .sp=0xa7, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x510d, .value=0x08}, {.addr=0x510e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x510f, .a=0xdf, .x=0x13, .y=0xe3, .sp=0xa7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x510d, .value=0x08}, {.addr=0x510e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x510d, .value=0x08, .type=IO_READ},
        {.addr=0x510e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0143) {
    const struct CPU_State initial_cpu = {.pc=0x46bf, .a=0x23, .x=0xbf, .y=0xe3, .sp=0x66, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x46bf, .value=0x08}, {.addr=0x46c0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x46c1, .a=0x2b, .x=0xbf, .y=0xe3, .sp=0x66, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x46bf, .value=0x08}, {.addr=0x46c0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x46bf, .value=0x08, .type=IO_READ},
        {.addr=0x46c0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5f00, .a=0x83, .x=0x93, .y=0x07, .sp=0x9f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5f00, .value=0x08}, {.addr=0x5f01, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f02, .a=0xe3, .x=0x93, .y=0x07, .sp=0x9f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5f00, .value=0x08}, {.addr=0x5f01, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f00, .value=0x08, .type=IO_READ},
        {.addr=0x5f01, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0145) {
    const struct CPU_State initial_cpu = {.pc=0xc52e, .a=0x0e, .x=0xcb, .y=0xc5, .sp=0x48, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc52e, .value=0x08}, {.addr=0xc52f, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xc530, .a=0x1f, .x=0xcb, .y=0xc5, .sp=0x48, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc52e, .value=0x08}, {.addr=0xc52f, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xc52e, .value=0x08, .type=IO_READ},
        {.addr=0xc52f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0146) {
    const struct CPU_State initial_cpu = {.pc=0x4129, .a=0x77, .x=0x68, .y=0x6f, .sp=0x85, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4129, .value=0x08}, {.addr=0x412a, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x412b, .a=0xff, .x=0x68, .y=0x6f, .sp=0x85, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4129, .value=0x08}, {.addr=0x412a, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x4129, .value=0x08, .type=IO_READ},
        {.addr=0x412a, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0147) {
    const struct CPU_State initial_cpu = {.pc=0xaf9b, .a=0xfe, .x=0x0e, .y=0x00, .sp=0x75, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xaf9b, .value=0x08}, {.addr=0xaf9c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xaf9d, .a=0xfe, .x=0x0e, .y=0x00, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xaf9b, .value=0x08}, {.addr=0xaf9c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xaf9b, .value=0x08, .type=IO_READ},
        {.addr=0xaf9c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0148) {
    const struct CPU_State initial_cpu = {.pc=0xc15a, .a=0xdf, .x=0x60, .y=0xd2, .sp=0x82, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xc15a, .value=0x08}, {.addr=0xc15b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc15c, .a=0xff, .x=0x60, .y=0xd2, .sp=0x82, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc15a, .value=0x08}, {.addr=0xc15b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc15a, .value=0x08, .type=IO_READ},
        {.addr=0xc15b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1559, .a=0x38, .x=0x10, .y=0x24, .sp=0xd5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1559, .value=0x08}, {.addr=0x155a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x155b, .a=0xfc, .x=0x10, .y=0x24, .sp=0xd5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1559, .value=0x08}, {.addr=0x155a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1559, .value=0x08, .type=IO_READ},
        {.addr=0x155a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014A) {
    const struct CPU_State initial_cpu = {.pc=0x4944, .a=0x36, .x=0x79, .y=0x6e, .sp=0x6c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4944, .value=0x08}, {.addr=0x4945, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4946, .a=0xb6, .x=0x79, .y=0x6e, .sp=0x6c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4944, .value=0x08}, {.addr=0x4945, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4944, .value=0x08, .type=IO_READ},
        {.addr=0x4945, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014B) {
    const struct CPU_State initial_cpu = {.pc=0x92a8, .a=0x29, .x=0x10, .y=0x3f, .sp=0xb7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x92a8, .value=0x08}, {.addr=0x92a9, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x92aa, .a=0xa9, .x=0x10, .y=0x3f, .sp=0xb7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x92a8, .value=0x08}, {.addr=0x92a9, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x92a8, .value=0x08, .type=IO_READ},
        {.addr=0x92a9, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014C) {
    const struct CPU_State initial_cpu = {.pc=0xefd8, .a=0xed, .x=0x0f, .y=0xb2, .sp=0x3a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xefd8, .value=0x08}, {.addr=0xefd9, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xefda, .a=0xff, .x=0x0f, .y=0xb2, .sp=0x3a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xefd8, .value=0x08}, {.addr=0xefd9, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xefd8, .value=0x08, .type=IO_READ},
        {.addr=0xefd9, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014D) {
    const struct CPU_State initial_cpu = {.pc=0x699e, .a=0x69, .x=0x15, .y=0x4e, .sp=0xe5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x699e, .value=0x08}, {.addr=0x699f, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x69a0, .a=0xed, .x=0x15, .y=0x4e, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x699e, .value=0x08}, {.addr=0x699f, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x699e, .value=0x08, .type=IO_READ},
        {.addr=0x699f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014E) {
    const struct CPU_State initial_cpu = {.pc=0xf257, .a=0x66, .x=0xbd, .y=0xdf, .sp=0x24, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf257, .value=0x08}, {.addr=0xf258, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xf259, .a=0xef, .x=0xbd, .y=0xdf, .sp=0x24, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf257, .value=0x08}, {.addr=0xf258, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xf257, .value=0x08, .type=IO_READ},
        {.addr=0xf258, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4c66, .a=0xbf, .x=0x01, .y=0xe4, .sp=0xf4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4c66, .value=0x08}, {.addr=0x4c67, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x4c68, .a=0xff, .x=0x01, .y=0xe4, .sp=0xf4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4c66, .value=0x08}, {.addr=0x4c67, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x4c66, .value=0x08, .type=IO_READ},
        {.addr=0x4c67, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0150) {
    const struct CPU_State initial_cpu = {.pc=0xec93, .a=0x6e, .x=0x72, .y=0xe2, .sp=0xd6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xec93, .value=0x08}, {.addr=0xec94, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xec95, .a=0xee, .x=0x72, .y=0xe2, .sp=0xd6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xec93, .value=0x08}, {.addr=0xec94, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xec93, .value=0x08, .type=IO_READ},
        {.addr=0xec94, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0151) {
    const struct CPU_State initial_cpu = {.pc=0x4fb9, .a=0x31, .x=0xb0, .y=0x55, .sp=0x54, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb9, .value=0x08}, {.addr=0x4fba, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x4fbb, .a=0xf1, .x=0xb0, .y=0x55, .sp=0x54, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4fb9, .value=0x08}, {.addr=0x4fba, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x4fb9, .value=0x08, .type=IO_READ},
        {.addr=0x4fba, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0152) {
    const struct CPU_State initial_cpu = {.pc=0xbb1f, .a=0x2b, .x=0x70, .y=0xe9, .sp=0xee, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1f, .value=0x08}, {.addr=0xbb20, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xbb21, .a=0xab, .x=0x70, .y=0xe9, .sp=0xee, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbb1f, .value=0x08}, {.addr=0xbb20, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xbb1f, .value=0x08, .type=IO_READ},
        {.addr=0xbb20, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0153) {
    const struct CPU_State initial_cpu = {.pc=0x55ca, .a=0xb4, .x=0x25, .y=0x9f, .sp=0xee, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x55ca, .value=0x08}, {.addr=0x55cb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x55cc, .a=0xbc, .x=0x25, .y=0x9f, .sp=0xee, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x55ca, .value=0x08}, {.addr=0x55cb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x55ca, .value=0x08, .type=IO_READ},
        {.addr=0x55cb, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0154) {
    const struct CPU_State initial_cpu = {.pc=0x7b5e, .a=0xd7, .x=0x50, .y=0xf6, .sp=0x2f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b5e, .value=0x08}, {.addr=0x7b5f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x7b60, .a=0xdf, .x=0x50, .y=0xf6, .sp=0x2f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7b5e, .value=0x08}, {.addr=0x7b5f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x7b5e, .value=0x08, .type=IO_READ},
        {.addr=0x7b5f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0155) {
    const struct CPU_State initial_cpu = {.pc=0x43b4, .a=0xc7, .x=0x1f, .y=0xfc, .sp=0x0b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x43b4, .value=0x08}, {.addr=0x43b5, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x43b6, .a=0xc7, .x=0x1f, .y=0xfc, .sp=0x0b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x43b4, .value=0x08}, {.addr=0x43b5, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x43b4, .value=0x08, .type=IO_READ},
        {.addr=0x43b5, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0156) {
    const struct CPU_State initial_cpu = {.pc=0x52cb, .a=0xd9, .x=0x6d, .y=0x75, .sp=0x61, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x52cb, .value=0x08}, {.addr=0x52cc, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x52cd, .a=0xdd, .x=0x6d, .y=0x75, .sp=0x61, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x52cb, .value=0x08}, {.addr=0x52cc, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x52cb, .value=0x08, .type=IO_READ},
        {.addr=0x52cc, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0157) {
    const struct CPU_State initial_cpu = {.pc=0xab88, .a=0xcb, .x=0x4c, .y=0x7c, .sp=0x73, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xab88, .value=0x08}, {.addr=0xab89, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xab8a, .a=0xdb, .x=0x4c, .y=0x7c, .sp=0x73, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xab88, .value=0x08}, {.addr=0xab89, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xab88, .value=0x08, .type=IO_READ},
        {.addr=0xab89, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0158) {
    const struct CPU_State initial_cpu = {.pc=0x0537, .a=0x13, .x=0xac, .y=0xd1, .sp=0x8e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0537, .value=0x08}, {.addr=0x0538, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x0539, .a=0x1f, .x=0xac, .y=0xd1, .sp=0x8e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0537, .value=0x08}, {.addr=0x0538, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x0537, .value=0x08, .type=IO_READ},
        {.addr=0x0538, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0159) {
    const struct CPU_State initial_cpu = {.pc=0xb56a, .a=0x60, .x=0x48, .y=0x32, .sp=0xe0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb56a, .value=0x08}, {.addr=0xb56b, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xb56c, .a=0x75, .x=0x48, .y=0x32, .sp=0xe0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb56a, .value=0x08}, {.addr=0xb56b, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xb56a, .value=0x08, .type=IO_READ},
        {.addr=0xb56b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015A) {
    const struct CPU_State initial_cpu = {.pc=0xca41, .a=0x40, .x=0x7f, .y=0xc2, .sp=0x7d, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xca41, .value=0x08}, {.addr=0xca42, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xca43, .a=0xd7, .x=0x7f, .y=0xc2, .sp=0x7d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xca41, .value=0x08}, {.addr=0xca42, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xca41, .value=0x08, .type=IO_READ},
        {.addr=0xca42, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015B) {
    const struct CPU_State initial_cpu = {.pc=0x445d, .a=0x6f, .x=0x3b, .y=0x22, .sp=0xed, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x445d, .value=0x08}, {.addr=0x445e, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x445f, .a=0xff, .x=0x3b, .y=0x22, .sp=0xed, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x445d, .value=0x08}, {.addr=0x445e, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x445d, .value=0x08, .type=IO_READ},
        {.addr=0x445e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015C) {
    const struct CPU_State initial_cpu = {.pc=0x9973, .a=0x92, .x=0x72, .y=0xc6, .sp=0xb2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9973, .value=0x08}, {.addr=0x9974, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9975, .a=0xbf, .x=0x72, .y=0xc6, .sp=0xb2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9973, .value=0x08}, {.addr=0x9974, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9973, .value=0x08, .type=IO_READ},
        {.addr=0x9974, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015D) {
    const struct CPU_State initial_cpu = {.pc=0xca43, .a=0x6b, .x=0xf3, .y=0xcb, .sp=0x49, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xca43, .value=0x08}, {.addr=0xca44, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xca45, .a=0xeb, .x=0xf3, .y=0xcb, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xca43, .value=0x08}, {.addr=0xca44, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xca43, .value=0x08, .type=IO_READ},
        {.addr=0xca44, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015E) {
    const struct CPU_State initial_cpu = {.pc=0x05a3, .a=0x09, .x=0x40, .y=0xbb, .sp=0xe2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x05a3, .value=0x08}, {.addr=0x05a4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x05a5, .a=0xdd, .x=0x40, .y=0xbb, .sp=0xe2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x05a3, .value=0x08}, {.addr=0x05a4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x05a3, .value=0x08, .type=IO_READ},
        {.addr=0x05a4, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_015F) {
    const struct CPU_State initial_cpu = {.pc=0x1d7c, .a=0x06, .x=0x9b, .y=0xe9, .sp=0x97, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1d7c, .value=0x08}, {.addr=0x1d7d, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x1d7e, .a=0xa7, .x=0x9b, .y=0xe9, .sp=0x97, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1d7c, .value=0x08}, {.addr=0x1d7d, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x1d7c, .value=0x08, .type=IO_READ},
        {.addr=0x1d7d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0160) {
    const struct CPU_State initial_cpu = {.pc=0xc302, .a=0xca, .x=0xee, .y=0x07, .sp=0x10, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc302, .value=0x08}, {.addr=0xc303, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc304, .a=0xcb, .x=0xee, .y=0x07, .sp=0x10, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc302, .value=0x08}, {.addr=0xc303, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc302, .value=0x08, .type=IO_READ},
        {.addr=0xc303, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0161) {
    const struct CPU_State initial_cpu = {.pc=0x9915, .a=0xdc, .x=0xb4, .y=0x5c, .sp=0x34, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9915, .value=0x08}, {.addr=0x9916, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x9917, .a=0xdf, .x=0xb4, .y=0x5c, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9915, .value=0x08}, {.addr=0x9916, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9915, .value=0x08, .type=IO_READ},
        {.addr=0x9916, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0162) {
    const struct CPU_State initial_cpu = {.pc=0xcdc8, .a=0x58, .x=0xb2, .y=0x73, .sp=0x57, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc8, .value=0x08}, {.addr=0xcdc9, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xcdca, .a=0xda, .x=0xb2, .y=0x73, .sp=0x57, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xcdc8, .value=0x08}, {.addr=0xcdc9, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xcdc8, .value=0x08, .type=IO_READ},
        {.addr=0xcdc9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0163) {
    const struct CPU_State initial_cpu = {.pc=0x5d0e, .a=0x0d, .x=0x63, .y=0x7d, .sp=0xa5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0e, .value=0x08}, {.addr=0x5d0f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x5d10, .a=0xfd, .x=0x63, .y=0x7d, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5d0e, .value=0x08}, {.addr=0x5d0f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x5d0e, .value=0x08, .type=IO_READ},
        {.addr=0x5d0f, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0164) {
    const struct CPU_State initial_cpu = {.pc=0xf7b7, .a=0x85, .x=0xf9, .y=0xcb, .sp=0x70, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b7, .value=0x08}, {.addr=0xf7b8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xf7b9, .a=0x8d, .x=0xf9, .y=0xcb, .sp=0x70, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf7b7, .value=0x08}, {.addr=0xf7b8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xf7b7, .value=0x08, .type=IO_READ},
        {.addr=0xf7b8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0165) {
    const struct CPU_State initial_cpu = {.pc=0xbe59, .a=0xbc, .x=0x1e, .y=0x03, .sp=0xe0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbe59, .value=0x08}, {.addr=0xbe5a, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xbe5b, .a=0xfd, .x=0x1e, .y=0x03, .sp=0xe0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbe59, .value=0x08}, {.addr=0xbe5a, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xbe59, .value=0x08, .type=IO_READ},
        {.addr=0xbe5a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0166) {
    const struct CPU_State initial_cpu = {.pc=0xb8a7, .a=0xe0, .x=0xc6, .y=0xa5, .sp=0xa7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a7, .value=0x08}, {.addr=0xb8a8, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xb8a9, .a=0xff, .x=0xc6, .y=0xa5, .sp=0xa7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb8a7, .value=0x08}, {.addr=0xb8a8, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xb8a7, .value=0x08, .type=IO_READ},
        {.addr=0xb8a8, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe4a0, .a=0x1e, .x=0x65, .y=0xb1, .sp=0x07, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe4a0, .value=0x08}, {.addr=0xe4a1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xe4a2, .a=0xde, .x=0x65, .y=0xb1, .sp=0x07, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe4a0, .value=0x08}, {.addr=0xe4a1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xe4a0, .value=0x08, .type=IO_READ},
        {.addr=0xe4a1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0168) {
    const struct CPU_State initial_cpu = {.pc=0xd9a0, .a=0xc0, .x=0x08, .y=0xe6, .sp=0x5a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a0, .value=0x08}, {.addr=0xd9a1, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xd9a2, .a=0xec, .x=0x08, .y=0xe6, .sp=0x5a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd9a0, .value=0x08}, {.addr=0xd9a1, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xd9a0, .value=0x08, .type=IO_READ},
        {.addr=0xd9a1, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0169) {
    const struct CPU_State initial_cpu = {.pc=0xe465, .a=0xcf, .x=0x20, .y=0xf7, .sp=0xe7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe465, .value=0x08}, {.addr=0xe466, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe467, .a=0xff, .x=0x20, .y=0xf7, .sp=0xe7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe465, .value=0x08}, {.addr=0xe466, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe465, .value=0x08, .type=IO_READ},
        {.addr=0xe466, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016A) {
    const struct CPU_State initial_cpu = {.pc=0x8103, .a=0x4c, .x=0x05, .y=0x09, .sp=0xc9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8103, .value=0x08}, {.addr=0x8104, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x8105, .a=0x4e, .x=0x05, .y=0x09, .sp=0xc9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8103, .value=0x08}, {.addr=0x8104, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x8103, .value=0x08, .type=IO_READ},
        {.addr=0x8104, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016B) {
    const struct CPU_State initial_cpu = {.pc=0x08b1, .a=0xe3, .x=0x62, .y=0x48, .sp=0xdf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x08b1, .value=0x08}, {.addr=0x08b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x08b3, .a=0xe3, .x=0x62, .y=0x48, .sp=0xdf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x08b1, .value=0x08}, {.addr=0x08b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x08b1, .value=0x08, .type=IO_READ},
        {.addr=0x08b2, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016C) {
    const struct CPU_State initial_cpu = {.pc=0x6301, .a=0xb7, .x=0x45, .y=0x46, .sp=0xaa, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6301, .value=0x08}, {.addr=0x6302, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6303, .a=0xbf, .x=0x45, .y=0x46, .sp=0xaa, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6301, .value=0x08}, {.addr=0x6302, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6301, .value=0x08, .type=IO_READ},
        {.addr=0x6302, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016D) {
    const struct CPU_State initial_cpu = {.pc=0x3284, .a=0x83, .x=0x26, .y=0xd7, .sp=0x8c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3284, .value=0x08}, {.addr=0x3285, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x3286, .a=0x8b, .x=0x26, .y=0xd7, .sp=0x8c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3284, .value=0x08}, {.addr=0x3285, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x3284, .value=0x08, .type=IO_READ},
        {.addr=0x3285, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016E) {
    const struct CPU_State initial_cpu = {.pc=0xe655, .a=0xbb, .x=0xd1, .y=0x75, .sp=0xe1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe655, .value=0x08}, {.addr=0xe656, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xe657, .a=0xff, .x=0xd1, .y=0x75, .sp=0xe1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe655, .value=0x08}, {.addr=0xe656, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xe655, .value=0x08, .type=IO_READ},
        {.addr=0xe656, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_016F) {
    const struct CPU_State initial_cpu = {.pc=0xfc91, .a=0x42, .x=0x11, .y=0x78, .sp=0x1b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfc91, .value=0x08}, {.addr=0xfc92, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xfc93, .a=0x76, .x=0x11, .y=0x78, .sp=0x1b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfc91, .value=0x08}, {.addr=0xfc92, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xfc91, .value=0x08, .type=IO_READ},
        {.addr=0xfc92, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0170) {
    const struct CPU_State initial_cpu = {.pc=0xa27a, .a=0xfb, .x=0x93, .y=0x6a, .sp=0x06, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa27a, .value=0x08}, {.addr=0xa27b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xa27c, .a=0xfb, .x=0x93, .y=0x6a, .sp=0x06, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa27a, .value=0x08}, {.addr=0xa27b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xa27a, .value=0x08, .type=IO_READ},
        {.addr=0xa27b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0171) {
    const struct CPU_State initial_cpu = {.pc=0x66b2, .a=0x94, .x=0x94, .y=0x50, .sp=0x69, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x66b2, .value=0x08}, {.addr=0x66b3, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x66b4, .a=0xb5, .x=0x94, .y=0x50, .sp=0x69, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x66b2, .value=0x08}, {.addr=0x66b3, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x66b2, .value=0x08, .type=IO_READ},
        {.addr=0x66b3, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0172) {
    const struct CPU_State initial_cpu = {.pc=0xebba, .a=0x7a, .x=0xe5, .y=0xdf, .sp=0x93, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xebba, .value=0x08}, {.addr=0xebbb, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xebbc, .a=0x7a, .x=0xe5, .y=0xdf, .sp=0x93, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xebba, .value=0x08}, {.addr=0xebbb, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xebba, .value=0x08, .type=IO_READ},
        {.addr=0xebbb, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0173) {
    const struct CPU_State initial_cpu = {.pc=0xd754, .a=0xa2, .x=0x76, .y=0xcb, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd754, .value=0x08}, {.addr=0xd755, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd756, .a=0xef, .x=0x76, .y=0xcb, .sp=0x68, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd754, .value=0x08}, {.addr=0xd755, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd754, .value=0x08, .type=IO_READ},
        {.addr=0xd755, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4224, .a=0xb4, .x=0xf6, .y=0x62, .sp=0xd1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4224, .value=0x08}, {.addr=0x4225, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4226, .a=0xf4, .x=0xf6, .y=0x62, .sp=0xd1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4224, .value=0x08}, {.addr=0x4225, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4224, .value=0x08, .type=IO_READ},
        {.addr=0x4225, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0175) {
    const struct CPU_State initial_cpu = {.pc=0x7597, .a=0x6c, .x=0x28, .y=0x56, .sp=0x96, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7597, .value=0x08}, {.addr=0x7598, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x7599, .a=0x6d, .x=0x28, .y=0x56, .sp=0x96, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7597, .value=0x08}, {.addr=0x7598, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x7597, .value=0x08, .type=IO_READ},
        {.addr=0x7598, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0176) {
    const struct CPU_State initial_cpu = {.pc=0x999e, .a=0x5d, .x=0x19, .y=0x4d, .sp=0x39, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x999e, .value=0x08}, {.addr=0x999f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x99a0, .a=0xdf, .x=0x19, .y=0x4d, .sp=0x39, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x999e, .value=0x08}, {.addr=0x999f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x999e, .value=0x08, .type=IO_READ},
        {.addr=0x999f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0177) {
    const struct CPU_State initial_cpu = {.pc=0x79e6, .a=0xff, .x=0x2f, .y=0xb9, .sp=0x8f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x79e6, .value=0x08}, {.addr=0x79e7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x79e8, .a=0xff, .x=0x2f, .y=0xb9, .sp=0x8f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x79e6, .value=0x08}, {.addr=0x79e7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x79e6, .value=0x08, .type=IO_READ},
        {.addr=0x79e7, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb731, .a=0xa0, .x=0x61, .y=0x52, .sp=0x27, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xb731, .value=0x08}, {.addr=0xb732, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xb733, .a=0xfe, .x=0x61, .y=0x52, .sp=0x27, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb731, .value=0x08}, {.addr=0xb732, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xb731, .value=0x08, .type=IO_READ},
        {.addr=0xb732, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0179) {
    const struct CPU_State initial_cpu = {.pc=0x86cd, .a=0x85, .x=0x8f, .y=0x95, .sp=0x98, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x86cd, .value=0x08}, {.addr=0x86ce, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x86cf, .a=0xb7, .x=0x8f, .y=0x95, .sp=0x98, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x86cd, .value=0x08}, {.addr=0x86ce, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x86cd, .value=0x08, .type=IO_READ},
        {.addr=0x86ce, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017A) {
    const struct CPU_State initial_cpu = {.pc=0xb163, .a=0x85, .x=0x03, .y=0xe7, .sp=0x2f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xb163, .value=0x08}, {.addr=0xb164, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb165, .a=0xef, .x=0x03, .y=0xe7, .sp=0x2f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb163, .value=0x08}, {.addr=0xb164, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb163, .value=0x08, .type=IO_READ},
        {.addr=0xb164, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017B) {
    const struct CPU_State initial_cpu = {.pc=0xc581, .a=0x03, .x=0x63, .y=0xee, .sp=0x31, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc581, .value=0x08}, {.addr=0xc582, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc583, .a=0x5f, .x=0x63, .y=0xee, .sp=0x31, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc581, .value=0x08}, {.addr=0xc582, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc581, .value=0x08, .type=IO_READ},
        {.addr=0xc582, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa269, .a=0xcd, .x=0x67, .y=0x02, .sp=0xcc, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa269, .value=0x08}, {.addr=0xa26a, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa26b, .a=0xcf, .x=0x67, .y=0x02, .sp=0xcc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa269, .value=0x08}, {.addr=0xa26a, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa269, .value=0x08, .type=IO_READ},
        {.addr=0xa26a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017D) {
    const struct CPU_State initial_cpu = {.pc=0xc07d, .a=0x0d, .x=0xe2, .y=0x8e, .sp=0x44, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc07d, .value=0x08}, {.addr=0xc07e, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xc07f, .a=0xbf, .x=0xe2, .y=0x8e, .sp=0x44, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc07d, .value=0x08}, {.addr=0xc07e, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xc07d, .value=0x08, .type=IO_READ},
        {.addr=0xc07e, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017E) {
    const struct CPU_State initial_cpu = {.pc=0x97c5, .a=0xdd, .x=0x62, .y=0x2f, .sp=0x12, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x97c5, .value=0x08}, {.addr=0x97c6, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x97c7, .a=0xdf, .x=0x62, .y=0x2f, .sp=0x12, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x97c5, .value=0x08}, {.addr=0x97c6, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x97c5, .value=0x08, .type=IO_READ},
        {.addr=0x97c6, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa48c, .a=0xf6, .x=0xe2, .y=0x91, .sp=0x21, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa48c, .value=0x08}, {.addr=0xa48d, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xa48e, .a=0xf6, .x=0xe2, .y=0x91, .sp=0x21, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa48c, .value=0x08}, {.addr=0xa48d, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xa48c, .value=0x08, .type=IO_READ},
        {.addr=0xa48d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0180) {
    const struct CPU_State initial_cpu = {.pc=0xc81b, .a=0x2b, .x=0x41, .y=0xae, .sp=0x44, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc81b, .value=0x08}, {.addr=0xc81c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc81d, .a=0x6f, .x=0x41, .y=0xae, .sp=0x44, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc81b, .value=0x08}, {.addr=0xc81c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc81b, .value=0x08, .type=IO_READ},
        {.addr=0xc81c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0181) {
    const struct CPU_State initial_cpu = {.pc=0xe57b, .a=0x44, .x=0xdf, .y=0xea, .sp=0x1d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe57b, .value=0x08}, {.addr=0xe57c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xe57d, .a=0x45, .x=0xdf, .y=0xea, .sp=0x1d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe57b, .value=0x08}, {.addr=0xe57c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xe57b, .value=0x08, .type=IO_READ},
        {.addr=0xe57c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0182) {
    const struct CPU_State initial_cpu = {.pc=0x314c, .a=0x14, .x=0x25, .y=0x9d, .sp=0xe0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x314c, .value=0x08}, {.addr=0x314d, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x314e, .a=0x75, .x=0x25, .y=0x9d, .sp=0xe0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x314c, .value=0x08}, {.addr=0x314d, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x314c, .value=0x08, .type=IO_READ},
        {.addr=0x314d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0183) {
    const struct CPU_State initial_cpu = {.pc=0xc48c, .a=0x4a, .x=0xfa, .y=0x84, .sp=0x83, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xc48c, .value=0x08}, {.addr=0xc48d, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc48e, .a=0x4b, .x=0xfa, .y=0x84, .sp=0x83, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc48c, .value=0x08}, {.addr=0xc48d, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc48c, .value=0x08, .type=IO_READ},
        {.addr=0xc48d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0184) {
    const struct CPU_State initial_cpu = {.pc=0x5709, .a=0x1a, .x=0x16, .y=0x1d, .sp=0xc7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5709, .value=0x08}, {.addr=0x570a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x570b, .a=0x1e, .x=0x16, .y=0x1d, .sp=0xc7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5709, .value=0x08}, {.addr=0x570a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x5709, .value=0x08, .type=IO_READ},
        {.addr=0x570a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0185) {
    const struct CPU_State initial_cpu = {.pc=0x21be, .a=0x41, .x=0x57, .y=0x09, .sp=0xfb, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x21be, .value=0x08}, {.addr=0x21bf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x21c0, .a=0xed, .x=0x57, .y=0x09, .sp=0xfb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x21be, .value=0x08}, {.addr=0x21bf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x21be, .value=0x08, .type=IO_READ},
        {.addr=0x21bf, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0186) {
    const struct CPU_State initial_cpu = {.pc=0x3643, .a=0x74, .x=0xd0, .y=0x07, .sp=0xab, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3643, .value=0x08}, {.addr=0x3644, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3645, .a=0x7c, .x=0xd0, .y=0x07, .sp=0xab, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3643, .value=0x08}, {.addr=0x3644, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3643, .value=0x08, .type=IO_READ},
        {.addr=0x3644, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0187) {
    const struct CPU_State initial_cpu = {.pc=0x0ef8, .a=0x74, .x=0x5e, .y=0x4b, .sp=0xcb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef8, .value=0x08}, {.addr=0x0ef9, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x0efa, .a=0x7c, .x=0x5e, .y=0x4b, .sp=0xcb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0ef8, .value=0x08}, {.addr=0x0ef9, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x0ef8, .value=0x08, .type=IO_READ},
        {.addr=0x0ef9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0188) {
    const struct CPU_State initial_cpu = {.pc=0x2745, .a=0x7a, .x=0x67, .y=0x2d, .sp=0xfc, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2745, .value=0x08}, {.addr=0x2746, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2747, .a=0x7f, .x=0x67, .y=0x2d, .sp=0xfc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2745, .value=0x08}, {.addr=0x2746, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2745, .value=0x08, .type=IO_READ},
        {.addr=0x2746, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0189) {
    const struct CPU_State initial_cpu = {.pc=0x2445, .a=0x4c, .x=0xa4, .y=0x53, .sp=0x9d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2445, .value=0x08}, {.addr=0x2446, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x2447, .a=0x5c, .x=0xa4, .y=0x53, .sp=0x9d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2445, .value=0x08}, {.addr=0x2446, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x2445, .value=0x08, .type=IO_READ},
        {.addr=0x2446, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018A) {
    const struct CPU_State initial_cpu = {.pc=0xd6ed, .a=0x95, .x=0xe3, .y=0x72, .sp=0xeb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ed, .value=0x08}, {.addr=0xd6ee, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd6ef, .a=0xd5, .x=0xe3, .y=0x72, .sp=0xeb, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd6ed, .value=0x08}, {.addr=0xd6ee, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd6ed, .value=0x08, .type=IO_READ},
        {.addr=0xd6ee, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018B) {
    const struct CPU_State initial_cpu = {.pc=0x90a6, .a=0xdc, .x=0x14, .y=0x69, .sp=0x6e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x90a6, .value=0x08}, {.addr=0x90a7, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x90a8, .a=0xdf, .x=0x14, .y=0x69, .sp=0x6e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x90a6, .value=0x08}, {.addr=0x90a7, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x90a6, .value=0x08, .type=IO_READ},
        {.addr=0x90a7, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5ab0, .a=0x19, .x=0x1f, .y=0xb0, .sp=0xf1, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab0, .value=0x08}, {.addr=0x5ab1, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x5ab2, .a=0xfd, .x=0x1f, .y=0xb0, .sp=0xf1, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5ab0, .value=0x08}, {.addr=0x5ab1, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x5ab0, .value=0x08, .type=IO_READ},
        {.addr=0x5ab1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018D) {
    const struct CPU_State initial_cpu = {.pc=0x1c67, .a=0x0b, .x=0xf2, .y=0xd4, .sp=0xde, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1c67, .value=0x08}, {.addr=0x1c68, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x1c69, .a=0x5f, .x=0xf2, .y=0xd4, .sp=0xde, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1c67, .value=0x08}, {.addr=0x1c68, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x1c67, .value=0x08, .type=IO_READ},
        {.addr=0x1c68, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018E) {
    const struct CPU_State initial_cpu = {.pc=0xee57, .a=0x89, .x=0x5f, .y=0x16, .sp=0xcc, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xee57, .value=0x08}, {.addr=0xee58, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xee59, .a=0xef, .x=0x5f, .y=0x16, .sp=0xcc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xee57, .value=0x08}, {.addr=0xee58, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xee57, .value=0x08, .type=IO_READ},
        {.addr=0xee58, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_018F) {
    const struct CPU_State initial_cpu = {.pc=0x54a3, .a=0x40, .x=0x0b, .y=0x94, .sp=0x83, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x54a3, .value=0x08}, {.addr=0x54a4, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x54a5, .a=0xda, .x=0x0b, .y=0x94, .sp=0x83, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x54a3, .value=0x08}, {.addr=0x54a4, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x54a3, .value=0x08, .type=IO_READ},
        {.addr=0x54a4, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0190) {
    const struct CPU_State initial_cpu = {.pc=0x37fe, .a=0xc2, .x=0x8e, .y=0x4c, .sp=0x7d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x37fe, .value=0x08}, {.addr=0x37ff, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x3800, .a=0xde, .x=0x8e, .y=0x4c, .sp=0x7d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x37fe, .value=0x08}, {.addr=0x37ff, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x37fe, .value=0x08, .type=IO_READ},
        {.addr=0x37ff, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0191) {
    const struct CPU_State initial_cpu = {.pc=0xa9a9, .a=0x3f, .x=0x09, .y=0x2c, .sp=0xf7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a9, .value=0x08}, {.addr=0xa9aa, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xa9ab, .a=0x3f, .x=0x09, .y=0x2c, .sp=0xf7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa9a9, .value=0x08}, {.addr=0xa9aa, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xa9a9, .value=0x08, .type=IO_READ},
        {.addr=0xa9aa, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0192) {
    const struct CPU_State initial_cpu = {.pc=0x34fb, .a=0xe2, .x=0xca, .y=0xb2, .sp=0x10, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x34fb, .value=0x08}, {.addr=0x34fc, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x34fd, .a=0xfb, .x=0xca, .y=0xb2, .sp=0x10, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x34fb, .value=0x08}, {.addr=0x34fc, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x34fb, .value=0x08, .type=IO_READ},
        {.addr=0x34fc, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0193) {
    const struct CPU_State initial_cpu = {.pc=0x639f, .a=0xd2, .x=0x3d, .y=0xaa, .sp=0xf4, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x639f, .value=0x08}, {.addr=0x63a0, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x63a1, .a=0xd6, .x=0x3d, .y=0xaa, .sp=0xf4, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x639f, .value=0x08}, {.addr=0x63a0, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x639f, .value=0x08, .type=IO_READ},
        {.addr=0x63a0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0194) {
    const struct CPU_State initial_cpu = {.pc=0xd8fc, .a=0xe3, .x=0x51, .y=0x66, .sp=0x76, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd8fc, .value=0x08}, {.addr=0xd8fd, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xd8fe, .a=0xf3, .x=0x51, .y=0x66, .sp=0x76, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd8fc, .value=0x08}, {.addr=0xd8fd, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xd8fc, .value=0x08, .type=IO_READ},
        {.addr=0xd8fd, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0195) {
    const struct CPU_State initial_cpu = {.pc=0xac17, .a=0x34, .x=0xae, .y=0xee, .sp=0x91, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xac17, .value=0x08}, {.addr=0xac18, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xac19, .a=0x36, .x=0xae, .y=0xee, .sp=0x91, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xac17, .value=0x08}, {.addr=0xac18, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xac17, .value=0x08, .type=IO_READ},
        {.addr=0xac18, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0196) {
    const struct CPU_State initial_cpu = {.pc=0xb156, .a=0x9b, .x=0xf1, .y=0xe8, .sp=0x1d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb156, .value=0x08}, {.addr=0xb157, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xb158, .a=0xdb, .x=0xf1, .y=0xe8, .sp=0x1d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb156, .value=0x08}, {.addr=0xb157, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xb156, .value=0x08, .type=IO_READ},
        {.addr=0xb157, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0197) {
    const struct CPU_State initial_cpu = {.pc=0xd43e, .a=0x1f, .x=0xf1, .y=0x7e, .sp=0x69, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd43e, .value=0x08}, {.addr=0xd43f, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xd440, .a=0xdf, .x=0xf1, .y=0x7e, .sp=0x69, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd43e, .value=0x08}, {.addr=0xd43f, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xd43e, .value=0x08, .type=IO_READ},
        {.addr=0xd43f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0198) {
    const struct CPU_State initial_cpu = {.pc=0x6b57, .a=0x8e, .x=0xbc, .y=0xf7, .sp=0x35, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b57, .value=0x08}, {.addr=0x6b58, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x6b59, .a=0xaf, .x=0xbc, .y=0xf7, .sp=0x35, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6b57, .value=0x08}, {.addr=0x6b58, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x6b57, .value=0x08, .type=IO_READ},
        {.addr=0x6b58, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4fb8, .a=0x0f, .x=0xc3, .y=0xae, .sp=0xd9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb8, .value=0x08}, {.addr=0x4fb9, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x4fba, .a=0xff, .x=0xc3, .y=0xae, .sp=0xd9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4fb8, .value=0x08}, {.addr=0x4fb9, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x4fb8, .value=0x08, .type=IO_READ},
        {.addr=0x4fb9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019A) {
    const struct CPU_State initial_cpu = {.pc=0x78cd, .a=0xe3, .x=0x7a, .y=0x32, .sp=0x4c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x78cd, .value=0x08}, {.addr=0x78ce, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x78cf, .a=0xf3, .x=0x7a, .y=0x32, .sp=0x4c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x78cd, .value=0x08}, {.addr=0x78ce, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x78cd, .value=0x08, .type=IO_READ},
        {.addr=0x78ce, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019B) {
    const struct CPU_State initial_cpu = {.pc=0xea69, .a=0x2a, .x=0x08, .y=0x91, .sp=0xdf, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xea69, .value=0x08}, {.addr=0xea6a, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xea6b, .a=0x2b, .x=0x08, .y=0x91, .sp=0xdf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xea69, .value=0x08}, {.addr=0xea6a, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xea69, .value=0x08, .type=IO_READ},
        {.addr=0xea6a, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019C) {
    const struct CPU_State initial_cpu = {.pc=0xa3f1, .a=0x87, .x=0x6c, .y=0xd3, .sp=0xe4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f1, .value=0x08}, {.addr=0xa3f2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa3f3, .a=0xbf, .x=0x6c, .y=0xd3, .sp=0xe4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa3f1, .value=0x08}, {.addr=0xa3f2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa3f1, .value=0x08, .type=IO_READ},
        {.addr=0xa3f2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019D) {
    const struct CPU_State initial_cpu = {.pc=0xb5cc, .a=0x5a, .x=0xcf, .y=0x29, .sp=0xb3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb5cc, .value=0x08}, {.addr=0xb5cd, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xb5ce, .a=0xda, .x=0xcf, .y=0x29, .sp=0xb3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb5cc, .value=0x08}, {.addr=0xb5cd, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xb5cc, .value=0x08, .type=IO_READ},
        {.addr=0xb5cd, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019E) {
    const struct CPU_State initial_cpu = {.pc=0xd597, .a=0xab, .x=0xb4, .y=0x28, .sp=0x30, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd597, .value=0x08}, {.addr=0xd598, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xd599, .a=0xbf, .x=0xb4, .y=0x28, .sp=0x30, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd597, .value=0x08}, {.addr=0xd598, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xd597, .value=0x08, .type=IO_READ},
        {.addr=0xd598, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_019F) {
    const struct CPU_State initial_cpu = {.pc=0xf754, .a=0xea, .x=0xd4, .y=0x85, .sp=0x38, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf754, .value=0x08}, {.addr=0xf755, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xf756, .a=0xea, .x=0xd4, .y=0x85, .sp=0x38, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf754, .value=0x08}, {.addr=0xf755, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xf754, .value=0x08, .type=IO_READ},
        {.addr=0xf755, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xff03, .a=0x04, .x=0x22, .y=0x9e, .sp=0x09, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xff03, .value=0x08}, {.addr=0xff04, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xff05, .a=0x05, .x=0x22, .y=0x9e, .sp=0x09, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xff03, .value=0x08}, {.addr=0xff04, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xff03, .value=0x08, .type=IO_READ},
        {.addr=0xff04, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x1885, .a=0xa4, .x=0x66, .y=0x87, .sp=0x9e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1885, .value=0x08}, {.addr=0x1886, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x1887, .a=0xb6, .x=0x66, .y=0x87, .sp=0x9e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1885, .value=0x08}, {.addr=0x1886, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x1885, .value=0x08, .type=IO_READ},
        {.addr=0x1886, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x1c79, .a=0xc0, .x=0x3d, .y=0x23, .sp=0x90, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1c79, .value=0x08}, {.addr=0x1c7a, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x1c7b, .a=0xd2, .x=0x3d, .y=0x23, .sp=0x90, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1c79, .value=0x08}, {.addr=0x1c7a, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x1c79, .value=0x08, .type=IO_READ},
        {.addr=0x1c7a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x9402, .a=0x26, .x=0x1f, .y=0x86, .sp=0x8b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9402, .value=0x08}, {.addr=0x9403, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x9404, .a=0xa7, .x=0x1f, .y=0x86, .sp=0x8b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9402, .value=0x08}, {.addr=0x9403, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x9402, .value=0x08, .type=IO_READ},
        {.addr=0x9403, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc654, .a=0xd4, .x=0xd4, .y=0x19, .sp=0xaf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc654, .value=0x08}, {.addr=0xc655, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xc656, .a=0xfc, .x=0xd4, .y=0x19, .sp=0xaf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc654, .value=0x08}, {.addr=0xc655, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xc654, .value=0x08, .type=IO_READ},
        {.addr=0xc655, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1bfb, .a=0x58, .x=0xce, .y=0x86, .sp=0x6c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1bfb, .value=0x08}, {.addr=0x1bfc, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x1bfd, .a=0xf9, .x=0xce, .y=0x86, .sp=0x6c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1bfb, .value=0x08}, {.addr=0x1bfc, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x1bfb, .value=0x08, .type=IO_READ},
        {.addr=0x1bfc, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9178, .a=0x0a, .x=0x7b, .y=0xe6, .sp=0xd2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9178, .value=0x08}, {.addr=0x9179, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x917a, .a=0x0b, .x=0x7b, .y=0xe6, .sp=0xd2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9178, .value=0x08}, {.addr=0x9179, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x9178, .value=0x08, .type=IO_READ},
        {.addr=0x9179, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe47c, .a=0x5d, .x=0xbc, .y=0x01, .sp=0x08, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe47c, .value=0x08}, {.addr=0xe47d, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe47e, .a=0xdd, .x=0xbc, .y=0x01, .sp=0x08, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe47c, .value=0x08}, {.addr=0xe47d, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe47c, .value=0x08, .type=IO_READ},
        {.addr=0xe47d, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x647f, .a=0x69, .x=0x81, .y=0x4f, .sp=0xdd, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x647f, .value=0x08}, {.addr=0x6480, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6481, .a=0x6b, .x=0x81, .y=0x4f, .sp=0xdd, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x647f, .value=0x08}, {.addr=0x6480, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x647f, .value=0x08, .type=IO_READ},
        {.addr=0x6480, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x11fd, .a=0x6d, .x=0x00, .y=0xa8, .sp=0x7c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x11fd, .value=0x08}, {.addr=0x11fe, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x11ff, .a=0x6f, .x=0x00, .y=0xa8, .sp=0x7c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x11fd, .value=0x08}, {.addr=0x11fe, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x11fd, .value=0x08, .type=IO_READ},
        {.addr=0x11fe, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x5607, .a=0x76, .x=0x53, .y=0x31, .sp=0xe5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5607, .value=0x08}, {.addr=0x5608, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x5609, .a=0xfe, .x=0x53, .y=0x31, .sp=0xe5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5607, .value=0x08}, {.addr=0x5608, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x5607, .value=0x08, .type=IO_READ},
        {.addr=0x5608, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x1e97, .a=0x33, .x=0xb9, .y=0x16, .sp=0x4d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e97, .value=0x08}, {.addr=0x1e98, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x1e99, .a=0xbb, .x=0xb9, .y=0x16, .sp=0x4d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1e97, .value=0x08}, {.addr=0x1e98, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x1e97, .value=0x08, .type=IO_READ},
        {.addr=0x1e98, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3285, .a=0x7d, .x=0xc8, .y=0x8e, .sp=0x22, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3285, .value=0x08}, {.addr=0x3286, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x3287, .a=0xff, .x=0xc8, .y=0x8e, .sp=0x22, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3285, .value=0x08}, {.addr=0x3286, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x3285, .value=0x08, .type=IO_READ},
        {.addr=0x3286, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xd31b, .a=0xc4, .x=0x2c, .y=0x10, .sp=0xc9, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd31b, .value=0x08}, {.addr=0xd31c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xd31d, .a=0xc5, .x=0x2c, .y=0x10, .sp=0xc9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd31b, .value=0x08}, {.addr=0xd31c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xd31b, .value=0x08, .type=IO_READ},
        {.addr=0xd31c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x27c1, .a=0x36, .x=0x36, .y=0x07, .sp=0x9f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x27c1, .value=0x08}, {.addr=0x27c2, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x27c3, .a=0xf6, .x=0x36, .y=0x07, .sp=0x9f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x27c1, .value=0x08}, {.addr=0x27c2, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x27c1, .value=0x08, .type=IO_READ},
        {.addr=0x27c2, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x8557, .a=0x28, .x=0x30, .y=0x19, .sp=0xe1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8557, .value=0x08}, {.addr=0x8558, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x8559, .a=0x29, .x=0x30, .y=0x19, .sp=0xe1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8557, .value=0x08}, {.addr=0x8558, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x8557, .value=0x08, .type=IO_READ},
        {.addr=0x8558, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x24c6, .a=0xd0, .x=0xc3, .y=0x13, .sp=0x87, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x24c6, .value=0x08}, {.addr=0x24c7, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x24c8, .a=0xfb, .x=0xc3, .y=0x13, .sp=0x87, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x24c6, .value=0x08}, {.addr=0x24c7, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x24c6, .value=0x08, .type=IO_READ},
        {.addr=0x24c7, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x07c0, .a=0x9d, .x=0x2c, .y=0x24, .sp=0x46, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x07c0, .value=0x08}, {.addr=0x07c1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x07c2, .a=0xdf, .x=0x2c, .y=0x24, .sp=0x46, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x07c0, .value=0x08}, {.addr=0x07c1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x07c0, .value=0x08, .type=IO_READ},
        {.addr=0x07c1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xecca, .a=0x62, .x=0xbb, .y=0xc7, .sp=0x51, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xecca, .value=0x08}, {.addr=0xeccb, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xeccc, .a=0x7f, .x=0xbb, .y=0xc7, .sp=0x51, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xecca, .value=0x08}, {.addr=0xeccb, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xecca, .value=0x08, .type=IO_READ},
        {.addr=0xeccb, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x61b6, .a=0xbb, .x=0xfe, .y=0xdc, .sp=0xf5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x61b6, .value=0x08}, {.addr=0x61b7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x61b8, .a=0xff, .x=0xfe, .y=0xdc, .sp=0xf5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x61b6, .value=0x08}, {.addr=0x61b7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x61b6, .value=0x08, .type=IO_READ},
        {.addr=0x61b7, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x20a9, .a=0xd7, .x=0x82, .y=0x96, .sp=0x1c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x20a9, .value=0x08}, {.addr=0x20aa, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x20ab, .a=0xdf, .x=0x82, .y=0x96, .sp=0x1c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x20a9, .value=0x08}, {.addr=0x20aa, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x20a9, .value=0x08, .type=IO_READ},
        {.addr=0x20aa, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x3a0c, .a=0xa1, .x=0xe6, .y=0xa2, .sp=0x28, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0c, .value=0x08}, {.addr=0x3a0d, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x3a0e, .a=0xf1, .x=0xe6, .y=0xa2, .sp=0x28, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3a0c, .value=0x08}, {.addr=0x3a0d, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x3a0c, .value=0x08, .type=IO_READ},
        {.addr=0x3a0d, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xbb04, .a=0xa7, .x=0x15, .y=0xc6, .sp=0xb1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xbb04, .value=0x08}, {.addr=0xbb05, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xbb06, .a=0xa7, .x=0x15, .y=0xc6, .sp=0xb1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbb04, .value=0x08}, {.addr=0xbb05, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xbb04, .value=0x08, .type=IO_READ},
        {.addr=0xbb05, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x2c2a, .a=0x23, .x=0xed, .y=0x07, .sp=0xe3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2c2a, .value=0x08}, {.addr=0x2c2b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2c2c, .a=0xbf, .x=0xed, .y=0x07, .sp=0xe3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2c2a, .value=0x08}, {.addr=0x2c2b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2c2a, .value=0x08, .type=IO_READ},
        {.addr=0x2c2b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x6f90, .a=0x15, .x=0x00, .y=0xb6, .sp=0xfd, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6f90, .value=0x08}, {.addr=0x6f91, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x6f92, .a=0x35, .x=0x00, .y=0xb6, .sp=0xfd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6f90, .value=0x08}, {.addr=0x6f91, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x6f90, .value=0x08, .type=IO_READ},
        {.addr=0x6f91, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xe773, .a=0x59, .x=0x88, .y=0x75, .sp=0x13, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe773, .value=0x08}, {.addr=0xe774, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe775, .a=0x7d, .x=0x88, .y=0x75, .sp=0x13, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe773, .value=0x08}, {.addr=0xe774, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe773, .value=0x08, .type=IO_READ},
        {.addr=0xe774, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x53c4, .a=0x5d, .x=0x45, .y=0x38, .sp=0x6b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x53c4, .value=0x08}, {.addr=0x53c5, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x53c6, .a=0x7f, .x=0x45, .y=0x38, .sp=0x6b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x53c4, .value=0x08}, {.addr=0x53c5, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x53c4, .value=0x08, .type=IO_READ},
        {.addr=0x53c5, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x2a5e, .a=0x73, .x=0xf8, .y=0xa7, .sp=0xf5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2a5e, .value=0x08}, {.addr=0x2a5f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2a60, .a=0x77, .x=0xf8, .y=0xa7, .sp=0xf5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2a5e, .value=0x08}, {.addr=0x2a5f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2a5e, .value=0x08, .type=IO_READ},
        {.addr=0x2a5f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xbab3, .a=0x98, .x=0x69, .y=0xe0, .sp=0xe2, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xbab3, .value=0x08}, {.addr=0xbab4, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xbab5, .a=0xba, .x=0x69, .y=0xe0, .sp=0xe2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbab3, .value=0x08}, {.addr=0xbab4, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xbab3, .value=0x08, .type=IO_READ},
        {.addr=0xbab4, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x6ac8, .a=0xf7, .x=0x6b, .y=0xa0, .sp=0xb8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac8, .value=0x08}, {.addr=0x6ac9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6aca, .a=0xf7, .x=0x6b, .y=0xa0, .sp=0xb8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6ac8, .value=0x08}, {.addr=0x6ac9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6ac8, .value=0x08, .type=IO_READ},
        {.addr=0x6ac9, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xd48a, .a=0xdc, .x=0x2b, .y=0x9b, .sp=0x2c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd48a, .value=0x08}, {.addr=0xd48b, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xd48c, .a=0xfd, .x=0x2b, .y=0x9b, .sp=0x2c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd48a, .value=0x08}, {.addr=0xd48b, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xd48a, .value=0x08, .type=IO_READ},
        {.addr=0xd48b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x98d1, .a=0x23, .x=0xee, .y=0x9f, .sp=0x67, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x98d1, .value=0x08}, {.addr=0x98d2, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x98d3, .a=0x37, .x=0xee, .y=0x9f, .sp=0x67, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x98d1, .value=0x08}, {.addr=0x98d2, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x98d1, .value=0x08, .type=IO_READ},
        {.addr=0x98d2, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xd66d, .a=0xf5, .x=0xb5, .y=0x3a, .sp=0x7f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd66d, .value=0x08}, {.addr=0xd66e, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xd66f, .a=0xf7, .x=0xb5, .y=0x3a, .sp=0x7f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd66d, .value=0x08}, {.addr=0xd66e, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xd66d, .value=0x08, .type=IO_READ},
        {.addr=0xd66e, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x83c3, .a=0x34, .x=0xa6, .y=0x84, .sp=0xb6, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x83c3, .value=0x08}, {.addr=0x83c4, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x83c5, .a=0xf4, .x=0xa6, .y=0x84, .sp=0xb6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x83c3, .value=0x08}, {.addr=0x83c4, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x83c3, .value=0x08, .type=IO_READ},
        {.addr=0x83c4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x30fb, .a=0x67, .x=0x09, .y=0xc9, .sp=0xb1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x30fb, .value=0x08}, {.addr=0x30fc, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x30fd, .a=0x77, .x=0x09, .y=0xc9, .sp=0xb1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x30fb, .value=0x08}, {.addr=0x30fc, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x30fb, .value=0x08, .type=IO_READ},
        {.addr=0x30fc, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x33e7, .a=0xc9, .x=0x6a, .y=0x55, .sp=0x6d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x33e7, .value=0x08}, {.addr=0x33e8, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x33e9, .a=0xd9, .x=0x6a, .y=0x55, .sp=0x6d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x33e7, .value=0x08}, {.addr=0x33e8, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x33e7, .value=0x08, .type=IO_READ},
        {.addr=0x33e8, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8752, .a=0x33, .x=0x1a, .y=0x7d, .sp=0x44, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x8752, .value=0x08}, {.addr=0x8753, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x8754, .a=0x77, .x=0x1a, .y=0x7d, .sp=0x44, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8752, .value=0x08}, {.addr=0x8753, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x8752, .value=0x08, .type=IO_READ},
        {.addr=0x8753, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x6bf1, .a=0xa7, .x=0xef, .y=0xe5, .sp=0x8f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf1, .value=0x08}, {.addr=0x6bf2, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x6bf3, .a=0xff, .x=0xef, .y=0xe5, .sp=0x8f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6bf1, .value=0x08}, {.addr=0x6bf2, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x6bf1, .value=0x08, .type=IO_READ},
        {.addr=0x6bf2, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x0d02, .a=0x5a, .x=0xb0, .y=0x2a, .sp=0xac, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0d02, .value=0x08}, {.addr=0x0d03, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0d04, .a=0x5f, .x=0xb0, .y=0x2a, .sp=0xac, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0d02, .value=0x08}, {.addr=0x0d03, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x0d02, .value=0x08, .type=IO_READ},
        {.addr=0x0d03, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x5b3c, .a=0x0d, .x=0xb8, .y=0x18, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3c, .value=0x08}, {.addr=0x5b3d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5b3e, .a=0xdf, .x=0xb8, .y=0x18, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5b3c, .value=0x08}, {.addr=0x5b3d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5b3c, .value=0x08, .type=IO_READ},
        {.addr=0x5b3d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf224, .a=0x2f, .x=0xd0, .y=0x54, .sp=0x1b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf224, .value=0x08}, {.addr=0xf225, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xf226, .a=0x7f, .x=0xd0, .y=0x54, .sp=0x1b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf224, .value=0x08}, {.addr=0xf225, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xf224, .value=0x08, .type=IO_READ},
        {.addr=0xf225, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x636b, .a=0xbb, .x=0x94, .y=0xec, .sp=0x11, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x636b, .value=0x08}, {.addr=0x636c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x636d, .a=0xff, .x=0x94, .y=0xec, .sp=0x11, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x636b, .value=0x08}, {.addr=0x636c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x636b, .value=0x08, .type=IO_READ},
        {.addr=0x636c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xe417, .a=0x9d, .x=0x9d, .y=0xcf, .sp=0x35, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe417, .value=0x08}, {.addr=0xe418, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xe419, .a=0x9f, .x=0x9d, .y=0xcf, .sp=0x35, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe417, .value=0x08}, {.addr=0xe418, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xe417, .value=0x08, .type=IO_READ},
        {.addr=0xe418, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xb5fc, .a=0xde, .x=0x48, .y=0x60, .sp=0x9d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xb5fc, .value=0x08}, {.addr=0xb5fd, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb5fe, .a=0xfe, .x=0x48, .y=0x60, .sp=0x9d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb5fc, .value=0x08}, {.addr=0xb5fd, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb5fc, .value=0x08, .type=IO_READ},
        {.addr=0xb5fd, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x5e1b, .a=0x96, .x=0x0b, .y=0x5a, .sp=0x9f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1b, .value=0x08}, {.addr=0x5e1c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5e1d, .a=0x9f, .x=0x0b, .y=0x5a, .sp=0x9f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5e1b, .value=0x08}, {.addr=0x5e1c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5e1b, .value=0x08, .type=IO_READ},
        {.addr=0x5e1c, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xe032, .a=0x48, .x=0x70, .y=0x76, .sp=0x39, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe032, .value=0x08}, {.addr=0xe033, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xe034, .a=0x49, .x=0x70, .y=0x76, .sp=0x39, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe032, .value=0x08}, {.addr=0xe033, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xe032, .value=0x08, .type=IO_READ},
        {.addr=0xe033, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x364d, .a=0x2d, .x=0xdc, .y=0x02, .sp=0x30, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x364d, .value=0x08}, {.addr=0x364e, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x364f, .a=0xbd, .x=0xdc, .y=0x02, .sp=0x30, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x364d, .value=0x08}, {.addr=0x364e, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x364d, .value=0x08, .type=IO_READ},
        {.addr=0x364e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x8e75, .a=0x82, .x=0x30, .y=0x13, .sp=0xf4, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8e75, .value=0x08}, {.addr=0x8e76, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x8e77, .a=0x93, .x=0x30, .y=0x13, .sp=0xf4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8e75, .value=0x08}, {.addr=0x8e76, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x8e75, .value=0x08, .type=IO_READ},
        {.addr=0x8e76, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc8ef, .a=0x83, .x=0x7d, .y=0x3d, .sp=0x4e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ef, .value=0x08}, {.addr=0xc8f0, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xc8f1, .a=0xc3, .x=0x7d, .y=0x3d, .sp=0x4e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc8ef, .value=0x08}, {.addr=0xc8f0, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xc8ef, .value=0x08, .type=IO_READ},
        {.addr=0xc8f0, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xe284, .a=0xf9, .x=0x38, .y=0x87, .sp=0x46, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe284, .value=0x08}, {.addr=0xe285, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xe286, .a=0xff, .x=0x38, .y=0x87, .sp=0x46, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe284, .value=0x08}, {.addr=0xe285, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xe284, .value=0x08, .type=IO_READ},
        {.addr=0xe285, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x1a63, .a=0x97, .x=0x39, .y=0x48, .sp=0xc4, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1a63, .value=0x08}, {.addr=0x1a64, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x1a65, .a=0xf7, .x=0x39, .y=0x48, .sp=0xc4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1a63, .value=0x08}, {.addr=0x1a64, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x1a63, .value=0x08, .type=IO_READ},
        {.addr=0x1a64, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x5f08, .a=0xac, .x=0xf9, .y=0xf7, .sp=0xe5, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f08, .value=0x08}, {.addr=0x5f09, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5f0a, .a=0xff, .x=0xf9, .y=0xf7, .sp=0xe5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5f08, .value=0x08}, {.addr=0x5f09, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5f08, .value=0x08, .type=IO_READ},
        {.addr=0x5f09, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xd0f1, .a=0xfb, .x=0x43, .y=0x38, .sp=0xa5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f1, .value=0x08}, {.addr=0xd0f2, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xd0f3, .a=0xfb, .x=0x43, .y=0x38, .sp=0xa5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd0f1, .value=0x08}, {.addr=0xd0f2, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xd0f1, .value=0x08, .type=IO_READ},
        {.addr=0xd0f2, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x05ac, .a=0xbc, .x=0xed, .y=0xba, .sp=0x64, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x05ac, .value=0x08}, {.addr=0x05ad, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x05ae, .a=0xbd, .x=0xed, .y=0xba, .sp=0x64, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x05ac, .value=0x08}, {.addr=0x05ad, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x05ac, .value=0x08, .type=IO_READ},
        {.addr=0x05ad, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x3298, .a=0xa5, .x=0x39, .y=0xfe, .sp=0x92, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3298, .value=0x08}, {.addr=0x3299, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x329a, .a=0xbd, .x=0x39, .y=0xfe, .sp=0x92, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3298, .value=0x08}, {.addr=0x3299, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3298, .value=0x08, .type=IO_READ},
        {.addr=0x3299, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x3b78, .a=0xe0, .x=0xec, .y=0x37, .sp=0x23, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3b78, .value=0x08}, {.addr=0x3b79, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x3b7a, .a=0xfb, .x=0xec, .y=0x37, .sp=0x23, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3b78, .value=0x08}, {.addr=0x3b79, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x3b78, .value=0x08, .type=IO_READ},
        {.addr=0x3b79, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd31e, .a=0x9f, .x=0x50, .y=0x3d, .sp=0xa6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd31e, .value=0x08}, {.addr=0xd31f, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xd320, .a=0xdf, .x=0x50, .y=0x3d, .sp=0xa6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd31e, .value=0x08}, {.addr=0xd31f, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xd31e, .value=0x08, .type=IO_READ},
        {.addr=0xd31f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x98ac, .a=0xc3, .x=0x74, .y=0xb1, .sp=0xba, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x98ac, .value=0x08}, {.addr=0x98ad, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x98ae, .a=0xdf, .x=0x74, .y=0xb1, .sp=0xba, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x98ac, .value=0x08}, {.addr=0x98ad, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x98ac, .value=0x08, .type=IO_READ},
        {.addr=0x98ad, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xbe61, .a=0x37, .x=0x6c, .y=0xcd, .sp=0xb4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xbe61, .value=0x08}, {.addr=0xbe62, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xbe63, .a=0xf7, .x=0x6c, .y=0xcd, .sp=0xb4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbe61, .value=0x08}, {.addr=0xbe62, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xbe61, .value=0x08, .type=IO_READ},
        {.addr=0xbe62, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x7e90, .a=0xd2, .x=0x32, .y=0x03, .sp=0x24, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7e90, .value=0x08}, {.addr=0x7e91, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7e92, .a=0xf7, .x=0x32, .y=0x03, .sp=0x24, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7e90, .value=0x08}, {.addr=0x7e91, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7e90, .value=0x08, .type=IO_READ},
        {.addr=0x7e91, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x6af6, .a=0x65, .x=0x09, .y=0x88, .sp=0x79, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6af6, .value=0x08}, {.addr=0x6af7, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x6af8, .a=0x7f, .x=0x09, .y=0x88, .sp=0x79, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6af6, .value=0x08}, {.addr=0x6af7, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x6af6, .value=0x08, .type=IO_READ},
        {.addr=0x6af7, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xe105, .a=0xbb, .x=0x05, .y=0xdb, .sp=0xa1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xe105, .value=0x08}, {.addr=0xe106, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xe107, .a=0xfb, .x=0x05, .y=0xdb, .sp=0xa1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe105, .value=0x08}, {.addr=0xe106, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xe105, .value=0x08, .type=IO_READ},
        {.addr=0xe106, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x7f5b, .a=0xab, .x=0x81, .y=0xe4, .sp=0x6f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5b, .value=0x08}, {.addr=0x7f5c, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x7f5d, .a=0xeb, .x=0x81, .y=0xe4, .sp=0x6f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7f5b, .value=0x08}, {.addr=0x7f5c, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x7f5b, .value=0x08, .type=IO_READ},
        {.addr=0x7f5c, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x1080, .a=0x05, .x=0x2a, .y=0xf6, .sp=0xab, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1080, .value=0x08}, {.addr=0x1081, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1082, .a=0x3d, .x=0x2a, .y=0xf6, .sp=0xab, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1080, .value=0x08}, {.addr=0x1081, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1080, .value=0x08, .type=IO_READ},
        {.addr=0x1081, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x10e1, .a=0x0f, .x=0x1a, .y=0xdc, .sp=0x8b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x10e1, .value=0x08}, {.addr=0x10e2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x10e3, .a=0x4f, .x=0x1a, .y=0xdc, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x10e1, .value=0x08}, {.addr=0x10e2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x10e1, .value=0x08, .type=IO_READ},
        {.addr=0x10e2, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xfc13, .a=0x6c, .x=0xc2, .y=0x80, .sp=0xb7, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xfc13, .value=0x08}, {.addr=0xfc14, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xfc15, .a=0x7f, .x=0xc2, .y=0x80, .sp=0xb7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfc13, .value=0x08}, {.addr=0xfc14, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xfc13, .value=0x08, .type=IO_READ},
        {.addr=0xfc14, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x23e8, .a=0x70, .x=0x35, .y=0x8c, .sp=0xf6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x23e8, .value=0x08}, {.addr=0x23e9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x23ea, .a=0x76, .x=0x35, .y=0x8c, .sp=0xf6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x23e8, .value=0x08}, {.addr=0x23e9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x23e8, .value=0x08, .type=IO_READ},
        {.addr=0x23e9, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xa513, .a=0xad, .x=0xc4, .y=0xb8, .sp=0xeb, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa513, .value=0x08}, {.addr=0xa514, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xa515, .a=0xaf, .x=0xc4, .y=0xb8, .sp=0xeb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa513, .value=0x08}, {.addr=0xa514, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xa513, .value=0x08, .type=IO_READ},
        {.addr=0xa514, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x0cc5, .a=0xbc, .x=0x0d, .y=0x76, .sp=0x8b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0cc5, .value=0x08}, {.addr=0x0cc6, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x0cc7, .a=0xfe, .x=0x0d, .y=0x76, .sp=0x8b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0cc5, .value=0x08}, {.addr=0x0cc6, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x0cc5, .value=0x08, .type=IO_READ},
        {.addr=0x0cc6, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x427d, .a=0xeb, .x=0xd0, .y=0x36, .sp=0x23, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x427d, .value=0x08}, {.addr=0x427e, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x427f, .a=0xeb, .x=0xd0, .y=0x36, .sp=0x23, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x427d, .value=0x08}, {.addr=0x427e, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x427d, .value=0x08, .type=IO_READ},
        {.addr=0x427e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd1fe, .a=0x40, .x=0x80, .y=0xdc, .sp=0xdd, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fe, .value=0x08}, {.addr=0xd1ff, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd200, .a=0xce, .x=0x80, .y=0xdc, .sp=0xdd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd1fe, .value=0x08}, {.addr=0xd1ff, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1fe, .value=0x08, .type=IO_READ},
        {.addr=0xd1ff, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x4333, .a=0x0d, .x=0xaa, .y=0x02, .sp=0x35, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4333, .value=0x08}, {.addr=0x4334, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x4335, .a=0xdf, .x=0xaa, .y=0x02, .sp=0x35, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4333, .value=0x08}, {.addr=0x4334, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4333, .value=0x08, .type=IO_READ},
        {.addr=0x4334, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x49b3, .a=0xef, .x=0x68, .y=0x5c, .sp=0x1c, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x49b3, .value=0x08}, {.addr=0x49b4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x49b5, .a=0xff, .x=0x68, .y=0x5c, .sp=0x1c, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x49b3, .value=0x08}, {.addr=0x49b4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x49b3, .value=0x08, .type=IO_READ},
        {.addr=0x49b4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc659, .a=0x15, .x=0xbb, .y=0x0a, .sp=0x36, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xc659, .value=0x08}, {.addr=0xc65a, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc65b, .a=0x77, .x=0xbb, .y=0x0a, .sp=0x36, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc659, .value=0x08}, {.addr=0xc65a, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc659, .value=0x08, .type=IO_READ},
        {.addr=0xc65a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x671e, .a=0x30, .x=0xa9, .y=0x31, .sp=0x37, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x671e, .value=0x08}, {.addr=0x671f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6720, .a=0x7d, .x=0xa9, .y=0x31, .sp=0x37, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x671e, .value=0x08}, {.addr=0x671f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x671e, .value=0x08, .type=IO_READ},
        {.addr=0x671f, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x61fc, .a=0xe9, .x=0x6d, .y=0xd8, .sp=0x34, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x61fc, .value=0x08}, {.addr=0x61fd, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x61fe, .a=0xeb, .x=0x6d, .y=0xd8, .sp=0x34, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x61fc, .value=0x08}, {.addr=0x61fd, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x61fc, .value=0x08, .type=IO_READ},
        {.addr=0x61fd, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xead0, .a=0xf7, .x=0xfd, .y=0x9d, .sp=0xcc, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xead0, .value=0x08}, {.addr=0xead1, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xead2, .a=0xff, .x=0xfd, .y=0x9d, .sp=0xcc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xead0, .value=0x08}, {.addr=0xead1, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xead0, .value=0x08, .type=IO_READ},
        {.addr=0xead1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x43c8, .a=0x64, .x=0x1d, .y=0xdc, .sp=0x76, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x43c8, .value=0x08}, {.addr=0x43c9, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x43ca, .a=0xe5, .x=0x1d, .y=0xdc, .sp=0x76, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x43c8, .value=0x08}, {.addr=0x43c9, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x43c8, .value=0x08, .type=IO_READ},
        {.addr=0x43c9, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x9a25, .a=0x6f, .x=0x28, .y=0xa4, .sp=0x86, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9a25, .value=0x08}, {.addr=0x9a26, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x9a27, .a=0x7f, .x=0x28, .y=0xa4, .sp=0x86, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9a25, .value=0x08}, {.addr=0x9a26, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x9a25, .value=0x08, .type=IO_READ},
        {.addr=0x9a26, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x3ed0, .a=0xbb, .x=0x7a, .y=0xb0, .sp=0x26, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed0, .value=0x08}, {.addr=0x3ed1, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x3ed2, .a=0xfb, .x=0x7a, .y=0xb0, .sp=0x26, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3ed0, .value=0x08}, {.addr=0x3ed1, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x3ed0, .value=0x08, .type=IO_READ},
        {.addr=0x3ed1, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x031e, .a=0xc8, .x=0x5e, .y=0x5d, .sp=0x40, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x031e, .value=0x08}, {.addr=0x031f, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x0320, .a=0xda, .x=0x5e, .y=0x5d, .sp=0x40, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x031e, .value=0x08}, {.addr=0x031f, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x031e, .value=0x08, .type=IO_READ},
        {.addr=0x031f, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2951, .a=0x91, .x=0xf9, .y=0x20, .sp=0x73, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2951, .value=0x08}, {.addr=0x2952, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x2953, .a=0xb7, .x=0xf9, .y=0x20, .sp=0x73, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2951, .value=0x08}, {.addr=0x2952, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x2951, .value=0x08, .type=IO_READ},
        {.addr=0x2952, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x169a, .a=0x59, .x=0x3f, .y=0x2f, .sp=0xcd, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x169a, .value=0x08}, {.addr=0x169b, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x169c, .a=0xfb, .x=0x3f, .y=0x2f, .sp=0xcd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x169a, .value=0x08}, {.addr=0x169b, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x169a, .value=0x08, .type=IO_READ},
        {.addr=0x169b, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xbed4, .a=0xc5, .x=0x3e, .y=0x0d, .sp=0xd5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xbed4, .value=0x08}, {.addr=0xbed5, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xbed6, .a=0xd5, .x=0x3e, .y=0x0d, .sp=0xd5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbed4, .value=0x08}, {.addr=0xbed5, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xbed4, .value=0x08, .type=IO_READ},
        {.addr=0xbed5, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x1a04, .a=0x21, .x=0x64, .y=0xd2, .sp=0x9d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1a04, .value=0x08}, {.addr=0x1a05, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x1a06, .a=0xe3, .x=0x64, .y=0xd2, .sp=0x9d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1a04, .value=0x08}, {.addr=0x1a05, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x1a04, .value=0x08, .type=IO_READ},
        {.addr=0x1a05, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xdcea, .a=0x5b, .x=0xd3, .y=0x7c, .sp=0x93, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xdcea, .value=0x08}, {.addr=0xdceb, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xdcec, .a=0xff, .x=0xd3, .y=0x7c, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xdcea, .value=0x08}, {.addr=0xdceb, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xdcea, .value=0x08, .type=IO_READ},
        {.addr=0xdceb, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xd152, .a=0x9f, .x=0xe4, .y=0xa3, .sp=0xf7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xd152, .value=0x08}, {.addr=0xd153, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd154, .a=0x9f, .x=0xe4, .y=0xa3, .sp=0xf7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd152, .value=0x08}, {.addr=0xd153, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd152, .value=0x08, .type=IO_READ},
        {.addr=0xd153, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x5613, .a=0xc7, .x=0x88, .y=0x83, .sp=0x0f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5613, .value=0x08}, {.addr=0x5614, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5615, .a=0xf7, .x=0x88, .y=0x83, .sp=0x0f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5613, .value=0x08}, {.addr=0x5614, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5613, .value=0x08, .type=IO_READ},
        {.addr=0x5614, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x4dd2, .a=0x13, .x=0xe0, .y=0xd4, .sp=0x25, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd2, .value=0x08}, {.addr=0x4dd3, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x4dd4, .a=0xb7, .x=0xe0, .y=0xd4, .sp=0x25, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4dd2, .value=0x08}, {.addr=0x4dd3, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x4dd2, .value=0x08, .type=IO_READ},
        {.addr=0x4dd3, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xc7c9, .a=0xdd, .x=0x51, .y=0x83, .sp=0xb1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c9, .value=0x08}, {.addr=0xc7ca, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc7cb, .a=0xff, .x=0x51, .y=0x83, .sp=0xb1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc7c9, .value=0x08}, {.addr=0xc7ca, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc7c9, .value=0x08, .type=IO_READ},
        {.addr=0xc7ca, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x80b9, .a=0x1e, .x=0x24, .y=0x07, .sp=0xb5, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x80b9, .value=0x08}, {.addr=0x80ba, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x80bb, .a=0x3e, .x=0x24, .y=0x07, .sp=0xb5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x80b9, .value=0x08}, {.addr=0x80ba, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x80b9, .value=0x08, .type=IO_READ},
        {.addr=0x80ba, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x873c, .a=0x39, .x=0xfb, .y=0x0b, .sp=0xc3, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x873c, .value=0x08}, {.addr=0x873d, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x873e, .a=0x79, .x=0xfb, .y=0x0b, .sp=0xc3, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x873c, .value=0x08}, {.addr=0x873d, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x873c, .value=0x08, .type=IO_READ},
        {.addr=0x873d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x0075, .a=0xc6, .x=0x2d, .y=0xc9, .sp=0x15, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x08}, {.addr=0x0076, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x0077, .a=0xf7, .x=0x2d, .y=0xc9, .sp=0x15, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x08}, {.addr=0x0076, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x0075, .value=0x08, .type=IO_READ},
        {.addr=0x0076, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xa8eb, .a=0x59, .x=0xd0, .y=0x57, .sp=0x51, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa8eb, .value=0x08}, {.addr=0xa8ec, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xa8ed, .a=0xfb, .x=0xd0, .y=0x57, .sp=0x51, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa8eb, .value=0x08}, {.addr=0xa8ec, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xa8eb, .value=0x08, .type=IO_READ},
        {.addr=0xa8ec, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x0929, .a=0x9c, .x=0x84, .y=0x94, .sp=0xc5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0929, .value=0x08}, {.addr=0x092a, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x092b, .a=0x9d, .x=0x84, .y=0x94, .sp=0xc5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0929, .value=0x08}, {.addr=0x092a, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x0929, .value=0x08, .type=IO_READ},
        {.addr=0x092a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x6639, .a=0xff, .x=0xa7, .y=0x59, .sp=0x7e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6639, .value=0x08}, {.addr=0x663a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x663b, .a=0xff, .x=0xa7, .y=0x59, .sp=0x7e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6639, .value=0x08}, {.addr=0x663a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x6639, .value=0x08, .type=IO_READ},
        {.addr=0x663a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0200) {
    const struct CPU_State initial_cpu = {.pc=0xd66e, .a=0x55, .x=0xf5, .y=0x05, .sp=0xd5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd66e, .value=0x08}, {.addr=0xd66f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xd670, .a=0xd5, .x=0xf5, .y=0x05, .sp=0xd5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd66e, .value=0x08}, {.addr=0xd66f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xd66e, .value=0x08, .type=IO_READ},
        {.addr=0xd66f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0201) {
    const struct CPU_State initial_cpu = {.pc=0x34b0, .a=0xdc, .x=0xbf, .y=0x73, .sp=0xfa, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x34b0, .value=0x08}, {.addr=0x34b1, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x34b2, .a=0xde, .x=0xbf, .y=0x73, .sp=0xfa, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x34b0, .value=0x08}, {.addr=0x34b1, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x34b0, .value=0x08, .type=IO_READ},
        {.addr=0x34b1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0202) {
    const struct CPU_State initial_cpu = {.pc=0x2f06, .a=0x65, .x=0x21, .y=0x86, .sp=0x81, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2f06, .value=0x08}, {.addr=0x2f07, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x2f08, .a=0xe5, .x=0x21, .y=0x86, .sp=0x81, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2f06, .value=0x08}, {.addr=0x2f07, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x2f06, .value=0x08, .type=IO_READ},
        {.addr=0x2f07, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0203) {
    const struct CPU_State initial_cpu = {.pc=0xbffa, .a=0x2c, .x=0xff, .y=0x8b, .sp=0xaf, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xbffa, .value=0x08}, {.addr=0xbffb, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xbffc, .a=0xae, .x=0xff, .y=0x8b, .sp=0xaf, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbffa, .value=0x08}, {.addr=0xbffb, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xbffa, .value=0x08, .type=IO_READ},
        {.addr=0xbffb, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0204) {
    const struct CPU_State initial_cpu = {.pc=0x75a6, .a=0xe8, .x=0x3c, .y=0x16, .sp=0xd1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x75a6, .value=0x08}, {.addr=0x75a7, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x75a8, .a=0xfd, .x=0x3c, .y=0x16, .sp=0xd1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x75a6, .value=0x08}, {.addr=0x75a7, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x75a6, .value=0x08, .type=IO_READ},
        {.addr=0x75a7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0205) {
    const struct CPU_State initial_cpu = {.pc=0x93de, .a=0x8d, .x=0x1a, .y=0x69, .sp=0xb5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x93de, .value=0x08}, {.addr=0x93df, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x93e0, .a=0xdf, .x=0x1a, .y=0x69, .sp=0xb5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x93de, .value=0x08}, {.addr=0x93df, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x93de, .value=0x08, .type=IO_READ},
        {.addr=0x93df, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0206) {
    const struct CPU_State initial_cpu = {.pc=0x2427, .a=0x03, .x=0x07, .y=0x89, .sp=0x1c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2427, .value=0x08}, {.addr=0x2428, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x2429, .a=0x27, .x=0x07, .y=0x89, .sp=0x1c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2427, .value=0x08}, {.addr=0x2428, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x2427, .value=0x08, .type=IO_READ},
        {.addr=0x2428, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0207) {
    const struct CPU_State initial_cpu = {.pc=0xabcd, .a=0x8c, .x=0x67, .y=0xfc, .sp=0x75, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xabcd, .value=0x08}, {.addr=0xabce, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xabcf, .a=0xaf, .x=0x67, .y=0xfc, .sp=0x75, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xabcd, .value=0x08}, {.addr=0xabce, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xabcd, .value=0x08, .type=IO_READ},
        {.addr=0xabce, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6b24, .a=0x7d, .x=0xe0, .y=0x0a, .sp=0x97, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6b24, .value=0x08}, {.addr=0x6b25, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6b26, .a=0x7d, .x=0xe0, .y=0x0a, .sp=0x97, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6b24, .value=0x08}, {.addr=0x6b25, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6b24, .value=0x08, .type=IO_READ},
        {.addr=0x6b25, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0209) {
    const struct CPU_State initial_cpu = {.pc=0xa571, .a=0x36, .x=0xcd, .y=0x54, .sp=0xf9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa571, .value=0x08}, {.addr=0xa572, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa573, .a=0x7e, .x=0xcd, .y=0x54, .sp=0xf9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa571, .value=0x08}, {.addr=0xa572, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa571, .value=0x08, .type=IO_READ},
        {.addr=0xa572, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020A) {
    const struct CPU_State initial_cpu = {.pc=0x7ae8, .a=0xb3, .x=0xa7, .y=0xa3, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae8, .value=0x08}, {.addr=0x7ae9, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x7aea, .a=0xf3, .x=0xa7, .y=0xa3, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7ae8, .value=0x08}, {.addr=0x7ae9, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x7ae8, .value=0x08, .type=IO_READ},
        {.addr=0x7ae9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020B) {
    const struct CPU_State initial_cpu = {.pc=0x429b, .a=0x80, .x=0x7b, .y=0xb1, .sp=0x07, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x429b, .value=0x08}, {.addr=0x429c, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x429d, .a=0xa2, .x=0x7b, .y=0xb1, .sp=0x07, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x429b, .value=0x08}, {.addr=0x429c, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x429b, .value=0x08, .type=IO_READ},
        {.addr=0x429c, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2f8c, .a=0x8b, .x=0x3e, .y=0x21, .sp=0x0d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8c, .value=0x08}, {.addr=0x2f8d, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x2f8e, .a=0xff, .x=0x3e, .y=0x21, .sp=0x0d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2f8c, .value=0x08}, {.addr=0x2f8d, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x2f8c, .value=0x08, .type=IO_READ},
        {.addr=0x2f8d, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020D) {
    const struct CPU_State initial_cpu = {.pc=0x0bae, .a=0xdc, .x=0x6b, .y=0x8c, .sp=0xa5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0bae, .value=0x08}, {.addr=0x0baf, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x0bb0, .a=0xfe, .x=0x6b, .y=0x8c, .sp=0xa5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0bae, .value=0x08}, {.addr=0x0baf, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x0bae, .value=0x08, .type=IO_READ},
        {.addr=0x0baf, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020E) {
    const struct CPU_State initial_cpu = {.pc=0x688f, .a=0x59, .x=0x05, .y=0x20, .sp=0x9c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x688f, .value=0x08}, {.addr=0x6890, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x6891, .a=0x7d, .x=0x05, .y=0x20, .sp=0x9c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x688f, .value=0x08}, {.addr=0x6890, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x688f, .value=0x08, .type=IO_READ},
        {.addr=0x6890, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_020F) {
    const struct CPU_State initial_cpu = {.pc=0x20b4, .a=0xdf, .x=0x34, .y=0x04, .sp=0x41, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x20b4, .value=0x08}, {.addr=0x20b5, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x20b6, .a=0xdf, .x=0x34, .y=0x04, .sp=0x41, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x20b4, .value=0x08}, {.addr=0x20b5, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x20b4, .value=0x08, .type=IO_READ},
        {.addr=0x20b5, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0210) {
    const struct CPU_State initial_cpu = {.pc=0xe4d6, .a=0x62, .x=0x6f, .y=0x25, .sp=0x9c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d6, .value=0x08}, {.addr=0xe4d7, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xe4d8, .a=0xee, .x=0x6f, .y=0x25, .sp=0x9c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe4d6, .value=0x08}, {.addr=0xe4d7, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xe4d6, .value=0x08, .type=IO_READ},
        {.addr=0xe4d7, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0211) {
    const struct CPU_State initial_cpu = {.pc=0x42d5, .a=0x3e, .x=0x2d, .y=0xc1, .sp=0x14, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x42d5, .value=0x08}, {.addr=0x42d6, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x42d7, .a=0xbe, .x=0x2d, .y=0xc1, .sp=0x14, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x42d5, .value=0x08}, {.addr=0x42d6, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x42d5, .value=0x08, .type=IO_READ},
        {.addr=0x42d6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0212) {
    const struct CPU_State initial_cpu = {.pc=0x2336, .a=0x7b, .x=0x41, .y=0x3e, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2336, .value=0x08}, {.addr=0x2337, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2338, .a=0xff, .x=0x41, .y=0x3e, .sp=0xf4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2336, .value=0x08}, {.addr=0x2337, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2336, .value=0x08, .type=IO_READ},
        {.addr=0x2337, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0213) {
    const struct CPU_State initial_cpu = {.pc=0xce00, .a=0xd9, .x=0x8d, .y=0x8b, .sp=0x43, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xce00, .value=0x08}, {.addr=0xce01, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xce02, .a=0xf9, .x=0x8d, .y=0x8b, .sp=0x43, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xce00, .value=0x08}, {.addr=0xce01, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xce00, .value=0x08, .type=IO_READ},
        {.addr=0xce01, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0214) {
    const struct CPU_State initial_cpu = {.pc=0x445b, .a=0xb6, .x=0x15, .y=0x9a, .sp=0x28, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x445b, .value=0x08}, {.addr=0x445c, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x445d, .a=0xf7, .x=0x15, .y=0x9a, .sp=0x28, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x445b, .value=0x08}, {.addr=0x445c, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x445b, .value=0x08, .type=IO_READ},
        {.addr=0x445c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0215) {
    const struct CPU_State initial_cpu = {.pc=0xdb71, .a=0x4e, .x=0xab, .y=0xfc, .sp=0x41, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xdb71, .value=0x08}, {.addr=0xdb72, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdb73, .a=0x4f, .x=0xab, .y=0xfc, .sp=0x41, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xdb71, .value=0x08}, {.addr=0xdb72, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdb71, .value=0x08, .type=IO_READ},
        {.addr=0xdb72, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0216) {
    const struct CPU_State initial_cpu = {.pc=0x7793, .a=0xcf, .x=0x7d, .y=0x93, .sp=0x2b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7793, .value=0x08}, {.addr=0x7794, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7795, .a=0xcf, .x=0x7d, .y=0x93, .sp=0x2b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7793, .value=0x08}, {.addr=0x7794, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7793, .value=0x08, .type=IO_READ},
        {.addr=0x7794, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0217) {
    const struct CPU_State initial_cpu = {.pc=0x1bb0, .a=0xda, .x=0x44, .y=0x4d, .sp=0x70, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb0, .value=0x08}, {.addr=0x1bb1, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x1bb2, .a=0xdf, .x=0x44, .y=0x4d, .sp=0x70, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1bb0, .value=0x08}, {.addr=0x1bb1, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x1bb0, .value=0x08, .type=IO_READ},
        {.addr=0x1bb1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0218) {
    const struct CPU_State initial_cpu = {.pc=0x1bd2, .a=0x13, .x=0xde, .y=0x80, .sp=0xb9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd2, .value=0x08}, {.addr=0x1bd3, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x1bd4, .a=0x1f, .x=0xde, .y=0x80, .sp=0xb9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1bd2, .value=0x08}, {.addr=0x1bd3, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x1bd2, .value=0x08, .type=IO_READ},
        {.addr=0x1bd3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0219) {
    const struct CPU_State initial_cpu = {.pc=0xa679, .a=0xb9, .x=0xf1, .y=0x8c, .sp=0x19, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa679, .value=0x08}, {.addr=0xa67a, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xa67b, .a=0xfb, .x=0xf1, .y=0x8c, .sp=0x19, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa679, .value=0x08}, {.addr=0xa67a, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xa679, .value=0x08, .type=IO_READ},
        {.addr=0xa67a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021A) {
    const struct CPU_State initial_cpu = {.pc=0xb1de, .a=0x4e, .x=0xf8, .y=0xc4, .sp=0xcd, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xb1de, .value=0x08}, {.addr=0xb1df, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xb1e0, .a=0x7f, .x=0xf8, .y=0xc4, .sp=0xcd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb1de, .value=0x08}, {.addr=0xb1df, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xb1de, .value=0x08, .type=IO_READ},
        {.addr=0xb1df, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb198, .a=0x8a, .x=0x3a, .y=0xc8, .sp=0x8f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb198, .value=0x08}, {.addr=0xb199, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb19a, .a=0x9e, .x=0x3a, .y=0xc8, .sp=0x8f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb198, .value=0x08}, {.addr=0xb199, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb198, .value=0x08, .type=IO_READ},
        {.addr=0xb199, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021C) {
    const struct CPU_State initial_cpu = {.pc=0x9065, .a=0xf9, .x=0x54, .y=0xfe, .sp=0xfb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9065, .value=0x08}, {.addr=0x9066, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x9067, .a=0xff, .x=0x54, .y=0xfe, .sp=0xfb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9065, .value=0x08}, {.addr=0x9066, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x9065, .value=0x08, .type=IO_READ},
        {.addr=0x9066, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021D) {
    const struct CPU_State initial_cpu = {.pc=0x7159, .a=0xea, .x=0x95, .y=0x0e, .sp=0xff, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7159, .value=0x08}, {.addr=0x715a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x715b, .a=0xee, .x=0x95, .y=0x0e, .sp=0xff, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7159, .value=0x08}, {.addr=0x715a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7159, .value=0x08, .type=IO_READ},
        {.addr=0x715a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021E) {
    const struct CPU_State initial_cpu = {.pc=0xc929, .a=0xa8, .x=0x7b, .y=0x32, .sp=0x1a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc929, .value=0x08}, {.addr=0xc92a, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc92b, .a=0xfc, .x=0x7b, .y=0x32, .sp=0x1a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc929, .value=0x08}, {.addr=0xc92a, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc929, .value=0x08, .type=IO_READ},
        {.addr=0xc92a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_021F) {
    const struct CPU_State initial_cpu = {.pc=0xc789, .a=0x0b, .x=0x85, .y=0x23, .sp=0xd3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc789, .value=0x08}, {.addr=0xc78a, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xc78b, .a=0xef, .x=0x85, .y=0x23, .sp=0xd3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc789, .value=0x08}, {.addr=0xc78a, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xc789, .value=0x08, .type=IO_READ},
        {.addr=0xc78a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9049, .a=0x7c, .x=0x1e, .y=0x06, .sp=0xdf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9049, .value=0x08}, {.addr=0x904a, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x904b, .a=0xff, .x=0x1e, .y=0x06, .sp=0xdf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9049, .value=0x08}, {.addr=0x904a, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x9049, .value=0x08, .type=IO_READ},
        {.addr=0x904a, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0221) {
    const struct CPU_State initial_cpu = {.pc=0xc25c, .a=0x8c, .x=0xf3, .y=0xa4, .sp=0x16, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc25c, .value=0x08}, {.addr=0xc25d, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xc25e, .a=0xcf, .x=0xf3, .y=0xa4, .sp=0x16, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc25c, .value=0x08}, {.addr=0xc25d, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xc25c, .value=0x08, .type=IO_READ},
        {.addr=0xc25d, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0222) {
    const struct CPU_State initial_cpu = {.pc=0x1551, .a=0x06, .x=0x0c, .y=0xe1, .sp=0xea, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1551, .value=0x08}, {.addr=0x1552, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x1553, .a=0xb7, .x=0x0c, .y=0xe1, .sp=0xea, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1551, .value=0x08}, {.addr=0x1552, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x1551, .value=0x08, .type=IO_READ},
        {.addr=0x1552, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0223) {
    const struct CPU_State initial_cpu = {.pc=0x5874, .a=0x23, .x=0xeb, .y=0x48, .sp=0xb4, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5874, .value=0x08}, {.addr=0x5875, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x5876, .a=0x2f, .x=0xeb, .y=0x48, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5874, .value=0x08}, {.addr=0x5875, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x5874, .value=0x08, .type=IO_READ},
        {.addr=0x5875, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0224) {
    const struct CPU_State initial_cpu = {.pc=0xf257, .a=0x52, .x=0x07, .y=0x01, .sp=0xbc, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf257, .value=0x08}, {.addr=0xf258, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xf259, .a=0x7b, .x=0x07, .y=0x01, .sp=0xbc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf257, .value=0x08}, {.addr=0xf258, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xf257, .value=0x08, .type=IO_READ},
        {.addr=0xf258, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0225) {
    const struct CPU_State initial_cpu = {.pc=0xb0c5, .a=0xf6, .x=0x18, .y=0x7c, .sp=0x28, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c5, .value=0x08}, {.addr=0xb0c6, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xb0c7, .a=0xf7, .x=0x18, .y=0x7c, .sp=0x28, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb0c5, .value=0x08}, {.addr=0xb0c6, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xb0c5, .value=0x08, .type=IO_READ},
        {.addr=0xb0c6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0226) {
    const struct CPU_State initial_cpu = {.pc=0xc39b, .a=0xb9, .x=0x00, .y=0x2a, .sp=0x27, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc39b, .value=0x08}, {.addr=0xc39c, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xc39d, .a=0xff, .x=0x00, .y=0x2a, .sp=0x27, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc39b, .value=0x08}, {.addr=0xc39c, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xc39b, .value=0x08, .type=IO_READ},
        {.addr=0xc39c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0227) {
    const struct CPU_State initial_cpu = {.pc=0x7320, .a=0xcb, .x=0x0c, .y=0x4b, .sp=0xef, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7320, .value=0x08}, {.addr=0x7321, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x7322, .a=0xdb, .x=0x0c, .y=0x4b, .sp=0xef, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7320, .value=0x08}, {.addr=0x7321, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7320, .value=0x08, .type=IO_READ},
        {.addr=0x7321, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0228) {
    const struct CPU_State initial_cpu = {.pc=0x4c94, .a=0x02, .x=0xb0, .y=0x76, .sp=0x69, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4c94, .value=0x08}, {.addr=0x4c95, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x4c96, .a=0x6b, .x=0xb0, .y=0x76, .sp=0x69, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4c94, .value=0x08}, {.addr=0x4c95, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x4c94, .value=0x08, .type=IO_READ},
        {.addr=0x4c95, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0229) {
    const struct CPU_State initial_cpu = {.pc=0x3095, .a=0x67, .x=0x51, .y=0xcb, .sp=0x68, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3095, .value=0x08}, {.addr=0x3096, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x3097, .a=0xf7, .x=0x51, .y=0xcb, .sp=0x68, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3095, .value=0x08}, {.addr=0x3096, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3095, .value=0x08, .type=IO_READ},
        {.addr=0x3096, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022A) {
    const struct CPU_State initial_cpu = {.pc=0xf97c, .a=0x98, .x=0x3b, .y=0x6f, .sp=0xd5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf97c, .value=0x08}, {.addr=0xf97d, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xf97e, .a=0xdf, .x=0x3b, .y=0x6f, .sp=0xd5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf97c, .value=0x08}, {.addr=0xf97d, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xf97c, .value=0x08, .type=IO_READ},
        {.addr=0xf97d, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022B) {
    const struct CPU_State initial_cpu = {.pc=0x2d68, .a=0x08, .x=0x83, .y=0x3d, .sp=0xbe, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2d68, .value=0x08}, {.addr=0x2d69, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x2d6a, .a=0xba, .x=0x83, .y=0x3d, .sp=0xbe, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2d68, .value=0x08}, {.addr=0x2d69, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x2d68, .value=0x08, .type=IO_READ},
        {.addr=0x2d69, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022C) {
    const struct CPU_State initial_cpu = {.pc=0xa4ee, .a=0x44, .x=0x3e, .y=0x31, .sp=0x95, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ee, .value=0x08}, {.addr=0xa4ef, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa4f0, .a=0xce, .x=0x3e, .y=0x31, .sp=0x95, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa4ee, .value=0x08}, {.addr=0xa4ef, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa4ee, .value=0x08, .type=IO_READ},
        {.addr=0xa4ef, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022D) {
    const struct CPU_State initial_cpu = {.pc=0x6b99, .a=0xda, .x=0xa1, .y=0x7f, .sp=0x55, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6b99, .value=0x08}, {.addr=0x6b9a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0xfb, .x=0xa1, .y=0x7f, .sp=0x55, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6b99, .value=0x08}, {.addr=0x6b9a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6b99, .value=0x08, .type=IO_READ},
        {.addr=0x6b9a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022E) {
    const struct CPU_State initial_cpu = {.pc=0x564d, .a=0xec, .x=0x83, .y=0xe4, .sp=0x06, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x564d, .value=0x08}, {.addr=0x564e, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x564f, .a=0xff, .x=0x83, .y=0xe4, .sp=0x06, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x564d, .value=0x08}, {.addr=0x564e, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x564d, .value=0x08, .type=IO_READ},
        {.addr=0x564e, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_022F) {
    const struct CPU_State initial_cpu = {.pc=0x889b, .a=0x5f, .x=0x5c, .y=0xf4, .sp=0xc3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x889b, .value=0x08}, {.addr=0x889c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x889d, .a=0xff, .x=0x5c, .y=0xf4, .sp=0xc3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x889b, .value=0x08}, {.addr=0x889c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x889b, .value=0x08, .type=IO_READ},
        {.addr=0x889c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1693, .a=0x1b, .x=0x9b, .y=0x2e, .sp=0xef, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1693, .value=0x08}, {.addr=0x1694, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x1695, .a=0x1f, .x=0x9b, .y=0x2e, .sp=0xef, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x1693, .value=0x08}, {.addr=0x1694, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x1693, .value=0x08, .type=IO_READ},
        {.addr=0x1694, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0231) {
    const struct CPU_State initial_cpu = {.pc=0x689a, .a=0xc5, .x=0x2b, .y=0xf4, .sp=0xbd, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x689a, .value=0x08}, {.addr=0x689b, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x689c, .a=0xc7, .x=0x2b, .y=0xf4, .sp=0xbd, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x689a, .value=0x08}, {.addr=0x689b, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x689a, .value=0x08, .type=IO_READ},
        {.addr=0x689b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0232) {
    const struct CPU_State initial_cpu = {.pc=0xfaf5, .a=0x4c, .x=0x19, .y=0x30, .sp=0x51, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfaf5, .value=0x08}, {.addr=0xfaf6, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xfaf7, .a=0x7c, .x=0x19, .y=0x30, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfaf5, .value=0x08}, {.addr=0xfaf6, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xfaf5, .value=0x08, .type=IO_READ},
        {.addr=0xfaf6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0233) {
    const struct CPU_State initial_cpu = {.pc=0x103c, .a=0x92, .x=0x6f, .y=0x52, .sp=0x62, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x103c, .value=0x08}, {.addr=0x103d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x103e, .a=0xf6, .x=0x6f, .y=0x52, .sp=0x62, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x103c, .value=0x08}, {.addr=0x103d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x103c, .value=0x08, .type=IO_READ},
        {.addr=0x103d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0234) {
    const struct CPU_State initial_cpu = {.pc=0x5078, .a=0x95, .x=0xe4, .y=0x87, .sp=0x82, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5078, .value=0x08}, {.addr=0x5079, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x507a, .a=0xf7, .x=0xe4, .y=0x87, .sp=0x82, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5078, .value=0x08}, {.addr=0x5079, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x5078, .value=0x08, .type=IO_READ},
        {.addr=0x5079, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0235) {
    const struct CPU_State initial_cpu = {.pc=0x29d3, .a=0x1e, .x=0x99, .y=0xc0, .sp=0x46, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x29d3, .value=0x08}, {.addr=0x29d4, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x29d5, .a=0x9f, .x=0x99, .y=0xc0, .sp=0x46, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x29d3, .value=0x08}, {.addr=0x29d4, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x29d3, .value=0x08, .type=IO_READ},
        {.addr=0x29d4, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0236) {
    const struct CPU_State initial_cpu = {.pc=0x5067, .a=0xa6, .x=0xa9, .y=0x42, .sp=0xb3, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5067, .value=0x08}, {.addr=0x5068, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5069, .a=0xb7, .x=0xa9, .y=0x42, .sp=0xb3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5067, .value=0x08}, {.addr=0x5068, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5067, .value=0x08, .type=IO_READ},
        {.addr=0x5068, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0237) {
    const struct CPU_State initial_cpu = {.pc=0xc78a, .a=0x13, .x=0xe3, .y=0x2b, .sp=0x43, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xc78a, .value=0x08}, {.addr=0xc78b, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xc78c, .a=0x17, .x=0xe3, .y=0x2b, .sp=0x43, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc78a, .value=0x08}, {.addr=0xc78b, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xc78a, .value=0x08, .type=IO_READ},
        {.addr=0xc78b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0238) {
    const struct CPU_State initial_cpu = {.pc=0xeff6, .a=0x5c, .x=0x76, .y=0x8b, .sp=0x35, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xeff6, .value=0x08}, {.addr=0xeff7, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xeff8, .a=0x5e, .x=0x76, .y=0x8b, .sp=0x35, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xeff6, .value=0x08}, {.addr=0xeff7, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xeff6, .value=0x08, .type=IO_READ},
        {.addr=0xeff7, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0239) {
    const struct CPU_State initial_cpu = {.pc=0x0984, .a=0x34, .x=0x2a, .y=0x5d, .sp=0x21, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0984, .value=0x08}, {.addr=0x0985, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x0986, .a=0x3e, .x=0x2a, .y=0x5d, .sp=0x21, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0984, .value=0x08}, {.addr=0x0985, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x0984, .value=0x08, .type=IO_READ},
        {.addr=0x0985, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023A) {
    const struct CPU_State initial_cpu = {.pc=0x6db4, .a=0xba, .x=0xd0, .y=0xa4, .sp=0xe0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6db4, .value=0x08}, {.addr=0x6db5, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x6db6, .a=0xbb, .x=0xd0, .y=0xa4, .sp=0xe0, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6db4, .value=0x08}, {.addr=0x6db5, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x6db4, .value=0x08, .type=IO_READ},
        {.addr=0x6db5, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023B) {
    const struct CPU_State initial_cpu = {.pc=0x2a63, .a=0xc4, .x=0xfa, .y=0xa8, .sp=0x49, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a63, .value=0x08}, {.addr=0x2a64, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2a65, .a=0xed, .x=0xfa, .y=0xa8, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2a63, .value=0x08}, {.addr=0x2a64, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2a63, .value=0x08, .type=IO_READ},
        {.addr=0x2a64, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023C) {
    const struct CPU_State initial_cpu = {.pc=0xd008, .a=0x54, .x=0xd9, .y=0x8f, .sp=0xba, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd008, .value=0x08}, {.addr=0xd009, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xd00a, .a=0x75, .x=0xd9, .y=0x8f, .sp=0xba, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd008, .value=0x08}, {.addr=0xd009, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xd008, .value=0x08, .type=IO_READ},
        {.addr=0xd009, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023D) {
    const struct CPU_State initial_cpu = {.pc=0x3419, .a=0x3d, .x=0x35, .y=0x17, .sp=0xe8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3419, .value=0x08}, {.addr=0x341a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x341b, .a=0x3f, .x=0x35, .y=0x17, .sp=0xe8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x3419, .value=0x08}, {.addr=0x341a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x3419, .value=0x08, .type=IO_READ},
        {.addr=0x341a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023E) {
    const struct CPU_State initial_cpu = {.pc=0xece8, .a=0x1c, .x=0x37, .y=0x72, .sp=0x9d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xece8, .value=0x08}, {.addr=0xece9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xecea, .a=0x1c, .x=0x37, .y=0x72, .sp=0x9d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xece8, .value=0x08}, {.addr=0xece9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xece8, .value=0x08, .type=IO_READ},
        {.addr=0xece9, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_023F) {
    const struct CPU_State initial_cpu = {.pc=0x0bf6, .a=0x10, .x=0xc8, .y=0x40, .sp=0x2c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf6, .value=0x08}, {.addr=0x0bf7, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x0bf8, .a=0xf7, .x=0xc8, .y=0x40, .sp=0x2c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0bf6, .value=0x08}, {.addr=0x0bf7, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x0bf6, .value=0x08, .type=IO_READ},
        {.addr=0x0bf7, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0240) {
    const struct CPU_State initial_cpu = {.pc=0x9ff5, .a=0x70, .x=0x33, .y=0xf1, .sp=0xc1, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9ff5, .value=0x08}, {.addr=0x9ff6, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x9ff7, .a=0x77, .x=0x33, .y=0xf1, .sp=0xc1, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9ff5, .value=0x08}, {.addr=0x9ff6, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x9ff5, .value=0x08, .type=IO_READ},
        {.addr=0x9ff6, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0241) {
    const struct CPU_State initial_cpu = {.pc=0x01dd, .a=0x8d, .x=0x96, .y=0xb6, .sp=0x46, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x08}, {.addr=0x01de, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x01df, .a=0xef, .x=0x96, .y=0xb6, .sp=0x46, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x08}, {.addr=0x01de, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x01dd, .value=0x08, .type=IO_READ},
        {.addr=0x01de, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0242) {
    const struct CPU_State initial_cpu = {.pc=0xeb77, .a=0x61, .x=0xf0, .y=0xe3, .sp=0x30, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xeb77, .value=0x08}, {.addr=0xeb78, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xeb79, .a=0xf1, .x=0xf0, .y=0xe3, .sp=0x30, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xeb77, .value=0x08}, {.addr=0xeb78, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xeb77, .value=0x08, .type=IO_READ},
        {.addr=0xeb78, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0243) {
    const struct CPU_State initial_cpu = {.pc=0xdcef, .a=0xe0, .x=0x1c, .y=0xcb, .sp=0x3e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xdcef, .value=0x08}, {.addr=0xdcf0, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xdcf1, .a=0xea, .x=0x1c, .y=0xcb, .sp=0x3e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdcef, .value=0x08}, {.addr=0xdcf0, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xdcef, .value=0x08, .type=IO_READ},
        {.addr=0xdcf0, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0244) {
    const struct CPU_State initial_cpu = {.pc=0xbafd, .a=0x46, .x=0x4a, .y=0xb9, .sp=0x5f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbafd, .value=0x08}, {.addr=0xbafe, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xbaff, .a=0xee, .x=0x4a, .y=0xb9, .sp=0x5f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbafd, .value=0x08}, {.addr=0xbafe, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xbafd, .value=0x08, .type=IO_READ},
        {.addr=0xbafe, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0245) {
    const struct CPU_State initial_cpu = {.pc=0x0169, .a=0xb3, .x=0x8b, .y=0x4b, .sp=0x7a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x08}, {.addr=0x016a, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x016b, .a=0xb7, .x=0x8b, .y=0x4b, .sp=0x7a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x08}, {.addr=0x016a, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x0169, .value=0x08, .type=IO_READ},
        {.addr=0x016a, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3fff, .a=0x8d, .x=0x6e, .y=0x3e, .sp=0x4a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3fff, .value=0x08}, {.addr=0x4000, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x4001, .a=0xfd, .x=0x6e, .y=0x3e, .sp=0x4a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3fff, .value=0x08}, {.addr=0x4000, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x3fff, .value=0x08, .type=IO_READ},
        {.addr=0x4000, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0247) {
    const struct CPU_State initial_cpu = {.pc=0xe93c, .a=0x68, .x=0x06, .y=0xce, .sp=0xc3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe93c, .value=0x08}, {.addr=0xe93d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xe93e, .a=0x7a, .x=0x06, .y=0xce, .sp=0xc3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe93c, .value=0x08}, {.addr=0xe93d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xe93c, .value=0x08, .type=IO_READ},
        {.addr=0xe93d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0248) {
    const struct CPU_State initial_cpu = {.pc=0x948f, .a=0x4a, .x=0x27, .y=0xbe, .sp=0x4c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x948f, .value=0x08}, {.addr=0x9490, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x9491, .a=0xff, .x=0x27, .y=0xbe, .sp=0x4c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x948f, .value=0x08}, {.addr=0x9490, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x948f, .value=0x08, .type=IO_READ},
        {.addr=0x9490, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0249) {
    const struct CPU_State initial_cpu = {.pc=0xdc1e, .a=0x1a, .x=0x6e, .y=0xf8, .sp=0x1b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xdc1e, .value=0x08}, {.addr=0xdc1f, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xdc20, .a=0x1a, .x=0x6e, .y=0xf8, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xdc1e, .value=0x08}, {.addr=0xdc1f, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xdc1e, .value=0x08, .type=IO_READ},
        {.addr=0xdc1f, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024A) {
    const struct CPU_State initial_cpu = {.pc=0x9e44, .a=0xb2, .x=0x8b, .y=0x01, .sp=0x67, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e44, .value=0x08}, {.addr=0x9e45, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x9e46, .a=0xf6, .x=0x8b, .y=0x01, .sp=0x67, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9e44, .value=0x08}, {.addr=0x9e45, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x9e44, .value=0x08, .type=IO_READ},
        {.addr=0x9e45, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024B) {
    const struct CPU_State initial_cpu = {.pc=0x99e9, .a=0x34, .x=0x7c, .y=0xff, .sp=0x9a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x99e9, .value=0x08}, {.addr=0x99ea, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x99eb, .a=0xb5, .x=0x7c, .y=0xff, .sp=0x9a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x99e9, .value=0x08}, {.addr=0x99ea, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x99e9, .value=0x08, .type=IO_READ},
        {.addr=0x99ea, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024C) {
    const struct CPU_State initial_cpu = {.pc=0xcdac, .a=0x95, .x=0x98, .y=0x58, .sp=0xd4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xcdac, .value=0x08}, {.addr=0xcdad, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xcdae, .a=0xb7, .x=0x98, .y=0x58, .sp=0xd4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcdac, .value=0x08}, {.addr=0xcdad, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xcdac, .value=0x08, .type=IO_READ},
        {.addr=0xcdad, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024D) {
    const struct CPU_State initial_cpu = {.pc=0xbd92, .a=0xaa, .x=0x74, .y=0xa7, .sp=0xe4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd92, .value=0x08}, {.addr=0xbd93, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbd94, .a=0xee, .x=0x74, .y=0xa7, .sp=0xe4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbd92, .value=0x08}, {.addr=0xbd93, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbd92, .value=0x08, .type=IO_READ},
        {.addr=0xbd93, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024E) {
    const struct CPU_State initial_cpu = {.pc=0x4b3e, .a=0xa5, .x=0x7c, .y=0x30, .sp=0x2c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4b3e, .value=0x08}, {.addr=0x4b3f, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x4b40, .a=0xe7, .x=0x7c, .y=0x30, .sp=0x2c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4b3e, .value=0x08}, {.addr=0x4b3f, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x4b3e, .value=0x08, .type=IO_READ},
        {.addr=0x4b3f, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_024F) {
    const struct CPU_State initial_cpu = {.pc=0x6758, .a=0x9c, .x=0xdb, .y=0xee, .sp=0x7d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6758, .value=0x08}, {.addr=0x6759, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x675a, .a=0x9f, .x=0xdb, .y=0xee, .sp=0x7d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6758, .value=0x08}, {.addr=0x6759, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x6758, .value=0x08, .type=IO_READ},
        {.addr=0x6759, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0250) {
    const struct CPU_State initial_cpu = {.pc=0xa791, .a=0xc4, .x=0x93, .y=0x01, .sp=0x85, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa791, .value=0x08}, {.addr=0xa792, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa793, .a=0xe5, .x=0x93, .y=0x01, .sp=0x85, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa791, .value=0x08}, {.addr=0xa792, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa791, .value=0x08, .type=IO_READ},
        {.addr=0xa792, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0251) {
    const struct CPU_State initial_cpu = {.pc=0x5ced, .a=0x12, .x=0xbd, .y=0xdb, .sp=0xd2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5ced, .value=0x08}, {.addr=0x5cee, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x5cef, .a=0x73, .x=0xbd, .y=0xdb, .sp=0xd2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5ced, .value=0x08}, {.addr=0x5cee, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x5ced, .value=0x08, .type=IO_READ},
        {.addr=0x5cee, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9f22, .a=0x77, .x=0x27, .y=0x0e, .sp=0x28, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9f22, .value=0x08}, {.addr=0x9f23, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9f24, .a=0x7f, .x=0x27, .y=0x0e, .sp=0x28, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9f22, .value=0x08}, {.addr=0x9f23, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9f22, .value=0x08, .type=IO_READ},
        {.addr=0x9f23, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0253) {
    const struct CPU_State initial_cpu = {.pc=0x4d49, .a=0x54, .x=0x0c, .y=0x99, .sp=0xf7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4d49, .value=0x08}, {.addr=0x4d4a, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x4d4b, .a=0xf4, .x=0x0c, .y=0x99, .sp=0xf7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4d49, .value=0x08}, {.addr=0x4d4a, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x4d49, .value=0x08, .type=IO_READ},
        {.addr=0x4d4a, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0254) {
    const struct CPU_State initial_cpu = {.pc=0x3cf0, .a=0x4d, .x=0xa8, .y=0x45, .sp=0x22, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf0, .value=0x08}, {.addr=0x3cf1, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x3cf2, .a=0x7f, .x=0xa8, .y=0x45, .sp=0x22, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3cf0, .value=0x08}, {.addr=0x3cf1, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x3cf0, .value=0x08, .type=IO_READ},
        {.addr=0x3cf1, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0255) {
    const struct CPU_State initial_cpu = {.pc=0xc0ba, .a=0xab, .x=0x48, .y=0xbe, .sp=0xca, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc0ba, .value=0x08}, {.addr=0xc0bb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc0bc, .a=0xaf, .x=0x48, .y=0xbe, .sp=0xca, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc0ba, .value=0x08}, {.addr=0xc0bb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc0ba, .value=0x08, .type=IO_READ},
        {.addr=0xc0bb, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0256) {
    const struct CPU_State initial_cpu = {.pc=0x541e, .a=0x75, .x=0x58, .y=0xdc, .sp=0x9c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x541e, .value=0x08}, {.addr=0x541f, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x5420, .a=0xff, .x=0x58, .y=0xdc, .sp=0x9c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x541e, .value=0x08}, {.addr=0x541f, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x541e, .value=0x08, .type=IO_READ},
        {.addr=0x541f, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0257) {
    const struct CPU_State initial_cpu = {.pc=0x771e, .a=0x1a, .x=0x66, .y=0x5f, .sp=0x75, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x771e, .value=0x08}, {.addr=0x771f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7720, .a=0xbe, .x=0x66, .y=0x5f, .sp=0x75, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x771e, .value=0x08}, {.addr=0x771f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x771e, .value=0x08, .type=IO_READ},
        {.addr=0x771f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0258) {
    const struct CPU_State initial_cpu = {.pc=0x7c3f, .a=0x21, .x=0x05, .y=0xc5, .sp=0x52, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3f, .value=0x08}, {.addr=0x7c40, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x7c41, .a=0x77, .x=0x05, .y=0xc5, .sp=0x52, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7c3f, .value=0x08}, {.addr=0x7c40, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x7c3f, .value=0x08, .type=IO_READ},
        {.addr=0x7c40, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0259) {
    const struct CPU_State initial_cpu = {.pc=0x7b37, .a=0xfe, .x=0x12, .y=0x30, .sp=0x99, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7b37, .value=0x08}, {.addr=0x7b38, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x7b39, .a=0xff, .x=0x12, .y=0x30, .sp=0x99, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7b37, .value=0x08}, {.addr=0x7b38, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x7b37, .value=0x08, .type=IO_READ},
        {.addr=0x7b38, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025A) {
    const struct CPU_State initial_cpu = {.pc=0xb5e8, .a=0xba, .x=0xf0, .y=0xb9, .sp=0xbb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e8, .value=0x08}, {.addr=0xb5e9, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xb5ea, .a=0xbe, .x=0xf0, .y=0xb9, .sp=0xbb, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb5e8, .value=0x08}, {.addr=0xb5e9, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xb5e8, .value=0x08, .type=IO_READ},
        {.addr=0xb5e9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4152, .a=0xcb, .x=0xbb, .y=0x8b, .sp=0x5e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4152, .value=0x08}, {.addr=0x4153, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x4154, .a=0xfb, .x=0xbb, .y=0x8b, .sp=0x5e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4152, .value=0x08}, {.addr=0x4153, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x4152, .value=0x08, .type=IO_READ},
        {.addr=0x4153, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025C) {
    const struct CPU_State initial_cpu = {.pc=0xf5a7, .a=0x84, .x=0x9e, .y=0x90, .sp=0x6d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a7, .value=0x08}, {.addr=0xf5a8, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xf5a9, .a=0xcf, .x=0x9e, .y=0x90, .sp=0x6d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf5a7, .value=0x08}, {.addr=0xf5a8, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xf5a7, .value=0x08, .type=IO_READ},
        {.addr=0xf5a8, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025D) {
    const struct CPU_State initial_cpu = {.pc=0xf3dd, .a=0x5d, .x=0xbf, .y=0x2c, .sp=0xe9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xf3dd, .value=0x08}, {.addr=0xf3de, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xf3df, .a=0xfd, .x=0xbf, .y=0x2c, .sp=0xe9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf3dd, .value=0x08}, {.addr=0xf3de, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xf3dd, .value=0x08, .type=IO_READ},
        {.addr=0xf3de, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025E) {
    const struct CPU_State initial_cpu = {.pc=0x2816, .a=0xdf, .x=0x37, .y=0xfa, .sp=0xed, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2816, .value=0x08}, {.addr=0x2817, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x2818, .a=0xff, .x=0x37, .y=0xfa, .sp=0xed, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x2816, .value=0x08}, {.addr=0x2817, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x2816, .value=0x08, .type=IO_READ},
        {.addr=0x2817, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_025F) {
    const struct CPU_State initial_cpu = {.pc=0x5c53, .a=0xf7, .x=0xae, .y=0x19, .sp=0xd1, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5c53, .value=0x08}, {.addr=0x5c54, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x5c55, .a=0xf7, .x=0xae, .y=0x19, .sp=0xd1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5c53, .value=0x08}, {.addr=0x5c54, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x5c53, .value=0x08, .type=IO_READ},
        {.addr=0x5c54, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0260) {
    const struct CPU_State initial_cpu = {.pc=0x014f, .a=0xcd, .x=0x65, .y=0xec, .sp=0xf0, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x08}, {.addr=0x0150, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x0151, .a=0xff, .x=0x65, .y=0xec, .sp=0xf0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x08}, {.addr=0x0150, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x014f, .value=0x08, .type=IO_READ},
        {.addr=0x0150, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0261) {
    const struct CPU_State initial_cpu = {.pc=0x78bf, .a=0xbe, .x=0xe8, .y=0x8c, .sp=0xaa, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x78bf, .value=0x08}, {.addr=0x78c0, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x78c1, .a=0xbf, .x=0xe8, .y=0x8c, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x78bf, .value=0x08}, {.addr=0x78c0, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x78bf, .value=0x08, .type=IO_READ},
        {.addr=0x78c0, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0262) {
    const struct CPU_State initial_cpu = {.pc=0xb16a, .a=0xdf, .x=0x0b, .y=0xef, .sp=0x4a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb16a, .value=0x08}, {.addr=0xb16b, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xb16c, .a=0xff, .x=0x0b, .y=0xef, .sp=0x4a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb16a, .value=0x08}, {.addr=0xb16b, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xb16a, .value=0x08, .type=IO_READ},
        {.addr=0xb16b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0263) {
    const struct CPU_State initial_cpu = {.pc=0x02b7, .a=0x85, .x=0xda, .y=0x51, .sp=0x18, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x02b7, .value=0x08}, {.addr=0x02b8, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x02b9, .a=0xb7, .x=0xda, .y=0x51, .sp=0x18, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x02b7, .value=0x08}, {.addr=0x02b8, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x02b7, .value=0x08, .type=IO_READ},
        {.addr=0x02b8, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0264) {
    const struct CPU_State initial_cpu = {.pc=0x836a, .a=0x92, .x=0x2d, .y=0xbe, .sp=0x80, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x836a, .value=0x08}, {.addr=0x836b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x836c, .a=0xd7, .x=0x2d, .y=0xbe, .sp=0x80, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x836a, .value=0x08}, {.addr=0x836b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x836a, .value=0x08, .type=IO_READ},
        {.addr=0x836b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0265) {
    const struct CPU_State initial_cpu = {.pc=0xa5b7, .a=0x78, .x=0x74, .y=0x69, .sp=0xd6, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b7, .value=0x08}, {.addr=0xa5b8, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa5b9, .a=0xf9, .x=0x74, .y=0x69, .sp=0xd6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa5b7, .value=0x08}, {.addr=0xa5b8, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa5b7, .value=0x08, .type=IO_READ},
        {.addr=0xa5b8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9266, .a=0x43, .x=0xf9, .y=0x03, .sp=0x6a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9266, .value=0x08}, {.addr=0x9267, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9268, .a=0x67, .x=0xf9, .y=0x03, .sp=0x6a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9266, .value=0x08}, {.addr=0x9267, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9266, .value=0x08, .type=IO_READ},
        {.addr=0x9267, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0267) {
    const struct CPU_State initial_cpu = {.pc=0x7791, .a=0xc1, .x=0xfe, .y=0x80, .sp=0xfe, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7791, .value=0x08}, {.addr=0x7792, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7793, .a=0xcf, .x=0xfe, .y=0x80, .sp=0xfe, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7791, .value=0x08}, {.addr=0x7792, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7791, .value=0x08, .type=IO_READ},
        {.addr=0x7792, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0268) {
    const struct CPU_State initial_cpu = {.pc=0x324d, .a=0x35, .x=0x81, .y=0xfe, .sp=0x84, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x324d, .value=0x08}, {.addr=0x324e, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x324f, .a=0x3f, .x=0x81, .y=0xfe, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x324d, .value=0x08}, {.addr=0x324e, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x324d, .value=0x08, .type=IO_READ},
        {.addr=0x324e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0269) {
    const struct CPU_State initial_cpu = {.pc=0xc099, .a=0x50, .x=0x93, .y=0x37, .sp=0x31, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc099, .value=0x08}, {.addr=0xc09a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc09b, .a=0xd9, .x=0x93, .y=0x37, .sp=0x31, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc099, .value=0x08}, {.addr=0xc09a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc099, .value=0x08, .type=IO_READ},
        {.addr=0xc09a, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3d09, .a=0x88, .x=0x2f, .y=0x72, .sp=0xf1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3d09, .value=0x08}, {.addr=0x3d0a, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x3d0b, .a=0xec, .x=0x2f, .y=0x72, .sp=0xf1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3d09, .value=0x08}, {.addr=0x3d0a, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x3d09, .value=0x08, .type=IO_READ},
        {.addr=0x3d0a, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026B) {
    const struct CPU_State initial_cpu = {.pc=0x59d0, .a=0xde, .x=0x46, .y=0x14, .sp=0x36, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x59d0, .value=0x08}, {.addr=0x59d1, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x59d2, .a=0xdf, .x=0x46, .y=0x14, .sp=0x36, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x59d0, .value=0x08}, {.addr=0x59d1, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x59d0, .value=0x08, .type=IO_READ},
        {.addr=0x59d1, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026C) {
    const struct CPU_State initial_cpu = {.pc=0x6ae3, .a=0x59, .x=0xab, .y=0x16, .sp=0x6d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae3, .value=0x08}, {.addr=0x6ae4, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x6ae5, .a=0xdd, .x=0xab, .y=0x16, .sp=0x6d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6ae3, .value=0x08}, {.addr=0x6ae4, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x6ae3, .value=0x08, .type=IO_READ},
        {.addr=0x6ae4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026D) {
    const struct CPU_State initial_cpu = {.pc=0x2d2c, .a=0xdf, .x=0x33, .y=0xc2, .sp=0xed, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2c, .value=0x08}, {.addr=0x2d2d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x2d2e, .a=0xdf, .x=0x33, .y=0xc2, .sp=0xed, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2d2c, .value=0x08}, {.addr=0x2d2d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x2d2c, .value=0x08, .type=IO_READ},
        {.addr=0x2d2d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026E) {
    const struct CPU_State initial_cpu = {.pc=0xdad6, .a=0x95, .x=0x44, .y=0xd9, .sp=0x37, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xdad6, .value=0x08}, {.addr=0xdad7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdad8, .a=0x9d, .x=0x44, .y=0xd9, .sp=0x37, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdad6, .value=0x08}, {.addr=0xdad7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdad6, .value=0x08, .type=IO_READ},
        {.addr=0xdad7, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_026F) {
    const struct CPU_State initial_cpu = {.pc=0xc758, .a=0x2c, .x=0xc4, .y=0x32, .sp=0xbe, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc758, .value=0x08}, {.addr=0xc759, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc75a, .a=0x6c, .x=0xc4, .y=0x32, .sp=0xbe, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc758, .value=0x08}, {.addr=0xc759, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc758, .value=0x08, .type=IO_READ},
        {.addr=0xc759, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0270) {
    const struct CPU_State initial_cpu = {.pc=0x8dda, .a=0xb8, .x=0xd9, .y=0xa3, .sp=0x16, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x8dda, .value=0x08}, {.addr=0x8ddb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8ddc, .a=0xb8, .x=0xd9, .y=0xa3, .sp=0x16, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8dda, .value=0x08}, {.addr=0x8ddb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8dda, .value=0x08, .type=IO_READ},
        {.addr=0x8ddb, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0271) {
    const struct CPU_State initial_cpu = {.pc=0xa155, .a=0x78, .x=0x56, .y=0xc1, .sp=0xd3, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa155, .value=0x08}, {.addr=0xa156, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa157, .a=0xf8, .x=0x56, .y=0xc1, .sp=0xd3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa155, .value=0x08}, {.addr=0xa156, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa155, .value=0x08, .type=IO_READ},
        {.addr=0xa156, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0272) {
    const struct CPU_State initial_cpu = {.pc=0x1d1e, .a=0xa5, .x=0xea, .y=0xd4, .sp=0x22, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1e, .value=0x08}, {.addr=0x1d1f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1d20, .a=0xed, .x=0xea, .y=0xd4, .sp=0x22, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1d1e, .value=0x08}, {.addr=0x1d1f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1d1e, .value=0x08, .type=IO_READ},
        {.addr=0x1d1f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0273) {
    const struct CPU_State initial_cpu = {.pc=0x5750, .a=0xc8, .x=0x73, .y=0x9d, .sp=0xa0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5750, .value=0x08}, {.addr=0x5751, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5752, .a=0xe8, .x=0x73, .y=0x9d, .sp=0xa0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5750, .value=0x08}, {.addr=0x5751, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5750, .value=0x08, .type=IO_READ},
        {.addr=0x5751, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0274) {
    const struct CPU_State initial_cpu = {.pc=0xbcb7, .a=0xff, .x=0x1d, .y=0x38, .sp=0x96, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb7, .value=0x08}, {.addr=0xbcb8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbcb9, .a=0xff, .x=0x1d, .y=0x38, .sp=0x96, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbcb7, .value=0x08}, {.addr=0xbcb8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbcb7, .value=0x08, .type=IO_READ},
        {.addr=0xbcb8, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0275) {
    const struct CPU_State initial_cpu = {.pc=0xbd8a, .a=0xb0, .x=0xc0, .y=0x83, .sp=0xe7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8a, .value=0x08}, {.addr=0xbd8b, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbd8c, .a=0xfc, .x=0xc0, .y=0x83, .sp=0xe7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbd8a, .value=0x08}, {.addr=0xbd8b, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbd8a, .value=0x08, .type=IO_READ},
        {.addr=0xbd8b, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0276) {
    const struct CPU_State initial_cpu = {.pc=0x5182, .a=0xd5, .x=0x4b, .y=0xc4, .sp=0x21, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5182, .value=0x08}, {.addr=0x5183, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x5184, .a=0xd5, .x=0x4b, .y=0xc4, .sp=0x21, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5182, .value=0x08}, {.addr=0x5183, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x5182, .value=0x08, .type=IO_READ},
        {.addr=0x5183, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0277) {
    const struct CPU_State initial_cpu = {.pc=0x8d20, .a=0x00, .x=0xf3, .y=0x22, .sp=0x68, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8d20, .value=0x08}, {.addr=0x8d21, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8d22, .a=0xe0, .x=0xf3, .y=0x22, .sp=0x68, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8d20, .value=0x08}, {.addr=0x8d21, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8d20, .value=0x08, .type=IO_READ},
        {.addr=0x8d21, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0278) {
    const struct CPU_State initial_cpu = {.pc=0xe01d, .a=0x3e, .x=0x32, .y=0x6f, .sp=0x05, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe01d, .value=0x08}, {.addr=0xe01e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xe01f, .a=0x7f, .x=0x32, .y=0x6f, .sp=0x05, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe01d, .value=0x08}, {.addr=0xe01e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xe01d, .value=0x08, .type=IO_READ},
        {.addr=0xe01e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0279) {
    const struct CPU_State initial_cpu = {.pc=0x1f65, .a=0x9b, .x=0xd1, .y=0x4d, .sp=0x66, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f65, .value=0x08}, {.addr=0x1f66, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x1f67, .a=0xdf, .x=0xd1, .y=0x4d, .sp=0x66, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1f65, .value=0x08}, {.addr=0x1f66, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x1f65, .value=0x08, .type=IO_READ},
        {.addr=0x1f66, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb624, .a=0x51, .x=0xd8, .y=0xba, .sp=0x50, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xb624, .value=0x08}, {.addr=0xb625, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xb626, .a=0x5b, .x=0xd8, .y=0xba, .sp=0x50, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb624, .value=0x08}, {.addr=0xb625, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xb624, .value=0x08, .type=IO_READ},
        {.addr=0xb625, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027B) {
    const struct CPU_State initial_cpu = {.pc=0x5cfd, .a=0xe0, .x=0xd4, .y=0xe7, .sp=0xe2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5cfd, .value=0x08}, {.addr=0x5cfe, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x5cff, .a=0xe9, .x=0xd4, .y=0xe7, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5cfd, .value=0x08}, {.addr=0x5cfe, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x5cfd, .value=0x08, .type=IO_READ},
        {.addr=0x5cfe, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027C) {
    const struct CPU_State initial_cpu = {.pc=0xd380, .a=0x6d, .x=0x75, .y=0x7c, .sp=0x4c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd380, .value=0x08}, {.addr=0xd381, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd382, .a=0x7d, .x=0x75, .y=0x7c, .sp=0x4c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd380, .value=0x08}, {.addr=0xd381, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd380, .value=0x08, .type=IO_READ},
        {.addr=0xd381, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027D) {
    const struct CPU_State initial_cpu = {.pc=0xbf2f, .a=0x90, .x=0xdc, .y=0xda, .sp=0x92, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xbf2f, .value=0x08}, {.addr=0xbf30, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xbf31, .a=0xff, .x=0xdc, .y=0xda, .sp=0x92, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbf2f, .value=0x08}, {.addr=0xbf30, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xbf2f, .value=0x08, .type=IO_READ},
        {.addr=0xbf30, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027E) {
    const struct CPU_State initial_cpu = {.pc=0x9cd2, .a=0x49, .x=0xe3, .y=0x60, .sp=0x5a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd2, .value=0x08}, {.addr=0x9cd3, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x9cd4, .a=0xcd, .x=0xe3, .y=0x60, .sp=0x5a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9cd2, .value=0x08}, {.addr=0x9cd3, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x9cd2, .value=0x08, .type=IO_READ},
        {.addr=0x9cd3, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_027F) {
    const struct CPU_State initial_cpu = {.pc=0xde1a, .a=0x52, .x=0xf8, .y=0x63, .sp=0x58, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xde1a, .value=0x08}, {.addr=0xde1b, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xde1c, .a=0x5a, .x=0xf8, .y=0x63, .sp=0x58, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xde1a, .value=0x08}, {.addr=0xde1b, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xde1a, .value=0x08, .type=IO_READ},
        {.addr=0xde1b, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0280) {
    const struct CPU_State initial_cpu = {.pc=0x91f8, .a=0xbb, .x=0x6b, .y=0x25, .sp=0xd7, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x91f8, .value=0x08}, {.addr=0x91f9, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x91fa, .a=0xbb, .x=0x6b, .y=0x25, .sp=0xd7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x91f8, .value=0x08}, {.addr=0x91f9, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x91f8, .value=0x08, .type=IO_READ},
        {.addr=0x91f9, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0xa9, .x=0x36, .y=0xc6, .sp=0x86, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf66b, .value=0x08}, {.addr=0xf66c, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xf66d, .a=0xeb, .x=0x36, .y=0xc6, .sp=0x86, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf66b, .value=0x08}, {.addr=0xf66c, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0x08, .type=IO_READ},
        {.addr=0xf66c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0282) {
    const struct CPU_State initial_cpu = {.pc=0xffb4, .a=0x29, .x=0x03, .y=0xb6, .sp=0x2c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xffb4, .value=0x08}, {.addr=0xffb5, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0xe9, .x=0x03, .y=0xb6, .sp=0x2c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xffb4, .value=0x08}, {.addr=0xffb5, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xffb4, .value=0x08, .type=IO_READ},
        {.addr=0xffb5, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0283) {
    const struct CPU_State initial_cpu = {.pc=0x2f10, .a=0x86, .x=0x13, .y=0x43, .sp=0x1c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2f10, .value=0x08}, {.addr=0x2f11, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x2f12, .a=0xde, .x=0x13, .y=0x43, .sp=0x1c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2f10, .value=0x08}, {.addr=0x2f11, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x2f10, .value=0x08, .type=IO_READ},
        {.addr=0x2f11, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0284) {
    const struct CPU_State initial_cpu = {.pc=0x3d3d, .a=0xb4, .x=0x31, .y=0xb6, .sp=0x66, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3d, .value=0x08}, {.addr=0x3d3e, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3d3f, .a=0xfe, .x=0x31, .y=0xb6, .sp=0x66, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3d3d, .value=0x08}, {.addr=0x3d3e, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3d3d, .value=0x08, .type=IO_READ},
        {.addr=0x3d3e, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb874, .a=0xe4, .x=0x2c, .y=0x83, .sp=0xc0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb874, .value=0x08}, {.addr=0xb875, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb876, .a=0xed, .x=0x2c, .y=0x83, .sp=0xc0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb874, .value=0x08}, {.addr=0xb875, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb874, .value=0x08, .type=IO_READ},
        {.addr=0xb875, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0286) {
    const struct CPU_State initial_cpu = {.pc=0xe36d, .a=0x6c, .x=0x99, .y=0xaa, .sp=0xa7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe36d, .value=0x08}, {.addr=0xe36e, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe36f, .a=0x6d, .x=0x99, .y=0xaa, .sp=0xa7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe36d, .value=0x08}, {.addr=0xe36e, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe36d, .value=0x08, .type=IO_READ},
        {.addr=0xe36e, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0287) {
    const struct CPU_State initial_cpu = {.pc=0xdd60, .a=0xcd, .x=0x57, .y=0x88, .sp=0x3e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xdd60, .value=0x08}, {.addr=0xdd61, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xdd62, .a=0xcd, .x=0x57, .y=0x88, .sp=0x3e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdd60, .value=0x08}, {.addr=0xdd61, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xdd60, .value=0x08, .type=IO_READ},
        {.addr=0xdd61, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0288) {
    const struct CPU_State initial_cpu = {.pc=0x41c0, .a=0xe3, .x=0x58, .y=0x09, .sp=0xa3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x41c0, .value=0x08}, {.addr=0x41c1, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x41c2, .a=0xf7, .x=0x58, .y=0x09, .sp=0xa3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x41c0, .value=0x08}, {.addr=0x41c1, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x41c0, .value=0x08, .type=IO_READ},
        {.addr=0x41c1, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0289) {
    const struct CPU_State initial_cpu = {.pc=0x0955, .a=0x8b, .x=0xff, .y=0xda, .sp=0x65, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0955, .value=0x08}, {.addr=0x0956, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0957, .a=0x8b, .x=0xff, .y=0xda, .sp=0x65, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0955, .value=0x08}, {.addr=0x0956, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0955, .value=0x08, .type=IO_READ},
        {.addr=0x0956, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028A) {
    const struct CPU_State initial_cpu = {.pc=0x8fa2, .a=0x97, .x=0x11, .y=0x5c, .sp=0xfd, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa2, .value=0x08}, {.addr=0x8fa3, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x8fa4, .a=0xb7, .x=0x11, .y=0x5c, .sp=0xfd, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8fa2, .value=0x08}, {.addr=0x8fa3, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x8fa2, .value=0x08, .type=IO_READ},
        {.addr=0x8fa3, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028B) {
    const struct CPU_State initial_cpu = {.pc=0x254f, .a=0x63, .x=0x4d, .y=0xbe, .sp=0x80, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x254f, .value=0x08}, {.addr=0x2550, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x2551, .a=0xe7, .x=0x4d, .y=0xbe, .sp=0x80, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x254f, .value=0x08}, {.addr=0x2550, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x254f, .value=0x08, .type=IO_READ},
        {.addr=0x2550, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028C) {
    const struct CPU_State initial_cpu = {.pc=0xfe19, .a=0x25, .x=0xc7, .y=0x07, .sp=0x58, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xfe19, .value=0x08}, {.addr=0xfe1a, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xfe1b, .a=0x2f, .x=0xc7, .y=0x07, .sp=0x58, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xfe19, .value=0x08}, {.addr=0xfe1a, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xfe19, .value=0x08, .type=IO_READ},
        {.addr=0xfe1a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028D) {
    const struct CPU_State initial_cpu = {.pc=0x9db8, .a=0xfb, .x=0xdf, .y=0xa2, .sp=0xfc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9db8, .value=0x08}, {.addr=0x9db9, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x9dba, .a=0xff, .x=0xdf, .y=0xa2, .sp=0xfc, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9db8, .value=0x08}, {.addr=0x9db9, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x9db8, .value=0x08, .type=IO_READ},
        {.addr=0x9db9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8486, .a=0xba, .x=0x8b, .y=0x9b, .sp=0x4b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8486, .value=0x08}, {.addr=0x8487, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x8488, .a=0xfa, .x=0x8b, .y=0x9b, .sp=0x4b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8486, .value=0x08}, {.addr=0x8487, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x8486, .value=0x08, .type=IO_READ},
        {.addr=0x8487, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_028F) {
    const struct CPU_State initial_cpu = {.pc=0xd80d, .a=0x52, .x=0x4b, .y=0xb0, .sp=0x98, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd80d, .value=0x08}, {.addr=0xd80e, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd80f, .a=0xdb, .x=0x4b, .y=0xb0, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd80d, .value=0x08}, {.addr=0xd80e, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd80d, .value=0x08, .type=IO_READ},
        {.addr=0xd80e, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0290) {
    const struct CPU_State initial_cpu = {.pc=0xf153, .a=0x44, .x=0x9f, .y=0x48, .sp=0xcb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf153, .value=0x08}, {.addr=0xf154, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xf155, .a=0xfe, .x=0x9f, .y=0x48, .sp=0xcb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf153, .value=0x08}, {.addr=0xf154, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xf153, .value=0x08, .type=IO_READ},
        {.addr=0xf154, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0291) {
    const struct CPU_State initial_cpu = {.pc=0x0a04, .a=0x4d, .x=0x94, .y=0x2a, .sp=0x41, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a04, .value=0x08}, {.addr=0x0a05, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x0a06, .a=0xdd, .x=0x94, .y=0x2a, .sp=0x41, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0a04, .value=0x08}, {.addr=0x0a05, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x0a04, .value=0x08, .type=IO_READ},
        {.addr=0x0a05, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0292) {
    const struct CPU_State initial_cpu = {.pc=0x23f7, .a=0xed, .x=0x21, .y=0x2c, .sp=0x66, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x23f7, .value=0x08}, {.addr=0x23f8, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x23f9, .a=0xed, .x=0x21, .y=0x2c, .sp=0x66, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x23f7, .value=0x08}, {.addr=0x23f8, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x23f7, .value=0x08, .type=IO_READ},
        {.addr=0x23f8, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0293) {
    const struct CPU_State initial_cpu = {.pc=0xa955, .a=0x38, .x=0xaa, .y=0x02, .sp=0x1a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa955, .value=0x08}, {.addr=0xa956, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xa957, .a=0x78, .x=0xaa, .y=0x02, .sp=0x1a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa955, .value=0x08}, {.addr=0xa956, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xa955, .value=0x08, .type=IO_READ},
        {.addr=0xa956, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0294) {
    const struct CPU_State initial_cpu = {.pc=0xa042, .a=0x64, .x=0x1f, .y=0x19, .sp=0x28, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa042, .value=0x08}, {.addr=0xa043, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa044, .a=0xe7, .x=0x1f, .y=0x19, .sp=0x28, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa042, .value=0x08}, {.addr=0xa043, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa042, .value=0x08, .type=IO_READ},
        {.addr=0xa043, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5594, .a=0xa0, .x=0xba, .y=0x4f, .sp=0xee, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5594, .value=0x08}, {.addr=0x5595, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x5596, .a=0xa4, .x=0xba, .y=0x4f, .sp=0xee, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5594, .value=0x08}, {.addr=0x5595, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x5594, .value=0x08, .type=IO_READ},
        {.addr=0x5595, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0296) {
    const struct CPU_State initial_cpu = {.pc=0x8635, .a=0xf8, .x=0x76, .y=0x51, .sp=0xac, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8635, .value=0x08}, {.addr=0x8636, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x8637, .a=0xfe, .x=0x76, .y=0x51, .sp=0xac, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8635, .value=0x08}, {.addr=0x8636, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x8635, .value=0x08, .type=IO_READ},
        {.addr=0x8636, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0297) {
    const struct CPU_State initial_cpu = {.pc=0x07ed, .a=0xe9, .x=0x51, .y=0xf9, .sp=0xb6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x07ed, .value=0x08}, {.addr=0x07ee, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x07ef, .a=0xeb, .x=0x51, .y=0xf9, .sp=0xb6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x07ed, .value=0x08}, {.addr=0x07ee, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x07ed, .value=0x08, .type=IO_READ},
        {.addr=0x07ee, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0298) {
    const struct CPU_State initial_cpu = {.pc=0x846e, .a=0x56, .x=0x40, .y=0x68, .sp=0xf5, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x846e, .value=0x08}, {.addr=0x846f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x8470, .a=0x5e, .x=0x40, .y=0x68, .sp=0xf5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x846e, .value=0x08}, {.addr=0x846f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x846e, .value=0x08, .type=IO_READ},
        {.addr=0x846f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0299) {
    const struct CPU_State initial_cpu = {.pc=0x9c8c, .a=0xd7, .x=0x71, .y=0xdd, .sp=0xb8, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8c, .value=0x08}, {.addr=0x9c8d, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x9c8e, .a=0xff, .x=0x71, .y=0xdd, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9c8c, .value=0x08}, {.addr=0x9c8d, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x9c8c, .value=0x08, .type=IO_READ},
        {.addr=0x9c8d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029A) {
    const struct CPU_State initial_cpu = {.pc=0x0f0c, .a=0x42, .x=0x92, .y=0x32, .sp=0xe7, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0c, .value=0x08}, {.addr=0x0f0d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0f0e, .a=0xea, .x=0x92, .y=0x32, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0f0c, .value=0x08}, {.addr=0x0f0d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0f0c, .value=0x08, .type=IO_READ},
        {.addr=0x0f0d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029B) {
    const struct CPU_State initial_cpu = {.pc=0x551c, .a=0x5f, .x=0xc9, .y=0xe3, .sp=0x2e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x551c, .value=0x08}, {.addr=0x551d, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x551e, .a=0x7f, .x=0xc9, .y=0xe3, .sp=0x2e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x551c, .value=0x08}, {.addr=0x551d, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x551c, .value=0x08, .type=IO_READ},
        {.addr=0x551d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029C) {
    const struct CPU_State initial_cpu = {.pc=0xd733, .a=0xca, .x=0xce, .y=0xd6, .sp=0x51, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd733, .value=0x08}, {.addr=0xd734, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd735, .a=0xfe, .x=0xce, .y=0xd6, .sp=0x51, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd733, .value=0x08}, {.addr=0xd734, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd733, .value=0x08, .type=IO_READ},
        {.addr=0xd734, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029D) {
    const struct CPU_State initial_cpu = {.pc=0xbbde, .a=0x92, .x=0xa0, .y=0x6d, .sp=0x1a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xbbde, .value=0x08}, {.addr=0xbbdf, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbbe0, .a=0xb3, .x=0xa0, .y=0x6d, .sp=0x1a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbbde, .value=0x08}, {.addr=0xbbdf, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbbde, .value=0x08, .type=IO_READ},
        {.addr=0xbbdf, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9eec, .a=0xbf, .x=0x85, .y=0x41, .sp=0xf0, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x9eec, .value=0x08}, {.addr=0x9eed, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9eee, .a=0xbf, .x=0x85, .y=0x41, .sp=0xf0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9eec, .value=0x08}, {.addr=0x9eed, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9eec, .value=0x08, .type=IO_READ},
        {.addr=0x9eed, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_029F) {
    const struct CPU_State initial_cpu = {.pc=0x00a5, .a=0x9d, .x=0xc9, .y=0x25, .sp=0x1d, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x08}, {.addr=0x00a6, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x00a7, .a=0xdd, .x=0xc9, .y=0x25, .sp=0x1d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x08}, {.addr=0x00a6, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x00a5, .value=0x08, .type=IO_READ},
        {.addr=0x00a6, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd28a, .a=0xda, .x=0x8d, .y=0xb6, .sp=0x73, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd28a, .value=0x08}, {.addr=0xd28b, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xd28c, .a=0xda, .x=0x8d, .y=0xb6, .sp=0x73, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd28a, .value=0x08}, {.addr=0xd28b, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xd28a, .value=0x08, .type=IO_READ},
        {.addr=0xd28b, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x8f3b, .a=0xfd, .x=0x95, .y=0x35, .sp=0xa2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8f3b, .value=0x08}, {.addr=0x8f3c, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x8f3d, .a=0xfd, .x=0x95, .y=0x35, .sp=0xa2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8f3b, .value=0x08}, {.addr=0x8f3c, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x8f3b, .value=0x08, .type=IO_READ},
        {.addr=0x8f3c, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x422d, .a=0x30, .x=0x0f, .y=0x0d, .sp=0x8b, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x422d, .value=0x08}, {.addr=0x422e, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x422f, .a=0xff, .x=0x0f, .y=0x0d, .sp=0x8b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x422d, .value=0x08}, {.addr=0x422e, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x422d, .value=0x08, .type=IO_READ},
        {.addr=0x422e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xc422, .a=0xdb, .x=0x3d, .y=0x41, .sp=0xee, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc422, .value=0x08}, {.addr=0xc423, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xc424, .a=0xff, .x=0x3d, .y=0x41, .sp=0xee, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc422, .value=0x08}, {.addr=0xc423, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xc422, .value=0x08, .type=IO_READ},
        {.addr=0xc423, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x4b4d, .a=0x71, .x=0x27, .y=0x79, .sp=0x39, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4d, .value=0x08}, {.addr=0x4b4e, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x4b4f, .a=0xf5, .x=0x27, .y=0x79, .sp=0x39, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4b4d, .value=0x08}, {.addr=0x4b4e, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x4b4d, .value=0x08, .type=IO_READ},
        {.addr=0x4b4e, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xbf8d, .a=0xef, .x=0x3b, .y=0xc5, .sp=0x8b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8d, .value=0x08}, {.addr=0xbf8e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xbf8f, .a=0xef, .x=0x3b, .y=0xc5, .sp=0x8b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbf8d, .value=0x08}, {.addr=0xbf8e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xbf8d, .value=0x08, .type=IO_READ},
        {.addr=0xbf8e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x83cd, .a=0x90, .x=0x98, .y=0xa7, .sp=0xa5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x83cd, .value=0x08}, {.addr=0x83ce, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x83cf, .a=0xb5, .x=0x98, .y=0xa7, .sp=0xa5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x83cd, .value=0x08}, {.addr=0x83ce, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x83cd, .value=0x08, .type=IO_READ},
        {.addr=0x83ce, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xe15c, .a=0xea, .x=0xfb, .y=0x97, .sp=0xaf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe15c, .value=0x08}, {.addr=0xe15d, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xe15e, .a=0xee, .x=0xfb, .y=0x97, .sp=0xaf, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe15c, .value=0x08}, {.addr=0xe15d, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xe15c, .value=0x08, .type=IO_READ},
        {.addr=0xe15d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x1105, .a=0xd5, .x=0x3a, .y=0x75, .sp=0xe8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1105, .value=0x08}, {.addr=0x1106, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1107, .a=0xf7, .x=0x3a, .y=0x75, .sp=0xe8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1105, .value=0x08}, {.addr=0x1106, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1105, .value=0x08, .type=IO_READ},
        {.addr=0x1106, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x61d4, .a=0xcb, .x=0x27, .y=0x8c, .sp=0xf6, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x61d4, .value=0x08}, {.addr=0x61d5, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x61d6, .a=0xcb, .x=0x27, .y=0x8c, .sp=0xf6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x61d4, .value=0x08}, {.addr=0x61d5, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x61d4, .value=0x08, .type=IO_READ},
        {.addr=0x61d5, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xc11b, .a=0x17, .x=0xc0, .y=0x8b, .sp=0x37, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc11b, .value=0x08}, {.addr=0xc11c, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xc11d, .a=0x1f, .x=0xc0, .y=0x8b, .sp=0x37, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc11b, .value=0x08}, {.addr=0xc11c, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xc11b, .value=0x08, .type=IO_READ},
        {.addr=0xc11c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x634b, .a=0xd7, .x=0xec, .y=0xc7, .sp=0x76, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x634b, .value=0x08}, {.addr=0x634c, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x634d, .a=0xf7, .x=0xec, .y=0xc7, .sp=0x76, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x634b, .value=0x08}, {.addr=0x634c, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x634b, .value=0x08, .type=IO_READ},
        {.addr=0x634c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1847, .a=0x28, .x=0x5e, .y=0xfa, .sp=0xa7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1847, .value=0x08}, {.addr=0x1848, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x1849, .a=0xad, .x=0x5e, .y=0xfa, .sp=0xa7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1847, .value=0x08}, {.addr=0x1848, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x1847, .value=0x08, .type=IO_READ},
        {.addr=0x1848, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x2f15, .a=0x30, .x=0xb9, .y=0xee, .sp=0x9b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f15, .value=0x08}, {.addr=0x2f16, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x2f17, .a=0xb7, .x=0xb9, .y=0xee, .sp=0x9b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2f15, .value=0x08}, {.addr=0x2f16, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x2f15, .value=0x08, .type=IO_READ},
        {.addr=0x2f16, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xf94e, .a=0x70, .x=0x6f, .y=0xc0, .sp=0x01, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf94e, .value=0x08}, {.addr=0xf94f, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xf950, .a=0x7e, .x=0x6f, .y=0xc0, .sp=0x01, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf94e, .value=0x08}, {.addr=0xf94f, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xf94e, .value=0x08, .type=IO_READ},
        {.addr=0xf94f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xc3b0, .a=0x08, .x=0x22, .y=0x36, .sp=0x83, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b0, .value=0x08}, {.addr=0xc3b1, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xc3b2, .a=0xff, .x=0x22, .y=0x36, .sp=0x83, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc3b0, .value=0x08}, {.addr=0xc3b1, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xc3b0, .value=0x08, .type=IO_READ},
        {.addr=0xc3b1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xb0b2, .a=0xc7, .x=0x1e, .y=0xea, .sp=0xc3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b2, .value=0x08}, {.addr=0xb0b3, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xb0b4, .a=0xe7, .x=0x1e, .y=0xea, .sp=0xc3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb0b2, .value=0x08}, {.addr=0xb0b3, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xb0b2, .value=0x08, .type=IO_READ},
        {.addr=0xb0b3, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x9c02, .a=0x8b, .x=0x98, .y=0x52, .sp=0xd2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x9c02, .value=0x08}, {.addr=0x9c03, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x9c04, .a=0xeb, .x=0x98, .y=0x52, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9c02, .value=0x08}, {.addr=0x9c03, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x9c02, .value=0x08, .type=IO_READ},
        {.addr=0x9c03, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xb646, .a=0x76, .x=0x40, .y=0xc5, .sp=0xf1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb646, .value=0x08}, {.addr=0xb647, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xb648, .a=0x76, .x=0x40, .y=0xc5, .sp=0xf1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb646, .value=0x08}, {.addr=0xb647, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xb646, .value=0x08, .type=IO_READ},
        {.addr=0xb647, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x6730, .a=0x96, .x=0x75, .y=0x60, .sp=0xf2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6730, .value=0x08}, {.addr=0x6731, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x6732, .a=0xde, .x=0x75, .y=0x60, .sp=0xf2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6730, .value=0x08}, {.addr=0x6731, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x6730, .value=0x08, .type=IO_READ},
        {.addr=0x6731, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb654, .a=0x42, .x=0xb2, .y=0x34, .sp=0x35, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb654, .value=0x08}, {.addr=0xb655, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb656, .a=0xce, .x=0xb2, .y=0x34, .sp=0x35, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb654, .value=0x08}, {.addr=0xb655, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb654, .value=0x08, .type=IO_READ},
        {.addr=0xb655, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x3eea, .a=0x69, .x=0x76, .y=0x34, .sp=0x31, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3eea, .value=0x08}, {.addr=0x3eeb, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x3eec, .a=0x6b, .x=0x76, .y=0x34, .sp=0x31, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3eea, .value=0x08}, {.addr=0x3eeb, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x3eea, .value=0x08, .type=IO_READ},
        {.addr=0x3eeb, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xd186, .a=0x33, .x=0x56, .y=0xca, .sp=0x2d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd186, .value=0x08}, {.addr=0xd187, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xd188, .a=0x7b, .x=0x56, .y=0xca, .sp=0x2d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd186, .value=0x08}, {.addr=0xd187, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xd186, .value=0x08, .type=IO_READ},
        {.addr=0xd187, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x81ed, .a=0xa9, .x=0xc4, .y=0x35, .sp=0x01, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x81ed, .value=0x08}, {.addr=0x81ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x81ef, .a=0xbd, .x=0xc4, .y=0x35, .sp=0x01, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x81ed, .value=0x08}, {.addr=0x81ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x81ed, .value=0x08, .type=IO_READ},
        {.addr=0x81ee, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x8093, .a=0xdc, .x=0x46, .y=0x0e, .sp=0x00, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x8093, .value=0x08}, {.addr=0x8094, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8095, .a=0xfc, .x=0x46, .y=0x0e, .sp=0x00, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8093, .value=0x08}, {.addr=0x8094, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x8093, .value=0x08, .type=IO_READ},
        {.addr=0x8094, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x4f5e, .a=0x20, .x=0x1a, .y=0xf6, .sp=0x8e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f5e, .value=0x08}, {.addr=0x4f5f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4f60, .a=0xed, .x=0x1a, .y=0xf6, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4f5e, .value=0x08}, {.addr=0x4f5f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4f5e, .value=0x08, .type=IO_READ},
        {.addr=0x4f5f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x16b3, .a=0xe1, .x=0x93, .y=0x5f, .sp=0x1c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x16b3, .value=0x08}, {.addr=0x16b4, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x16b5, .a=0xf3, .x=0x93, .y=0x5f, .sp=0x1c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x16b3, .value=0x08}, {.addr=0x16b4, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x16b3, .value=0x08, .type=IO_READ},
        {.addr=0x16b4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x30d1, .a=0x64, .x=0x64, .y=0x31, .sp=0xee, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x30d1, .value=0x08}, {.addr=0x30d2, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x30d3, .a=0xff, .x=0x64, .y=0x31, .sp=0xee, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x30d1, .value=0x08}, {.addr=0x30d2, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x30d1, .value=0x08, .type=IO_READ},
        {.addr=0x30d2, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xa5a9, .a=0x7f, .x=0x22, .y=0x81, .sp=0x39, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a9, .value=0x08}, {.addr=0xa5aa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa5ab, .a=0x7f, .x=0x22, .y=0x81, .sp=0x39, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa5a9, .value=0x08}, {.addr=0xa5aa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa5a9, .value=0x08, .type=IO_READ},
        {.addr=0xa5aa, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xf806, .a=0x11, .x=0x0d, .y=0x8e, .sp=0x9e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xf806, .value=0x08}, {.addr=0xf807, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xf808, .a=0x39, .x=0x0d, .y=0x8e, .sp=0x9e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf806, .value=0x08}, {.addr=0xf807, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xf806, .value=0x08, .type=IO_READ},
        {.addr=0xf807, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xdcbd, .a=0xad, .x=0x61, .y=0x16, .sp=0xe5, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdcbd, .value=0x08}, {.addr=0xdcbe, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xdcbf, .a=0xef, .x=0x61, .y=0x16, .sp=0xe5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdcbd, .value=0x08}, {.addr=0xdcbe, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xdcbd, .value=0x08, .type=IO_READ},
        {.addr=0xdcbe, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xeba1, .a=0xe6, .x=0x80, .y=0xcc, .sp=0x82, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xeba1, .value=0x08}, {.addr=0xeba2, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xeba3, .a=0xf7, .x=0x80, .y=0xcc, .sp=0x82, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xeba1, .value=0x08}, {.addr=0xeba2, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xeba1, .value=0x08, .type=IO_READ},
        {.addr=0xeba2, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xa479, .a=0x47, .x=0xf9, .y=0x5d, .sp=0x23, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa479, .value=0x08}, {.addr=0xa47a, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xa47b, .a=0xcf, .x=0xf9, .y=0x5d, .sp=0x23, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa479, .value=0x08}, {.addr=0xa47a, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xa479, .value=0x08, .type=IO_READ},
        {.addr=0xa47a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xfcc4, .a=0x2e, .x=0x8e, .y=0x5a, .sp=0x17, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc4, .value=0x08}, {.addr=0xfcc5, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xfcc6, .a=0xae, .x=0x8e, .y=0x5a, .sp=0x17, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfcc4, .value=0x08}, {.addr=0xfcc5, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xfcc4, .value=0x08, .type=IO_READ},
        {.addr=0xfcc5, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xbc23, .a=0xa8, .x=0x63, .y=0xca, .sp=0x4e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbc23, .value=0x08}, {.addr=0xbc24, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbc25, .a=0xeb, .x=0x63, .y=0xca, .sp=0x4e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbc23, .value=0x08}, {.addr=0xbc24, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbc23, .value=0x08, .type=IO_READ},
        {.addr=0xbc24, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x3642, .a=0xa8, .x=0xda, .y=0xed, .sp=0x87, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3642, .value=0x08}, {.addr=0x3643, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x3644, .a=0xaf, .x=0xda, .y=0xed, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3642, .value=0x08}, {.addr=0x3643, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x3642, .value=0x08, .type=IO_READ},
        {.addr=0x3643, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xc706, .a=0x1d, .x=0xa1, .y=0xe3, .sp=0xd9, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc706, .value=0x08}, {.addr=0xc707, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xc708, .a=0x7f, .x=0xa1, .y=0xe3, .sp=0xd9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc706, .value=0x08}, {.addr=0xc707, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xc706, .value=0x08, .type=IO_READ},
        {.addr=0xc707, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x5818, .a=0x89, .x=0x49, .y=0x19, .sp=0xc8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5818, .value=0x08}, {.addr=0x5819, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x581a, .a=0x8d, .x=0x49, .y=0x19, .sp=0xc8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5818, .value=0x08}, {.addr=0x5819, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x5818, .value=0x08, .type=IO_READ},
        {.addr=0x5819, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x0ff7, .a=0x2b, .x=0x9d, .y=0x5d, .sp=0xd2, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff7, .value=0x08}, {.addr=0x0ff8, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0ff9, .a=0xeb, .x=0x9d, .y=0x5d, .sp=0xd2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0ff7, .value=0x08}, {.addr=0x0ff8, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x0ff7, .value=0x08, .type=IO_READ},
        {.addr=0x0ff8, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x113f, .a=0xa0, .x=0x6e, .y=0x51, .sp=0xa1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x113f, .value=0x08}, {.addr=0x1140, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x1141, .a=0xf3, .x=0x6e, .y=0x51, .sp=0xa1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x113f, .value=0x08}, {.addr=0x1140, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x113f, .value=0x08, .type=IO_READ},
        {.addr=0x1140, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x35d2, .a=0xfc, .x=0x26, .y=0xcc, .sp=0xe9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x35d2, .value=0x08}, {.addr=0x35d3, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x35d4, .a=0xfe, .x=0x26, .y=0xcc, .sp=0xe9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x35d2, .value=0x08}, {.addr=0x35d3, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x35d2, .value=0x08, .type=IO_READ},
        {.addr=0x35d3, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x88a7, .a=0x59, .x=0x62, .y=0x9b, .sp=0x70, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x88a7, .value=0x08}, {.addr=0x88a8, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x88a9, .a=0xfd, .x=0x62, .y=0x9b, .sp=0x70, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x88a7, .value=0x08}, {.addr=0x88a8, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x88a7, .value=0x08, .type=IO_READ},
        {.addr=0x88a8, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x068d, .a=0xc8, .x=0x41, .y=0x9c, .sp=0x1e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x068d, .value=0x08}, {.addr=0x068e, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x068f, .a=0xdd, .x=0x41, .y=0x9c, .sp=0x1e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x068d, .value=0x08}, {.addr=0x068e, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x068d, .value=0x08, .type=IO_READ},
        {.addr=0x068e, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xbea4, .a=0x05, .x=0xe0, .y=0xf0, .sp=0x46, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xbea4, .value=0x08}, {.addr=0xbea5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbea6, .a=0x5d, .x=0xe0, .y=0xf0, .sp=0x46, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbea4, .value=0x08}, {.addr=0xbea5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbea4, .value=0x08, .type=IO_READ},
        {.addr=0xbea5, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2ac8, .a=0x60, .x=0x6d, .y=0xb8, .sp=0xee, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac8, .value=0x08}, {.addr=0x2ac9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2aca, .a=0xe0, .x=0x6d, .y=0xb8, .sp=0xee, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2ac8, .value=0x08}, {.addr=0x2ac9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2ac8, .value=0x08, .type=IO_READ},
        {.addr=0x2ac9, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x840b, .a=0xfc, .x=0x19, .y=0x67, .sp=0x60, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x840b, .value=0x08}, {.addr=0x840c, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x840d, .a=0xff, .x=0x19, .y=0x67, .sp=0x60, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x840b, .value=0x08}, {.addr=0x840c, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x840b, .value=0x08, .type=IO_READ},
        {.addr=0x840c, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xea02, .a=0x9c, .x=0x6a, .y=0x28, .sp=0x88, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xea02, .value=0x08}, {.addr=0xea03, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xea04, .a=0xbd, .x=0x6a, .y=0x28, .sp=0x88, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xea02, .value=0x08}, {.addr=0xea03, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xea02, .value=0x08, .type=IO_READ},
        {.addr=0xea03, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x25fc, .a=0x41, .x=0x50, .y=0x35, .sp=0x46, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x25fc, .value=0x08}, {.addr=0x25fd, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x25fe, .a=0x79, .x=0x50, .y=0x35, .sp=0x46, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x25fc, .value=0x08}, {.addr=0x25fd, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x25fc, .value=0x08, .type=IO_READ},
        {.addr=0x25fd, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xf341, .a=0xf7, .x=0x19, .y=0x64, .sp=0x97, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf341, .value=0x08}, {.addr=0xf342, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xf343, .a=0xff, .x=0x19, .y=0x64, .sp=0x97, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf341, .value=0x08}, {.addr=0xf342, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xf341, .value=0x08, .type=IO_READ},
        {.addr=0xf342, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xaa35, .a=0x44, .x=0x04, .y=0xa0, .sp=0xb5, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xaa35, .value=0x08}, {.addr=0xaa36, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xaa37, .a=0x54, .x=0x04, .y=0xa0, .sp=0xb5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xaa35, .value=0x08}, {.addr=0xaa36, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xaa35, .value=0x08, .type=IO_READ},
        {.addr=0xaa36, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x7a5d, .a=0xf8, .x=0x39, .y=0x6f, .sp=0xdc, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7a5d, .value=0x08}, {.addr=0x7a5e, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x7a5f, .a=0xfd, .x=0x39, .y=0x6f, .sp=0xdc, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7a5d, .value=0x08}, {.addr=0x7a5e, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x7a5d, .value=0x08, .type=IO_READ},
        {.addr=0x7a5e, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4dc8, .a=0xb5, .x=0xc7, .y=0xc5, .sp=0x02, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc8, .value=0x08}, {.addr=0x4dc9, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4dca, .a=0xff, .x=0xc7, .y=0xc5, .sp=0x02, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4dc8, .value=0x08}, {.addr=0x4dc9, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4dc8, .value=0x08, .type=IO_READ},
        {.addr=0x4dc9, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xdde8, .a=0x4c, .x=0xa2, .y=0xaf, .sp=0x43, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdde8, .value=0x08}, {.addr=0xdde9, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xddea, .a=0x5d, .x=0xa2, .y=0xaf, .sp=0x43, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xdde8, .value=0x08}, {.addr=0xdde9, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xdde8, .value=0x08, .type=IO_READ},
        {.addr=0xdde9, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x0ffe, .a=0x16, .x=0x31, .y=0x79, .sp=0x50, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0ffe, .value=0x08}, {.addr=0x0fff, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x1000, .a=0xff, .x=0x31, .y=0x79, .sp=0x50, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0ffe, .value=0x08}, {.addr=0x0fff, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x0ffe, .value=0x08, .type=IO_READ},
        {.addr=0x0fff, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x610f, .a=0xea, .x=0x9c, .y=0x13, .sp=0xcc, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x610f, .value=0x08}, {.addr=0x6110, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x6111, .a=0xff, .x=0x9c, .y=0x13, .sp=0xcc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x610f, .value=0x08}, {.addr=0x6110, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x610f, .value=0x08, .type=IO_READ},
        {.addr=0x6110, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x65ed, .a=0x88, .x=0x7a, .y=0x11, .sp=0x80, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x65ed, .value=0x08}, {.addr=0x65ee, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x65ef, .a=0xbc, .x=0x7a, .y=0x11, .sp=0x80, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x65ed, .value=0x08}, {.addr=0x65ee, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x65ed, .value=0x08, .type=IO_READ},
        {.addr=0x65ee, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x4197, .a=0x41, .x=0xcf, .y=0xaa, .sp=0x3f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x4197, .value=0x08}, {.addr=0x4198, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x4199, .a=0x55, .x=0xcf, .y=0xaa, .sp=0x3f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4197, .value=0x08}, {.addr=0x4198, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x4197, .value=0x08, .type=IO_READ},
        {.addr=0x4198, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x7634, .a=0xfe, .x=0xcc, .y=0xb7, .sp=0x25, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7634, .value=0x08}, {.addr=0x7635, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7636, .a=0xfe, .x=0xcc, .y=0xb7, .sp=0x25, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7634, .value=0x08}, {.addr=0x7635, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7634, .value=0x08, .type=IO_READ},
        {.addr=0x7635, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x69bb, .a=0x92, .x=0xe2, .y=0xce, .sp=0x16, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x69bb, .value=0x08}, {.addr=0x69bc, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x69bd, .a=0x9a, .x=0xe2, .y=0xce, .sp=0x16, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x69bb, .value=0x08}, {.addr=0x69bc, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x69bb, .value=0x08, .type=IO_READ},
        {.addr=0x69bc, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xfb1f, .a=0x3e, .x=0x92, .y=0xf6, .sp=0x56, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xfb1f, .value=0x08}, {.addr=0xfb20, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xfb21, .a=0xff, .x=0x92, .y=0xf6, .sp=0x56, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfb1f, .value=0x08}, {.addr=0xfb20, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xfb1f, .value=0x08, .type=IO_READ},
        {.addr=0xfb20, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x5c5d, .a=0xc1, .x=0xc7, .y=0x61, .sp=0x9f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5c5d, .value=0x08}, {.addr=0x5c5e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5c5f, .a=0xc1, .x=0xc7, .y=0x61, .sp=0x9f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x5c5d, .value=0x08}, {.addr=0x5c5e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5c5d, .value=0x08, .type=IO_READ},
        {.addr=0x5c5e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xdcb7, .a=0x5f, .x=0xfe, .y=0xe1, .sp=0xf6, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb7, .value=0x08}, {.addr=0xdcb8, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xdcb9, .a=0xdf, .x=0xfe, .y=0xe1, .sp=0xf6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdcb7, .value=0x08}, {.addr=0xdcb8, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xdcb7, .value=0x08, .type=IO_READ},
        {.addr=0xdcb8, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xd7e6, .a=0x0b, .x=0xef, .y=0x0f, .sp=0xe5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e6, .value=0x08}, {.addr=0xd7e7, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xd7e8, .a=0x9f, .x=0xef, .y=0x0f, .sp=0xe5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd7e6, .value=0x08}, {.addr=0xd7e7, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xd7e6, .value=0x08, .type=IO_READ},
        {.addr=0xd7e7, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe628, .a=0x81, .x=0xa6, .y=0x20, .sp=0x1c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xe628, .value=0x08}, {.addr=0xe629, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xe62a, .a=0xdb, .x=0xa6, .y=0x20, .sp=0x1c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe628, .value=0x08}, {.addr=0xe629, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe628, .value=0x08, .type=IO_READ},
        {.addr=0xe629, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x75cb, .a=0x15, .x=0xdb, .y=0x50, .sp=0x5b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x75cb, .value=0x08}, {.addr=0x75cc, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x75cd, .a=0xff, .x=0xdb, .y=0x50, .sp=0x5b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x75cb, .value=0x08}, {.addr=0x75cc, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x75cb, .value=0x08, .type=IO_READ},
        {.addr=0x75cc, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xb075, .a=0xdd, .x=0x90, .y=0x86, .sp=0x0b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb075, .value=0x08}, {.addr=0xb076, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xb077, .a=0xfd, .x=0x90, .y=0x86, .sp=0x0b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb075, .value=0x08}, {.addr=0xb076, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xb075, .value=0x08, .type=IO_READ},
        {.addr=0xb076, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x691c, .a=0xd2, .x=0x0c, .y=0x10, .sp=0xb9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x691c, .value=0x08}, {.addr=0x691d, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x691e, .a=0xfb, .x=0x0c, .y=0x10, .sp=0xb9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x691c, .value=0x08}, {.addr=0x691d, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x691c, .value=0x08, .type=IO_READ},
        {.addr=0x691d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xf415, .a=0xd9, .x=0x05, .y=0x5a, .sp=0x3f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf415, .value=0x08}, {.addr=0xf416, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xf417, .a=0xfb, .x=0x05, .y=0x5a, .sp=0x3f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf415, .value=0x08}, {.addr=0xf416, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xf415, .value=0x08, .type=IO_READ},
        {.addr=0xf416, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x1e48, .a=0x0d, .x=0xa9, .y=0xc0, .sp=0xe0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1e48, .value=0x08}, {.addr=0x1e49, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x1e4a, .a=0xbd, .x=0xa9, .y=0xc0, .sp=0xe0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1e48, .value=0x08}, {.addr=0x1e49, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x1e48, .value=0x08, .type=IO_READ},
        {.addr=0x1e49, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x2fac, .a=0x28, .x=0xef, .y=0x8e, .sp=0x80, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2fac, .value=0x08}, {.addr=0x2fad, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2fae, .a=0xbd, .x=0xef, .y=0x8e, .sp=0x80, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2fac, .value=0x08}, {.addr=0x2fad, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2fac, .value=0x08, .type=IO_READ},
        {.addr=0x2fad, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xe9f2, .a=0xe2, .x=0x82, .y=0x9c, .sp=0x01, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe9f2, .value=0x08}, {.addr=0xe9f3, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe9f4, .a=0xe7, .x=0x82, .y=0x9c, .sp=0x01, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe9f2, .value=0x08}, {.addr=0xe9f3, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe9f2, .value=0x08, .type=IO_READ},
        {.addr=0xe9f3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x339e, .a=0x5f, .x=0x18, .y=0x41, .sp=0x0e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x339e, .value=0x08}, {.addr=0x339f, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x33a0, .a=0xdf, .x=0x18, .y=0x41, .sp=0x0e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x339e, .value=0x08}, {.addr=0x339f, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x339e, .value=0x08, .type=IO_READ},
        {.addr=0x339f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x21be, .a=0xb8, .x=0x18, .y=0x65, .sp=0xa9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x21be, .value=0x08}, {.addr=0x21bf, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x21c0, .a=0xba, .x=0x18, .y=0x65, .sp=0xa9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x21be, .value=0x08}, {.addr=0x21bf, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x21be, .value=0x08, .type=IO_READ},
        {.addr=0x21bf, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x10bb, .a=0x6f, .x=0x45, .y=0x45, .sp=0xc9, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x10bb, .value=0x08}, {.addr=0x10bc, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x10bd, .a=0x7f, .x=0x45, .y=0x45, .sp=0xc9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x10bb, .value=0x08}, {.addr=0x10bc, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x10bb, .value=0x08, .type=IO_READ},
        {.addr=0x10bc, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x159f, .a=0xd6, .x=0xdc, .y=0x9b, .sp=0x15, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x159f, .value=0x08}, {.addr=0x15a0, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x15a1, .a=0xdf, .x=0xdc, .y=0x9b, .sp=0x15, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x159f, .value=0x08}, {.addr=0x15a0, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x159f, .value=0x08, .type=IO_READ},
        {.addr=0x15a0, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0x37, .x=0xd5, .y=0x0a, .sp=0x1f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x8707, .value=0x08}, {.addr=0x8708, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x8709, .a=0x3f, .x=0xd5, .y=0x0a, .sp=0x1f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8707, .value=0x08}, {.addr=0x8708, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0x08, .type=IO_READ},
        {.addr=0x8708, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x1ffb, .a=0xcc, .x=0x0c, .y=0xd3, .sp=0x72, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffb, .value=0x08}, {.addr=0x1ffc, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x1ffd, .a=0xde, .x=0x0c, .y=0xd3, .sp=0x72, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1ffb, .value=0x08}, {.addr=0x1ffc, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x1ffb, .value=0x08, .type=IO_READ},
        {.addr=0x1ffc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xe441, .a=0x55, .x=0x9d, .y=0x1e, .sp=0x92, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe441, .value=0x08}, {.addr=0xe442, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe443, .a=0xf5, .x=0x9d, .y=0x1e, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe441, .value=0x08}, {.addr=0xe442, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe441, .value=0x08, .type=IO_READ},
        {.addr=0xe442, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9885, .a=0xf0, .x=0x3d, .y=0x47, .sp=0x5c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9885, .value=0x08}, {.addr=0x9886, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9887, .a=0xff, .x=0x3d, .y=0x47, .sp=0x5c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9885, .value=0x08}, {.addr=0x9886, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9885, .value=0x08, .type=IO_READ},
        {.addr=0x9886, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x8e2e, .a=0x0d, .x=0x98, .y=0x4c, .sp=0x37, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2e, .value=0x08}, {.addr=0x8e2f, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x8e30, .a=0x8f, .x=0x98, .y=0x4c, .sp=0x37, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8e2e, .value=0x08}, {.addr=0x8e2f, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x8e2e, .value=0x08, .type=IO_READ},
        {.addr=0x8e2f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xd0a0, .a=0x56, .x=0x11, .y=0xbd, .sp=0x70, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a0, .value=0x08}, {.addr=0xd0a1, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd0a2, .a=0x77, .x=0x11, .y=0xbd, .sp=0x70, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd0a0, .value=0x08}, {.addr=0xd0a1, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd0a0, .value=0x08, .type=IO_READ},
        {.addr=0xd0a1, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x2688, .a=0xc6, .x=0x8b, .y=0x25, .sp=0xc6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2688, .value=0x08}, {.addr=0x2689, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x268a, .a=0xf6, .x=0x8b, .y=0x25, .sp=0xc6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2688, .value=0x08}, {.addr=0x2689, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x2688, .value=0x08, .type=IO_READ},
        {.addr=0x2689, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x809c, .a=0x98, .x=0x05, .y=0x61, .sp=0xde, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x809c, .value=0x08}, {.addr=0x809d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x809e, .a=0xf8, .x=0x05, .y=0x61, .sp=0xde, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x809c, .value=0x08}, {.addr=0x809d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x809c, .value=0x08, .type=IO_READ},
        {.addr=0x809d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xc271, .a=0x35, .x=0x34, .y=0x2f, .sp=0x69, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc271, .value=0x08}, {.addr=0xc272, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc273, .a=0xb7, .x=0x34, .y=0x2f, .sp=0x69, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc271, .value=0x08}, {.addr=0xc272, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc271, .value=0x08, .type=IO_READ},
        {.addr=0xc272, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9886, .a=0xef, .x=0xbe, .y=0x12, .sp=0x5b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x9886, .value=0x08}, {.addr=0x9887, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9888, .a=0xef, .x=0xbe, .y=0x12, .sp=0x5b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9886, .value=0x08}, {.addr=0x9887, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9886, .value=0x08, .type=IO_READ},
        {.addr=0x9887, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x5dd2, .a=0x5c, .x=0xaa, .y=0x2d, .sp=0xc0, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd2, .value=0x08}, {.addr=0x5dd3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5dd4, .a=0x7c, .x=0xaa, .y=0x2d, .sp=0xc0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5dd2, .value=0x08}, {.addr=0x5dd3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5dd2, .value=0x08, .type=IO_READ},
        {.addr=0x5dd3, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x4add, .a=0xf9, .x=0xf5, .y=0xb3, .sp=0xa4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4add, .value=0x08}, {.addr=0x4ade, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4adf, .a=0xfd, .x=0xf5, .y=0xb3, .sp=0xa4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4add, .value=0x08}, {.addr=0x4ade, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4add, .value=0x08, .type=IO_READ},
        {.addr=0x4ade, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x3d38, .a=0x5b, .x=0x5c, .y=0x6f, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d38, .value=0x08}, {.addr=0x3d39, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x3d3a, .a=0x7f, .x=0x5c, .y=0x6f, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3d38, .value=0x08}, {.addr=0x3d39, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x3d38, .value=0x08, .type=IO_READ},
        {.addr=0x3d39, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xe9a5, .a=0xea, .x=0x3b, .y=0xc0, .sp=0x04, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a5, .value=0x08}, {.addr=0xe9a6, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xe9a7, .a=0xfb, .x=0x3b, .y=0xc0, .sp=0x04, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe9a5, .value=0x08}, {.addr=0xe9a6, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xe9a5, .value=0x08, .type=IO_READ},
        {.addr=0xe9a6, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xc050, .a=0x55, .x=0x24, .y=0xba, .sp=0x6e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc050, .value=0x08}, {.addr=0xc051, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc052, .a=0x77, .x=0x24, .y=0xba, .sp=0x6e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc050, .value=0x08}, {.addr=0xc051, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc050, .value=0x08, .type=IO_READ},
        {.addr=0xc051, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x38bf, .a=0x51, .x=0xe6, .y=0x8c, .sp=0xbb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x38bf, .value=0x08}, {.addr=0x38c0, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x38c1, .a=0xf5, .x=0xe6, .y=0x8c, .sp=0xbb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x38bf, .value=0x08}, {.addr=0x38c0, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x38bf, .value=0x08, .type=IO_READ},
        {.addr=0x38c0, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xe542, .a=0xbb, .x=0x1a, .y=0xb3, .sp=0xa2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe542, .value=0x08}, {.addr=0xe543, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xe544, .a=0xbb, .x=0x1a, .y=0xb3, .sp=0xa2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe542, .value=0x08}, {.addr=0xe543, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xe542, .value=0x08, .type=IO_READ},
        {.addr=0xe543, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x6b5f, .a=0xe5, .x=0x04, .y=0x0c, .sp=0xfa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5f, .value=0x08}, {.addr=0x6b60, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6b61, .a=0xe5, .x=0x04, .y=0x0c, .sp=0xfa, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6b5f, .value=0x08}, {.addr=0x6b60, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6b5f, .value=0x08, .type=IO_READ},
        {.addr=0x6b60, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x8ea4, .a=0xf3, .x=0xb6, .y=0xd4, .sp=0x85, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ea4, .value=0x08}, {.addr=0x8ea5, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x8ea6, .a=0xf3, .x=0xb6, .y=0xd4, .sp=0x85, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8ea4, .value=0x08}, {.addr=0x8ea5, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x8ea4, .value=0x08, .type=IO_READ},
        {.addr=0x8ea5, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb985, .a=0x3c, .x=0xa3, .y=0xbb, .sp=0xc5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb985, .value=0x08}, {.addr=0xb986, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb987, .a=0xbe, .x=0xa3, .y=0xbb, .sp=0xc5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb985, .value=0x08}, {.addr=0xb986, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb985, .value=0x08, .type=IO_READ},
        {.addr=0xb986, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x6a9d, .a=0xea, .x=0x31, .y=0x9b, .sp=0x28, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9d, .value=0x08}, {.addr=0x6a9e, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x6a9f, .a=0xeb, .x=0x31, .y=0x9b, .sp=0x28, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6a9d, .value=0x08}, {.addr=0x6a9e, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6a9d, .value=0x08, .type=IO_READ},
        {.addr=0x6a9e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0300) {
    const struct CPU_State initial_cpu = {.pc=0x8c2c, .a=0x5a, .x=0xcc, .y=0xed, .sp=0x04, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2c, .value=0x08}, {.addr=0x8c2d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x8c2e, .a=0x7b, .x=0xcc, .y=0xed, .sp=0x04, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8c2c, .value=0x08}, {.addr=0x8c2d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x8c2c, .value=0x08, .type=IO_READ},
        {.addr=0x8c2d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0301) {
    const struct CPU_State initial_cpu = {.pc=0xf775, .a=0x7f, .x=0x9f, .y=0x0b, .sp=0xd0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xf775, .value=0x08}, {.addr=0xf776, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf777, .a=0xff, .x=0x9f, .y=0x0b, .sp=0xd0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xf775, .value=0x08}, {.addr=0xf776, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf775, .value=0x08, .type=IO_READ},
        {.addr=0xf776, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4fa0, .a=0xa7, .x=0x65, .y=0x08, .sp=0x51, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa0, .value=0x08}, {.addr=0x4fa1, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4fa2, .a=0xff, .x=0x65, .y=0x08, .sp=0x51, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4fa0, .value=0x08}, {.addr=0x4fa1, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x4fa0, .value=0x08, .type=IO_READ},
        {.addr=0x4fa1, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0303) {
    const struct CPU_State initial_cpu = {.pc=0x152d, .a=0x89, .x=0xa9, .y=0x38, .sp=0x98, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x152d, .value=0x08}, {.addr=0x152e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x152f, .a=0xfb, .x=0xa9, .y=0x38, .sp=0x98, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x152d, .value=0x08}, {.addr=0x152e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x152d, .value=0x08, .type=IO_READ},
        {.addr=0x152e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0304) {
    const struct CPU_State initial_cpu = {.pc=0xb68b, .a=0x49, .x=0x91, .y=0x6b, .sp=0x51, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb68b, .value=0x08}, {.addr=0xb68c, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb68d, .a=0x7f, .x=0x91, .y=0x6b, .sp=0x51, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb68b, .value=0x08}, {.addr=0xb68c, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb68b, .value=0x08, .type=IO_READ},
        {.addr=0xb68c, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0305) {
    const struct CPU_State initial_cpu = {.pc=0x1dd8, .a=0x8f, .x=0x2d, .y=0xcd, .sp=0x34, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd8, .value=0x08}, {.addr=0x1dd9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1dda, .a=0xdf, .x=0x2d, .y=0xcd, .sp=0x34, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1dd8, .value=0x08}, {.addr=0x1dd9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1dd8, .value=0x08, .type=IO_READ},
        {.addr=0x1dd9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0306) {
    const struct CPU_State initial_cpu = {.pc=0x4282, .a=0x16, .x=0xe4, .y=0x77, .sp=0xd4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x4282, .value=0x08}, {.addr=0x4283, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x4284, .a=0xb7, .x=0xe4, .y=0x77, .sp=0xd4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4282, .value=0x08}, {.addr=0x4283, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4282, .value=0x08, .type=IO_READ},
        {.addr=0x4283, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4a66, .a=0xb4, .x=0xfa, .y=0xaf, .sp=0x6d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4a66, .value=0x08}, {.addr=0x4a67, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4a68, .a=0xfd, .x=0xfa, .y=0xaf, .sp=0x6d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4a66, .value=0x08}, {.addr=0x4a67, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4a66, .value=0x08, .type=IO_READ},
        {.addr=0x4a67, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0308) {
    const struct CPU_State initial_cpu = {.pc=0x00aa, .a=0x12, .x=0x95, .y=0x0f, .sp=0xd6, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x08}, {.addr=0x00ab, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x00ac, .a=0x52, .x=0x95, .y=0x0f, .sp=0xd6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x08}, {.addr=0x00ab, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x00aa, .value=0x08, .type=IO_READ},
        {.addr=0x00ab, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0309) {
    const struct CPU_State initial_cpu = {.pc=0xa637, .a=0xf0, .x=0xc3, .y=0xd3, .sp=0x58, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa637, .value=0x08}, {.addr=0xa638, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xa639, .a=0xf2, .x=0xc3, .y=0xd3, .sp=0x58, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa637, .value=0x08}, {.addr=0xa638, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xa637, .value=0x08, .type=IO_READ},
        {.addr=0xa638, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030A) {
    const struct CPU_State initial_cpu = {.pc=0xefae, .a=0xbe, .x=0x42, .y=0xd6, .sp=0xc1, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xefae, .value=0x08}, {.addr=0xefaf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xefb0, .a=0xbf, .x=0x42, .y=0xd6, .sp=0xc1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xefae, .value=0x08}, {.addr=0xefaf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xefae, .value=0x08, .type=IO_READ},
        {.addr=0xefaf, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030B) {
    const struct CPU_State initial_cpu = {.pc=0xb120, .a=0x7d, .x=0xb5, .y=0x36, .sp=0x7d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb120, .value=0x08}, {.addr=0xb121, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xb122, .a=0x7f, .x=0xb5, .y=0x36, .sp=0x7d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb120, .value=0x08}, {.addr=0xb121, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xb120, .value=0x08, .type=IO_READ},
        {.addr=0xb121, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030C) {
    const struct CPU_State initial_cpu = {.pc=0xe2fd, .a=0xd5, .x=0x96, .y=0x24, .sp=0xb0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2fd, .value=0x08}, {.addr=0xe2fe, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe2ff, .a=0xd7, .x=0x96, .y=0x24, .sp=0xb0, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe2fd, .value=0x08}, {.addr=0xe2fe, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe2fd, .value=0x08, .type=IO_READ},
        {.addr=0xe2fe, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030D) {
    const struct CPU_State initial_cpu = {.pc=0x82a2, .a=0x60, .x=0x13, .y=0x39, .sp=0x47, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x82a2, .value=0x08}, {.addr=0x82a3, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x82a4, .a=0xf6, .x=0x13, .y=0x39, .sp=0x47, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x82a2, .value=0x08}, {.addr=0x82a3, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x82a2, .value=0x08, .type=IO_READ},
        {.addr=0x82a3, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030E) {
    const struct CPU_State initial_cpu = {.pc=0xf124, .a=0x9e, .x=0xce, .y=0x06, .sp=0x18, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf124, .value=0x08}, {.addr=0xf125, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf126, .a=0x9f, .x=0xce, .y=0x06, .sp=0x18, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf124, .value=0x08}, {.addr=0xf125, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf124, .value=0x08, .type=IO_READ},
        {.addr=0xf125, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_030F) {
    const struct CPU_State initial_cpu = {.pc=0xa4fc, .a=0xa3, .x=0x07, .y=0x34, .sp=0x87, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa4fc, .value=0x08}, {.addr=0xa4fd, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xa4fe, .a=0xb7, .x=0x07, .y=0x34, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa4fc, .value=0x08}, {.addr=0xa4fd, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xa4fc, .value=0x08, .type=IO_READ},
        {.addr=0xa4fd, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0310) {
    const struct CPU_State initial_cpu = {.pc=0xcac6, .a=0x93, .x=0xb9, .y=0xf6, .sp=0xec, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xcac6, .value=0x08}, {.addr=0xcac7, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xcac8, .a=0xb3, .x=0xb9, .y=0xf6, .sp=0xec, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcac6, .value=0x08}, {.addr=0xcac7, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xcac6, .value=0x08, .type=IO_READ},
        {.addr=0xcac7, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0311) {
    const struct CPU_State initial_cpu = {.pc=0x92b5, .a=0x7e, .x=0x17, .y=0xe9, .sp=0x08, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x92b5, .value=0x08}, {.addr=0x92b6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x92b7, .a=0xfe, .x=0x17, .y=0xe9, .sp=0x08, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x92b5, .value=0x08}, {.addr=0x92b6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x92b5, .value=0x08, .type=IO_READ},
        {.addr=0x92b6, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0312) {
    const struct CPU_State initial_cpu = {.pc=0x1743, .a=0xf5, .x=0x01, .y=0x6d, .sp=0xa2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x1743, .value=0x08}, {.addr=0x1744, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x1745, .a=0xfd, .x=0x01, .y=0x6d, .sp=0xa2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1743, .value=0x08}, {.addr=0x1744, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x1743, .value=0x08, .type=IO_READ},
        {.addr=0x1744, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0313) {
    const struct CPU_State initial_cpu = {.pc=0xfc0e, .a=0x14, .x=0x65, .y=0x9e, .sp=0x79, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xfc0e, .value=0x08}, {.addr=0xfc0f, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xfc10, .a=0x3e, .x=0x65, .y=0x9e, .sp=0x79, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfc0e, .value=0x08}, {.addr=0xfc0f, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xfc0e, .value=0x08, .type=IO_READ},
        {.addr=0xfc0f, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0314) {
    const struct CPU_State initial_cpu = {.pc=0x08e1, .a=0xf8, .x=0x8a, .y=0xbc, .sp=0xbd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x08e1, .value=0x08}, {.addr=0x08e2, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x08e3, .a=0xfb, .x=0x8a, .y=0xbc, .sp=0xbd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x08e1, .value=0x08}, {.addr=0x08e2, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x08e1, .value=0x08, .type=IO_READ},
        {.addr=0x08e2, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0315) {
    const struct CPU_State initial_cpu = {.pc=0x6207, .a=0x35, .x=0x62, .y=0x61, .sp=0xac, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6207, .value=0x08}, {.addr=0x6208, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x6209, .a=0xff, .x=0x62, .y=0x61, .sp=0xac, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6207, .value=0x08}, {.addr=0x6208, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x6207, .value=0x08, .type=IO_READ},
        {.addr=0x6208, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0316) {
    const struct CPU_State initial_cpu = {.pc=0x24a0, .a=0xa0, .x=0x66, .y=0xee, .sp=0x3d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x24a0, .value=0x08}, {.addr=0x24a1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x24a2, .a=0xfd, .x=0x66, .y=0xee, .sp=0x3d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x24a0, .value=0x08}, {.addr=0x24a1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x24a0, .value=0x08, .type=IO_READ},
        {.addr=0x24a1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0317) {
    const struct CPU_State initial_cpu = {.pc=0x1f4b, .a=0xcd, .x=0x10, .y=0x93, .sp=0x66, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1f4b, .value=0x08}, {.addr=0x1f4c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1f4d, .a=0xdd, .x=0x10, .y=0x93, .sp=0x66, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1f4b, .value=0x08}, {.addr=0x1f4c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1f4b, .value=0x08, .type=IO_READ},
        {.addr=0x1f4c, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0318) {
    const struct CPU_State initial_cpu = {.pc=0xdaa8, .a=0x6a, .x=0x72, .y=0x9b, .sp=0xbb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa8, .value=0x08}, {.addr=0xdaa9, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xdaaa, .a=0x6e, .x=0x72, .y=0x9b, .sp=0xbb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdaa8, .value=0x08}, {.addr=0xdaa9, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xdaa8, .value=0x08, .type=IO_READ},
        {.addr=0xdaa9, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0319) {
    const struct CPU_State initial_cpu = {.pc=0x1d58, .a=0x69, .x=0xb2, .y=0x9e, .sp=0x5e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1d58, .value=0x08}, {.addr=0x1d59, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x1d5a, .a=0x6d, .x=0xb2, .y=0x9e, .sp=0x5e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1d58, .value=0x08}, {.addr=0x1d59, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x1d58, .value=0x08, .type=IO_READ},
        {.addr=0x1d59, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031A) {
    const struct CPU_State initial_cpu = {.pc=0x9f86, .a=0x5d, .x=0x23, .y=0x26, .sp=0x5b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9f86, .value=0x08}, {.addr=0x9f87, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x9f88, .a=0xdf, .x=0x23, .y=0x26, .sp=0x5b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9f86, .value=0x08}, {.addr=0x9f87, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x9f86, .value=0x08, .type=IO_READ},
        {.addr=0x9f87, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3c43, .a=0xa2, .x=0x64, .y=0xe0, .sp=0x67, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3c43, .value=0x08}, {.addr=0x3c44, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3c45, .a=0xa6, .x=0x64, .y=0xe0, .sp=0x67, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3c43, .value=0x08}, {.addr=0x3c44, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3c43, .value=0x08, .type=IO_READ},
        {.addr=0x3c44, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031C) {
    const struct CPU_State initial_cpu = {.pc=0x5a1a, .a=0x39, .x=0x2b, .y=0x3a, .sp=0xc9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5a1a, .value=0x08}, {.addr=0x5a1b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5a1c, .a=0xf9, .x=0x2b, .y=0x3a, .sp=0xc9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5a1a, .value=0x08}, {.addr=0x5a1b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5a1a, .value=0x08, .type=IO_READ},
        {.addr=0x5a1b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031D) {
    const struct CPU_State initial_cpu = {.pc=0x07c2, .a=0xf3, .x=0x69, .y=0xf4, .sp=0x32, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x07c2, .value=0x08}, {.addr=0x07c3, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x07c4, .a=0xf3, .x=0x69, .y=0xf4, .sp=0x32, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x07c2, .value=0x08}, {.addr=0x07c3, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x07c2, .value=0x08, .type=IO_READ},
        {.addr=0x07c3, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031E) {
    const struct CPU_State initial_cpu = {.pc=0x1fe4, .a=0x68, .x=0x42, .y=0x7a, .sp=0x74, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe4, .value=0x08}, {.addr=0x1fe5, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x1fe6, .a=0x6e, .x=0x42, .y=0x7a, .sp=0x74, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1fe4, .value=0x08}, {.addr=0x1fe5, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x1fe4, .value=0x08, .type=IO_READ},
        {.addr=0x1fe5, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_031F) {
    const struct CPU_State initial_cpu = {.pc=0x851a, .a=0x06, .x=0x8d, .y=0x0d, .sp=0xe3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x851a, .value=0x08}, {.addr=0x851b, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x851c, .a=0x67, .x=0x8d, .y=0x0d, .sp=0xe3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x851a, .value=0x08}, {.addr=0x851b, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x851a, .value=0x08, .type=IO_READ},
        {.addr=0x851b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0320) {
    const struct CPU_State initial_cpu = {.pc=0x3049, .a=0x2a, .x=0xdc, .y=0xd2, .sp=0xd3, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x3049, .value=0x08}, {.addr=0x304a, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x304b, .a=0x2a, .x=0xdc, .y=0xd2, .sp=0xd3, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3049, .value=0x08}, {.addr=0x304a, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x3049, .value=0x08, .type=IO_READ},
        {.addr=0x304a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0321) {
    const struct CPU_State initial_cpu = {.pc=0xbef2, .a=0x9f, .x=0xaa, .y=0x5b, .sp=0xe9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbef2, .value=0x08}, {.addr=0xbef3, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xbef4, .a=0xff, .x=0xaa, .y=0x5b, .sp=0xe9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xbef2, .value=0x08}, {.addr=0xbef3, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xbef2, .value=0x08, .type=IO_READ},
        {.addr=0xbef3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0322) {
    const struct CPU_State initial_cpu = {.pc=0x8aa4, .a=0x0d, .x=0xae, .y=0xac, .sp=0xf8, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa4, .value=0x08}, {.addr=0x8aa5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8aa6, .a=0x9f, .x=0xae, .y=0xac, .sp=0xf8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8aa4, .value=0x08}, {.addr=0x8aa5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8aa4, .value=0x08, .type=IO_READ},
        {.addr=0x8aa5, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0323) {
    const struct CPU_State initial_cpu = {.pc=0xdcc1, .a=0x7f, .x=0xdc, .y=0x52, .sp=0xc5, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc1, .value=0x08}, {.addr=0xdcc2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdcc3, .a=0x7f, .x=0xdc, .y=0x52, .sp=0xc5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdcc1, .value=0x08}, {.addr=0xdcc2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdcc1, .value=0x08, .type=IO_READ},
        {.addr=0xdcc2, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0324) {
    const struct CPU_State initial_cpu = {.pc=0xa35b, .a=0x2c, .x=0x56, .y=0x54, .sp=0x06, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa35b, .value=0x08}, {.addr=0xa35c, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xa35d, .a=0x2e, .x=0x56, .y=0x54, .sp=0x06, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa35b, .value=0x08}, {.addr=0xa35c, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xa35b, .value=0x08, .type=IO_READ},
        {.addr=0xa35c, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0325) {
    const struct CPU_State initial_cpu = {.pc=0x812d, .a=0xdc, .x=0x38, .y=0x2d, .sp=0x37, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x812d, .value=0x08}, {.addr=0x812e, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x812f, .a=0xfe, .x=0x38, .y=0x2d, .sp=0x37, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x812d, .value=0x08}, {.addr=0x812e, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x812d, .value=0x08, .type=IO_READ},
        {.addr=0x812e, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0326) {
    const struct CPU_State initial_cpu = {.pc=0x99cc, .a=0xd5, .x=0x22, .y=0x2c, .sp=0xcc, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x99cc, .value=0x08}, {.addr=0x99cd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x99ce, .a=0xdf, .x=0x22, .y=0x2c, .sp=0xcc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x99cc, .value=0x08}, {.addr=0x99cd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x99cc, .value=0x08, .type=IO_READ},
        {.addr=0x99cd, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0327) {
    const struct CPU_State initial_cpu = {.pc=0xbc70, .a=0xc3, .x=0xe4, .y=0xd9, .sp=0xe8, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xbc70, .value=0x08}, {.addr=0xbc71, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xbc72, .a=0xcb, .x=0xe4, .y=0xd9, .sp=0xe8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbc70, .value=0x08}, {.addr=0xbc71, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xbc70, .value=0x08, .type=IO_READ},
        {.addr=0xbc71, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0328) {
    const struct CPU_State initial_cpu = {.pc=0x2b33, .a=0x67, .x=0x1a, .y=0x83, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x2b33, .value=0x08}, {.addr=0x2b34, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x2b35, .a=0x67, .x=0x1a, .y=0x83, .sp=0x5b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2b33, .value=0x08}, {.addr=0x2b34, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x2b33, .value=0x08, .type=IO_READ},
        {.addr=0x2b34, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0329) {
    const struct CPU_State initial_cpu = {.pc=0x9035, .a=0x35, .x=0xdc, .y=0x94, .sp=0xe8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9035, .value=0x08}, {.addr=0x9036, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x9037, .a=0x75, .x=0xdc, .y=0x94, .sp=0xe8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9035, .value=0x08}, {.addr=0x9036, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x9035, .value=0x08, .type=IO_READ},
        {.addr=0x9036, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032A) {
    const struct CPU_State initial_cpu = {.pc=0x0273, .a=0x65, .x=0x9b, .y=0xb1, .sp=0xe1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0273, .value=0x08}, {.addr=0x0274, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x0275, .a=0x67, .x=0x9b, .y=0xb1, .sp=0xe1, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0273, .value=0x08}, {.addr=0x0274, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x0273, .value=0x08, .type=IO_READ},
        {.addr=0x0274, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032B) {
    const struct CPU_State initial_cpu = {.pc=0x1654, .a=0xe4, .x=0x22, .y=0xfd, .sp=0xc9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x1654, .value=0x08}, {.addr=0x1655, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1656, .a=0xf5, .x=0x22, .y=0xfd, .sp=0xc9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1654, .value=0x08}, {.addr=0x1655, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x1654, .value=0x08, .type=IO_READ},
        {.addr=0x1655, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032C) {
    const struct CPU_State initial_cpu = {.pc=0x18f7, .a=0xaf, .x=0xfa, .y=0x94, .sp=0x11, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x18f7, .value=0x08}, {.addr=0x18f8, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x18f9, .a=0xbf, .x=0xfa, .y=0x94, .sp=0x11, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x18f7, .value=0x08}, {.addr=0x18f8, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x18f7, .value=0x08, .type=IO_READ},
        {.addr=0x18f8, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032D) {
    const struct CPU_State initial_cpu = {.pc=0x2d5a, .a=0x6a, .x=0xdb, .y=0xa1, .sp=0xf9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2d5a, .value=0x08}, {.addr=0x2d5b, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x2d5c, .a=0xea, .x=0xdb, .y=0xa1, .sp=0xf9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2d5a, .value=0x08}, {.addr=0x2d5b, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x2d5a, .value=0x08, .type=IO_READ},
        {.addr=0x2d5b, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032E) {
    const struct CPU_State initial_cpu = {.pc=0x5a26, .a=0x13, .x=0x6a, .y=0x12, .sp=0x51, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5a26, .value=0x08}, {.addr=0x5a27, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x5a28, .a=0x7b, .x=0x6a, .y=0x12, .sp=0x51, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5a26, .value=0x08}, {.addr=0x5a27, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x5a26, .value=0x08, .type=IO_READ},
        {.addr=0x5a27, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_032F) {
    const struct CPU_State initial_cpu = {.pc=0xb834, .a=0xd0, .x=0x5a, .y=0x11, .sp=0xb0, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb834, .value=0x08}, {.addr=0xb835, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xb836, .a=0xd4, .x=0x5a, .y=0x11, .sp=0xb0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb834, .value=0x08}, {.addr=0xb835, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xb834, .value=0x08, .type=IO_READ},
        {.addr=0xb835, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0330) {
    const struct CPU_State initial_cpu = {.pc=0x571a, .a=0x65, .x=0xac, .y=0xa5, .sp=0x7c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x571a, .value=0x08}, {.addr=0x571b, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x571c, .a=0xfd, .x=0xac, .y=0xa5, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x571a, .value=0x08}, {.addr=0x571b, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x571a, .value=0x08, .type=IO_READ},
        {.addr=0x571b, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0331) {
    const struct CPU_State initial_cpu = {.pc=0x0c6c, .a=0xea, .x=0x70, .y=0x86, .sp=0x38, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6c, .value=0x08}, {.addr=0x0c6d, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x0c6e, .a=0xeb, .x=0x70, .y=0x86, .sp=0x38, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0c6c, .value=0x08}, {.addr=0x0c6d, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x0c6c, .value=0x08, .type=IO_READ},
        {.addr=0x0c6d, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0332) {
    const struct CPU_State initial_cpu = {.pc=0x3522, .a=0x83, .x=0xac, .y=0xbb, .sp=0xc8, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3522, .value=0x08}, {.addr=0x3523, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3524, .a=0xe3, .x=0xac, .y=0xbb, .sp=0xc8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3522, .value=0x08}, {.addr=0x3523, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3522, .value=0x08, .type=IO_READ},
        {.addr=0x3523, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0333) {
    const struct CPU_State initial_cpu = {.pc=0x48d5, .a=0x15, .x=0x4d, .y=0xeb, .sp=0xc2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x48d5, .value=0x08}, {.addr=0x48d6, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x48d7, .a=0x3f, .x=0x4d, .y=0xeb, .sp=0xc2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x48d5, .value=0x08}, {.addr=0x48d6, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x48d5, .value=0x08, .type=IO_READ},
        {.addr=0x48d6, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0334) {
    const struct CPU_State initial_cpu = {.pc=0x6bce, .a=0x83, .x=0x2b, .y=0x48, .sp=0x7e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6bce, .value=0x08}, {.addr=0x6bcf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6bd0, .a=0xdf, .x=0x2b, .y=0x48, .sp=0x7e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6bce, .value=0x08}, {.addr=0x6bcf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6bce, .value=0x08, .type=IO_READ},
        {.addr=0x6bcf, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0335) {
    const struct CPU_State initial_cpu = {.pc=0xc028, .a=0x55, .x=0x4c, .y=0x52, .sp=0xfa, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc028, .value=0x08}, {.addr=0xc029, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xc02a, .a=0x5f, .x=0x4c, .y=0x52, .sp=0xfa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc028, .value=0x08}, {.addr=0xc029, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xc028, .value=0x08, .type=IO_READ},
        {.addr=0xc029, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0336) {
    const struct CPU_State initial_cpu = {.pc=0xc4f0, .a=0xf6, .x=0xd3, .y=0xfd, .sp=0x80, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc4f0, .value=0x08}, {.addr=0xc4f1, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xc4f2, .a=0xfe, .x=0xd3, .y=0xfd, .sp=0x80, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc4f0, .value=0x08}, {.addr=0xc4f1, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xc4f0, .value=0x08, .type=IO_READ},
        {.addr=0xc4f1, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0337) {
    const struct CPU_State initial_cpu = {.pc=0xac0d, .a=0xff, .x=0xa6, .y=0x8d, .sp=0xbd, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xac0d, .value=0x08}, {.addr=0xac0e, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xac0f, .a=0xff, .x=0xa6, .y=0x8d, .sp=0xbd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xac0d, .value=0x08}, {.addr=0xac0e, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xac0d, .value=0x08, .type=IO_READ},
        {.addr=0xac0e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0338) {
    const struct CPU_State initial_cpu = {.pc=0xf9ea, .a=0x9e, .x=0x07, .y=0xd6, .sp=0x09, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ea, .value=0x08}, {.addr=0xf9eb, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xf9ec, .a=0xbf, .x=0x07, .y=0xd6, .sp=0x09, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf9ea, .value=0x08}, {.addr=0xf9eb, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xf9ea, .value=0x08, .type=IO_READ},
        {.addr=0xf9eb, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd4a5, .a=0x0a, .x=0x27, .y=0x70, .sp=0xfc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd4a5, .value=0x08}, {.addr=0xd4a6, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xd4a7, .a=0x1f, .x=0x27, .y=0x70, .sp=0xfc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd4a5, .value=0x08}, {.addr=0xd4a6, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xd4a5, .value=0x08, .type=IO_READ},
        {.addr=0xd4a6, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033A) {
    const struct CPU_State initial_cpu = {.pc=0x24cd, .a=0xb8, .x=0xaa, .y=0xd1, .sp=0x1c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x24cd, .value=0x08}, {.addr=0x24ce, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x24cf, .a=0xfb, .x=0xaa, .y=0xd1, .sp=0x1c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x24cd, .value=0x08}, {.addr=0x24ce, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x24cd, .value=0x08, .type=IO_READ},
        {.addr=0x24ce, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033B) {
    const struct CPU_State initial_cpu = {.pc=0xfe3f, .a=0xb7, .x=0xfd, .y=0x56, .sp=0x31, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe3f, .value=0x08}, {.addr=0xfe40, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfe41, .a=0xf7, .x=0xfd, .y=0x56, .sp=0x31, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfe3f, .value=0x08}, {.addr=0xfe40, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfe3f, .value=0x08, .type=IO_READ},
        {.addr=0xfe40, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033C) {
    const struct CPU_State initial_cpu = {.pc=0x16cb, .a=0xa0, .x=0x02, .y=0x90, .sp=0x0d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x16cb, .value=0x08}, {.addr=0x16cc, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x16cd, .a=0xe5, .x=0x02, .y=0x90, .sp=0x0d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x16cb, .value=0x08}, {.addr=0x16cc, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x16cb, .value=0x08, .type=IO_READ},
        {.addr=0x16cc, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033D) {
    const struct CPU_State initial_cpu = {.pc=0x7bb8, .a=0xfb, .x=0x6d, .y=0xe2, .sp=0xc6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb8, .value=0x08}, {.addr=0x7bb9, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x7bba, .a=0xfb, .x=0x6d, .y=0xe2, .sp=0xc6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7bb8, .value=0x08}, {.addr=0x7bb9, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x7bb8, .value=0x08, .type=IO_READ},
        {.addr=0x7bb9, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033E) {
    const struct CPU_State initial_cpu = {.pc=0x2459, .a=0xc4, .x=0xc1, .y=0x90, .sp=0xf7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2459, .value=0x08}, {.addr=0x245a, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x245b, .a=0xf7, .x=0xc1, .y=0x90, .sp=0xf7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2459, .value=0x08}, {.addr=0x245a, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x2459, .value=0x08, .type=IO_READ},
        {.addr=0x245a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_033F) {
    const struct CPU_State initial_cpu = {.pc=0xdefd, .a=0x79, .x=0x97, .y=0x8d, .sp=0xca, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdefd, .value=0x08}, {.addr=0xdefe, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xdeff, .a=0x79, .x=0x97, .y=0x8d, .sp=0xca, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdefd, .value=0x08}, {.addr=0xdefe, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xdefd, .value=0x08, .type=IO_READ},
        {.addr=0xdefe, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0340) {
    const struct CPU_State initial_cpu = {.pc=0x2e6d, .a=0x69, .x=0x7a, .y=0x37, .sp=0xa5, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2e6d, .value=0x08}, {.addr=0x2e6e, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x2e6f, .a=0xf9, .x=0x7a, .y=0x37, .sp=0xa5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2e6d, .value=0x08}, {.addr=0x2e6e, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x2e6d, .value=0x08, .type=IO_READ},
        {.addr=0x2e6e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0341) {
    const struct CPU_State initial_cpu = {.pc=0x4a90, .a=0x90, .x=0xf0, .y=0xed, .sp=0x0f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4a90, .value=0x08}, {.addr=0x4a91, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4a92, .a=0xd0, .x=0xf0, .y=0xed, .sp=0x0f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4a90, .value=0x08}, {.addr=0x4a91, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4a90, .value=0x08, .type=IO_READ},
        {.addr=0x4a91, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0342) {
    const struct CPU_State initial_cpu = {.pc=0xbce0, .a=0x4b, .x=0x2b, .y=0xc2, .sp=0xe4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbce0, .value=0x08}, {.addr=0xbce1, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xbce2, .a=0x7b, .x=0x2b, .y=0xc2, .sp=0xe4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbce0, .value=0x08}, {.addr=0xbce1, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xbce0, .value=0x08, .type=IO_READ},
        {.addr=0xbce1, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc23b, .a=0xef, .x=0xfc, .y=0xc2, .sp=0x78, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc23b, .value=0x08}, {.addr=0xc23c, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xc23d, .a=0xef, .x=0xfc, .y=0xc2, .sp=0x78, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc23b, .value=0x08}, {.addr=0xc23c, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xc23b, .value=0x08, .type=IO_READ},
        {.addr=0xc23c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0344) {
    const struct CPU_State initial_cpu = {.pc=0x574e, .a=0x8b, .x=0x54, .y=0x79, .sp=0xea, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x574e, .value=0x08}, {.addr=0x574f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5750, .a=0xaf, .x=0x54, .y=0x79, .sp=0xea, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x574e, .value=0x08}, {.addr=0x574f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x574e, .value=0x08, .type=IO_READ},
        {.addr=0x574f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1d45, .a=0xb5, .x=0xc6, .y=0xf7, .sp=0xe2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1d45, .value=0x08}, {.addr=0x1d46, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x1d47, .a=0xbd, .x=0xc6, .y=0xf7, .sp=0xe2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1d45, .value=0x08}, {.addr=0x1d46, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x1d45, .value=0x08, .type=IO_READ},
        {.addr=0x1d46, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0346) {
    const struct CPU_State initial_cpu = {.pc=0x3569, .a=0x67, .x=0x99, .y=0x74, .sp=0x08, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3569, .value=0x08}, {.addr=0x356a, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x356b, .a=0xf7, .x=0x99, .y=0x74, .sp=0x08, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3569, .value=0x08}, {.addr=0x356a, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x3569, .value=0x08, .type=IO_READ},
        {.addr=0x356a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9106, .a=0xe1, .x=0xe6, .y=0xa0, .sp=0xb5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9106, .value=0x08}, {.addr=0x9107, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x9108, .a=0xe9, .x=0xe6, .y=0xa0, .sp=0xb5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9106, .value=0x08}, {.addr=0x9107, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x9106, .value=0x08, .type=IO_READ},
        {.addr=0x9107, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0348) {
    const struct CPU_State initial_cpu = {.pc=0x7c5b, .a=0xd1, .x=0x72, .y=0xfb, .sp=0xfb, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5b, .value=0x08}, {.addr=0x7c5c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7c5d, .a=0xff, .x=0x72, .y=0xfb, .sp=0xfb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7c5b, .value=0x08}, {.addr=0x7c5c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7c5b, .value=0x08, .type=IO_READ},
        {.addr=0x7c5c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0349) {
    const struct CPU_State initial_cpu = {.pc=0xe220, .a=0x53, .x=0x22, .y=0x73, .sp=0xd1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe220, .value=0x08}, {.addr=0xe221, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xe222, .a=0xdb, .x=0x22, .y=0x73, .sp=0xd1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe220, .value=0x08}, {.addr=0xe221, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xe220, .value=0x08, .type=IO_READ},
        {.addr=0xe221, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034A) {
    const struct CPU_State initial_cpu = {.pc=0x420b, .a=0x11, .x=0x7b, .y=0x7b, .sp=0x2f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x420b, .value=0x08}, {.addr=0x420c, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x420d, .a=0x5f, .x=0x7b, .y=0x7b, .sp=0x2f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x420b, .value=0x08}, {.addr=0x420c, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x420b, .value=0x08, .type=IO_READ},
        {.addr=0x420c, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034B) {
    const struct CPU_State initial_cpu = {.pc=0x7533, .a=0xb4, .x=0xe8, .y=0x8f, .sp=0x22, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x7533, .value=0x08}, {.addr=0x7534, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7535, .a=0xb7, .x=0xe8, .y=0x8f, .sp=0x22, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7533, .value=0x08}, {.addr=0x7534, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7533, .value=0x08, .type=IO_READ},
        {.addr=0x7534, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034C) {
    const struct CPU_State initial_cpu = {.pc=0x2eb8, .a=0x1a, .x=0x80, .y=0xb8, .sp=0x0d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2eb8, .value=0x08}, {.addr=0x2eb9, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x2eba, .a=0xff, .x=0x80, .y=0xb8, .sp=0x0d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2eb8, .value=0x08}, {.addr=0x2eb9, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x2eb8, .value=0x08, .type=IO_READ},
        {.addr=0x2eb9, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa62f, .a=0x8a, .x=0xc4, .y=0x23, .sp=0x4c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa62f, .value=0x08}, {.addr=0xa630, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xa631, .a=0xea, .x=0xc4, .y=0x23, .sp=0x4c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa62f, .value=0x08}, {.addr=0xa630, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xa62f, .value=0x08, .type=IO_READ},
        {.addr=0xa630, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034E) {
    const struct CPU_State initial_cpu = {.pc=0x7238, .a=0xc1, .x=0x69, .y=0x24, .sp=0xbb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7238, .value=0x08}, {.addr=0x7239, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x723a, .a=0xcd, .x=0x69, .y=0x24, .sp=0xbb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7238, .value=0x08}, {.addr=0x7239, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x7238, .value=0x08, .type=IO_READ},
        {.addr=0x7239, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_034F) {
    const struct CPU_State initial_cpu = {.pc=0xed0c, .a=0x8f, .x=0x8f, .y=0x1d, .sp=0xee, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xed0c, .value=0x08}, {.addr=0xed0d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xed0e, .a=0xef, .x=0x8f, .y=0x1d, .sp=0xee, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xed0c, .value=0x08}, {.addr=0xed0d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xed0c, .value=0x08, .type=IO_READ},
        {.addr=0xed0d, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0350) {
    const struct CPU_State initial_cpu = {.pc=0x7423, .a=0x01, .x=0xd5, .y=0x25, .sp=0xfe, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7423, .value=0x08}, {.addr=0x7424, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7425, .a=0x43, .x=0xd5, .y=0x25, .sp=0xfe, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7423, .value=0x08}, {.addr=0x7424, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x7423, .value=0x08, .type=IO_READ},
        {.addr=0x7424, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0351) {
    const struct CPU_State initial_cpu = {.pc=0xb3c3, .a=0xc9, .x=0xbf, .y=0xba, .sp=0x8d, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb3c3, .value=0x08}, {.addr=0xb3c4, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb3c5, .a=0xcb, .x=0xbf, .y=0xba, .sp=0x8d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb3c3, .value=0x08}, {.addr=0xb3c4, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb3c3, .value=0x08, .type=IO_READ},
        {.addr=0xb3c4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf25b, .a=0xe6, .x=0x10, .y=0x21, .sp=0x56, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf25b, .value=0x08}, {.addr=0xf25c, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf25d, .a=0xf6, .x=0x10, .y=0x21, .sp=0x56, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf25b, .value=0x08}, {.addr=0xf25c, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf25b, .value=0x08, .type=IO_READ},
        {.addr=0xf25c, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0353) {
    const struct CPU_State initial_cpu = {.pc=0x5421, .a=0x70, .x=0xfa, .y=0xa0, .sp=0x17, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x5421, .value=0x08}, {.addr=0x5422, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5423, .a=0x7d, .x=0xfa, .y=0xa0, .sp=0x17, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5421, .value=0x08}, {.addr=0x5422, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5421, .value=0x08, .type=IO_READ},
        {.addr=0x5422, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0354) {
    const struct CPU_State initial_cpu = {.pc=0x6d45, .a=0x71, .x=0x70, .y=0x59, .sp=0x76, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6d45, .value=0x08}, {.addr=0x6d46, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x6d47, .a=0xf9, .x=0x70, .y=0x59, .sp=0x76, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6d45, .value=0x08}, {.addr=0x6d46, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x6d45, .value=0x08, .type=IO_READ},
        {.addr=0x6d46, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0355) {
    const struct CPU_State initial_cpu = {.pc=0x6389, .a=0xff, .x=0xe5, .y=0xf8, .sp=0x62, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6389, .value=0x08}, {.addr=0x638a, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x638b, .a=0xff, .x=0xe5, .y=0xf8, .sp=0x62, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6389, .value=0x08}, {.addr=0x638a, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x6389, .value=0x08, .type=IO_READ},
        {.addr=0x638a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0356) {
    const struct CPU_State initial_cpu = {.pc=0x6a63, .a=0x5c, .x=0xac, .y=0xe0, .sp=0x3c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6a63, .value=0x08}, {.addr=0x6a64, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x6a65, .a=0x5f, .x=0xac, .y=0xe0, .sp=0x3c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6a63, .value=0x08}, {.addr=0x6a64, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x6a63, .value=0x08, .type=IO_READ},
        {.addr=0x6a64, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0357) {
    const struct CPU_State initial_cpu = {.pc=0x5932, .a=0x48, .x=0xb5, .y=0x7c, .sp=0x79, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5932, .value=0x08}, {.addr=0x5933, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5934, .a=0x7a, .x=0xb5, .y=0x7c, .sp=0x79, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5932, .value=0x08}, {.addr=0x5933, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5932, .value=0x08, .type=IO_READ},
        {.addr=0x5933, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4d6b, .a=0x7c, .x=0x6e, .y=0x0d, .sp=0x93, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4d6b, .value=0x08}, {.addr=0x4d6c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d6d, .a=0xfc, .x=0x6e, .y=0x0d, .sp=0x93, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4d6b, .value=0x08}, {.addr=0x4d6c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d6b, .value=0x08, .type=IO_READ},
        {.addr=0x4d6c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0359) {
    const struct CPU_State initial_cpu = {.pc=0x46d2, .a=0x6b, .x=0x07, .y=0x73, .sp=0x4a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x46d2, .value=0x08}, {.addr=0x46d3, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x46d4, .a=0x6b, .x=0x07, .y=0x73, .sp=0x4a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x46d2, .value=0x08}, {.addr=0x46d3, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x46d2, .value=0x08, .type=IO_READ},
        {.addr=0x46d3, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035A) {
    const struct CPU_State initial_cpu = {.pc=0x8178, .a=0xd5, .x=0x28, .y=0x79, .sp=0x82, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8178, .value=0x08}, {.addr=0x8179, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x817a, .a=0xd7, .x=0x28, .y=0x79, .sp=0x82, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8178, .value=0x08}, {.addr=0x8179, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x8178, .value=0x08, .type=IO_READ},
        {.addr=0x8179, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035B) {
    const struct CPU_State initial_cpu = {.pc=0x5caa, .a=0x22, .x=0x1e, .y=0xa3, .sp=0x64, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5caa, .value=0x08}, {.addr=0x5cab, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x5cac, .a=0x2a, .x=0x1e, .y=0xa3, .sp=0x64, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5caa, .value=0x08}, {.addr=0x5cab, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x5caa, .value=0x08, .type=IO_READ},
        {.addr=0x5cab, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035C) {
    const struct CPU_State initial_cpu = {.pc=0x835f, .a=0xb7, .x=0x51, .y=0x20, .sp=0x5b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x835f, .value=0x08}, {.addr=0x8360, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8361, .a=0xbf, .x=0x51, .y=0x20, .sp=0x5b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x835f, .value=0x08}, {.addr=0x8360, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x835f, .value=0x08, .type=IO_READ},
        {.addr=0x8360, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035D) {
    const struct CPU_State initial_cpu = {.pc=0x440d, .a=0x2b, .x=0xe7, .y=0xd0, .sp=0xf8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x440d, .value=0x08}, {.addr=0x440e, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x440f, .a=0xef, .x=0xe7, .y=0xd0, .sp=0xf8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x440d, .value=0x08}, {.addr=0x440e, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x440d, .value=0x08, .type=IO_READ},
        {.addr=0x440e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa295, .a=0x29, .x=0x13, .y=0x2e, .sp=0xb6, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xa295, .value=0x08}, {.addr=0xa296, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa297, .a=0xe9, .x=0x13, .y=0x2e, .sp=0xb6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa295, .value=0x08}, {.addr=0xa296, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa295, .value=0x08, .type=IO_READ},
        {.addr=0xa296, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_035F) {
    const struct CPU_State initial_cpu = {.pc=0x305b, .a=0x3d, .x=0x4b, .y=0xb2, .sp=0xe4, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x305b, .value=0x08}, {.addr=0x305c, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x305d, .a=0x3f, .x=0x4b, .y=0xb2, .sp=0xe4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x305b, .value=0x08}, {.addr=0x305c, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x305b, .value=0x08, .type=IO_READ},
        {.addr=0x305c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0360) {
    const struct CPU_State initial_cpu = {.pc=0x39ba, .a=0x40, .x=0x4a, .y=0x2c, .sp=0x4c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x39ba, .value=0x08}, {.addr=0x39bb, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x39bc, .a=0x58, .x=0x4a, .y=0x2c, .sp=0x4c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x39ba, .value=0x08}, {.addr=0x39bb, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x39ba, .value=0x08, .type=IO_READ},
        {.addr=0x39bb, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa8b4, .a=0xf0, .x=0x69, .y=0xb0, .sp=0x10, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b4, .value=0x08}, {.addr=0xa8b5, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xa8b6, .a=0xfe, .x=0x69, .y=0xb0, .sp=0x10, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa8b4, .value=0x08}, {.addr=0xa8b5, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xa8b4, .value=0x08, .type=IO_READ},
        {.addr=0xa8b5, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0362) {
    const struct CPU_State initial_cpu = {.pc=0x144c, .a=0x8a, .x=0x91, .y=0x9f, .sp=0x4f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x144c, .value=0x08}, {.addr=0x144d, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x144e, .a=0xbf, .x=0x91, .y=0x9f, .sp=0x4f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x144c, .value=0x08}, {.addr=0x144d, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x144c, .value=0x08, .type=IO_READ},
        {.addr=0x144d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9f71, .a=0x15, .x=0x7b, .y=0x41, .sp=0x44, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x9f71, .value=0x08}, {.addr=0x9f72, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9f73, .a=0x35, .x=0x7b, .y=0x41, .sp=0x44, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9f71, .value=0x08}, {.addr=0x9f72, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9f71, .value=0x08, .type=IO_READ},
        {.addr=0x9f72, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0364) {
    const struct CPU_State initial_cpu = {.pc=0xd4aa, .a=0x0e, .x=0x2f, .y=0x8f, .sp=0x36, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd4aa, .value=0x08}, {.addr=0xd4ab, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd4ac, .a=0x1e, .x=0x2f, .y=0x8f, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd4aa, .value=0x08}, {.addr=0xd4ab, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd4aa, .value=0x08, .type=IO_READ},
        {.addr=0xd4ab, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0365) {
    const struct CPU_State initial_cpu = {.pc=0x2115, .a=0x6e, .x=0xf6, .y=0x7c, .sp=0x27, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2115, .value=0x08}, {.addr=0x2116, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x2117, .a=0xfe, .x=0xf6, .y=0x7c, .sp=0x27, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2115, .value=0x08}, {.addr=0x2116, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x2115, .value=0x08, .type=IO_READ},
        {.addr=0x2116, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0366) {
    const struct CPU_State initial_cpu = {.pc=0x88d5, .a=0xcd, .x=0xa1, .y=0x79, .sp=0x07, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x88d5, .value=0x08}, {.addr=0x88d6, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x88d7, .a=0xdf, .x=0xa1, .y=0x79, .sp=0x07, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x88d5, .value=0x08}, {.addr=0x88d6, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x88d5, .value=0x08, .type=IO_READ},
        {.addr=0x88d6, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe816, .a=0xb6, .x=0x8f, .y=0x83, .sp=0x05, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe816, .value=0x08}, {.addr=0xe817, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xe818, .a=0xb7, .x=0x8f, .y=0x83, .sp=0x05, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe816, .value=0x08}, {.addr=0xe817, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xe816, .value=0x08, .type=IO_READ},
        {.addr=0xe817, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0368) {
    const struct CPU_State initial_cpu = {.pc=0x7d9b, .a=0x41, .x=0x33, .y=0x38, .sp=0x5d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7d9b, .value=0x08}, {.addr=0x7d9c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7d9d, .a=0x47, .x=0x33, .y=0x38, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7d9b, .value=0x08}, {.addr=0x7d9c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7d9b, .value=0x08, .type=IO_READ},
        {.addr=0x7d9c, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0369) {
    const struct CPU_State initial_cpu = {.pc=0x533c, .a=0xdf, .x=0x30, .y=0x32, .sp=0xac, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x533c, .value=0x08}, {.addr=0x533d, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x533e, .a=0xff, .x=0x30, .y=0x32, .sp=0xac, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x533c, .value=0x08}, {.addr=0x533d, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x533c, .value=0x08, .type=IO_READ},
        {.addr=0x533d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036A) {
    const struct CPU_State initial_cpu = {.pc=0xa00f, .a=0xe0, .x=0xac, .y=0x82, .sp=0x51, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa00f, .value=0x08}, {.addr=0xa010, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xa011, .a=0xe4, .x=0xac, .y=0x82, .sp=0x51, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa00f, .value=0x08}, {.addr=0xa010, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xa00f, .value=0x08, .type=IO_READ},
        {.addr=0xa010, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036B) {
    const struct CPU_State initial_cpu = {.pc=0xe463, .a=0xf0, .x=0xc2, .y=0x55, .sp=0x2b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe463, .value=0x08}, {.addr=0xe464, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe465, .a=0xfc, .x=0xc2, .y=0x55, .sp=0x2b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xe463, .value=0x08}, {.addr=0xe464, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe463, .value=0x08, .type=IO_READ},
        {.addr=0xe464, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036C) {
    const struct CPU_State initial_cpu = {.pc=0x3645, .a=0x88, .x=0xd1, .y=0x9c, .sp=0x34, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3645, .value=0x08}, {.addr=0x3646, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x3647, .a=0xea, .x=0xd1, .y=0x9c, .sp=0x34, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3645, .value=0x08}, {.addr=0x3646, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x3645, .value=0x08, .type=IO_READ},
        {.addr=0x3646, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036D) {
    const struct CPU_State initial_cpu = {.pc=0x6d20, .a=0x31, .x=0x8c, .y=0x94, .sp=0x3c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6d20, .value=0x08}, {.addr=0x6d21, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x6d22, .a=0xf5, .x=0x8c, .y=0x94, .sp=0x3c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6d20, .value=0x08}, {.addr=0x6d21, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6d20, .value=0x08, .type=IO_READ},
        {.addr=0x6d21, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036E) {
    const struct CPU_State initial_cpu = {.pc=0x64ef, .a=0xaf, .x=0x64, .y=0xf7, .sp=0x6a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x64ef, .value=0x08}, {.addr=0x64f0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x64f1, .a=0xbf, .x=0x64, .y=0xf7, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x64ef, .value=0x08}, {.addr=0x64f0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x64ef, .value=0x08, .type=IO_READ},
        {.addr=0x64f0, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_036F) {
    const struct CPU_State initial_cpu = {.pc=0xcadf, .a=0x4b, .x=0x05, .y=0x32, .sp=0x26, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcadf, .value=0x08}, {.addr=0xcae0, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xcae1, .a=0xeb, .x=0x05, .y=0x32, .sp=0x26, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcadf, .value=0x08}, {.addr=0xcae0, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xcadf, .value=0x08, .type=IO_READ},
        {.addr=0xcae0, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0370) {
    const struct CPU_State initial_cpu = {.pc=0x86b3, .a=0xc0, .x=0x00, .y=0x91, .sp=0x17, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x86b3, .value=0x08}, {.addr=0x86b4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x86b5, .a=0xce, .x=0x00, .y=0x91, .sp=0x17, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x86b3, .value=0x08}, {.addr=0x86b4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x86b3, .value=0x08, .type=IO_READ},
        {.addr=0x86b4, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0371) {
    const struct CPU_State initial_cpu = {.pc=0xebc4, .a=0x50, .x=0x16, .y=0x83, .sp=0xf3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xebc4, .value=0x08}, {.addr=0xebc5, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xebc6, .a=0x71, .x=0x16, .y=0x83, .sp=0xf3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xebc4, .value=0x08}, {.addr=0xebc5, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xebc4, .value=0x08, .type=IO_READ},
        {.addr=0xebc5, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0372) {
    const struct CPU_State initial_cpu = {.pc=0xcc32, .a=0x81, .x=0x30, .y=0xd5, .sp=0x9d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xcc32, .value=0x08}, {.addr=0xcc33, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xcc34, .a=0x99, .x=0x30, .y=0xd5, .sp=0x9d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcc32, .value=0x08}, {.addr=0xcc33, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xcc32, .value=0x08, .type=IO_READ},
        {.addr=0xcc33, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0373) {
    const struct CPU_State initial_cpu = {.pc=0x522d, .a=0xff, .x=0x41, .y=0x20, .sp=0x5f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x522d, .value=0x08}, {.addr=0x522e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x522f, .a=0xff, .x=0x41, .y=0x20, .sp=0x5f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x522d, .value=0x08}, {.addr=0x522e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x522d, .value=0x08, .type=IO_READ},
        {.addr=0x522e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0374) {
    const struct CPU_State initial_cpu = {.pc=0x8ced, .a=0xee, .x=0x05, .y=0xbc, .sp=0xcc, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8ced, .value=0x08}, {.addr=0x8cee, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x8cef, .a=0xff, .x=0x05, .y=0xbc, .sp=0xcc, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8ced, .value=0x08}, {.addr=0x8cee, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x8ced, .value=0x08, .type=IO_READ},
        {.addr=0x8cee, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0375) {
    const struct CPU_State initial_cpu = {.pc=0x8402, .a=0x04, .x=0x3e, .y=0xe4, .sp=0xf9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x8402, .value=0x08}, {.addr=0x8403, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0x3c, .x=0x3e, .y=0xe4, .sp=0xf9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8402, .value=0x08}, {.addr=0x8403, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8402, .value=0x08, .type=IO_READ},
        {.addr=0x8403, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0376) {
    const struct CPU_State initial_cpu = {.pc=0x949c, .a=0xb9, .x=0x5c, .y=0xe9, .sp=0xa5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x949c, .value=0x08}, {.addr=0x949d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x949e, .a=0xfd, .x=0x5c, .y=0xe9, .sp=0xa5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x949c, .value=0x08}, {.addr=0x949d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x949c, .value=0x08, .type=IO_READ},
        {.addr=0x949d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0377) {
    const struct CPU_State initial_cpu = {.pc=0x3868, .a=0xaf, .x=0xc4, .y=0x0e, .sp=0x59, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3868, .value=0x08}, {.addr=0x3869, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x386a, .a=0xef, .x=0xc4, .y=0x0e, .sp=0x59, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3868, .value=0x08}, {.addr=0x3869, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x3868, .value=0x08, .type=IO_READ},
        {.addr=0x3869, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0378) {
    const struct CPU_State initial_cpu = {.pc=0xdda9, .a=0x41, .x=0xfd, .y=0x49, .sp=0xac, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xdda9, .value=0x08}, {.addr=0xddaa, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xddab, .a=0x5f, .x=0xfd, .y=0x49, .sp=0xac, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdda9, .value=0x08}, {.addr=0xddaa, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xdda9, .value=0x08, .type=IO_READ},
        {.addr=0xddaa, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0379) {
    const struct CPU_State initial_cpu = {.pc=0x7a30, .a=0xbd, .x=0xf7, .y=0x9e, .sp=0xdb, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7a30, .value=0x08}, {.addr=0x7a31, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x7a32, .a=0xfd, .x=0xf7, .y=0x9e, .sp=0xdb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7a30, .value=0x08}, {.addr=0x7a31, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7a30, .value=0x08, .type=IO_READ},
        {.addr=0x7a31, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037A) {
    const struct CPU_State initial_cpu = {.pc=0x2b3f, .a=0x17, .x=0xa6, .y=0x31, .sp=0xeb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3f, .value=0x08}, {.addr=0x2b40, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x2b41, .a=0x17, .x=0xa6, .y=0x31, .sp=0xeb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2b3f, .value=0x08}, {.addr=0x2b40, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x2b3f, .value=0x08, .type=IO_READ},
        {.addr=0x2b40, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037B) {
    const struct CPU_State initial_cpu = {.pc=0xeee5, .a=0xc7, .x=0x1d, .y=0xbc, .sp=0x27, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xeee5, .value=0x08}, {.addr=0xeee6, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xeee7, .a=0xd7, .x=0x1d, .y=0xbc, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xeee5, .value=0x08}, {.addr=0xeee6, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xeee5, .value=0x08, .type=IO_READ},
        {.addr=0xeee6, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037C) {
    const struct CPU_State initial_cpu = {.pc=0xfd1f, .a=0xcd, .x=0xc9, .y=0x92, .sp=0xad, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1f, .value=0x08}, {.addr=0xfd20, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xfd21, .a=0xcf, .x=0xc9, .y=0x92, .sp=0xad, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfd1f, .value=0x08}, {.addr=0xfd20, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xfd1f, .value=0x08, .type=IO_READ},
        {.addr=0xfd20, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037D) {
    const struct CPU_State initial_cpu = {.pc=0xe3d6, .a=0x69, .x=0x18, .y=0xcf, .sp=0xf5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d6, .value=0x08}, {.addr=0xe3d7, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xe3d8, .a=0xe9, .x=0x18, .y=0xcf, .sp=0xf5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe3d6, .value=0x08}, {.addr=0xe3d7, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xe3d6, .value=0x08, .type=IO_READ},
        {.addr=0xe3d7, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037E) {
    const struct CPU_State initial_cpu = {.pc=0x728d, .a=0xeb, .x=0x31, .y=0xd0, .sp=0x8c, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x728d, .value=0x08}, {.addr=0x728e, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x728f, .a=0xff, .x=0x31, .y=0xd0, .sp=0x8c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x728d, .value=0x08}, {.addr=0x728e, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x728d, .value=0x08, .type=IO_READ},
        {.addr=0x728e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_037F) {
    const struct CPU_State initial_cpu = {.pc=0xdac3, .a=0x50, .x=0x89, .y=0x0f, .sp=0xb5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xdac3, .value=0x08}, {.addr=0xdac4, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xdac5, .a=0x73, .x=0x89, .y=0x0f, .sp=0xb5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdac3, .value=0x08}, {.addr=0xdac4, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xdac3, .value=0x08, .type=IO_READ},
        {.addr=0xdac4, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0380) {
    const struct CPU_State initial_cpu = {.pc=0x6c91, .a=0xf2, .x=0x6b, .y=0xad, .sp=0xb0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6c91, .value=0x08}, {.addr=0x6c92, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6c93, .a=0xf6, .x=0x6b, .y=0xad, .sp=0xb0, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6c91, .value=0x08}, {.addr=0x6c92, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6c91, .value=0x08, .type=IO_READ},
        {.addr=0x6c92, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb206, .a=0xe8, .x=0x60, .y=0x0f, .sp=0x7c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb206, .value=0x08}, {.addr=0xb207, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xb208, .a=0xef, .x=0x60, .y=0x0f, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb206, .value=0x08}, {.addr=0xb207, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xb206, .value=0x08, .type=IO_READ},
        {.addr=0xb207, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8ecf, .a=0xdd, .x=0xfa, .y=0x3e, .sp=0x31, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8ecf, .value=0x08}, {.addr=0x8ed0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x8ed1, .a=0xfd, .x=0xfa, .y=0x3e, .sp=0x31, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8ecf, .value=0x08}, {.addr=0x8ed0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x8ecf, .value=0x08, .type=IO_READ},
        {.addr=0x8ed0, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0383) {
    const struct CPU_State initial_cpu = {.pc=0x8007, .a=0x3c, .x=0x99, .y=0x52, .sp=0xbd, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x8007, .value=0x08}, {.addr=0x8008, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8009, .a=0x7c, .x=0x99, .y=0x52, .sp=0xbd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8007, .value=0x08}, {.addr=0x8008, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8007, .value=0x08, .type=IO_READ},
        {.addr=0x8008, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0384) {
    const struct CPU_State initial_cpu = {.pc=0x356f, .a=0x5e, .x=0x6c, .y=0xc8, .sp=0x7f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x356f, .value=0x08}, {.addr=0x3570, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x3571, .a=0x7e, .x=0x6c, .y=0xc8, .sp=0x7f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x356f, .value=0x08}, {.addr=0x3570, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x356f, .value=0x08, .type=IO_READ},
        {.addr=0x3570, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0385) {
    const struct CPU_State initial_cpu = {.pc=0x5669, .a=0x1f, .x=0xf6, .y=0xab, .sp=0x85, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5669, .value=0x08}, {.addr=0x566a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x566b, .a=0xdf, .x=0xf6, .y=0xab, .sp=0x85, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5669, .value=0x08}, {.addr=0x566a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5669, .value=0x08, .type=IO_READ},
        {.addr=0x566a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3426, .a=0xa6, .x=0x1c, .y=0xa1, .sp=0x42, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3426, .value=0x08}, {.addr=0x3427, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x3428, .a=0xbf, .x=0x1c, .y=0xa1, .sp=0x42, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3426, .value=0x08}, {.addr=0x3427, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x3426, .value=0x08, .type=IO_READ},
        {.addr=0x3427, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0387) {
    const struct CPU_State initial_cpu = {.pc=0x2a6d, .a=0xef, .x=0x82, .y=0x53, .sp=0x23, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x2a6d, .value=0x08}, {.addr=0x2a6e, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x2a6f, .a=0xff, .x=0x82, .y=0x53, .sp=0x23, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2a6d, .value=0x08}, {.addr=0x2a6e, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x2a6d, .value=0x08, .type=IO_READ},
        {.addr=0x2a6e, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0388) {
    const struct CPU_State initial_cpu = {.pc=0xa45e, .a=0xc3, .x=0x3c, .y=0x93, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xa45e, .value=0x08}, {.addr=0xa45f, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa460, .a=0xfb, .x=0x3c, .y=0x93, .sp=0x65, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa45e, .value=0x08}, {.addr=0xa45f, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa45e, .value=0x08, .type=IO_READ},
        {.addr=0xa45f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0389) {
    const struct CPU_State initial_cpu = {.pc=0x87cf, .a=0xc8, .x=0x69, .y=0x6d, .sp=0x7d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x87cf, .value=0x08}, {.addr=0x87d0, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x87d1, .a=0xeb, .x=0x69, .y=0x6d, .sp=0x7d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x87cf, .value=0x08}, {.addr=0x87d0, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x87cf, .value=0x08, .type=IO_READ},
        {.addr=0x87d0, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038A) {
    const struct CPU_State initial_cpu = {.pc=0xba31, .a=0xe3, .x=0x76, .y=0x01, .sp=0xe9, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xba31, .value=0x08}, {.addr=0xba32, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xba33, .a=0xe7, .x=0x76, .y=0x01, .sp=0xe9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xba31, .value=0x08}, {.addr=0xba32, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xba31, .value=0x08, .type=IO_READ},
        {.addr=0xba32, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7096, .a=0x02, .x=0xec, .y=0x9b, .sp=0xd4, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x7096, .value=0x08}, {.addr=0x7097, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x7098, .a=0x2a, .x=0xec, .y=0x9b, .sp=0xd4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7096, .value=0x08}, {.addr=0x7097, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x7096, .value=0x08, .type=IO_READ},
        {.addr=0x7097, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038C) {
    const struct CPU_State initial_cpu = {.pc=0x0010, .a=0xe6, .x=0x88, .y=0x39, .sp=0x3e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x08}, {.addr=0x0011, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x0012, .a=0xee, .x=0x88, .y=0x39, .sp=0x3e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x08}, {.addr=0x0011, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x0010, .value=0x08, .type=IO_READ},
        {.addr=0x0011, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038D) {
    const struct CPU_State initial_cpu = {.pc=0xba04, .a=0x99, .x=0x5f, .y=0x35, .sp=0xe5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xba04, .value=0x08}, {.addr=0xba05, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xba06, .a=0xdd, .x=0x5f, .y=0x35, .sp=0xe5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xba04, .value=0x08}, {.addr=0xba05, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xba04, .value=0x08, .type=IO_READ},
        {.addr=0xba05, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038E) {
    const struct CPU_State initial_cpu = {.pc=0x9cca, .a=0x34, .x=0xad, .y=0xb1, .sp=0xad, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x9cca, .value=0x08}, {.addr=0x9ccb, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x9ccc, .a=0xfe, .x=0xad, .y=0xb1, .sp=0xad, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9cca, .value=0x08}, {.addr=0x9ccb, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x9cca, .value=0x08, .type=IO_READ},
        {.addr=0x9ccb, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_038F) {
    const struct CPU_State initial_cpu = {.pc=0x85dc, .a=0x4f, .x=0xed, .y=0x64, .sp=0xbc, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x85dc, .value=0x08}, {.addr=0x85dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x85de, .a=0xef, .x=0xed, .y=0x64, .sp=0xbc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x85dc, .value=0x08}, {.addr=0x85dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x85dc, .value=0x08, .type=IO_READ},
        {.addr=0x85dd, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0390) {
    const struct CPU_State initial_cpu = {.pc=0xa9eb, .a=0x62, .x=0x91, .y=0x33, .sp=0x37, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa9eb, .value=0x08}, {.addr=0xa9ec, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xa9ed, .a=0xf7, .x=0x91, .y=0x33, .sp=0x37, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa9eb, .value=0x08}, {.addr=0xa9ec, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xa9eb, .value=0x08, .type=IO_READ},
        {.addr=0xa9ec, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0391) {
    const struct CPU_State initial_cpu = {.pc=0x9b23, .a=0xe6, .x=0x05, .y=0xd4, .sp=0xf4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9b23, .value=0x08}, {.addr=0x9b24, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9b25, .a=0xff, .x=0x05, .y=0xd4, .sp=0xf4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9b23, .value=0x08}, {.addr=0x9b24, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9b23, .value=0x08, .type=IO_READ},
        {.addr=0x9b24, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0392) {
    const struct CPU_State initial_cpu = {.pc=0x5dc8, .a=0x9c, .x=0xc3, .y=0xa6, .sp=0x8a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc8, .value=0x08}, {.addr=0x5dc9, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x5dca, .a=0xfc, .x=0xc3, .y=0xa6, .sp=0x8a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5dc8, .value=0x08}, {.addr=0x5dc9, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x5dc8, .value=0x08, .type=IO_READ},
        {.addr=0x5dc9, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0393) {
    const struct CPU_State initial_cpu = {.pc=0x57a4, .a=0x52, .x=0x52, .y=0x4f, .sp=0xac, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x57a4, .value=0x08}, {.addr=0x57a5, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x57a6, .a=0xd7, .x=0x52, .y=0x4f, .sp=0xac, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x57a4, .value=0x08}, {.addr=0x57a5, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x57a4, .value=0x08, .type=IO_READ},
        {.addr=0x57a5, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0394) {
    const struct CPU_State initial_cpu = {.pc=0x0054, .a=0x59, .x=0x2e, .y=0x10, .sp=0xfb, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x08}, {.addr=0x0055, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x0056, .a=0x5f, .x=0x2e, .y=0x10, .sp=0xfb, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x08}, {.addr=0x0055, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0054, .value=0x08, .type=IO_READ},
        {.addr=0x0055, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0395) {
    const struct CPU_State initial_cpu = {.pc=0x4656, .a=0xd6, .x=0x47, .y=0x77, .sp=0xdb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4656, .value=0x08}, {.addr=0x4657, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4658, .a=0xde, .x=0x47, .y=0x77, .sp=0xdb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4656, .value=0x08}, {.addr=0x4657, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4656, .value=0x08, .type=IO_READ},
        {.addr=0x4657, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0396) {
    const struct CPU_State initial_cpu = {.pc=0xd667, .a=0x50, .x=0x6a, .y=0x3c, .sp=0xec, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd667, .value=0x08}, {.addr=0xd668, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd669, .a=0xd0, .x=0x6a, .y=0x3c, .sp=0xec, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd667, .value=0x08}, {.addr=0xd668, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd667, .value=0x08, .type=IO_READ},
        {.addr=0xd668, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0397) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0x5f, .x=0x34, .y=0xaa, .sp=0x53, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xccbf, .value=0x08}, {.addr=0xccc0, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xccc1, .a=0x5f, .x=0x34, .y=0xaa, .sp=0x53, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xccbf, .value=0x08}, {.addr=0xccc0, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0x08, .type=IO_READ},
        {.addr=0xccc0, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0398) {
    const struct CPU_State initial_cpu = {.pc=0x14ee, .a=0xc3, .x=0xeb, .y=0x8d, .sp=0xcb, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x14ee, .value=0x08}, {.addr=0x14ef, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x14f0, .a=0xc7, .x=0xeb, .y=0x8d, .sp=0xcb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x14ee, .value=0x08}, {.addr=0x14ef, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x14ee, .value=0x08, .type=IO_READ},
        {.addr=0x14ef, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_0399) {
    const struct CPU_State initial_cpu = {.pc=0x54e0, .a=0x34, .x=0xef, .y=0x2c, .sp=0x0b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x54e0, .value=0x08}, {.addr=0x54e1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x54e2, .a=0x76, .x=0xef, .y=0x2c, .sp=0x0b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x54e0, .value=0x08}, {.addr=0x54e1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x54e0, .value=0x08, .type=IO_READ},
        {.addr=0x54e1, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039A) {
    const struct CPU_State initial_cpu = {.pc=0x7377, .a=0x64, .x=0x8a, .y=0x52, .sp=0x8c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7377, .value=0x08}, {.addr=0x7378, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7379, .a=0xe6, .x=0x8a, .y=0x52, .sp=0x8c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7377, .value=0x08}, {.addr=0x7378, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7377, .value=0x08, .type=IO_READ},
        {.addr=0x7378, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039B) {
    const struct CPU_State initial_cpu = {.pc=0x5506, .a=0xf7, .x=0xbe, .y=0x6d, .sp=0x10, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x5506, .value=0x08}, {.addr=0x5507, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x5508, .a=0xff, .x=0xbe, .y=0x6d, .sp=0x10, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5506, .value=0x08}, {.addr=0x5507, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x5506, .value=0x08, .type=IO_READ},
        {.addr=0x5507, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039C) {
    const struct CPU_State initial_cpu = {.pc=0xf786, .a=0xdc, .x=0xae, .y=0x5d, .sp=0xd2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xf786, .value=0x08}, {.addr=0xf787, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xf788, .a=0xde, .x=0xae, .y=0x5d, .sp=0xd2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf786, .value=0x08}, {.addr=0xf787, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xf786, .value=0x08, .type=IO_READ},
        {.addr=0xf787, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039D) {
    const struct CPU_State initial_cpu = {.pc=0x069a, .a=0xfe, .x=0xc9, .y=0x28, .sp=0xee, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x069a, .value=0x08}, {.addr=0x069b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x069c, .a=0xfe, .x=0xc9, .y=0x28, .sp=0xee, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x069a, .value=0x08}, {.addr=0x069b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x069a, .value=0x08, .type=IO_READ},
        {.addr=0x069b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039E) {
    const struct CPU_State initial_cpu = {.pc=0xe93c, .a=0x75, .x=0x9c, .y=0xda, .sp=0x5b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe93c, .value=0x08}, {.addr=0xe93d, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe93e, .a=0xff, .x=0x9c, .y=0xda, .sp=0x5b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe93c, .value=0x08}, {.addr=0xe93d, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe93c, .value=0x08, .type=IO_READ},
        {.addr=0xe93d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_039F) {
    const struct CPU_State initial_cpu = {.pc=0xdfcc, .a=0xc2, .x=0x89, .y=0xe2, .sp=0x9e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xdfcc, .value=0x08}, {.addr=0xdfcd, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xdfce, .a=0xee, .x=0x89, .y=0xe2, .sp=0x9e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xdfcc, .value=0x08}, {.addr=0xdfcd, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xdfcc, .value=0x08, .type=IO_READ},
        {.addr=0xdfcd, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0xc5, .x=0x53, .y=0x97, .sp=0x8a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xcf47, .value=0x08}, {.addr=0xcf48, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xcf49, .a=0xf7, .x=0x53, .y=0x97, .sp=0x8a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xcf47, .value=0x08}, {.addr=0xcf48, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0x08, .type=IO_READ},
        {.addr=0xcf48, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x276a, .a=0xf3, .x=0xec, .y=0x78, .sp=0x3a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x276a, .value=0x08}, {.addr=0x276b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x276c, .a=0xf3, .x=0xec, .y=0x78, .sp=0x3a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x276a, .value=0x08}, {.addr=0x276b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x276a, .value=0x08, .type=IO_READ},
        {.addr=0x276b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xd411, .a=0x91, .x=0xe5, .y=0x4c, .sp=0x7d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd411, .value=0x08}, {.addr=0xd412, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd413, .a=0xd1, .x=0xe5, .y=0x4c, .sp=0x7d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd411, .value=0x08}, {.addr=0xd412, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd411, .value=0x08, .type=IO_READ},
        {.addr=0xd412, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x433b, .a=0x7f, .x=0xc9, .y=0x3d, .sp=0x9c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x433b, .value=0x08}, {.addr=0x433c, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x433d, .a=0x7f, .x=0xc9, .y=0x3d, .sp=0x9c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x433b, .value=0x08}, {.addr=0x433c, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x433b, .value=0x08, .type=IO_READ},
        {.addr=0x433c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4d52, .a=0x8e, .x=0xfe, .y=0xf9, .sp=0x22, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4d52, .value=0x08}, {.addr=0x4d53, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4d54, .a=0xbf, .x=0xfe, .y=0xf9, .sp=0x22, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4d52, .value=0x08}, {.addr=0x4d53, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x4d52, .value=0x08, .type=IO_READ},
        {.addr=0x4d53, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xe7cf, .a=0xa1, .x=0xaa, .y=0xd0, .sp=0x91, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe7cf, .value=0x08}, {.addr=0xe7d0, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe7d1, .a=0xf1, .x=0xaa, .y=0xd0, .sp=0x91, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe7cf, .value=0x08}, {.addr=0xe7d0, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe7cf, .value=0x08, .type=IO_READ},
        {.addr=0xe7d0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xfac6, .a=0x57, .x=0xf2, .y=0x9b, .sp=0x18, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xfac6, .value=0x08}, {.addr=0xfac7, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xfac8, .a=0xf7, .x=0xf2, .y=0x9b, .sp=0x18, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfac6, .value=0x08}, {.addr=0xfac7, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xfac6, .value=0x08, .type=IO_READ},
        {.addr=0xfac7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5a52, .a=0xf9, .x=0x71, .y=0xb0, .sp=0x4e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5a52, .value=0x08}, {.addr=0x5a53, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x5a54, .a=0xf9, .x=0x71, .y=0xb0, .sp=0x4e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5a52, .value=0x08}, {.addr=0x5a53, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x5a52, .value=0x08, .type=IO_READ},
        {.addr=0x5a53, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x02d4, .a=0x1a, .x=0x81, .y=0x7c, .sp=0x6b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x02d4, .value=0x08}, {.addr=0x02d5, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x02d6, .a=0xda, .x=0x81, .y=0x7c, .sp=0x6b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x02d4, .value=0x08}, {.addr=0x02d5, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x02d4, .value=0x08, .type=IO_READ},
        {.addr=0x02d5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd171, .a=0xf1, .x=0x08, .y=0x39, .sp=0xf5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd171, .value=0x08}, {.addr=0xd172, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd173, .a=0xff, .x=0x08, .y=0x39, .sp=0xf5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd171, .value=0x08}, {.addr=0xd172, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd171, .value=0x08, .type=IO_READ},
        {.addr=0xd172, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x286d, .a=0xe8, .x=0x85, .y=0x9c, .sp=0x73, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x286d, .value=0x08}, {.addr=0x286e, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x286f, .a=0xea, .x=0x85, .y=0x9c, .sp=0x73, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x286d, .value=0x08}, {.addr=0x286e, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x286d, .value=0x08, .type=IO_READ},
        {.addr=0x286e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x5f26, .a=0xbb, .x=0x32, .y=0xab, .sp=0x37, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5f26, .value=0x08}, {.addr=0x5f27, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x5f28, .a=0xfb, .x=0x32, .y=0xab, .sp=0x37, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5f26, .value=0x08}, {.addr=0x5f27, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x5f26, .value=0x08, .type=IO_READ},
        {.addr=0x5f27, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x71f1, .a=0x0f, .x=0x28, .y=0xd2, .sp=0x9e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x71f1, .value=0x08}, {.addr=0x71f2, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x71f3, .a=0xbf, .x=0x28, .y=0xd2, .sp=0x9e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x71f1, .value=0x08}, {.addr=0x71f2, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x71f1, .value=0x08, .type=IO_READ},
        {.addr=0x71f2, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xc6fe, .a=0xfe, .x=0x56, .y=0x6b, .sp=0x25, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc6fe, .value=0x08}, {.addr=0xc6ff, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xc700, .a=0xff, .x=0x56, .y=0x6b, .sp=0x25, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc6fe, .value=0x08}, {.addr=0xc6ff, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xc6fe, .value=0x08, .type=IO_READ},
        {.addr=0xc6ff, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x8351, .a=0x4e, .x=0xfc, .y=0x9a, .sp=0x6b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8351, .value=0x08}, {.addr=0x8352, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8353, .a=0xdf, .x=0xfc, .y=0x9a, .sp=0x6b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8351, .value=0x08}, {.addr=0x8352, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8351, .value=0x08, .type=IO_READ},
        {.addr=0x8352, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xe630, .a=0x29, .x=0xe6, .y=0x27, .sp=0x7f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe630, .value=0x08}, {.addr=0xe631, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe632, .a=0xbd, .x=0xe6, .y=0x27, .sp=0x7f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe630, .value=0x08}, {.addr=0xe631, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe630, .value=0x08, .type=IO_READ},
        {.addr=0xe631, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x1e32, .a=0x31, .x=0xc3, .y=0x77, .sp=0x17, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x1e32, .value=0x08}, {.addr=0x1e33, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1e34, .a=0x77, .x=0xc3, .y=0x77, .sp=0x17, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1e32, .value=0x08}, {.addr=0x1e33, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1e32, .value=0x08, .type=IO_READ},
        {.addr=0x1e33, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xd98c, .a=0xdd, .x=0x01, .y=0x62, .sp=0xda, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xd98c, .value=0x08}, {.addr=0xd98d, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xd98e, .a=0xfd, .x=0x01, .y=0x62, .sp=0xda, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd98c, .value=0x08}, {.addr=0xd98d, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xd98c, .value=0x08, .type=IO_READ},
        {.addr=0xd98d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x19b1, .a=0xdc, .x=0x1d, .y=0xb3, .sp=0xed, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x19b1, .value=0x08}, {.addr=0x19b2, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x19b3, .a=0xdd, .x=0x1d, .y=0xb3, .sp=0xed, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x19b1, .value=0x08}, {.addr=0x19b2, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x19b1, .value=0x08, .type=IO_READ},
        {.addr=0x19b2, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xe80e, .a=0x65, .x=0x38, .y=0x71, .sp=0x6b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe80e, .value=0x08}, {.addr=0xe80f, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xe810, .a=0x6f, .x=0x38, .y=0x71, .sp=0x6b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe80e, .value=0x08}, {.addr=0xe80f, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xe80e, .value=0x08, .type=IO_READ},
        {.addr=0xe80f, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3de4, .a=0xae, .x=0x03, .y=0xa8, .sp=0x80, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3de4, .value=0x08}, {.addr=0x3de5, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x3de6, .a=0xef, .x=0x03, .y=0xa8, .sp=0x80, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3de4, .value=0x08}, {.addr=0x3de5, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x3de4, .value=0x08, .type=IO_READ},
        {.addr=0x3de5, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1c8e, .a=0xe3, .x=0xc8, .y=0xdf, .sp=0x54, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8e, .value=0x08}, {.addr=0x1c8f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1c90, .a=0xef, .x=0xc8, .y=0xdf, .sp=0x54, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1c8e, .value=0x08}, {.addr=0x1c8f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1c8e, .value=0x08, .type=IO_READ},
        {.addr=0x1c8f, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x56f6, .a=0xd9, .x=0x87, .y=0x05, .sp=0x12, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x56f6, .value=0x08}, {.addr=0x56f7, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x56f8, .a=0xdb, .x=0x87, .y=0x05, .sp=0x12, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x56f6, .value=0x08}, {.addr=0x56f7, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x56f6, .value=0x08, .type=IO_READ},
        {.addr=0x56f7, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0x48, .x=0x4b, .y=0xae, .sp=0x51, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x215a, .value=0x08}, {.addr=0x215b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x215c, .a=0x4a, .x=0x4b, .y=0xae, .sp=0x51, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x215a, .value=0x08}, {.addr=0x215b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0x08, .type=IO_READ},
        {.addr=0x215b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x7b3c, .a=0x27, .x=0xcd, .y=0x61, .sp=0xe6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7b3c, .value=0x08}, {.addr=0x7b3d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x7b3e, .a=0x6f, .x=0xcd, .y=0x61, .sp=0xe6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7b3c, .value=0x08}, {.addr=0x7b3d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x7b3c, .value=0x08, .type=IO_READ},
        {.addr=0x7b3d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x92f3, .a=0xf0, .x=0xbb, .y=0xa0, .sp=0x8f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x92f3, .value=0x08}, {.addr=0x92f4, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x92f5, .a=0xf1, .x=0xbb, .y=0xa0, .sp=0x8f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x92f3, .value=0x08}, {.addr=0x92f4, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x92f3, .value=0x08, .type=IO_READ},
        {.addr=0x92f4, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x0661, .a=0xb7, .x=0x2e, .y=0x09, .sp=0x40, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0661, .value=0x08}, {.addr=0x0662, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x0663, .a=0xff, .x=0x2e, .y=0x09, .sp=0x40, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0661, .value=0x08}, {.addr=0x0662, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x0661, .value=0x08, .type=IO_READ},
        {.addr=0x0662, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xbff5, .a=0xdf, .x=0x8c, .y=0x6c, .sp=0x33, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xbff5, .value=0x08}, {.addr=0xbff6, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xbff7, .a=0xff, .x=0x8c, .y=0x6c, .sp=0x33, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xbff5, .value=0x08}, {.addr=0xbff6, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xbff5, .value=0x08, .type=IO_READ},
        {.addr=0xbff6, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x06dc, .a=0x10, .x=0x75, .y=0x44, .sp=0x8d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x06dc, .value=0x08}, {.addr=0x06dd, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x06de, .a=0x17, .x=0x75, .y=0x44, .sp=0x8d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x06dc, .value=0x08}, {.addr=0x06dd, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x06dc, .value=0x08, .type=IO_READ},
        {.addr=0x06dd, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x9a69, .a=0x0e, .x=0xb1, .y=0xb6, .sp=0xca, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9a69, .value=0x08}, {.addr=0x9a6a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9a6b, .a=0xfe, .x=0xb1, .y=0xb6, .sp=0xca, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9a69, .value=0x08}, {.addr=0x9a6a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x9a69, .value=0x08, .type=IO_READ},
        {.addr=0x9a6a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x2900, .a=0xea, .x=0xa3, .y=0x2a, .sp=0xfe, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x2900, .value=0x08}, {.addr=0x2901, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x2902, .a=0xfa, .x=0xa3, .y=0x2a, .sp=0xfe, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2900, .value=0x08}, {.addr=0x2901, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x2900, .value=0x08, .type=IO_READ},
        {.addr=0x2901, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x9557, .a=0x3b, .x=0xef, .y=0x03, .sp=0xf3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9557, .value=0x08}, {.addr=0x9558, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9559, .a=0x7b, .x=0xef, .y=0x03, .sp=0xf3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9557, .value=0x08}, {.addr=0x9558, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9557, .value=0x08, .type=IO_READ},
        {.addr=0x9558, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xe1e6, .a=0x6b, .x=0x03, .y=0xd5, .sp=0x25, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e6, .value=0x08}, {.addr=0xe1e7, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xe1e8, .a=0x7b, .x=0x03, .y=0xd5, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe1e6, .value=0x08}, {.addr=0xe1e7, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe1e6, .value=0x08, .type=IO_READ},
        {.addr=0xe1e7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x3762, .a=0x2f, .x=0x88, .y=0x38, .sp=0xd7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3762, .value=0x08}, {.addr=0x3763, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x3764, .a=0xff, .x=0x88, .y=0x38, .sp=0xd7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3762, .value=0x08}, {.addr=0x3763, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x3762, .value=0x08, .type=IO_READ},
        {.addr=0x3763, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x1009, .a=0xa2, .x=0x32, .y=0x3a, .sp=0x30, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1009, .value=0x08}, {.addr=0x100a, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x100b, .a=0xa2, .x=0x32, .y=0x3a, .sp=0x30, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1009, .value=0x08}, {.addr=0x100a, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x1009, .value=0x08, .type=IO_READ},
        {.addr=0x100a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x522c, .a=0x44, .x=0xf1, .y=0x0a, .sp=0x51, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x522c, .value=0x08}, {.addr=0x522d, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x522e, .a=0x6d, .x=0xf1, .y=0x0a, .sp=0x51, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x522c, .value=0x08}, {.addr=0x522d, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x522c, .value=0x08, .type=IO_READ},
        {.addr=0x522d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xb158, .a=0x35, .x=0x1a, .y=0xca, .sp=0xaf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xb158, .value=0x08}, {.addr=0xb159, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xb15a, .a=0x3f, .x=0x1a, .y=0xca, .sp=0xaf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb158, .value=0x08}, {.addr=0xb159, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xb158, .value=0x08, .type=IO_READ},
        {.addr=0xb159, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x030b, .a=0x36, .x=0x15, .y=0xb7, .sp=0xfb, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x030b, .value=0x08}, {.addr=0x030c, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x030d, .a=0xf7, .x=0x15, .y=0xb7, .sp=0xfb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x030b, .value=0x08}, {.addr=0x030c, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x030b, .value=0x08, .type=IO_READ},
        {.addr=0x030c, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xad21, .a=0x08, .x=0x22, .y=0xe1, .sp=0xe0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xad21, .value=0x08}, {.addr=0xad22, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xad23, .a=0x9c, .x=0x22, .y=0xe1, .sp=0xe0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xad21, .value=0x08}, {.addr=0xad22, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xad21, .value=0x08, .type=IO_READ},
        {.addr=0xad22, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x4ec8, .a=0xbb, .x=0xe2, .y=0x84, .sp=0xd7, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec8, .value=0x08}, {.addr=0x4ec9, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x4eca, .a=0xff, .x=0xe2, .y=0x84, .sp=0xd7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4ec8, .value=0x08}, {.addr=0x4ec9, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x4ec8, .value=0x08, .type=IO_READ},
        {.addr=0x4ec9, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x232f, .a=0xe8, .x=0x8b, .y=0x0c, .sp=0xd8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x232f, .value=0x08}, {.addr=0x2330, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2331, .a=0xfd, .x=0x8b, .y=0x0c, .sp=0xd8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x232f, .value=0x08}, {.addr=0x2330, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x232f, .value=0x08, .type=IO_READ},
        {.addr=0x2330, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1910, .a=0x96, .x=0xb1, .y=0x34, .sp=0x75, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1910, .value=0x08}, {.addr=0x1911, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x1912, .a=0xd7, .x=0xb1, .y=0x34, .sp=0x75, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1910, .value=0x08}, {.addr=0x1911, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x1910, .value=0x08, .type=IO_READ},
        {.addr=0x1911, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x3817, .a=0x27, .x=0x9d, .y=0xd5, .sp=0x4c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x3817, .value=0x08}, {.addr=0x3818, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x3819, .a=0x3f, .x=0x9d, .y=0xd5, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3817, .value=0x08}, {.addr=0x3818, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x3817, .value=0x08, .type=IO_READ},
        {.addr=0x3818, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x2672, .a=0xf8, .x=0x6b, .y=0x06, .sp=0x4c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2672, .value=0x08}, {.addr=0x2673, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2674, .a=0xf8, .x=0x6b, .y=0x06, .sp=0x4c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2672, .value=0x08}, {.addr=0x2673, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2672, .value=0x08, .type=IO_READ},
        {.addr=0x2673, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x875f, .a=0xf5, .x=0xb8, .y=0x2f, .sp=0xf0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x875f, .value=0x08}, {.addr=0x8760, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8761, .a=0xfd, .x=0xb8, .y=0x2f, .sp=0xf0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x875f, .value=0x08}, {.addr=0x8760, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x875f, .value=0x08, .type=IO_READ},
        {.addr=0x8760, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x258e, .a=0x3d, .x=0x3f, .y=0x35, .sp=0x78, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x258e, .value=0x08}, {.addr=0x258f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x2590, .a=0x3f, .x=0x3f, .y=0x35, .sp=0x78, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x258e, .value=0x08}, {.addr=0x258f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x258e, .value=0x08, .type=IO_READ},
        {.addr=0x258f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x5383, .a=0x18, .x=0x4f, .y=0x6c, .sp=0xa4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5383, .value=0x08}, {.addr=0x5384, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5385, .a=0x9e, .x=0x4f, .y=0x6c, .sp=0xa4, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5383, .value=0x08}, {.addr=0x5384, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5383, .value=0x08, .type=IO_READ},
        {.addr=0x5384, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xd4ac, .a=0x37, .x=0x75, .y=0xb3, .sp=0xd7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ac, .value=0x08}, {.addr=0xd4ad, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd4ae, .a=0xbf, .x=0x75, .y=0xb3, .sp=0xd7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd4ac, .value=0x08}, {.addr=0xd4ad, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd4ac, .value=0x08, .type=IO_READ},
        {.addr=0xd4ad, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xb5e9, .a=0xd9, .x=0xc6, .y=0x10, .sp=0xba, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e9, .value=0x08}, {.addr=0xb5ea, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xb5eb, .a=0xfb, .x=0xc6, .y=0x10, .sp=0xba, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb5e9, .value=0x08}, {.addr=0xb5ea, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xb5e9, .value=0x08, .type=IO_READ},
        {.addr=0xb5ea, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x43ca, .a=0xac, .x=0xf4, .y=0xdb, .sp=0x82, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x43ca, .value=0x08}, {.addr=0x43cb, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x43cc, .a=0xbf, .x=0xf4, .y=0xdb, .sp=0x82, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x43ca, .value=0x08}, {.addr=0x43cb, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x43ca, .value=0x08, .type=IO_READ},
        {.addr=0x43cb, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x8a11, .a=0x8f, .x=0xe4, .y=0x35, .sp=0xfd, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8a11, .value=0x08}, {.addr=0x8a12, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x8a13, .a=0xff, .x=0xe4, .y=0x35, .sp=0xfd, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8a11, .value=0x08}, {.addr=0x8a12, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x8a11, .value=0x08, .type=IO_READ},
        {.addr=0x8a12, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x33a6, .a=0x19, .x=0x66, .y=0xc0, .sp=0x1b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x33a6, .value=0x08}, {.addr=0x33a7, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x33a8, .a=0xbd, .x=0x66, .y=0xc0, .sp=0x1b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x33a6, .value=0x08}, {.addr=0x33a7, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x33a6, .value=0x08, .type=IO_READ},
        {.addr=0x33a7, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xdd61, .a=0x5b, .x=0xad, .y=0xa6, .sp=0x1a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xdd61, .value=0x08}, {.addr=0xdd62, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xdd63, .a=0xfb, .x=0xad, .y=0xa6, .sp=0x1a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xdd61, .value=0x08}, {.addr=0xdd62, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xdd61, .value=0x08, .type=IO_READ},
        {.addr=0xdd62, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6360, .a=0xaa, .x=0x6e, .y=0x21, .sp=0x23, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x6360, .value=0x08}, {.addr=0x6361, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6362, .a=0xff, .x=0x6e, .y=0x21, .sp=0x23, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6360, .value=0x08}, {.addr=0x6361, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6360, .value=0x08, .type=IO_READ},
        {.addr=0x6361, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8e69, .a=0xaa, .x=0x87, .y=0x24, .sp=0xad, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8e69, .value=0x08}, {.addr=0x8e6a, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8e6b, .a=0xff, .x=0x87, .y=0x24, .sp=0xad, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8e69, .value=0x08}, {.addr=0x8e6a, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x8e69, .value=0x08, .type=IO_READ},
        {.addr=0x8e6a, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x1d3e, .a=0xb9, .x=0x45, .y=0x0d, .sp=0xf9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x1d3e, .value=0x08}, {.addr=0x1d3f, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x1d40, .a=0xbf, .x=0x45, .y=0x0d, .sp=0xf9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1d3e, .value=0x08}, {.addr=0x1d3f, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x1d3e, .value=0x08, .type=IO_READ},
        {.addr=0x1d3f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x326e, .a=0x25, .x=0xa9, .y=0x29, .sp=0xb5, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x326e, .value=0x08}, {.addr=0x326f, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3270, .a=0x77, .x=0xa9, .y=0x29, .sp=0xb5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x326e, .value=0x08}, {.addr=0x326f, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x326e, .value=0x08, .type=IO_READ},
        {.addr=0x326f, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xa3c2, .a=0x16, .x=0x74, .y=0x75, .sp=0x75, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c2, .value=0x08}, {.addr=0xa3c3, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa3c4, .a=0xb7, .x=0x74, .y=0x75, .sp=0x75, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa3c2, .value=0x08}, {.addr=0xa3c3, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa3c2, .value=0x08, .type=IO_READ},
        {.addr=0xa3c3, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x4434, .a=0xb6, .x=0xda, .y=0x38, .sp=0x52, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4434, .value=0x08}, {.addr=0x4435, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x4436, .a=0xff, .x=0xda, .y=0x38, .sp=0x52, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4434, .value=0x08}, {.addr=0x4435, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x4434, .value=0x08, .type=IO_READ},
        {.addr=0x4435, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x349e, .a=0x1e, .x=0x17, .y=0xb9, .sp=0xbf, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x349e, .value=0x08}, {.addr=0x349f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x34a0, .a=0x3f, .x=0x17, .y=0xb9, .sp=0xbf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x349e, .value=0x08}, {.addr=0x349f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x349e, .value=0x08, .type=IO_READ},
        {.addr=0x349f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xf672, .a=0xfc, .x=0x12, .y=0xa8, .sp=0xf1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xf672, .value=0x08}, {.addr=0xf673, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf674, .a=0xfc, .x=0x12, .y=0xa8, .sp=0xf1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf672, .value=0x08}, {.addr=0xf673, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf672, .value=0x08, .type=IO_READ},
        {.addr=0xf673, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x79fd, .a=0x04, .x=0x98, .y=0x52, .sp=0xb8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x79fd, .value=0x08}, {.addr=0x79fe, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x79ff, .a=0xef, .x=0x98, .y=0x52, .sp=0xb8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x79fd, .value=0x08}, {.addr=0x79fe, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x79fd, .value=0x08, .type=IO_READ},
        {.addr=0x79fe, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x9ba9, .a=0x03, .x=0xbf, .y=0x3a, .sp=0x86, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba9, .value=0x08}, {.addr=0x9baa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9bab, .a=0x1f, .x=0xbf, .y=0x3a, .sp=0x86, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9ba9, .value=0x08}, {.addr=0x9baa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9ba9, .value=0x08, .type=IO_READ},
        {.addr=0x9baa, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb3f0, .a=0xaf, .x=0x19, .y=0x8a, .sp=0x92, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f0, .value=0x08}, {.addr=0xb3f1, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xb3f2, .a=0xaf, .x=0x19, .y=0x8a, .sp=0x92, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb3f0, .value=0x08}, {.addr=0xb3f1, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xb3f0, .value=0x08, .type=IO_READ},
        {.addr=0xb3f1, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x15f2, .a=0xf3, .x=0xc2, .y=0x0b, .sp=0x4b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x15f2, .value=0x08}, {.addr=0x15f3, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x15f4, .a=0xf3, .x=0xc2, .y=0x0b, .sp=0x4b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x15f2, .value=0x08}, {.addr=0x15f3, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x15f2, .value=0x08, .type=IO_READ},
        {.addr=0x15f3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb0f2, .a=0x94, .x=0xa4, .y=0xb4, .sp=0xb4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f2, .value=0x08}, {.addr=0xb0f3, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xb0f4, .a=0xf5, .x=0xa4, .y=0xb4, .sp=0xb4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb0f2, .value=0x08}, {.addr=0xb0f3, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xb0f2, .value=0x08, .type=IO_READ},
        {.addr=0xb0f3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x4da1, .a=0x87, .x=0x5c, .y=0x83, .sp=0xc0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4da1, .value=0x08}, {.addr=0x4da2, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x4da3, .a=0x97, .x=0x5c, .y=0x83, .sp=0xc0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4da1, .value=0x08}, {.addr=0x4da2, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x4da1, .value=0x08, .type=IO_READ},
        {.addr=0x4da2, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x188a, .a=0xa2, .x=0x18, .y=0x35, .sp=0xdf, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x188a, .value=0x08}, {.addr=0x188b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x188c, .a=0xea, .x=0x18, .y=0x35, .sp=0xdf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x188a, .value=0x08}, {.addr=0x188b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x188a, .value=0x08, .type=IO_READ},
        {.addr=0x188b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6bf4, .a=0xc6, .x=0x53, .y=0x4f, .sp=0xe7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf4, .value=0x08}, {.addr=0x6bf5, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6bf6, .a=0xff, .x=0x53, .y=0x4f, .sp=0xe7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6bf4, .value=0x08}, {.addr=0x6bf5, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x6bf4, .value=0x08, .type=IO_READ},
        {.addr=0x6bf5, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x81a6, .a=0x3c, .x=0x89, .y=0x94, .sp=0xc9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x81a6, .value=0x08}, {.addr=0x81a7, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x81a8, .a=0x3f, .x=0x89, .y=0x94, .sp=0xc9, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x81a6, .value=0x08}, {.addr=0x81a7, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x81a6, .value=0x08, .type=IO_READ},
        {.addr=0x81a7, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb586, .a=0x84, .x=0x2c, .y=0x3c, .sp=0xfe, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb586, .value=0x08}, {.addr=0xb587, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb588, .a=0xfd, .x=0x2c, .y=0x3c, .sp=0xfe, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb586, .value=0x08}, {.addr=0xb587, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb586, .value=0x08, .type=IO_READ},
        {.addr=0xb587, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_08, _08_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x99e2, .a=0x5d, .x=0xa0, .y=0x97, .sp=0x16, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x99e2, .value=0x08}, {.addr=0x99e3, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x99e4, .a=0xfd, .x=0xa0, .y=0x97, .sp=0x16, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x99e2, .value=0x08}, {.addr=0x99e3, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x99e2, .value=0x08, .type=IO_READ},
        {.addr=0x99e3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("08 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
