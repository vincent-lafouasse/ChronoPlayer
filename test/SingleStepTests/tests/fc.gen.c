#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_FC, _FC_0000) {
    const struct CPU_State initial_cpu = {.pc=0xf13f, .a=0xe0, .x=0x51, .y=0xe6, .sp=0xfe, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf13f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf140, .a=0xe0, .x=0x51, .y=0xe7, .sp=0xfe, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf13f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf13f, .value=0xfc, .type=IO_READ},
        {.addr=0xf140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0001) {
    const struct CPU_State initial_cpu = {.pc=0xa682, .a=0x42, .x=0x2e, .y=0x4e, .sp=0x14, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa682, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa683, .a=0x42, .x=0x2e, .y=0x4f, .sp=0x14, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa682, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa682, .value=0xfc, .type=IO_READ},
        {.addr=0xa683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0002) {
    const struct CPU_State initial_cpu = {.pc=0x13cb, .a=0x67, .x=0xd0, .y=0xf9, .sp=0x6a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x13cb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x13cc, .a=0x67, .x=0xd0, .y=0xfa, .sp=0x6a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x13cb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x13cb, .value=0xfc, .type=IO_READ},
        {.addr=0x13cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0003) {
    const struct CPU_State initial_cpu = {.pc=0x7386, .a=0x48, .x=0x19, .y=0xda, .sp=0x40, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x7386, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7387, .a=0x48, .x=0x19, .y=0xdb, .sp=0x40, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7386, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7386, .value=0xfc, .type=IO_READ},
        {.addr=0x7387, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0004) {
    const struct CPU_State initial_cpu = {.pc=0x19df, .a=0xcb, .x=0xd3, .y=0xe8, .sp=0x8e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x19df, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x19e0, .a=0xcb, .x=0xd3, .y=0xe9, .sp=0x8e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x19df, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x19df, .value=0xfc, .type=IO_READ},
        {.addr=0x19e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0005) {
    const struct CPU_State initial_cpu = {.pc=0x3d9c, .a=0xc8, .x=0xca, .y=0x33, .sp=0xec, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x3d9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3d9d, .a=0xc8, .x=0xca, .y=0x34, .sp=0xec, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3d9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3d9c, .value=0xfc, .type=IO_READ},
        {.addr=0x3d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0006) {
    const struct CPU_State initial_cpu = {.pc=0x2e7f, .a=0x36, .x=0xbe, .y=0xea, .sp=0x28, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e7f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2e80, .a=0x36, .x=0xbe, .y=0xeb, .sp=0x28, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2e7f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2e7f, .value=0xfc, .type=IO_READ},
        {.addr=0x2e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0007) {
    const struct CPU_State initial_cpu = {.pc=0xd3f6, .a=0x9e, .x=0x56, .y=0xdc, .sp=0x7a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd3f7, .a=0x9e, .x=0x56, .y=0xdd, .sp=0x7a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd3f6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd3f6, .value=0xfc, .type=IO_READ},
        {.addr=0xd3f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0008) {
    const struct CPU_State initial_cpu = {.pc=0xad0d, .a=0xe9, .x=0xd3, .y=0x71, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xad0d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xad0e, .a=0xe9, .x=0xd3, .y=0x72, .sp=0xaa, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xad0d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xad0d, .value=0xfc, .type=IO_READ},
        {.addr=0xad0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0009) {
    const struct CPU_State initial_cpu = {.pc=0x46b1, .a=0xf9, .x=0x6e, .y=0xf3, .sp=0xd7, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x46b1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x46b2, .a=0xf9, .x=0x6e, .y=0xf4, .sp=0xd7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x46b1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x46b1, .value=0xfc, .type=IO_READ},
        {.addr=0x46b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000A) {
    const struct CPU_State initial_cpu = {.pc=0x9e49, .a=0x1e, .x=0x16, .y=0xac, .sp=0xb7, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9e49, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9e4a, .a=0x1e, .x=0x16, .y=0xad, .sp=0xb7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9e49, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9e49, .value=0xfc, .type=IO_READ},
        {.addr=0x9e4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000B) {
    const struct CPU_State initial_cpu = {.pc=0xb0d0, .a=0x16, .x=0xc5, .y=0xc9, .sp=0x44, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb0d0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb0d1, .a=0x16, .x=0xc5, .y=0xca, .sp=0x44, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb0d0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb0d0, .value=0xfc, .type=IO_READ},
        {.addr=0xb0d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000C) {
    const struct CPU_State initial_cpu = {.pc=0xf48b, .a=0xcb, .x=0x19, .y=0xee, .sp=0x45, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf48b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf48c, .a=0xcb, .x=0x19, .y=0xef, .sp=0x45, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf48b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf48b, .value=0xfc, .type=IO_READ},
        {.addr=0xf48c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3a9a, .a=0x20, .x=0x3d, .y=0x8f, .sp=0x78, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3a9a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a9b, .a=0x20, .x=0x3d, .y=0x90, .sp=0x78, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3a9a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a9a, .value=0xfc, .type=IO_READ},
        {.addr=0x3a9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000E) {
    const struct CPU_State initial_cpu = {.pc=0x56a9, .a=0xce, .x=0xf4, .y=0x8f, .sp=0xaa, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x56a9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x56aa, .a=0xce, .x=0xf4, .y=0x90, .sp=0xaa, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x56a9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x56a9, .value=0xfc, .type=IO_READ},
        {.addr=0x56aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_000F) {
    const struct CPU_State initial_cpu = {.pc=0x9f88, .a=0x90, .x=0x18, .y=0x26, .sp=0x7b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9f88, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f89, .a=0x90, .x=0x18, .y=0x27, .sp=0x7b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9f88, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f88, .value=0xfc, .type=IO_READ},
        {.addr=0x9f89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0010) {
    const struct CPU_State initial_cpu = {.pc=0x01e0, .a=0x74, .x=0xc2, .y=0xe4, .sp=0x45, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x01e1, .a=0x74, .x=0xc2, .y=0xe5, .sp=0x45, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x01e0, .value=0xfc, .type=IO_READ},
        {.addr=0x01e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0011) {
    const struct CPU_State initial_cpu = {.pc=0xf644, .a=0x6d, .x=0xee, .y=0xff, .sp=0x45, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf644, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf645, .a=0x6d, .x=0xee, .y=0x00, .sp=0x45, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xf644, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf644, .value=0xfc, .type=IO_READ},
        {.addr=0xf645, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0012) {
    const struct CPU_State initial_cpu = {.pc=0x98a0, .a=0xe2, .x=0x1b, .y=0x86, .sp=0x4d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x98a0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x98a1, .a=0xe2, .x=0x1b, .y=0x87, .sp=0x4d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x98a0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x98a0, .value=0xfc, .type=IO_READ},
        {.addr=0x98a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0013) {
    const struct CPU_State initial_cpu = {.pc=0xbae4, .a=0xc9, .x=0xd6, .y=0x29, .sp=0x2c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xbae4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbae5, .a=0xc9, .x=0xd6, .y=0x2a, .sp=0x2c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbae4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbae4, .value=0xfc, .type=IO_READ},
        {.addr=0xbae5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0014) {
    const struct CPU_State initial_cpu = {.pc=0xcff8, .a=0xa8, .x=0x0f, .y=0xd1, .sp=0x8c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xcff8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcff9, .a=0xa8, .x=0x0f, .y=0xd2, .sp=0x8c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcff8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcff8, .value=0xfc, .type=IO_READ},
        {.addr=0xcff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6f3d, .a=0x67, .x=0xaf, .y=0xf9, .sp=0xbc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6f3d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6f3e, .a=0x67, .x=0xaf, .y=0xfa, .sp=0xbc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6f3d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6f3d, .value=0xfc, .type=IO_READ},
        {.addr=0x6f3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0016) {
    const struct CPU_State initial_cpu = {.pc=0xb544, .a=0xec, .x=0x95, .y=0x6a, .sp=0xd5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb544, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb545, .a=0xec, .x=0x95, .y=0x6b, .sp=0xd5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb544, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb544, .value=0xfc, .type=IO_READ},
        {.addr=0xb545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0017) {
    const struct CPU_State initial_cpu = {.pc=0xba62, .a=0xea, .x=0x49, .y=0xf5, .sp=0x2a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xba62, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xba63, .a=0xea, .x=0x49, .y=0xf6, .sp=0x2a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xba62, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xba62, .value=0xfc, .type=IO_READ},
        {.addr=0xba63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0018) {
    const struct CPU_State initial_cpu = {.pc=0x0bd4, .a=0x89, .x=0xd3, .y=0x91, .sp=0xbe, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0bd5, .a=0x89, .x=0xd3, .y=0x92, .sp=0xbe, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0bd4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0bd4, .value=0xfc, .type=IO_READ},
        {.addr=0x0bd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0019) {
    const struct CPU_State initial_cpu = {.pc=0x781d, .a=0x2a, .x=0x87, .y=0x5c, .sp=0x98, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x781d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x781e, .a=0x2a, .x=0x87, .y=0x5d, .sp=0x98, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x781d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x781d, .value=0xfc, .type=IO_READ},
        {.addr=0x781e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9259, .a=0x3a, .x=0xa8, .y=0x17, .sp=0x63, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9259, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x925a, .a=0x3a, .x=0xa8, .y=0x18, .sp=0x63, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9259, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9259, .value=0xfc, .type=IO_READ},
        {.addr=0x925a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001B) {
    const struct CPU_State initial_cpu = {.pc=0x767f, .a=0x22, .x=0xec, .y=0x37, .sp=0x3f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x767f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7680, .a=0x22, .x=0xec, .y=0x38, .sp=0x3f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x767f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x767f, .value=0xfc, .type=IO_READ},
        {.addr=0x7680, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001C) {
    const struct CPU_State initial_cpu = {.pc=0x6a1e, .a=0x35, .x=0x92, .y=0xe1, .sp=0x36, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6a1e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6a1f, .a=0x35, .x=0x92, .y=0xe2, .sp=0x36, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6a1e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6a1e, .value=0xfc, .type=IO_READ},
        {.addr=0x6a1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5314, .a=0xaa, .x=0x06, .y=0xf3, .sp=0x94, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5314, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5315, .a=0xaa, .x=0x06, .y=0xf4, .sp=0x94, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5314, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5314, .value=0xfc, .type=IO_READ},
        {.addr=0x5315, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001E) {
    const struct CPU_State initial_cpu = {.pc=0x933e, .a=0xde, .x=0x1b, .y=0x19, .sp=0xd5, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x933e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x933f, .a=0xde, .x=0x1b, .y=0x1a, .sp=0xd5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x933e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x933e, .value=0xfc, .type=IO_READ},
        {.addr=0x933f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_001F) {
    const struct CPU_State initial_cpu = {.pc=0x35e0, .a=0x56, .x=0x2b, .y=0xdc, .sp=0xcc, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x35e0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x35e1, .a=0x56, .x=0x2b, .y=0xdd, .sp=0xcc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x35e0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x35e0, .value=0xfc, .type=IO_READ},
        {.addr=0x35e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0020) {
    const struct CPU_State initial_cpu = {.pc=0xe44b, .a=0xc8, .x=0x7c, .y=0xef, .sp=0x60, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe44b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe44c, .a=0xc8, .x=0x7c, .y=0xf0, .sp=0x60, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe44b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe44b, .value=0xfc, .type=IO_READ},
        {.addr=0xe44c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0021) {
    const struct CPU_State initial_cpu = {.pc=0xcc07, .a=0x6c, .x=0x44, .y=0x7f, .sp=0x68, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xcc07, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcc08, .a=0x6c, .x=0x44, .y=0x80, .sp=0x68, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcc07, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcc07, .value=0xfc, .type=IO_READ},
        {.addr=0xcc08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0022) {
    const struct CPU_State initial_cpu = {.pc=0xfc4e, .a=0xea, .x=0x58, .y=0x5e, .sp=0xbd, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfc4e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfc4f, .a=0xea, .x=0x58, .y=0x5f, .sp=0xbd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfc4e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfc4e, .value=0xfc, .type=IO_READ},
        {.addr=0xfc4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0023) {
    const struct CPU_State initial_cpu = {.pc=0xd506, .a=0x58, .x=0xd5, .y=0x33, .sp=0x37, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd506, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd507, .a=0x58, .x=0xd5, .y=0x34, .sp=0x37, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd506, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd506, .value=0xfc, .type=IO_READ},
        {.addr=0xd507, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0024) {
    const struct CPU_State initial_cpu = {.pc=0x2382, .a=0x72, .x=0x68, .y=0xa9, .sp=0x7c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2382, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2383, .a=0x72, .x=0x68, .y=0xaa, .sp=0x7c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2382, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2382, .value=0xfc, .type=IO_READ},
        {.addr=0x2383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd94f, .a=0x80, .x=0x45, .y=0x1e, .sp=0x4a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd94f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd950, .a=0x80, .x=0x45, .y=0x1f, .sp=0x4a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd94f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd94f, .value=0xfc, .type=IO_READ},
        {.addr=0xd950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0026) {
    const struct CPU_State initial_cpu = {.pc=0x8661, .a=0xf6, .x=0x7c, .y=0x3b, .sp=0x09, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8661, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8662, .a=0xf6, .x=0x7c, .y=0x3c, .sp=0x09, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x8661, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8661, .value=0xfc, .type=IO_READ},
        {.addr=0x8662, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0027) {
    const struct CPU_State initial_cpu = {.pc=0x24c8, .a=0xab, .x=0x4e, .y=0xb8, .sp=0xba, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x24c8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x24c9, .a=0xab, .x=0x4e, .y=0xb9, .sp=0xba, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x24c8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x24c8, .value=0xfc, .type=IO_READ},
        {.addr=0x24c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0028) {
    const struct CPU_State initial_cpu = {.pc=0x32cc, .a=0x4e, .x=0xb8, .y=0x42, .sp=0x17, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x32cc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x32cd, .a=0x4e, .x=0xb8, .y=0x43, .sp=0x17, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x32cc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x32cc, .value=0xfc, .type=IO_READ},
        {.addr=0x32cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0029) {
    const struct CPU_State initial_cpu = {.pc=0x159e, .a=0x81, .x=0x38, .y=0xa8, .sp=0x4a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x159e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x159f, .a=0x81, .x=0x38, .y=0xa9, .sp=0x4a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x159e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x159e, .value=0xfc, .type=IO_READ},
        {.addr=0x159f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002A) {
    const struct CPU_State initial_cpu = {.pc=0x95ba, .a=0x61, .x=0x68, .y=0xeb, .sp=0x24, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x95ba, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x95bb, .a=0x61, .x=0x68, .y=0xec, .sp=0x24, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x95ba, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x95ba, .value=0xfc, .type=IO_READ},
        {.addr=0x95bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002B) {
    const struct CPU_State initial_cpu = {.pc=0x6ec6, .a=0x43, .x=0xe0, .y=0x49, .sp=0xe1, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6ec7, .a=0x43, .x=0xe0, .y=0x4a, .sp=0xe1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6ec6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6ec6, .value=0xfc, .type=IO_READ},
        {.addr=0x6ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002C) {
    const struct CPU_State initial_cpu = {.pc=0xc926, .a=0x04, .x=0x8d, .y=0x07, .sp=0x71, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc926, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc927, .a=0x04, .x=0x8d, .y=0x08, .sp=0x71, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc926, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc926, .value=0xfc, .type=IO_READ},
        {.addr=0xc927, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002D) {
    const struct CPU_State initial_cpu = {.pc=0xff09, .a=0xf7, .x=0xd9, .y=0x1d, .sp=0x2f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xff09, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xff0a, .a=0xf7, .x=0xd9, .y=0x1e, .sp=0x2f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xff09, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xff09, .value=0xfc, .type=IO_READ},
        {.addr=0xff0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9b76, .a=0xd1, .x=0xf8, .y=0xc5, .sp=0x67, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9b76, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9b77, .a=0xd1, .x=0xf8, .y=0xc6, .sp=0x67, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9b76, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9b76, .value=0xfc, .type=IO_READ},
        {.addr=0x9b77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8d9c, .a=0xff, .x=0xb5, .y=0x91, .sp=0x46, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8d9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8d9d, .a=0xff, .x=0xb5, .y=0x92, .sp=0x46, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8d9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8d9c, .value=0xfc, .type=IO_READ},
        {.addr=0x8d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0030) {
    const struct CPU_State initial_cpu = {.pc=0x6796, .a=0xa3, .x=0x33, .y=0x8f, .sp=0x6e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6796, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6797, .a=0xa3, .x=0x33, .y=0x90, .sp=0x6e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6796, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6796, .value=0xfc, .type=IO_READ},
        {.addr=0x6797, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0031) {
    const struct CPU_State initial_cpu = {.pc=0x9ab3, .a=0xb3, .x=0x53, .y=0x53, .sp=0xa1, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9ab4, .a=0xb3, .x=0x53, .y=0x54, .sp=0xa1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9ab3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9ab3, .value=0xfc, .type=IO_READ},
        {.addr=0x9ab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0032) {
    const struct CPU_State initial_cpu = {.pc=0x14b6, .a=0xc1, .x=0x29, .y=0x55, .sp=0xf5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x14b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x14b7, .a=0xc1, .x=0x29, .y=0x56, .sp=0xf5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x14b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x14b6, .value=0xfc, .type=IO_READ},
        {.addr=0x14b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0033) {
    const struct CPU_State initial_cpu = {.pc=0x4ab7, .a=0xdf, .x=0xda, .y=0xe8, .sp=0x5e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4ab7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4ab8, .a=0xdf, .x=0xda, .y=0xe9, .sp=0x5e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4ab7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4ab7, .value=0xfc, .type=IO_READ},
        {.addr=0x4ab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0034) {
    const struct CPU_State initial_cpu = {.pc=0x0ef0, .a=0x8b, .x=0x1e, .y=0xa1, .sp=0xf4, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0ef1, .a=0x8b, .x=0x1e, .y=0xa2, .sp=0xf4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0ef0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0ef0, .value=0xfc, .type=IO_READ},
        {.addr=0x0ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0035) {
    const struct CPU_State initial_cpu = {.pc=0xa35a, .a=0xa5, .x=0xf0, .y=0x07, .sp=0xba, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa35a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa35b, .a=0xa5, .x=0xf0, .y=0x08, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa35a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa35a, .value=0xfc, .type=IO_READ},
        {.addr=0xa35b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0036) {
    const struct CPU_State initial_cpu = {.pc=0xe2ec, .a=0x17, .x=0xf2, .y=0x8d, .sp=0xd9, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe2ed, .a=0x17, .x=0xf2, .y=0x8e, .sp=0xd9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe2ec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe2ec, .value=0xfc, .type=IO_READ},
        {.addr=0xe2ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0037) {
    const struct CPU_State initial_cpu = {.pc=0x386a, .a=0x0b, .x=0x8e, .y=0x2b, .sp=0xce, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x386a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x386b, .a=0x0b, .x=0x8e, .y=0x2c, .sp=0xce, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x386a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x386a, .value=0xfc, .type=IO_READ},
        {.addr=0x386b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0038) {
    const struct CPU_State initial_cpu = {.pc=0xe5c5, .a=0xf5, .x=0x3c, .y=0x3a, .sp=0x3c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe5c6, .a=0xf5, .x=0x3c, .y=0x3b, .sp=0x3c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe5c5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe5c5, .value=0xfc, .type=IO_READ},
        {.addr=0xe5c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0039) {
    const struct CPU_State initial_cpu = {.pc=0x846d, .a=0xf1, .x=0xa0, .y=0xf8, .sp=0x94, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x846d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x846e, .a=0xf1, .x=0xa0, .y=0xf9, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x846d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x846d, .value=0xfc, .type=IO_READ},
        {.addr=0x846e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003A) {
    const struct CPU_State initial_cpu = {.pc=0x4c0c, .a=0x64, .x=0x74, .y=0x06, .sp=0x91, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4c0c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4c0d, .a=0x64, .x=0x74, .y=0x07, .sp=0x91, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4c0c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4c0c, .value=0xfc, .type=IO_READ},
        {.addr=0x4c0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9b91, .a=0xc5, .x=0xb3, .y=0x23, .sp=0x64, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9b91, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9b92, .a=0xc5, .x=0xb3, .y=0x24, .sp=0x64, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9b91, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9b91, .value=0xfc, .type=IO_READ},
        {.addr=0x9b92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003C) {
    const struct CPU_State initial_cpu = {.pc=0x672d, .a=0xab, .x=0x8d, .y=0x86, .sp=0x26, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x672d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x672e, .a=0xab, .x=0x8d, .y=0x87, .sp=0x26, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x672d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x672d, .value=0xfc, .type=IO_READ},
        {.addr=0x672e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003D) {
    const struct CPU_State initial_cpu = {.pc=0x52ce, .a=0x9a, .x=0xcd, .y=0x0b, .sp=0xbb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x52ce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x52cf, .a=0x9a, .x=0xcd, .y=0x0c, .sp=0xbb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x52ce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x52ce, .value=0xfc, .type=IO_READ},
        {.addr=0x52cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003E) {
    const struct CPU_State initial_cpu = {.pc=0xad46, .a=0x17, .x=0x77, .y=0x35, .sp=0x5e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xad46, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xad47, .a=0x17, .x=0x77, .y=0x36, .sp=0x5e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xad46, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xad46, .value=0xfc, .type=IO_READ},
        {.addr=0xad47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_003F) {
    const struct CPU_State initial_cpu = {.pc=0xea3d, .a=0xf8, .x=0xd9, .y=0xaf, .sp=0x81, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xea3d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xea3e, .a=0xf8, .x=0xd9, .y=0xb0, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xea3d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xea3d, .value=0xfc, .type=IO_READ},
        {.addr=0xea3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0040) {
    const struct CPU_State initial_cpu = {.pc=0xcfc5, .a=0x4d, .x=0xc1, .y=0x38, .sp=0xf4, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xcfc5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcfc6, .a=0x4d, .x=0xc1, .y=0x39, .sp=0xf4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcfc5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcfc5, .value=0xfc, .type=IO_READ},
        {.addr=0xcfc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6e95, .a=0x74, .x=0xa4, .y=0x0b, .sp=0xef, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6e95, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6e96, .a=0x74, .x=0xa4, .y=0x0c, .sp=0xef, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6e95, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6e95, .value=0xfc, .type=IO_READ},
        {.addr=0x6e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0042) {
    const struct CPU_State initial_cpu = {.pc=0xfc88, .a=0x37, .x=0x6e, .y=0xc4, .sp=0x87, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xfc88, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfc89, .a=0x37, .x=0x6e, .y=0xc5, .sp=0x87, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfc88, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfc88, .value=0xfc, .type=IO_READ},
        {.addr=0xfc89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0043) {
    const struct CPU_State initial_cpu = {.pc=0x488c, .a=0xca, .x=0x08, .y=0x19, .sp=0x3d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x488c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x488d, .a=0xca, .x=0x08, .y=0x1a, .sp=0x3d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x488c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x488c, .value=0xfc, .type=IO_READ},
        {.addr=0x488d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0044) {
    const struct CPU_State initial_cpu = {.pc=0x372a, .a=0xc2, .x=0x37, .y=0x92, .sp=0xa9, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x372a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x372b, .a=0xc2, .x=0x37, .y=0x93, .sp=0xa9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x372a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x372a, .value=0xfc, .type=IO_READ},
        {.addr=0x372b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0045) {
    const struct CPU_State initial_cpu = {.pc=0x72ad, .a=0x00, .x=0x67, .y=0xf2, .sp=0xc2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x72ad, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x72ae, .a=0x00, .x=0x67, .y=0xf3, .sp=0xc2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x72ad, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x72ad, .value=0xfc, .type=IO_READ},
        {.addr=0x72ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0046) {
    const struct CPU_State initial_cpu = {.pc=0x1789, .a=0x32, .x=0x7c, .y=0xa4, .sp=0x8f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1789, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x178a, .a=0x32, .x=0x7c, .y=0xa5, .sp=0x8f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1789, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1789, .value=0xfc, .type=IO_READ},
        {.addr=0x178a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0047) {
    const struct CPU_State initial_cpu = {.pc=0x151f, .a=0x14, .x=0xea, .y=0x6e, .sp=0x7a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x151f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1520, .a=0x14, .x=0xea, .y=0x6f, .sp=0x7a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x151f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x151f, .value=0xfc, .type=IO_READ},
        {.addr=0x1520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0048) {
    const struct CPU_State initial_cpu = {.pc=0xdfe6, .a=0xb0, .x=0x89, .y=0x1a, .sp=0x16, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdfe7, .a=0xb0, .x=0x89, .y=0x1b, .sp=0x16, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdfe6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdfe6, .value=0xfc, .type=IO_READ},
        {.addr=0xdfe7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0049) {
    const struct CPU_State initial_cpu = {.pc=0xa98b, .a=0xea, .x=0x1f, .y=0x15, .sp=0xe7, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa98b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa98c, .a=0xea, .x=0x1f, .y=0x16, .sp=0xe7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa98b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa98b, .value=0xfc, .type=IO_READ},
        {.addr=0xa98c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004A) {
    const struct CPU_State initial_cpu = {.pc=0x597e, .a=0xbe, .x=0xb6, .y=0x58, .sp=0xeb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x597e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x597f, .a=0xbe, .x=0xb6, .y=0x59, .sp=0xeb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x597e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x597e, .value=0xfc, .type=IO_READ},
        {.addr=0x597f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004B) {
    const struct CPU_State initial_cpu = {.pc=0xe1bc, .a=0x47, .x=0x40, .y=0x5f, .sp=0x13, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe1bc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe1bd, .a=0x47, .x=0x40, .y=0x60, .sp=0x13, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe1bc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe1bc, .value=0xfc, .type=IO_READ},
        {.addr=0xe1bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004C) {
    const struct CPU_State initial_cpu = {.pc=0x18b6, .a=0x2c, .x=0x5a, .y=0x50, .sp=0xcb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x18b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x18b7, .a=0x2c, .x=0x5a, .y=0x51, .sp=0xcb, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x18b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x18b6, .value=0xfc, .type=IO_READ},
        {.addr=0x18b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004D) {
    const struct CPU_State initial_cpu = {.pc=0xef6a, .a=0x31, .x=0xee, .y=0x85, .sp=0x69, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xef6a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xef6b, .a=0x31, .x=0xee, .y=0x86, .sp=0x69, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xef6a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xef6a, .value=0xfc, .type=IO_READ},
        {.addr=0xef6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004E) {
    const struct CPU_State initial_cpu = {.pc=0x999e, .a=0x13, .x=0xfb, .y=0xc8, .sp=0x22, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x999e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x999f, .a=0x13, .x=0xfb, .y=0xc9, .sp=0x22, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x999e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x999e, .value=0xfc, .type=IO_READ},
        {.addr=0x999f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_004F) {
    const struct CPU_State initial_cpu = {.pc=0xea06, .a=0xec, .x=0xc2, .y=0x21, .sp=0x88, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xea06, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xea07, .a=0xec, .x=0xc2, .y=0x22, .sp=0x88, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xea06, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xea06, .value=0xfc, .type=IO_READ},
        {.addr=0xea07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0050) {
    const struct CPU_State initial_cpu = {.pc=0x0dd1, .a=0xb6, .x=0x20, .y=0xc9, .sp=0x3a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0dd2, .a=0xb6, .x=0x20, .y=0xca, .sp=0x3a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0dd1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0dd1, .value=0xfc, .type=IO_READ},
        {.addr=0x0dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0051) {
    const struct CPU_State initial_cpu = {.pc=0x84ec, .a=0x6b, .x=0x47, .y=0x24, .sp=0x58, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x84ec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x84ed, .a=0x6b, .x=0x47, .y=0x25, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x84ec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x84ec, .value=0xfc, .type=IO_READ},
        {.addr=0x84ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0052) {
    const struct CPU_State initial_cpu = {.pc=0x52a5, .a=0x40, .x=0x66, .y=0x13, .sp=0xc9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x52a5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x52a6, .a=0x40, .x=0x66, .y=0x14, .sp=0xc9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x52a5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x52a5, .value=0xfc, .type=IO_READ},
        {.addr=0x52a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0053) {
    const struct CPU_State initial_cpu = {.pc=0xac7f, .a=0xdc, .x=0xa0, .y=0x86, .sp=0xdb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xac7f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xac80, .a=0xdc, .x=0xa0, .y=0x87, .sp=0xdb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xac7f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xac7f, .value=0xfc, .type=IO_READ},
        {.addr=0xac80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5c72, .a=0xee, .x=0xdb, .y=0x9f, .sp=0x29, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5c72, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5c73, .a=0xee, .x=0xdb, .y=0xa0, .sp=0x29, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5c72, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5c72, .value=0xfc, .type=IO_READ},
        {.addr=0x5c73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0055) {
    const struct CPU_State initial_cpu = {.pc=0xcd14, .a=0x80, .x=0xf6, .y=0xce, .sp=0x1b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xcd14, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcd15, .a=0x80, .x=0xf6, .y=0xcf, .sp=0x1b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcd14, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcd14, .value=0xfc, .type=IO_READ},
        {.addr=0xcd15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0056) {
    const struct CPU_State initial_cpu = {.pc=0xc887, .a=0xc3, .x=0xeb, .y=0x26, .sp=0x84, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc887, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc888, .a=0xc3, .x=0xeb, .y=0x27, .sp=0x84, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc887, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc887, .value=0xfc, .type=IO_READ},
        {.addr=0xc888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0c00, .a=0x4f, .x=0xda, .y=0xbb, .sp=0x1a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0c00, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0c01, .a=0x4f, .x=0xda, .y=0xbc, .sp=0x1a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0c00, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0c00, .value=0xfc, .type=IO_READ},
        {.addr=0x0c01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0058) {
    const struct CPU_State initial_cpu = {.pc=0x63cc, .a=0x85, .x=0x48, .y=0x24, .sp=0x0b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x63cc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x63cd, .a=0x85, .x=0x48, .y=0x25, .sp=0x0b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x63cc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x63cc, .value=0xfc, .type=IO_READ},
        {.addr=0x63cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0059) {
    const struct CPU_State initial_cpu = {.pc=0xa294, .a=0x68, .x=0x18, .y=0x16, .sp=0x90, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa294, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa295, .a=0x68, .x=0x18, .y=0x17, .sp=0x90, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xa294, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa294, .value=0xfc, .type=IO_READ},
        {.addr=0xa295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005A) {
    const struct CPU_State initial_cpu = {.pc=0x8237, .a=0xc0, .x=0x70, .y=0x9d, .sp=0xb0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8237, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8238, .a=0xc0, .x=0x70, .y=0x9e, .sp=0xb0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8237, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8237, .value=0xfc, .type=IO_READ},
        {.addr=0x8238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005B) {
    const struct CPU_State initial_cpu = {.pc=0x97a7, .a=0xda, .x=0x00, .y=0x8f, .sp=0xe0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x97a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x97a8, .a=0xda, .x=0x00, .y=0x90, .sp=0xe0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x97a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x97a7, .value=0xfc, .type=IO_READ},
        {.addr=0x97a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005C) {
    const struct CPU_State initial_cpu = {.pc=0x950e, .a=0x64, .x=0xec, .y=0x5c, .sp=0x5b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x950e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x950f, .a=0x64, .x=0xec, .y=0x5d, .sp=0x5b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x950e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x950e, .value=0xfc, .type=IO_READ},
        {.addr=0x950f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005D) {
    const struct CPU_State initial_cpu = {.pc=0x24d1, .a=0x32, .x=0x0a, .y=0x76, .sp=0x7a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x24d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x24d2, .a=0x32, .x=0x0a, .y=0x77, .sp=0x7a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x24d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x24d1, .value=0xfc, .type=IO_READ},
        {.addr=0x24d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb534, .a=0x45, .x=0xbe, .y=0x2f, .sp=0x09, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb534, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb535, .a=0x45, .x=0xbe, .y=0x30, .sp=0x09, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb534, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb534, .value=0xfc, .type=IO_READ},
        {.addr=0xb535, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_005F) {
    const struct CPU_State initial_cpu = {.pc=0xcc6f, .a=0x7e, .x=0xe4, .y=0x50, .sp=0xe4, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcc70, .a=0x7e, .x=0xe4, .y=0x51, .sp=0xe4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcc6f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcc6f, .value=0xfc, .type=IO_READ},
        {.addr=0xcc70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0060) {
    const struct CPU_State initial_cpu = {.pc=0xad95, .a=0xd4, .x=0x43, .y=0xef, .sp=0xf9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xad95, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xad96, .a=0xd4, .x=0x43, .y=0xf0, .sp=0xf9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xad95, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xad95, .value=0xfc, .type=IO_READ},
        {.addr=0xad96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0061) {
    const struct CPU_State initial_cpu = {.pc=0x04e2, .a=0x0b, .x=0x55, .y=0x9e, .sp=0x25, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x04e2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x04e3, .a=0x0b, .x=0x55, .y=0x9f, .sp=0x25, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x04e2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x04e2, .value=0xfc, .type=IO_READ},
        {.addr=0x04e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0062) {
    const struct CPU_State initial_cpu = {.pc=0x2db2, .a=0xc3, .x=0x73, .y=0x97, .sp=0x46, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2db2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2db3, .a=0xc3, .x=0x73, .y=0x98, .sp=0x46, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2db2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2db2, .value=0xfc, .type=IO_READ},
        {.addr=0x2db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0063) {
    const struct CPU_State initial_cpu = {.pc=0x0d2e, .a=0x08, .x=0xb4, .y=0x58, .sp=0xf1, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0d2f, .a=0x08, .x=0xb4, .y=0x59, .sp=0xf1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0d2e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0d2e, .value=0xfc, .type=IO_READ},
        {.addr=0x0d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0064) {
    const struct CPU_State initial_cpu = {.pc=0x063f, .a=0xc2, .x=0x45, .y=0xca, .sp=0x82, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x063f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0640, .a=0xc2, .x=0x45, .y=0xcb, .sp=0x82, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x063f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x063f, .value=0xfc, .type=IO_READ},
        {.addr=0x0640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0065) {
    const struct CPU_State initial_cpu = {.pc=0x0f7c, .a=0x09, .x=0x99, .y=0x58, .sp=0x63, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f7c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0f7d, .a=0x09, .x=0x99, .y=0x59, .sp=0x63, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0f7c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0f7c, .value=0xfc, .type=IO_READ},
        {.addr=0x0f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0066) {
    const struct CPU_State initial_cpu = {.pc=0xc811, .a=0x66, .x=0x8f, .y=0x9c, .sp=0xd2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc811, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc812, .a=0x66, .x=0x8f, .y=0x9d, .sp=0xd2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc811, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc811, .value=0xfc, .type=IO_READ},
        {.addr=0xc812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0067) {
    const struct CPU_State initial_cpu = {.pc=0x10a6, .a=0xcc, .x=0x02, .y=0x09, .sp=0x23, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x10a6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x10a7, .a=0xcc, .x=0x02, .y=0x0a, .sp=0x23, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x10a6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x10a6, .value=0xfc, .type=IO_READ},
        {.addr=0x10a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd1f6, .a=0xfa, .x=0x6e, .y=0x24, .sp=0xbe, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd1f7, .a=0xfa, .x=0x6e, .y=0x25, .sp=0xbe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd1f6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd1f6, .value=0xfc, .type=IO_READ},
        {.addr=0xd1f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbc00, .a=0xb2, .x=0x60, .y=0xff, .sp=0xf1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc00, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbc01, .a=0xb2, .x=0x60, .y=0x00, .sp=0xf1, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xbc00, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbc00, .value=0xfc, .type=IO_READ},
        {.addr=0xbc01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006A) {
    const struct CPU_State initial_cpu = {.pc=0x6dab, .a=0xc5, .x=0x27, .y=0x2f, .sp=0x04, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x6dab, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6dac, .a=0xc5, .x=0x27, .y=0x30, .sp=0x04, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6dab, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6dab, .value=0xfc, .type=IO_READ},
        {.addr=0x6dac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006B) {
    const struct CPU_State initial_cpu = {.pc=0xe403, .a=0x01, .x=0x7c, .y=0xcf, .sp=0x87, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe403, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe404, .a=0x01, .x=0x7c, .y=0xd0, .sp=0x87, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe403, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe403, .value=0xfc, .type=IO_READ},
        {.addr=0xe404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006C) {
    const struct CPU_State initial_cpu = {.pc=0x1828, .a=0x12, .x=0xb2, .y=0x10, .sp=0x05, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x1828, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1829, .a=0x12, .x=0xb2, .y=0x11, .sp=0x05, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1828, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1828, .value=0xfc, .type=IO_READ},
        {.addr=0x1829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006D) {
    const struct CPU_State initial_cpu = {.pc=0x94de, .a=0xd7, .x=0xd9, .y=0x46, .sp=0xd1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x94de, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x94df, .a=0xd7, .x=0xd9, .y=0x47, .sp=0xd1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x94de, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x94de, .value=0xfc, .type=IO_READ},
        {.addr=0x94df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006E) {
    const struct CPU_State initial_cpu = {.pc=0x0f03, .a=0x8f, .x=0x09, .y=0xba, .sp=0xf7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0f03, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0f04, .a=0x8f, .x=0x09, .y=0xbb, .sp=0xf7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0f03, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0f03, .value=0xfc, .type=IO_READ},
        {.addr=0x0f04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_006F) {
    const struct CPU_State initial_cpu = {.pc=0xf24c, .a=0x91, .x=0x85, .y=0xc5, .sp=0xbd, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf24c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf24d, .a=0x91, .x=0x85, .y=0xc6, .sp=0xbd, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf24c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf24c, .value=0xfc, .type=IO_READ},
        {.addr=0xf24d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbbde, .a=0xae, .x=0x54, .y=0x3e, .sp=0x1d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xbbde, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbbdf, .a=0xae, .x=0x54, .y=0x3f, .sp=0x1d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbbde, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbbde, .value=0xfc, .type=IO_READ},
        {.addr=0xbbdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf63e, .a=0x17, .x=0xb9, .y=0x13, .sp=0x48, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf63e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf63f, .a=0x17, .x=0xb9, .y=0x14, .sp=0x48, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf63e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf63e, .value=0xfc, .type=IO_READ},
        {.addr=0xf63f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0072) {
    const struct CPU_State initial_cpu = {.pc=0x50ce, .a=0xce, .x=0xff, .y=0x89, .sp=0x39, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x50ce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x50cf, .a=0xce, .x=0xff, .y=0x8a, .sp=0x39, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x50ce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x50ce, .value=0xfc, .type=IO_READ},
        {.addr=0x50cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0073) {
    const struct CPU_State initial_cpu = {.pc=0xe9c4, .a=0xb8, .x=0x7f, .y=0xe0, .sp=0x89, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe9c5, .a=0xb8, .x=0x7f, .y=0xe1, .sp=0x89, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe9c4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe9c4, .value=0xfc, .type=IO_READ},
        {.addr=0xe9c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0074) {
    const struct CPU_State initial_cpu = {.pc=0x5612, .a=0x70, .x=0x4d, .y=0x32, .sp=0x42, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5612, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5613, .a=0x70, .x=0x4d, .y=0x33, .sp=0x42, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5612, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5612, .value=0xfc, .type=IO_READ},
        {.addr=0x5613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0075) {
    const struct CPU_State initial_cpu = {.pc=0xe0a6, .a=0xee, .x=0xbc, .y=0x38, .sp=0x09, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe0a7, .a=0xee, .x=0xbc, .y=0x39, .sp=0x09, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe0a6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe0a6, .value=0xfc, .type=IO_READ},
        {.addr=0xe0a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0076) {
    const struct CPU_State initial_cpu = {.pc=0x884e, .a=0x33, .x=0x0f, .y=0x6c, .sp=0x01, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x884e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x884f, .a=0x33, .x=0x0f, .y=0x6d, .sp=0x01, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x884e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x884e, .value=0xfc, .type=IO_READ},
        {.addr=0x884f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0077) {
    const struct CPU_State initial_cpu = {.pc=0x3a09, .a=0x33, .x=0x4c, .y=0x20, .sp=0x83, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3a09, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a0a, .a=0x33, .x=0x4c, .y=0x21, .sp=0x83, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3a09, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a09, .value=0xfc, .type=IO_READ},
        {.addr=0x3a0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0078) {
    const struct CPU_State initial_cpu = {.pc=0x88b1, .a=0x35, .x=0x47, .y=0x90, .sp=0x87, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x88b1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x88b2, .a=0x35, .x=0x47, .y=0x91, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x88b1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x88b1, .value=0xfc, .type=IO_READ},
        {.addr=0x88b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0079) {
    const struct CPU_State initial_cpu = {.pc=0x6614, .a=0x45, .x=0xfd, .y=0xdb, .sp=0xbf, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6614, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6615, .a=0x45, .x=0xfd, .y=0xdc, .sp=0xbf, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6614, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6614, .value=0xfc, .type=IO_READ},
        {.addr=0x6615, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007A) {
    const struct CPU_State initial_cpu = {.pc=0x3524, .a=0x4a, .x=0x72, .y=0x33, .sp=0x98, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3524, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3525, .a=0x4a, .x=0x72, .y=0x34, .sp=0x98, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3524, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3524, .value=0xfc, .type=IO_READ},
        {.addr=0x3525, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007B) {
    const struct CPU_State initial_cpu = {.pc=0x71e2, .a=0x46, .x=0x97, .y=0xaf, .sp=0xb8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x71e2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x71e3, .a=0x46, .x=0x97, .y=0xb0, .sp=0xb8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x71e2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x71e2, .value=0xfc, .type=IO_READ},
        {.addr=0x71e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007C) {
    const struct CPU_State initial_cpu = {.pc=0xf306, .a=0xfc, .x=0x98, .y=0xbc, .sp=0x7b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf306, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf307, .a=0xfc, .x=0x98, .y=0xbd, .sp=0x7b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf306, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf306, .value=0xfc, .type=IO_READ},
        {.addr=0xf307, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007D) {
    const struct CPU_State initial_cpu = {.pc=0xe6ed, .a=0x98, .x=0x08, .y=0xb5, .sp=0x2c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xe6ed, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe6ee, .a=0x98, .x=0x08, .y=0xb6, .sp=0x2c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe6ed, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe6ed, .value=0xfc, .type=IO_READ},
        {.addr=0xe6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007E) {
    const struct CPU_State initial_cpu = {.pc=0xbf82, .a=0x4e, .x=0xe3, .y=0x1b, .sp=0x4d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbf82, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbf83, .a=0x4e, .x=0xe3, .y=0x1c, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbf82, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbf82, .value=0xfc, .type=IO_READ},
        {.addr=0xbf83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4a5e, .a=0x06, .x=0x9e, .y=0x60, .sp=0xb7, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4a5f, .a=0x06, .x=0x9e, .y=0x61, .sp=0xb7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4a5e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4a5e, .value=0xfc, .type=IO_READ},
        {.addr=0x4a5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0080) {
    const struct CPU_State initial_cpu = {.pc=0xfeef, .a=0x97, .x=0x08, .y=0x32, .sp=0xa2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfeef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfef0, .a=0x97, .x=0x08, .y=0x33, .sp=0xa2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfeef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfeef, .value=0xfc, .type=IO_READ},
        {.addr=0xfef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb3d6, .a=0x82, .x=0x70, .y=0x2b, .sp=0xbf, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb3d7, .a=0x82, .x=0x70, .y=0x2c, .sp=0xbf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb3d6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb3d6, .value=0xfc, .type=IO_READ},
        {.addr=0xb3d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0082) {
    const struct CPU_State initial_cpu = {.pc=0x0091, .a=0x14, .x=0x20, .y=0xcf, .sp=0x30, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0092, .a=0x14, .x=0x20, .y=0xd0, .sp=0x30, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0091, .value=0xfc, .type=IO_READ},
        {.addr=0x0092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0083) {
    const struct CPU_State initial_cpu = {.pc=0x2077, .a=0x9f, .x=0x42, .y=0x47, .sp=0x4e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2077, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2078, .a=0x9f, .x=0x42, .y=0x48, .sp=0x4e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2077, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2077, .value=0xfc, .type=IO_READ},
        {.addr=0x2078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0084) {
    const struct CPU_State initial_cpu = {.pc=0x9789, .a=0x19, .x=0x47, .y=0xdc, .sp=0xdb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9789, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x978a, .a=0x19, .x=0x47, .y=0xdd, .sp=0xdb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9789, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9789, .value=0xfc, .type=IO_READ},
        {.addr=0x978a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5ea6, .a=0x35, .x=0x33, .y=0xe2, .sp=0x0c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5ea7, .a=0x35, .x=0x33, .y=0xe3, .sp=0x0c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5ea6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5ea6, .value=0xfc, .type=IO_READ},
        {.addr=0x5ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0086) {
    const struct CPU_State initial_cpu = {.pc=0xaad8, .a=0xc0, .x=0x06, .y=0x26, .sp=0xbe, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaad8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaad9, .a=0xc0, .x=0x06, .y=0x27, .sp=0xbe, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaad8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaad8, .value=0xfc, .type=IO_READ},
        {.addr=0xaad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa6b6, .a=0xfe, .x=0x30, .y=0x7e, .sp=0x05, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa6b7, .a=0xfe, .x=0x30, .y=0x7f, .sp=0x05, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa6b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa6b6, .value=0xfc, .type=IO_READ},
        {.addr=0xa6b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0088) {
    const struct CPU_State initial_cpu = {.pc=0x97bd, .a=0xf6, .x=0xab, .y=0x39, .sp=0x36, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x97bd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x97be, .a=0xf6, .x=0xab, .y=0x3a, .sp=0x36, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x97bd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x97bd, .value=0xfc, .type=IO_READ},
        {.addr=0x97be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe3e4, .a=0x9b, .x=0x82, .y=0x1e, .sp=0x45, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe3e5, .a=0x9b, .x=0x82, .y=0x1f, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe3e4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe3e4, .value=0xfc, .type=IO_READ},
        {.addr=0xe3e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008A) {
    const struct CPU_State initial_cpu = {.pc=0xf588, .a=0x60, .x=0x73, .y=0x35, .sp=0x6d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xf588, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf589, .a=0x60, .x=0x73, .y=0x36, .sp=0x6d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf588, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf588, .value=0xfc, .type=IO_READ},
        {.addr=0xf589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008B) {
    const struct CPU_State initial_cpu = {.pc=0x11c0, .a=0xa8, .x=0xe0, .y=0x65, .sp=0x9c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x11c0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x11c1, .a=0xa8, .x=0xe0, .y=0x66, .sp=0x9c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x11c0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x11c0, .value=0xfc, .type=IO_READ},
        {.addr=0x11c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008C) {
    const struct CPU_State initial_cpu = {.pc=0xf9a7, .a=0xc5, .x=0xd1, .y=0xf1, .sp=0x73, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf9a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf9a8, .a=0xc5, .x=0xd1, .y=0xf2, .sp=0x73, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf9a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf9a7, .value=0xfc, .type=IO_READ},
        {.addr=0xf9a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008D) {
    const struct CPU_State initial_cpu = {.pc=0xffc6, .a=0x7a, .x=0x08, .y=0x30, .sp=0xfa, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xffc6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xffc7, .a=0x7a, .x=0x08, .y=0x31, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xffc6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xffc6, .value=0xfc, .type=IO_READ},
        {.addr=0xffc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd5ad, .a=0x58, .x=0x18, .y=0x13, .sp=0xa8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ad, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd5ae, .a=0x58, .x=0x18, .y=0x14, .sp=0xa8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd5ad, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd5ad, .value=0xfc, .type=IO_READ},
        {.addr=0xd5ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_008F) {
    const struct CPU_State initial_cpu = {.pc=0xff3a, .a=0xcd, .x=0x30, .y=0xc3, .sp=0xd8, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xff3a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xff3b, .a=0xcd, .x=0x30, .y=0xc4, .sp=0xd8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xff3a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xff3a, .value=0xfc, .type=IO_READ},
        {.addr=0xff3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0090) {
    const struct CPU_State initial_cpu = {.pc=0x2fc9, .a=0x9f, .x=0x84, .y=0x4f, .sp=0xa6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2fca, .a=0x9f, .x=0x84, .y=0x50, .sp=0xa6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2fc9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2fc9, .value=0xfc, .type=IO_READ},
        {.addr=0x2fca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0091) {
    const struct CPU_State initial_cpu = {.pc=0x948a, .a=0x79, .x=0xa0, .y=0xcd, .sp=0x3b, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x948a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x948b, .a=0x79, .x=0xa0, .y=0xce, .sp=0x3b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x948a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x948a, .value=0xfc, .type=IO_READ},
        {.addr=0x948b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0092) {
    const struct CPU_State initial_cpu = {.pc=0x1ec9, .a=0x28, .x=0x65, .y=0x4e, .sp=0x5e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1eca, .a=0x28, .x=0x65, .y=0x4f, .sp=0x5e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1ec9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1ec9, .value=0xfc, .type=IO_READ},
        {.addr=0x1eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0093) {
    const struct CPU_State initial_cpu = {.pc=0x6096, .a=0xac, .x=0x66, .y=0xf2, .sp=0x7e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x6096, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6097, .a=0xac, .x=0x66, .y=0xf3, .sp=0x7e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6096, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6096, .value=0xfc, .type=IO_READ},
        {.addr=0x6097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0094) {
    const struct CPU_State initial_cpu = {.pc=0x0a7e, .a=0x25, .x=0x44, .y=0x2b, .sp=0xe8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0a7e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0a7f, .a=0x25, .x=0x44, .y=0x2c, .sp=0xe8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0a7e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0a7e, .value=0xfc, .type=IO_READ},
        {.addr=0x0a7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0095) {
    const struct CPU_State initial_cpu = {.pc=0x17bd, .a=0x8c, .x=0x22, .y=0x60, .sp=0xea, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x17bd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x17be, .a=0x8c, .x=0x22, .y=0x61, .sp=0xea, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x17bd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x17bd, .value=0xfc, .type=IO_READ},
        {.addr=0x17be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0096) {
    const struct CPU_State initial_cpu = {.pc=0x191f, .a=0xe0, .x=0x31, .y=0x65, .sp=0xa6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x191f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1920, .a=0xe0, .x=0x31, .y=0x66, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x191f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x191f, .value=0xfc, .type=IO_READ},
        {.addr=0x1920, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0097) {
    const struct CPU_State initial_cpu = {.pc=0xfacb, .a=0x77, .x=0xd2, .y=0xe6, .sp=0xae, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xfacb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfacc, .a=0x77, .x=0xd2, .y=0xe7, .sp=0xae, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xfacb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfacb, .value=0xfc, .type=IO_READ},
        {.addr=0xfacc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0098) {
    const struct CPU_State initial_cpu = {.pc=0xf75c, .a=0xe3, .x=0x85, .y=0xcd, .sp=0x18, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf75c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf75d, .a=0xe3, .x=0x85, .y=0xce, .sp=0x18, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf75c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf75c, .value=0xfc, .type=IO_READ},
        {.addr=0xf75d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0099) {
    const struct CPU_State initial_cpu = {.pc=0xce41, .a=0x6d, .x=0x33, .y=0xa1, .sp=0x8a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xce41, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xce42, .a=0x6d, .x=0x33, .y=0xa2, .sp=0x8a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xce41, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xce41, .value=0xfc, .type=IO_READ},
        {.addr=0xce42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009A) {
    const struct CPU_State initial_cpu = {.pc=0x0856, .a=0x7d, .x=0x76, .y=0x95, .sp=0xb5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0856, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0857, .a=0x7d, .x=0x76, .y=0x96, .sp=0xb5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0856, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0856, .value=0xfc, .type=IO_READ},
        {.addr=0x0857, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009B) {
    const struct CPU_State initial_cpu = {.pc=0x2352, .a=0x55, .x=0x56, .y=0x20, .sp=0x49, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2352, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2353, .a=0x55, .x=0x56, .y=0x21, .sp=0x49, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2352, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2352, .value=0xfc, .type=IO_READ},
        {.addr=0x2353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009C) {
    const struct CPU_State initial_cpu = {.pc=0xdc94, .a=0xe3, .x=0x1c, .y=0x96, .sp=0x83, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xdc94, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdc95, .a=0xe3, .x=0x1c, .y=0x97, .sp=0x83, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdc94, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdc94, .value=0xfc, .type=IO_READ},
        {.addr=0xdc95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009D) {
    const struct CPU_State initial_cpu = {.pc=0x3489, .a=0x4b, .x=0xef, .y=0x67, .sp=0xef, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3489, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x348a, .a=0x4b, .x=0xef, .y=0x68, .sp=0xef, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3489, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3489, .value=0xfc, .type=IO_READ},
        {.addr=0x348a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009E) {
    const struct CPU_State initial_cpu = {.pc=0xe666, .a=0xc0, .x=0x5d, .y=0x0b, .sp=0xe6, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe666, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe667, .a=0xc0, .x=0x5d, .y=0x0c, .sp=0xe6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe666, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe666, .value=0xfc, .type=IO_READ},
        {.addr=0xe667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_009F) {
    const struct CPU_State initial_cpu = {.pc=0x132f, .a=0x20, .x=0xad, .y=0xa7, .sp=0x04, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x132f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1330, .a=0x20, .x=0xad, .y=0xa8, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x132f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x132f, .value=0xfc, .type=IO_READ},
        {.addr=0x1330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x47ba, .a=0x19, .x=0x97, .y=0xfa, .sp=0x95, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x47ba, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x47bb, .a=0x19, .x=0x97, .y=0xfb, .sp=0x95, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x47ba, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x47ba, .value=0xfc, .type=IO_READ},
        {.addr=0x47bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x6ebd, .a=0x9f, .x=0x99, .y=0xd5, .sp=0xb3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ebd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6ebe, .a=0x9f, .x=0x99, .y=0xd6, .sp=0xb3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6ebd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6ebd, .value=0xfc, .type=IO_READ},
        {.addr=0x6ebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x6899, .a=0x24, .x=0xca, .y=0x03, .sp=0x66, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x6899, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x689a, .a=0x24, .x=0xca, .y=0x04, .sp=0x66, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6899, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6899, .value=0xfc, .type=IO_READ},
        {.addr=0x689a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xc1fa, .a=0xe1, .x=0x4c, .y=0x38, .sp=0x59, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc1fa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc1fb, .a=0xe1, .x=0x4c, .y=0x39, .sp=0x59, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc1fa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc1fa, .value=0xfc, .type=IO_READ},
        {.addr=0xc1fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xf4e6, .a=0xb4, .x=0x22, .y=0x9a, .sp=0x73, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf4e7, .a=0xb4, .x=0x22, .y=0x9b, .sp=0x73, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf4e6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf4e6, .value=0xfc, .type=IO_READ},
        {.addr=0xf4e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x05fd, .a=0xd3, .x=0xe4, .y=0x4b, .sp=0x68, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x05fd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x05fe, .a=0xd3, .x=0xe4, .y=0x4c, .sp=0x68, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x05fd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x05fd, .value=0xfc, .type=IO_READ},
        {.addr=0x05fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x2490, .a=0x53, .x=0xcd, .y=0x05, .sp=0xd4, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2490, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2491, .a=0x53, .x=0xcd, .y=0x06, .sp=0xd4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2490, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2490, .value=0xfc, .type=IO_READ},
        {.addr=0x2491, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x8e50, .a=0x66, .x=0x3f, .y=0x66, .sp=0x78, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8e50, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8e51, .a=0x66, .x=0x3f, .y=0x67, .sp=0x78, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8e50, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8e50, .value=0xfc, .type=IO_READ},
        {.addr=0x8e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x94e3, .a=0xa2, .x=0x81, .y=0x20, .sp=0x2d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x94e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x94e4, .a=0xa2, .x=0x81, .y=0x21, .sp=0x2d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x94e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x94e3, .value=0xfc, .type=IO_READ},
        {.addr=0x94e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x548a, .a=0x75, .x=0x15, .y=0x4d, .sp=0x2c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x548a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x548b, .a=0x75, .x=0x15, .y=0x4e, .sp=0x2c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x548a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x548a, .value=0xfc, .type=IO_READ},
        {.addr=0x548b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x0b4a, .a=0x05, .x=0xbc, .y=0x21, .sp=0xc4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b4a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0b4b, .a=0x05, .x=0xbc, .y=0x22, .sp=0xc4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0b4a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0b4a, .value=0xfc, .type=IO_READ},
        {.addr=0x0b4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xb682, .a=0xb3, .x=0x6b, .y=0x16, .sp=0x0c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb682, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb683, .a=0xb3, .x=0x6b, .y=0x17, .sp=0x0c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb682, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb682, .value=0xfc, .type=IO_READ},
        {.addr=0xb683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x098b, .a=0x6c, .x=0x78, .y=0x44, .sp=0x34, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x098b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x098c, .a=0x6c, .x=0x78, .y=0x45, .sp=0x34, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x098b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x098b, .value=0xfc, .type=IO_READ},
        {.addr=0x098c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x4fbe, .a=0x4c, .x=0xc2, .y=0xb3, .sp=0xda, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4fbe, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4fbf, .a=0x4c, .x=0xc2, .y=0xb4, .sp=0xda, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4fbe, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4fbe, .value=0xfc, .type=IO_READ},
        {.addr=0x4fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xef38, .a=0xec, .x=0x8b, .y=0x95, .sp=0x0e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xef38, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xef39, .a=0xec, .x=0x8b, .y=0x96, .sp=0x0e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xef38, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xef38, .value=0xfc, .type=IO_READ},
        {.addr=0xef39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x2767, .a=0x88, .x=0x9c, .y=0x6e, .sp=0x1b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2767, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2768, .a=0x88, .x=0x9c, .y=0x6f, .sp=0x1b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2767, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2767, .value=0xfc, .type=IO_READ},
        {.addr=0x2768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x7a28, .a=0x89, .x=0x86, .y=0x50, .sp=0x26, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x7a28, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7a29, .a=0x89, .x=0x86, .y=0x51, .sp=0x26, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7a28, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7a28, .value=0xfc, .type=IO_READ},
        {.addr=0x7a29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x676c, .a=0x48, .x=0x85, .y=0xe4, .sp=0x8b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x676c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x676d, .a=0x48, .x=0x85, .y=0xe5, .sp=0x8b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x676c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x676c, .value=0xfc, .type=IO_READ},
        {.addr=0x676d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xe157, .a=0x4c, .x=0x1a, .y=0xe5, .sp=0x4d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe157, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe158, .a=0x4c, .x=0x1a, .y=0xe6, .sp=0x4d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe157, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe157, .value=0xfc, .type=IO_READ},
        {.addr=0xe158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xe0d7, .a=0x8a, .x=0x26, .y=0x09, .sp=0x77, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe0d8, .a=0x8a, .x=0x26, .y=0x0a, .sp=0x77, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe0d7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe0d7, .value=0xfc, .type=IO_READ},
        {.addr=0xe0d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x8db7, .a=0xbe, .x=0x5a, .y=0x1d, .sp=0x9f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8db7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8db8, .a=0xbe, .x=0x5a, .y=0x1e, .sp=0x9f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8db7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8db7, .value=0xfc, .type=IO_READ},
        {.addr=0x8db8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xff62, .a=0x68, .x=0xf0, .y=0x3c, .sp=0x48, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xff62, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xff63, .a=0x68, .x=0xf0, .y=0x3d, .sp=0x48, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xff62, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xff62, .value=0xfc, .type=IO_READ},
        {.addr=0xff63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x8ae5, .a=0x88, .x=0x40, .y=0xcf, .sp=0xa9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ae6, .a=0x88, .x=0x40, .y=0xd0, .sp=0xa9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8ae5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8ae5, .value=0xfc, .type=IO_READ},
        {.addr=0x8ae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xdec5, .a=0x48, .x=0xce, .y=0xd1, .sp=0x6e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xdec5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdec6, .a=0x48, .x=0xce, .y=0xd2, .sp=0x6e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdec5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdec5, .value=0xfc, .type=IO_READ},
        {.addr=0xdec6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xfef5, .a=0x69, .x=0x6d, .y=0xb5, .sp=0xdd, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xfef5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfef6, .a=0x69, .x=0x6d, .y=0xb6, .sp=0xdd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xfef5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfef5, .value=0xfc, .type=IO_READ},
        {.addr=0xfef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x91d5, .a=0x4c, .x=0x75, .y=0xfd, .sp=0xda, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x91d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x91d6, .a=0x4c, .x=0x75, .y=0xfe, .sp=0xda, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x91d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x91d5, .value=0xfc, .type=IO_READ},
        {.addr=0x91d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x4d02, .a=0x15, .x=0xa8, .y=0x35, .sp=0x68, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4d02, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d03, .a=0x15, .x=0xa8, .y=0x36, .sp=0x68, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4d02, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d02, .value=0xfc, .type=IO_READ},
        {.addr=0x4d03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5c5e, .a=0x7e, .x=0x89, .y=0xf9, .sp=0x0d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5c5e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5c5f, .a=0x7e, .x=0x89, .y=0xfa, .sp=0x0d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5c5e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5c5e, .value=0xfc, .type=IO_READ},
        {.addr=0x5c5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x4e1a, .a=0xac, .x=0xf6, .y=0x50, .sp=0xc7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4e1a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4e1b, .a=0xac, .x=0xf6, .y=0x51, .sp=0xc7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4e1a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4e1a, .value=0xfc, .type=IO_READ},
        {.addr=0x4e1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x5850, .a=0xfa, .x=0x42, .y=0x46, .sp=0xd0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x5850, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5851, .a=0xfa, .x=0x42, .y=0x47, .sp=0xd0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5850, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5850, .value=0xfc, .type=IO_READ},
        {.addr=0x5851, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x0384, .a=0x63, .x=0x91, .y=0xbf, .sp=0x82, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0384, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0385, .a=0x63, .x=0x91, .y=0xc0, .sp=0x82, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0384, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0384, .value=0xfc, .type=IO_READ},
        {.addr=0x0385, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x1f54, .a=0xd6, .x=0xd7, .y=0xac, .sp=0xe7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1f54, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1f55, .a=0xd6, .x=0xd7, .y=0xad, .sp=0xe7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1f54, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1f54, .value=0xfc, .type=IO_READ},
        {.addr=0x1f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x803e, .a=0x00, .x=0x0b, .y=0xf5, .sp=0x00, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x803e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x803f, .a=0x00, .x=0x0b, .y=0xf6, .sp=0x00, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x803e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x803e, .value=0xfc, .type=IO_READ},
        {.addr=0x803f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x40b5, .a=0x8e, .x=0x95, .y=0x26, .sp=0xfa, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x40b5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x40b6, .a=0x8e, .x=0x95, .y=0x27, .sp=0xfa, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x40b5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x40b5, .value=0xfc, .type=IO_READ},
        {.addr=0x40b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xbad7, .a=0x31, .x=0x4d, .y=0x83, .sp=0xa8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xbad7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbad8, .a=0x31, .x=0x4d, .y=0x84, .sp=0xa8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbad7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbad7, .value=0xfc, .type=IO_READ},
        {.addr=0xbad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xfca5, .a=0x87, .x=0x98, .y=0x85, .sp=0xbc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xfca5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfca6, .a=0x87, .x=0x98, .y=0x86, .sp=0xbc, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xfca5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfca5, .value=0xfc, .type=IO_READ},
        {.addr=0xfca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x748e, .a=0x7a, .x=0x40, .y=0xbf, .sp=0x8c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x748e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x748f, .a=0x7a, .x=0x40, .y=0xc0, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x748e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x748e, .value=0xfc, .type=IO_READ},
        {.addr=0x748f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x518c, .a=0x71, .x=0x5e, .y=0xdc, .sp=0x95, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x518c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x518d, .a=0x71, .x=0x5e, .y=0xdd, .sp=0x95, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x518c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x518c, .value=0xfc, .type=IO_READ},
        {.addr=0x518d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6078, .a=0xea, .x=0x3f, .y=0x9f, .sp=0x8f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6078, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6079, .a=0xea, .x=0x3f, .y=0xa0, .sp=0x8f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6078, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6078, .value=0xfc, .type=IO_READ},
        {.addr=0x6079, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xeaea, .a=0x52, .x=0xe8, .y=0x7c, .sp=0xd5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xeaea, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xeaeb, .a=0x52, .x=0xe8, .y=0x7d, .sp=0xd5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xeaea, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xeaea, .value=0xfc, .type=IO_READ},
        {.addr=0xeaeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x566e, .a=0xac, .x=0x67, .y=0x2b, .sp=0x99, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x566e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x566f, .a=0xac, .x=0x67, .y=0x2c, .sp=0x99, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x566e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x566e, .value=0xfc, .type=IO_READ},
        {.addr=0x566f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xd511, .a=0xa7, .x=0x7e, .y=0xbc, .sp=0xf1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd511, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd512, .a=0xa7, .x=0x7e, .y=0xbd, .sp=0xf1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd511, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd511, .value=0xfc, .type=IO_READ},
        {.addr=0xd512, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa4be, .a=0x83, .x=0xca, .y=0xc3, .sp=0xaa, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xa4be, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa4bf, .a=0x83, .x=0xca, .y=0xc4, .sp=0xaa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa4be, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa4be, .value=0xfc, .type=IO_READ},
        {.addr=0xa4bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xbaef, .a=0xad, .x=0x04, .y=0x07, .sp=0x6b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xbaef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbaf0, .a=0xad, .x=0x04, .y=0x08, .sp=0x6b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbaef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbaef, .value=0xfc, .type=IO_READ},
        {.addr=0xbaf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa5c7, .a=0x51, .x=0x61, .y=0x55, .sp=0x6a, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa5c8, .a=0x51, .x=0x61, .y=0x56, .sp=0x6a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa5c7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa5c7, .value=0xfc, .type=IO_READ},
        {.addr=0xa5c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x41fd, .a=0xbd, .x=0xca, .y=0xc7, .sp=0x61, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x41fd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x41fe, .a=0xbd, .x=0xca, .y=0xc8, .sp=0x61, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x41fd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x41fd, .value=0xfc, .type=IO_READ},
        {.addr=0x41fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xc504, .a=0x17, .x=0x82, .y=0x7e, .sp=0x63, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc504, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc505, .a=0x17, .x=0x82, .y=0x7f, .sp=0x63, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc504, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc504, .value=0xfc, .type=IO_READ},
        {.addr=0xc505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x5b80, .a=0xee, .x=0xa7, .y=0x45, .sp=0xc6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5b80, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b81, .a=0xee, .x=0xa7, .y=0x46, .sp=0xc6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5b80, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b80, .value=0xfc, .type=IO_READ},
        {.addr=0x5b81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb4ab, .a=0x38, .x=0x1a, .y=0x13, .sp=0xed, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ab, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb4ac, .a=0x38, .x=0x1a, .y=0x14, .sp=0xed, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb4ab, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb4ab, .value=0xfc, .type=IO_READ},
        {.addr=0xb4ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x4559, .a=0x7a, .x=0x49, .y=0x82, .sp=0x75, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4559, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x455a, .a=0x7a, .x=0x49, .y=0x83, .sp=0x75, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4559, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4559, .value=0xfc, .type=IO_READ},
        {.addr=0x455a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xce7e, .a=0x1e, .x=0x3e, .y=0x58, .sp=0x72, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xce7e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xce7f, .a=0x1e, .x=0x3e, .y=0x59, .sp=0x72, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xce7e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xce7e, .value=0xfc, .type=IO_READ},
        {.addr=0xce7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x0268, .a=0x33, .x=0xa7, .y=0xe2, .sp=0x90, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0268, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0269, .a=0x33, .x=0xa7, .y=0xe3, .sp=0x90, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0268, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0268, .value=0xfc, .type=IO_READ},
        {.addr=0x0269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xfdad, .a=0xa2, .x=0x31, .y=0xb0, .sp=0x0e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xfdad, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfdae, .a=0xa2, .x=0x31, .y=0xb1, .sp=0x0e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfdad, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfdad, .value=0xfc, .type=IO_READ},
        {.addr=0xfdae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x765f, .a=0x5b, .x=0xce, .y=0x46, .sp=0x83, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x765f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7660, .a=0x5b, .x=0xce, .y=0x47, .sp=0x83, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x765f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x765f, .value=0xfc, .type=IO_READ},
        {.addr=0x7660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x8423, .a=0x22, .x=0x5d, .y=0xda, .sp=0x12, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8423, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8424, .a=0x22, .x=0x5d, .y=0xdb, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8423, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8423, .value=0xfc, .type=IO_READ},
        {.addr=0x8424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x809c, .a=0x49, .x=0xe4, .y=0xb4, .sp=0x18, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x809c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x809d, .a=0x49, .x=0xe4, .y=0xb5, .sp=0x18, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x809c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x809c, .value=0xfc, .type=IO_READ},
        {.addr=0x809d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x0a3b, .a=0x81, .x=0xe9, .y=0xa9, .sp=0x62, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0a3b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0a3c, .a=0x81, .x=0xe9, .y=0xaa, .sp=0x62, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0a3b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0a3b, .value=0xfc, .type=IO_READ},
        {.addr=0x0a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x62c1, .a=0xa2, .x=0x3b, .y=0xac, .sp=0x01, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x62c1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x62c2, .a=0xa2, .x=0x3b, .y=0xad, .sp=0x01, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x62c1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x62c1, .value=0xfc, .type=IO_READ},
        {.addr=0x62c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7ae1, .a=0xc3, .x=0xac, .y=0xa0, .sp=0x3f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7ae2, .a=0xc3, .x=0xac, .y=0xa1, .sp=0x3f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7ae1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7ae1, .value=0xfc, .type=IO_READ},
        {.addr=0x7ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x3560, .a=0xed, .x=0x14, .y=0x0f, .sp=0xc8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3560, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3561, .a=0xed, .x=0x14, .y=0x10, .sp=0xc8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3560, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3560, .value=0xfc, .type=IO_READ},
        {.addr=0x3561, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x87bc, .a=0x33, .x=0x16, .y=0x65, .sp=0xca, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x87bc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x87bd, .a=0x33, .x=0x16, .y=0x66, .sp=0xca, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x87bc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x87bc, .value=0xfc, .type=IO_READ},
        {.addr=0x87bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x31a0, .a=0xca, .x=0xf5, .y=0xf5, .sp=0xe7, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x31a0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x31a1, .a=0xca, .x=0xf5, .y=0xf6, .sp=0xe7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x31a0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x31a0, .value=0xfc, .type=IO_READ},
        {.addr=0x31a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xf0f1, .a=0x81, .x=0x70, .y=0xb0, .sp=0x89, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xf0f1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf0f2, .a=0x81, .x=0x70, .y=0xb1, .sp=0x89, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf0f1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf0f1, .value=0xfc, .type=IO_READ},
        {.addr=0xf0f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x1634, .a=0xe5, .x=0x22, .y=0x17, .sp=0x4a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1634, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1635, .a=0xe5, .x=0x22, .y=0x18, .sp=0x4a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1634, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1634, .value=0xfc, .type=IO_READ},
        {.addr=0x1635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x6060, .a=0x00, .x=0xb4, .y=0x06, .sp=0x1d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6060, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6061, .a=0x00, .x=0xb4, .y=0x07, .sp=0x1d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6060, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6060, .value=0xfc, .type=IO_READ},
        {.addr=0x6061, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x5982, .a=0xb3, .x=0x87, .y=0x39, .sp=0xb0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5982, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5983, .a=0xb3, .x=0x87, .y=0x3a, .sp=0xb0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5982, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5982, .value=0xfc, .type=IO_READ},
        {.addr=0x5983, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x20ca, .a=0xc2, .x=0xa6, .y=0x0a, .sp=0xea, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x20ca, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x20cb, .a=0xc2, .x=0xa6, .y=0x0b, .sp=0xea, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x20ca, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x20ca, .value=0xfc, .type=IO_READ},
        {.addr=0x20cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb301, .a=0x84, .x=0x8c, .y=0xd5, .sp=0x24, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb301, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb302, .a=0x84, .x=0x8c, .y=0xd6, .sp=0x24, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb301, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb301, .value=0xfc, .type=IO_READ},
        {.addr=0xb302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xd187, .a=0xae, .x=0xa7, .y=0x9c, .sp=0x73, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xd187, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd188, .a=0xae, .x=0xa7, .y=0x9d, .sp=0x73, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd187, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd187, .value=0xfc, .type=IO_READ},
        {.addr=0xd188, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x050d, .a=0xd0, .x=0xc3, .y=0x47, .sp=0xb6, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x050d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x050e, .a=0xd0, .x=0xc3, .y=0x48, .sp=0xb6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x050d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x050d, .value=0xfc, .type=IO_READ},
        {.addr=0x050e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x214c, .a=0x66, .x=0xc2, .y=0x42, .sp=0xf2, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x214c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x214d, .a=0x66, .x=0xc2, .y=0x43, .sp=0xf2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x214c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x214c, .value=0xfc, .type=IO_READ},
        {.addr=0x214d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x8092, .a=0x75, .x=0xbf, .y=0xe8, .sp=0xab, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8092, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8093, .a=0x75, .x=0xbf, .y=0xe9, .sp=0xab, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8092, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8092, .value=0xfc, .type=IO_READ},
        {.addr=0x8093, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x6135, .a=0x2f, .x=0x5c, .y=0x24, .sp=0x06, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6135, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6136, .a=0x2f, .x=0x5c, .y=0x25, .sp=0x06, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6135, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6135, .value=0xfc, .type=IO_READ},
        {.addr=0x6136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x1c14, .a=0xf4, .x=0x7e, .y=0x92, .sp=0x62, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c14, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1c15, .a=0xf4, .x=0x7e, .y=0x93, .sp=0x62, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1c14, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1c14, .value=0xfc, .type=IO_READ},
        {.addr=0x1c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xdb66, .a=0x8a, .x=0x75, .y=0x25, .sp=0xbd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xdb66, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdb67, .a=0x8a, .x=0x75, .y=0x26, .sp=0xbd, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdb66, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdb66, .value=0xfc, .type=IO_READ},
        {.addr=0xdb67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xb891, .a=0x18, .x=0x23, .y=0x13, .sp=0x71, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb891, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb892, .a=0x18, .x=0x23, .y=0x14, .sp=0x71, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb891, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb891, .value=0xfc, .type=IO_READ},
        {.addr=0xb892, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xd9b1, .a=0xf3, .x=0xc9, .y=0x10, .sp=0x1a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd9b2, .a=0xf3, .x=0xc9, .y=0x11, .sp=0x1a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd9b1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd9b1, .value=0xfc, .type=IO_READ},
        {.addr=0xd9b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x4b16, .a=0x45, .x=0xeb, .y=0xfd, .sp=0x7d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b16, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4b17, .a=0x45, .x=0xeb, .y=0xfe, .sp=0x7d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4b16, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4b16, .value=0xfc, .type=IO_READ},
        {.addr=0x4b17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x5fb6, .a=0xb2, .x=0xdb, .y=0xcf, .sp=0xc4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5fb7, .a=0xb2, .x=0xdb, .y=0xd0, .sp=0xc4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5fb6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5fb6, .value=0xfc, .type=IO_READ},
        {.addr=0x5fb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x7e33, .a=0x74, .x=0x7b, .y=0x19, .sp=0x8c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x7e33, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7e34, .a=0x74, .x=0x7b, .y=0x1a, .sp=0x8c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7e33, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7e33, .value=0xfc, .type=IO_READ},
        {.addr=0x7e34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x013c, .a=0x37, .x=0x3e, .y=0x33, .sp=0xb0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x013d, .a=0x37, .x=0x3e, .y=0x34, .sp=0xb0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x013c, .value=0xfc, .type=IO_READ},
        {.addr=0x013d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x09be, .a=0xce, .x=0x2f, .y=0xb0, .sp=0x2d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x09be, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x09bf, .a=0xce, .x=0x2f, .y=0xb1, .sp=0x2d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x09be, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x09be, .value=0xfc, .type=IO_READ},
        {.addr=0x09bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xe401, .a=0x67, .x=0x1a, .y=0x07, .sp=0x10, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe401, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe402, .a=0x67, .x=0x1a, .y=0x08, .sp=0x10, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe401, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe401, .value=0xfc, .type=IO_READ},
        {.addr=0xe402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x7db2, .a=0xfd, .x=0x16, .y=0x93, .sp=0x38, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7db2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7db3, .a=0xfd, .x=0x16, .y=0x94, .sp=0x38, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7db2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7db2, .value=0xfc, .type=IO_READ},
        {.addr=0x7db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xced2, .a=0x51, .x=0xf1, .y=0xbb, .sp=0x48, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xced2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xced3, .a=0x51, .x=0xf1, .y=0xbc, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xced2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xced2, .value=0xfc, .type=IO_READ},
        {.addr=0xced3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x781b, .a=0xeb, .x=0x3c, .y=0xdf, .sp=0xc8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x781b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x781c, .a=0xeb, .x=0x3c, .y=0xe0, .sp=0xc8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x781b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x781b, .value=0xfc, .type=IO_READ},
        {.addr=0x781c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x3ff0, .a=0xc0, .x=0x80, .y=0xa3, .sp=0x4c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3ff1, .a=0xc0, .x=0x80, .y=0xa4, .sp=0x4c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3ff0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ff0, .value=0xfc, .type=IO_READ},
        {.addr=0x3ff1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x991c, .a=0x2f, .x=0x5d, .y=0x42, .sp=0xb4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x991c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x991d, .a=0x2f, .x=0x5d, .y=0x43, .sp=0xb4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x991c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x991c, .value=0xfc, .type=IO_READ},
        {.addr=0x991d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xab5f, .a=0xa4, .x=0x1d, .y=0x3b, .sp=0x25, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xab5f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xab60, .a=0xa4, .x=0x1d, .y=0x3c, .sp=0x25, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xab5f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xab5f, .value=0xfc, .type=IO_READ},
        {.addr=0xab60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xf46b, .a=0x69, .x=0x57, .y=0x8c, .sp=0x0a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xf46b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf46c, .a=0x69, .x=0x57, .y=0x8d, .sp=0x0a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf46b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf46b, .value=0xfc, .type=IO_READ},
        {.addr=0xf46c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x813e, .a=0xc6, .x=0x3a, .y=0x7f, .sp=0xa0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x813e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x813f, .a=0xc6, .x=0x3a, .y=0x80, .sp=0xa0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x813e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x813e, .value=0xfc, .type=IO_READ},
        {.addr=0x813f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xd9f7, .a=0x10, .x=0x1c, .y=0xf4, .sp=0x74, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd9f8, .a=0x10, .x=0x1c, .y=0xf5, .sp=0x74, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd9f7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd9f7, .value=0xfc, .type=IO_READ},
        {.addr=0xd9f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2b75, .a=0xde, .x=0xb6, .y=0xaa, .sp=0x0f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2b75, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2b76, .a=0xde, .x=0xb6, .y=0xab, .sp=0x0f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2b75, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2b75, .value=0xfc, .type=IO_READ},
        {.addr=0x2b76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xc1dc, .a=0xa9, .x=0x81, .y=0xfb, .sp=0x4e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc1dc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc1dd, .a=0xa9, .x=0x81, .y=0xfc, .sp=0x4e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc1dc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc1dc, .value=0xfc, .type=IO_READ},
        {.addr=0xc1dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x1bc9, .a=0x80, .x=0xd5, .y=0x72, .sp=0x0a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1bca, .a=0x80, .x=0xd5, .y=0x73, .sp=0x0a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1bc9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1bc9, .value=0xfc, .type=IO_READ},
        {.addr=0x1bca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xe716, .a=0x4c, .x=0x1f, .y=0x65, .sp=0xe7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe716, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe717, .a=0x4c, .x=0x1f, .y=0x66, .sp=0xe7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe716, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe716, .value=0xfc, .type=IO_READ},
        {.addr=0xe717, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0100) {
    const struct CPU_State initial_cpu = {.pc=0x1d03, .a=0x11, .x=0x6b, .y=0x23, .sp=0x52, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1d03, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1d04, .a=0x11, .x=0x6b, .y=0x24, .sp=0x52, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1d03, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1d03, .value=0xfc, .type=IO_READ},
        {.addr=0x1d04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc29f, .a=0xba, .x=0x5d, .y=0x4e, .sp=0x43, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc29f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc2a0, .a=0xba, .x=0x5d, .y=0x4f, .sp=0x43, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc29f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc29f, .value=0xfc, .type=IO_READ},
        {.addr=0xc2a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0102) {
    const struct CPU_State initial_cpu = {.pc=0x2552, .a=0xd4, .x=0xaf, .y=0x39, .sp=0x4b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2552, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2553, .a=0xd4, .x=0xaf, .y=0x3a, .sp=0x4b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2552, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2552, .value=0xfc, .type=IO_READ},
        {.addr=0x2553, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0103) {
    const struct CPU_State initial_cpu = {.pc=0x8279, .a=0x7c, .x=0x8f, .y=0xa7, .sp=0x86, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8279, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x827a, .a=0x7c, .x=0x8f, .y=0xa8, .sp=0x86, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8279, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8279, .value=0xfc, .type=IO_READ},
        {.addr=0x827a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0104) {
    const struct CPU_State initial_cpu = {.pc=0x6360, .a=0x72, .x=0xd7, .y=0x62, .sp=0xa7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6360, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6361, .a=0x72, .x=0xd7, .y=0x63, .sp=0xa7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6360, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6360, .value=0xfc, .type=IO_READ},
        {.addr=0x6361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0105) {
    const struct CPU_State initial_cpu = {.pc=0x5eef, .a=0x86, .x=0x65, .y=0x48, .sp=0xc3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5eef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5ef0, .a=0x86, .x=0x65, .y=0x49, .sp=0xc3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5eef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5eef, .value=0xfc, .type=IO_READ},
        {.addr=0x5ef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0106) {
    const struct CPU_State initial_cpu = {.pc=0x5ccd, .a=0xac, .x=0x44, .y=0x93, .sp=0x2e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5ccd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5cce, .a=0xac, .x=0x44, .y=0x94, .sp=0x2e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5ccd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5ccd, .value=0xfc, .type=IO_READ},
        {.addr=0x5cce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0107) {
    const struct CPU_State initial_cpu = {.pc=0x7a78, .a=0x96, .x=0xea, .y=0x79, .sp=0x09, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x7a78, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7a79, .a=0x96, .x=0xea, .y=0x7a, .sp=0x09, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7a78, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7a78, .value=0xfc, .type=IO_READ},
        {.addr=0x7a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0108) {
    const struct CPU_State initial_cpu = {.pc=0xfd32, .a=0x0c, .x=0x70, .y=0x99, .sp=0xc9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xfd32, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfd33, .a=0x0c, .x=0x70, .y=0x9a, .sp=0xc9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfd32, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfd32, .value=0xfc, .type=IO_READ},
        {.addr=0xfd33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa3d6, .a=0x85, .x=0x50, .y=0xa7, .sp=0x82, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa3d7, .a=0x85, .x=0x50, .y=0xa8, .sp=0x82, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa3d6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa3d6, .value=0xfc, .type=IO_READ},
        {.addr=0xa3d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010A) {
    const struct CPU_State initial_cpu = {.pc=0x9504, .a=0xb2, .x=0x69, .y=0xa1, .sp=0xd2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9504, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9505, .a=0xb2, .x=0x69, .y=0xa2, .sp=0xd2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9504, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9504, .value=0xfc, .type=IO_READ},
        {.addr=0x9505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010B) {
    const struct CPU_State initial_cpu = {.pc=0x3ddf, .a=0x04, .x=0x45, .y=0x94, .sp=0x95, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3ddf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3de0, .a=0x04, .x=0x45, .y=0x95, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3ddf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ddf, .value=0xfc, .type=IO_READ},
        {.addr=0x3de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010C) {
    const struct CPU_State initial_cpu = {.pc=0x5b3f, .a=0x23, .x=0x18, .y=0x3a, .sp=0x18, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b40, .a=0x23, .x=0x18, .y=0x3b, .sp=0x18, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5b3f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b3f, .value=0xfc, .type=IO_READ},
        {.addr=0x5b40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6b5c, .a=0xbe, .x=0x55, .y=0x15, .sp=0x49, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6b5d, .a=0xbe, .x=0x55, .y=0x16, .sp=0x49, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6b5c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6b5c, .value=0xfc, .type=IO_READ},
        {.addr=0x6b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4536, .a=0x8f, .x=0xe4, .y=0x38, .sp=0xbf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x4536, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4537, .a=0x8f, .x=0xe4, .y=0x39, .sp=0xbf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4536, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4536, .value=0xfc, .type=IO_READ},
        {.addr=0x4537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_010F) {
    const struct CPU_State initial_cpu = {.pc=0xd7ec, .a=0xcd, .x=0x95, .y=0xb8, .sp=0xa5, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd7ed, .a=0xcd, .x=0x95, .y=0xb9, .sp=0xa5, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd7ec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd7ec, .value=0xfc, .type=IO_READ},
        {.addr=0xd7ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0631, .a=0xb7, .x=0x0d, .y=0x23, .sp=0x32, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0631, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0632, .a=0xb7, .x=0x0d, .y=0x24, .sp=0x32, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0631, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0631, .value=0xfc, .type=IO_READ},
        {.addr=0x0632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0111) {
    const struct CPU_State initial_cpu = {.pc=0xe66c, .a=0x48, .x=0xb7, .y=0xf2, .sp=0x91, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xe66c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe66d, .a=0x48, .x=0xb7, .y=0xf3, .sp=0x91, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe66c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe66c, .value=0xfc, .type=IO_READ},
        {.addr=0xe66d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc67a, .a=0xed, .x=0x48, .y=0xc4, .sp=0x56, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc67a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc67b, .a=0xed, .x=0x48, .y=0xc5, .sp=0x56, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc67a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc67a, .value=0xfc, .type=IO_READ},
        {.addr=0xc67b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2223, .a=0x87, .x=0x64, .y=0x22, .sp=0x18, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2223, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2224, .a=0x87, .x=0x64, .y=0x23, .sp=0x18, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2223, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2223, .value=0xfc, .type=IO_READ},
        {.addr=0x2224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0114) {
    const struct CPU_State initial_cpu = {.pc=0x0d2c, .a=0x4d, .x=0x82, .y=0x9f, .sp=0xe2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0d2d, .a=0x4d, .x=0x82, .y=0xa0, .sp=0xe2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0d2c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0d2c, .value=0xfc, .type=IO_READ},
        {.addr=0x0d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0115) {
    const struct CPU_State initial_cpu = {.pc=0xdd69, .a=0x96, .x=0x26, .y=0xc1, .sp=0x78, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xdd69, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdd6a, .a=0x96, .x=0x26, .y=0xc2, .sp=0x78, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdd69, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdd69, .value=0xfc, .type=IO_READ},
        {.addr=0xdd6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0116) {
    const struct CPU_State initial_cpu = {.pc=0x54f5, .a=0x12, .x=0xc8, .y=0x19, .sp=0xaf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x54f5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x54f6, .a=0x12, .x=0xc8, .y=0x1a, .sp=0xaf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x54f5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x54f5, .value=0xfc, .type=IO_READ},
        {.addr=0x54f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb5c2, .a=0x4c, .x=0x64, .y=0x9e, .sp=0x32, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb5c3, .a=0x4c, .x=0x64, .y=0x9f, .sp=0x32, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb5c2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb5c2, .value=0xfc, .type=IO_READ},
        {.addr=0xb5c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0118) {
    const struct CPU_State initial_cpu = {.pc=0x7d0e, .a=0x9d, .x=0x7f, .y=0x87, .sp=0xab, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7d0f, .a=0x9d, .x=0x7f, .y=0x88, .sp=0xab, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7d0e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7d0e, .value=0xfc, .type=IO_READ},
        {.addr=0x7d0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb14d, .a=0xf0, .x=0x3d, .y=0xb2, .sp=0xbf, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb14d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb14e, .a=0xf0, .x=0x3d, .y=0xb3, .sp=0xbf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb14d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb14d, .value=0xfc, .type=IO_READ},
        {.addr=0xb14e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011A) {
    const struct CPU_State initial_cpu = {.pc=0xf80b, .a=0x47, .x=0xc3, .y=0x88, .sp=0x56, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf80b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf80c, .a=0x47, .x=0xc3, .y=0x89, .sp=0x56, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf80b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf80b, .value=0xfc, .type=IO_READ},
        {.addr=0xf80c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011B) {
    const struct CPU_State initial_cpu = {.pc=0x9675, .a=0x63, .x=0xb1, .y=0xf2, .sp=0xd6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9675, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9676, .a=0x63, .x=0xb1, .y=0xf3, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9675, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9675, .value=0xfc, .type=IO_READ},
        {.addr=0x9676, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011C) {
    const struct CPU_State initial_cpu = {.pc=0x60cc, .a=0x1a, .x=0x57, .y=0x29, .sp=0xa0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x60cc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x60cd, .a=0x1a, .x=0x57, .y=0x2a, .sp=0xa0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x60cc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x60cc, .value=0xfc, .type=IO_READ},
        {.addr=0x60cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011D) {
    const struct CPU_State initial_cpu = {.pc=0x652a, .a=0x05, .x=0x6c, .y=0x59, .sp=0x98, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x652a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x652b, .a=0x05, .x=0x6c, .y=0x5a, .sp=0x98, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x652a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x652a, .value=0xfc, .type=IO_READ},
        {.addr=0x652b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011E) {
    const struct CPU_State initial_cpu = {.pc=0xbfd8, .a=0x7e, .x=0x19, .y=0x37, .sp=0x5e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbfd9, .a=0x7e, .x=0x19, .y=0x38, .sp=0x5e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbfd8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbfd8, .value=0xfc, .type=IO_READ},
        {.addr=0xbfd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_011F) {
    const struct CPU_State initial_cpu = {.pc=0x778e, .a=0x23, .x=0x5c, .y=0x27, .sp=0xf8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x778e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x778f, .a=0x23, .x=0x5c, .y=0x28, .sp=0xf8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x778e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x778e, .value=0xfc, .type=IO_READ},
        {.addr=0x778f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0120) {
    const struct CPU_State initial_cpu = {.pc=0x0384, .a=0xc4, .x=0x81, .y=0x5c, .sp=0x3c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0384, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0385, .a=0xc4, .x=0x81, .y=0x5d, .sp=0x3c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0384, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0384, .value=0xfc, .type=IO_READ},
        {.addr=0x0385, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0121) {
    const struct CPU_State initial_cpu = {.pc=0xa87c, .a=0xc4, .x=0x2d, .y=0x5c, .sp=0xda, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa87c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa87d, .a=0xc4, .x=0x2d, .y=0x5d, .sp=0xda, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa87c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa87c, .value=0xfc, .type=IO_READ},
        {.addr=0xa87d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0122) {
    const struct CPU_State initial_cpu = {.pc=0xd176, .a=0xf0, .x=0x75, .y=0xf3, .sp=0x81, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xd176, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd177, .a=0xf0, .x=0x75, .y=0xf4, .sp=0x81, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd176, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd176, .value=0xfc, .type=IO_READ},
        {.addr=0xd177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0123) {
    const struct CPU_State initial_cpu = {.pc=0x4d49, .a=0x0b, .x=0x07, .y=0x22, .sp=0x24, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4d49, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d4a, .a=0x0b, .x=0x07, .y=0x23, .sp=0x24, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4d49, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d49, .value=0xfc, .type=IO_READ},
        {.addr=0x4d4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0124) {
    const struct CPU_State initial_cpu = {.pc=0xc55d, .a=0x8c, .x=0xc9, .y=0x70, .sp=0xbe, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc55d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc55e, .a=0x8c, .x=0xc9, .y=0x71, .sp=0xbe, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc55d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc55d, .value=0xfc, .type=IO_READ},
        {.addr=0xc55e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4cfe, .a=0x91, .x=0x92, .y=0xd4, .sp=0x9d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfe, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4cff, .a=0x91, .x=0x92, .y=0xd5, .sp=0x9d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4cfe, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4cfe, .value=0xfc, .type=IO_READ},
        {.addr=0x4cff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0126) {
    const struct CPU_State initial_cpu = {.pc=0xfe0d, .a=0x16, .x=0x24, .y=0x02, .sp=0xef, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfe0e, .a=0x16, .x=0x24, .y=0x03, .sp=0xef, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xfe0d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfe0d, .value=0xfc, .type=IO_READ},
        {.addr=0xfe0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9e7f, .a=0xc2, .x=0xe4, .y=0xab, .sp=0x63, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9e7f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9e80, .a=0xc2, .x=0xe4, .y=0xac, .sp=0x63, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9e7f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9e7f, .value=0xfc, .type=IO_READ},
        {.addr=0x9e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0128) {
    const struct CPU_State initial_cpu = {.pc=0x4f5e, .a=0xfd, .x=0x7f, .y=0x5f, .sp=0x0a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4f5e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4f5f, .a=0xfd, .x=0x7f, .y=0x60, .sp=0x0a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4f5e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4f5e, .value=0xfc, .type=IO_READ},
        {.addr=0x4f5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0129) {
    const struct CPU_State initial_cpu = {.pc=0xa542, .a=0xc9, .x=0x82, .y=0xd4, .sp=0xc7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa542, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa543, .a=0xc9, .x=0x82, .y=0xd5, .sp=0xc7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa542, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa542, .value=0xfc, .type=IO_READ},
        {.addr=0xa543, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012A) {
    const struct CPU_State initial_cpu = {.pc=0x0c5b, .a=0x9f, .x=0x00, .y=0x2c, .sp=0xbf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0c5b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0c5c, .a=0x9f, .x=0x00, .y=0x2d, .sp=0xbf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0c5b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0c5b, .value=0xfc, .type=IO_READ},
        {.addr=0x0c5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012B) {
    const struct CPU_State initial_cpu = {.pc=0xd23a, .a=0x48, .x=0x64, .y=0xb6, .sp=0x99, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xd23a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd23b, .a=0x48, .x=0x64, .y=0xb7, .sp=0x99, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd23a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd23a, .value=0xfc, .type=IO_READ},
        {.addr=0xd23b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012C) {
    const struct CPU_State initial_cpu = {.pc=0x3b4b, .a=0xff, .x=0xe5, .y=0xf4, .sp=0xa3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3b4b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3b4c, .a=0xff, .x=0xe5, .y=0xf5, .sp=0xa3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3b4b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3b4b, .value=0xfc, .type=IO_READ},
        {.addr=0x3b4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012D) {
    const struct CPU_State initial_cpu = {.pc=0x481b, .a=0x8e, .x=0xf5, .y=0xfb, .sp=0x23, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x481b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x481c, .a=0x8e, .x=0xf5, .y=0xfc, .sp=0x23, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x481b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x481b, .value=0xfc, .type=IO_READ},
        {.addr=0x481c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012E) {
    const struct CPU_State initial_cpu = {.pc=0x9986, .a=0xd7, .x=0xbc, .y=0x93, .sp=0x80, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9986, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9987, .a=0xd7, .x=0xbc, .y=0x94, .sp=0x80, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9986, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9986, .value=0xfc, .type=IO_READ},
        {.addr=0x9987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_012F) {
    const struct CPU_State initial_cpu = {.pc=0x1ff6, .a=0x58, .x=0xfe, .y=0x32, .sp=0x52, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1ff7, .a=0x58, .x=0xfe, .y=0x33, .sp=0x52, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1ff6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1ff6, .value=0xfc, .type=IO_READ},
        {.addr=0x1ff7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0130) {
    const struct CPU_State initial_cpu = {.pc=0xe055, .a=0x23, .x=0x48, .y=0xc5, .sp=0x8d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe055, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe056, .a=0x23, .x=0x48, .y=0xc6, .sp=0x8d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe055, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe055, .value=0xfc, .type=IO_READ},
        {.addr=0xe056, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0131) {
    const struct CPU_State initial_cpu = {.pc=0x42db, .a=0xa3, .x=0x48, .y=0xb4, .sp=0x67, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x42db, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x42dc, .a=0xa3, .x=0x48, .y=0xb5, .sp=0x67, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x42db, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x42db, .value=0xfc, .type=IO_READ},
        {.addr=0x42dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0132) {
    const struct CPU_State initial_cpu = {.pc=0x74ef, .a=0x97, .x=0xb5, .y=0x25, .sp=0xaa, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x74ef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x74f0, .a=0x97, .x=0xb5, .y=0x26, .sp=0xaa, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x74ef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x74ef, .value=0xfc, .type=IO_READ},
        {.addr=0x74f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8d1f, .a=0xe3, .x=0xe6, .y=0x92, .sp=0xf9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8d1f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8d20, .a=0xe3, .x=0xe6, .y=0x93, .sp=0xf9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8d1f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8d1f, .value=0xfc, .type=IO_READ},
        {.addr=0x8d20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0134) {
    const struct CPU_State initial_cpu = {.pc=0x9586, .a=0x4e, .x=0x91, .y=0x8c, .sp=0x6c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x9586, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9587, .a=0x4e, .x=0x91, .y=0x8d, .sp=0x6c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9586, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9586, .value=0xfc, .type=IO_READ},
        {.addr=0x9587, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0135) {
    const struct CPU_State initial_cpu = {.pc=0x2c60, .a=0x57, .x=0x83, .y=0x80, .sp=0x95, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2c60, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2c61, .a=0x57, .x=0x83, .y=0x81, .sp=0x95, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2c60, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2c60, .value=0xfc, .type=IO_READ},
        {.addr=0x2c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0136) {
    const struct CPU_State initial_cpu = {.pc=0x6711, .a=0xcc, .x=0xb4, .y=0x92, .sp=0x48, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6711, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6712, .a=0xcc, .x=0xb4, .y=0x93, .sp=0x48, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6711, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6711, .value=0xfc, .type=IO_READ},
        {.addr=0x6712, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0137) {
    const struct CPU_State initial_cpu = {.pc=0x947d, .a=0x73, .x=0x9a, .y=0x79, .sp=0x51, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x947d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x947e, .a=0x73, .x=0x9a, .y=0x7a, .sp=0x51, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x947d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x947d, .value=0xfc, .type=IO_READ},
        {.addr=0x947e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0138) {
    const struct CPU_State initial_cpu = {.pc=0xcf63, .a=0x7a, .x=0x76, .y=0x70, .sp=0xc5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcf63, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcf64, .a=0x7a, .x=0x76, .y=0x71, .sp=0xc5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xcf63, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcf63, .value=0xfc, .type=IO_READ},
        {.addr=0xcf64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0139) {
    const struct CPU_State initial_cpu = {.pc=0xb275, .a=0x07, .x=0xfc, .y=0xc1, .sp=0x01, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb275, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb276, .a=0x07, .x=0xfc, .y=0xc2, .sp=0x01, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb275, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb275, .value=0xfc, .type=IO_READ},
        {.addr=0xb276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013A) {
    const struct CPU_State initial_cpu = {.pc=0x6ae0, .a=0x54, .x=0x9e, .y=0xcf, .sp=0xfd, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6ae1, .a=0x54, .x=0x9e, .y=0xd0, .sp=0xfd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6ae0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6ae0, .value=0xfc, .type=IO_READ},
        {.addr=0x6ae1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013B) {
    const struct CPU_State initial_cpu = {.pc=0x33e8, .a=0x81, .x=0xdf, .y=0x6c, .sp=0x3d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x33e8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x33e9, .a=0x81, .x=0xdf, .y=0x6d, .sp=0x3d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x33e8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x33e8, .value=0xfc, .type=IO_READ},
        {.addr=0x33e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013C) {
    const struct CPU_State initial_cpu = {.pc=0xa625, .a=0x7b, .x=0x23, .y=0xc3, .sp=0x65, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa625, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa626, .a=0x7b, .x=0x23, .y=0xc4, .sp=0x65, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa625, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa625, .value=0xfc, .type=IO_READ},
        {.addr=0xa626, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013D) {
    const struct CPU_State initial_cpu = {.pc=0x2c49, .a=0x5c, .x=0xcb, .y=0xb1, .sp=0xae, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2c49, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2c4a, .a=0x5c, .x=0xcb, .y=0xb2, .sp=0xae, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2c49, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2c49, .value=0xfc, .type=IO_READ},
        {.addr=0x2c4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013E) {
    const struct CPU_State initial_cpu = {.pc=0x4fc2, .a=0x05, .x=0x6f, .y=0x5d, .sp=0xc3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4fc3, .a=0x05, .x=0x6f, .y=0x5e, .sp=0xc3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4fc2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4fc2, .value=0xfc, .type=IO_READ},
        {.addr=0x4fc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_013F) {
    const struct CPU_State initial_cpu = {.pc=0x1ee0, .a=0x77, .x=0x18, .y=0x4b, .sp=0xfa, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1ee1, .a=0x77, .x=0x18, .y=0x4c, .sp=0xfa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1ee0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1ee0, .value=0xfc, .type=IO_READ},
        {.addr=0x1ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5536, .a=0x4b, .x=0xd4, .y=0x42, .sp=0xb2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5536, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5537, .a=0x4b, .x=0xd4, .y=0x43, .sp=0xb2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5536, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5536, .value=0xfc, .type=IO_READ},
        {.addr=0x5537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0141) {
    const struct CPU_State initial_cpu = {.pc=0x484e, .a=0x85, .x=0xba, .y=0x41, .sp=0x99, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x484e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x484f, .a=0x85, .x=0xba, .y=0x42, .sp=0x99, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x484e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x484e, .value=0xfc, .type=IO_READ},
        {.addr=0x484f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3543, .a=0x24, .x=0x52, .y=0x20, .sp=0x0e, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3543, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3544, .a=0x24, .x=0x52, .y=0x21, .sp=0x0e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3543, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3543, .value=0xfc, .type=IO_READ},
        {.addr=0x3544, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0143) {
    const struct CPU_State initial_cpu = {.pc=0xafa8, .a=0x70, .x=0x1c, .y=0x2f, .sp=0x14, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xafa8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xafa9, .a=0x70, .x=0x1c, .y=0x30, .sp=0x14, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xafa8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xafa8, .value=0xfc, .type=IO_READ},
        {.addr=0xafa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0144) {
    const struct CPU_State initial_cpu = {.pc=0x6714, .a=0xf1, .x=0xb0, .y=0x8b, .sp=0xc9, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6714, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6715, .a=0xf1, .x=0xb0, .y=0x8c, .sp=0xc9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6714, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6714, .value=0xfc, .type=IO_READ},
        {.addr=0x6715, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0145) {
    const struct CPU_State initial_cpu = {.pc=0x6a0b, .a=0x58, .x=0x7e, .y=0x42, .sp=0x58, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6a0c, .a=0x58, .x=0x7e, .y=0x43, .sp=0x58, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6a0b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6a0b, .value=0xfc, .type=IO_READ},
        {.addr=0x6a0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0146) {
    const struct CPU_State initial_cpu = {.pc=0x2b9c, .a=0x75, .x=0x8f, .y=0x40, .sp=0xcf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2b9d, .a=0x75, .x=0x8f, .y=0x41, .sp=0xcf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2b9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2b9c, .value=0xfc, .type=IO_READ},
        {.addr=0x2b9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0147) {
    const struct CPU_State initial_cpu = {.pc=0x3d72, .a=0x0e, .x=0x17, .y=0x7b, .sp=0x6d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3d72, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3d73, .a=0x0e, .x=0x17, .y=0x7c, .sp=0x6d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3d72, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3d72, .value=0xfc, .type=IO_READ},
        {.addr=0x3d73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0148) {
    const struct CPU_State initial_cpu = {.pc=0x629e, .a=0x5e, .x=0x23, .y=0x51, .sp=0x30, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x629e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x629f, .a=0x5e, .x=0x23, .y=0x52, .sp=0x30, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x629e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x629e, .value=0xfc, .type=IO_READ},
        {.addr=0x629f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1811, .a=0x37, .x=0x75, .y=0xa5, .sp=0x3c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1811, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1812, .a=0x37, .x=0x75, .y=0xa6, .sp=0x3c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1811, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1811, .value=0xfc, .type=IO_READ},
        {.addr=0x1812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014A) {
    const struct CPU_State initial_cpu = {.pc=0x7baf, .a=0xec, .x=0x17, .y=0xbd, .sp=0xf0, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7baf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7bb0, .a=0xec, .x=0x17, .y=0xbe, .sp=0xf0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7baf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7baf, .value=0xfc, .type=IO_READ},
        {.addr=0x7bb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014B) {
    const struct CPU_State initial_cpu = {.pc=0xd47d, .a=0xb2, .x=0x3f, .y=0xd9, .sp=0x4a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd47d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd47e, .a=0xb2, .x=0x3f, .y=0xda, .sp=0x4a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd47d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd47d, .value=0xfc, .type=IO_READ},
        {.addr=0xd47e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014C) {
    const struct CPU_State initial_cpu = {.pc=0xa77d, .a=0x05, .x=0x7f, .y=0x70, .sp=0xf2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa77d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa77e, .a=0x05, .x=0x7f, .y=0x71, .sp=0xf2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa77d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa77d, .value=0xfc, .type=IO_READ},
        {.addr=0xa77e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014D) {
    const struct CPU_State initial_cpu = {.pc=0x1857, .a=0xb0, .x=0x84, .y=0x22, .sp=0xf2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1857, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1858, .a=0xb0, .x=0x84, .y=0x23, .sp=0xf2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1857, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1857, .value=0xfc, .type=IO_READ},
        {.addr=0x1858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014E) {
    const struct CPU_State initial_cpu = {.pc=0x0aba, .a=0x85, .x=0xd9, .y=0x49, .sp=0x65, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0aba, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0abb, .a=0x85, .x=0xd9, .y=0x4a, .sp=0x65, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0aba, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0aba, .value=0xfc, .type=IO_READ},
        {.addr=0x0abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_014F) {
    const struct CPU_State initial_cpu = {.pc=0xed1e, .a=0xcb, .x=0x3c, .y=0x4a, .sp=0x26, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xed1e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xed1f, .a=0xcb, .x=0x3c, .y=0x4b, .sp=0x26, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xed1e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xed1e, .value=0xfc, .type=IO_READ},
        {.addr=0xed1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0150) {
    const struct CPU_State initial_cpu = {.pc=0x80a3, .a=0x73, .x=0x57, .y=0x6f, .sp=0x9d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x80a3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x80a4, .a=0x73, .x=0x57, .y=0x70, .sp=0x9d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x80a3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x80a3, .value=0xfc, .type=IO_READ},
        {.addr=0x80a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0151) {
    const struct CPU_State initial_cpu = {.pc=0x8b19, .a=0xef, .x=0xeb, .y=0x4a, .sp=0x0a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8b19, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8b1a, .a=0xef, .x=0xeb, .y=0x4b, .sp=0x0a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8b19, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8b19, .value=0xfc, .type=IO_READ},
        {.addr=0x8b1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb235, .a=0x34, .x=0x9c, .y=0x05, .sp=0x05, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb235, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb236, .a=0x34, .x=0x9c, .y=0x06, .sp=0x05, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb235, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb235, .value=0xfc, .type=IO_READ},
        {.addr=0xb236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0153) {
    const struct CPU_State initial_cpu = {.pc=0x811e, .a=0x25, .x=0xc2, .y=0x9c, .sp=0x83, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x811e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x811f, .a=0x25, .x=0xc2, .y=0x9d, .sp=0x83, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x811e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x811e, .value=0xfc, .type=IO_READ},
        {.addr=0x811f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0154) {
    const struct CPU_State initial_cpu = {.pc=0xd346, .a=0x52, .x=0xac, .y=0xd3, .sp=0x21, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xd346, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd347, .a=0x52, .x=0xac, .y=0xd4, .sp=0x21, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd346, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd346, .value=0xfc, .type=IO_READ},
        {.addr=0xd347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0155) {
    const struct CPU_State initial_cpu = {.pc=0x83c9, .a=0xa7, .x=0xd1, .y=0xcb, .sp=0xf7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x83c9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x83ca, .a=0xa7, .x=0xd1, .y=0xcc, .sp=0xf7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x83c9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x83c9, .value=0xfc, .type=IO_READ},
        {.addr=0x83ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0156) {
    const struct CPU_State initial_cpu = {.pc=0x0588, .a=0x07, .x=0xcf, .y=0x03, .sp=0x22, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0588, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0589, .a=0x07, .x=0xcf, .y=0x04, .sp=0x22, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0588, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0588, .value=0xfc, .type=IO_READ},
        {.addr=0x0589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0157) {
    const struct CPU_State initial_cpu = {.pc=0xaaf3, .a=0xe0, .x=0xb4, .y=0x4a, .sp=0xab, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaaf4, .a=0xe0, .x=0xb4, .y=0x4b, .sp=0xab, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xaaf3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaaf3, .value=0xfc, .type=IO_READ},
        {.addr=0xaaf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0158) {
    const struct CPU_State initial_cpu = {.pc=0xd93a, .a=0xd8, .x=0x13, .y=0xe1, .sp=0xf6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd93a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd93b, .a=0xd8, .x=0x13, .y=0xe2, .sp=0xf6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd93a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd93a, .value=0xfc, .type=IO_READ},
        {.addr=0xd93b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0159) {
    const struct CPU_State initial_cpu = {.pc=0xd773, .a=0x62, .x=0xb3, .y=0x43, .sp=0x51, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd773, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd774, .a=0x62, .x=0xb3, .y=0x44, .sp=0x51, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd773, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd773, .value=0xfc, .type=IO_READ},
        {.addr=0xd774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015A) {
    const struct CPU_State initial_cpu = {.pc=0x2b5e, .a=0x76, .x=0x1f, .y=0xb7, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2b5f, .a=0x76, .x=0x1f, .y=0xb8, .sp=0x8a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2b5e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2b5e, .value=0xfc, .type=IO_READ},
        {.addr=0x2b5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015B) {
    const struct CPU_State initial_cpu = {.pc=0x4849, .a=0xf6, .x=0xcc, .y=0x36, .sp=0xa5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x4849, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x484a, .a=0xf6, .x=0xcc, .y=0x37, .sp=0xa5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4849, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4849, .value=0xfc, .type=IO_READ},
        {.addr=0x484a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015C) {
    const struct CPU_State initial_cpu = {.pc=0xe23f, .a=0x36, .x=0x2d, .y=0x64, .sp=0x49, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe23f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe240, .a=0x36, .x=0x2d, .y=0x65, .sp=0x49, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe23f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe23f, .value=0xfc, .type=IO_READ},
        {.addr=0xe240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015D) {
    const struct CPU_State initial_cpu = {.pc=0xeab5, .a=0xe3, .x=0xe9, .y=0x84, .sp=0xf2, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xeab5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xeab6, .a=0xe3, .x=0xe9, .y=0x85, .sp=0xf2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xeab5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xeab5, .value=0xfc, .type=IO_READ},
        {.addr=0xeab6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015E) {
    const struct CPU_State initial_cpu = {.pc=0xd90e, .a=0x0e, .x=0xa7, .y=0x88, .sp=0x49, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd90e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd90f, .a=0x0e, .x=0xa7, .y=0x89, .sp=0x49, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd90e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd90e, .value=0xfc, .type=IO_READ},
        {.addr=0xd90f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_015F) {
    const struct CPU_State initial_cpu = {.pc=0xf37d, .a=0xb7, .x=0xb4, .y=0x67, .sp=0xb9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xf37d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf37e, .a=0xb7, .x=0xb4, .y=0x68, .sp=0xb9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf37d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf37d, .value=0xfc, .type=IO_READ},
        {.addr=0xf37e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0160) {
    const struct CPU_State initial_cpu = {.pc=0x3aa8, .a=0x2b, .x=0x06, .y=0x5c, .sp=0xc1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3aa9, .a=0x2b, .x=0x06, .y=0x5d, .sp=0xc1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3aa8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3aa8, .value=0xfc, .type=IO_READ},
        {.addr=0x3aa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0161) {
    const struct CPU_State initial_cpu = {.pc=0x9caa, .a=0x85, .x=0xb8, .y=0x24, .sp=0x7a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9caa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9cab, .a=0x85, .x=0xb8, .y=0x25, .sp=0x7a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9caa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9caa, .value=0xfc, .type=IO_READ},
        {.addr=0x9cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0162) {
    const struct CPU_State initial_cpu = {.pc=0x811a, .a=0x21, .x=0x62, .y=0xd5, .sp=0x64, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x811a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x811b, .a=0x21, .x=0x62, .y=0xd6, .sp=0x64, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x811a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x811a, .value=0xfc, .type=IO_READ},
        {.addr=0x811b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0163) {
    const struct CPU_State initial_cpu = {.pc=0xd2ee, .a=0xba, .x=0x36, .y=0xad, .sp=0x15, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd2ef, .a=0xba, .x=0x36, .y=0xae, .sp=0x15, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd2ee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd2ee, .value=0xfc, .type=IO_READ},
        {.addr=0xd2ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0164) {
    const struct CPU_State initial_cpu = {.pc=0x7e9e, .a=0xe9, .x=0xd7, .y=0x36, .sp=0xc7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7e9f, .a=0xe9, .x=0xd7, .y=0x37, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7e9e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7e9e, .value=0xfc, .type=IO_READ},
        {.addr=0x7e9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0165) {
    const struct CPU_State initial_cpu = {.pc=0x42af, .a=0x9a, .x=0x2b, .y=0xc9, .sp=0xfd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x42af, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x42b0, .a=0x9a, .x=0x2b, .y=0xca, .sp=0xfd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x42af, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x42af, .value=0xfc, .type=IO_READ},
        {.addr=0x42b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0166) {
    const struct CPU_State initial_cpu = {.pc=0xbc07, .a=0xd8, .x=0xfd, .y=0xc1, .sp=0x0b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc07, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbc08, .a=0xd8, .x=0xfd, .y=0xc2, .sp=0x0b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbc07, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbc07, .value=0xfc, .type=IO_READ},
        {.addr=0xbc08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe310, .a=0x37, .x=0x05, .y=0xae, .sp=0x06, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe310, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe311, .a=0x37, .x=0x05, .y=0xaf, .sp=0x06, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe310, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe310, .value=0xfc, .type=IO_READ},
        {.addr=0xe311, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0168) {
    const struct CPU_State initial_cpu = {.pc=0xc37a, .a=0xaa, .x=0x31, .y=0xea, .sp=0x5c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc37a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc37b, .a=0xaa, .x=0x31, .y=0xeb, .sp=0x5c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc37a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc37a, .value=0xfc, .type=IO_READ},
        {.addr=0xc37b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0169) {
    const struct CPU_State initial_cpu = {.pc=0x5146, .a=0xdb, .x=0xfb, .y=0xb1, .sp=0x6f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5146, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5147, .a=0xdb, .x=0xfb, .y=0xb2, .sp=0x6f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5146, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5146, .value=0xfc, .type=IO_READ},
        {.addr=0x5147, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016A) {
    const struct CPU_State initial_cpu = {.pc=0x01c3, .a=0x0a, .x=0xe8, .y=0xb6, .sp=0xdd, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x01c4, .a=0x0a, .x=0xe8, .y=0xb7, .sp=0xdd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x01c3, .value=0xfc, .type=IO_READ},
        {.addr=0x01c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016B) {
    const struct CPU_State initial_cpu = {.pc=0xba65, .a=0xd5, .x=0x69, .y=0x4a, .sp=0xcd, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xba65, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xba66, .a=0xd5, .x=0x69, .y=0x4b, .sp=0xcd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xba65, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xba65, .value=0xfc, .type=IO_READ},
        {.addr=0xba66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016C) {
    const struct CPU_State initial_cpu = {.pc=0x31ad, .a=0x7d, .x=0xdc, .y=0xa7, .sp=0xf4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x31ad, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x31ae, .a=0x7d, .x=0xdc, .y=0xa8, .sp=0xf4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x31ad, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x31ad, .value=0xfc, .type=IO_READ},
        {.addr=0x31ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016D) {
    const struct CPU_State initial_cpu = {.pc=0x880c, .a=0xf8, .x=0x7d, .y=0xc7, .sp=0xc0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x880c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x880d, .a=0xf8, .x=0x7d, .y=0xc8, .sp=0xc0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x880c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x880c, .value=0xfc, .type=IO_READ},
        {.addr=0x880d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016E) {
    const struct CPU_State initial_cpu = {.pc=0x8f65, .a=0x67, .x=0xa9, .y=0x69, .sp=0x37, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8f65, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8f66, .a=0x67, .x=0xa9, .y=0x6a, .sp=0x37, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8f65, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8f65, .value=0xfc, .type=IO_READ},
        {.addr=0x8f66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_016F) {
    const struct CPU_State initial_cpu = {.pc=0x81c4, .a=0x3a, .x=0xb6, .y=0x17, .sp=0x16, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x81c4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x81c5, .a=0x3a, .x=0xb6, .y=0x18, .sp=0x16, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x81c4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x81c4, .value=0xfc, .type=IO_READ},
        {.addr=0x81c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0170) {
    const struct CPU_State initial_cpu = {.pc=0xb7b2, .a=0x82, .x=0x31, .y=0x3f, .sp=0x60, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb7b3, .a=0x82, .x=0x31, .y=0x40, .sp=0x60, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb7b2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb7b2, .value=0xfc, .type=IO_READ},
        {.addr=0xb7b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf483, .a=0x1a, .x=0x2e, .y=0xd2, .sp=0x33, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf483, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf484, .a=0x1a, .x=0x2e, .y=0xd3, .sp=0x33, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf483, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf483, .value=0xfc, .type=IO_READ},
        {.addr=0xf484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0172) {
    const struct CPU_State initial_cpu = {.pc=0x20bb, .a=0xe6, .x=0x82, .y=0x8c, .sp=0x37, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x20bb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x20bc, .a=0xe6, .x=0x82, .y=0x8d, .sp=0x37, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x20bb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x20bb, .value=0xfc, .type=IO_READ},
        {.addr=0x20bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0173) {
    const struct CPU_State initial_cpu = {.pc=0xb4f6, .a=0x65, .x=0x96, .y=0x49, .sp=0x00, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb4f7, .a=0x65, .x=0x96, .y=0x4a, .sp=0x00, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb4f6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb4f6, .value=0xfc, .type=IO_READ},
        {.addr=0xb4f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0174) {
    const struct CPU_State initial_cpu = {.pc=0xd9ac, .a=0x6c, .x=0x7f, .y=0xc7, .sp=0xd7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ac, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd9ad, .a=0x6c, .x=0x7f, .y=0xc8, .sp=0xd7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd9ac, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd9ac, .value=0xfc, .type=IO_READ},
        {.addr=0xd9ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0175) {
    const struct CPU_State initial_cpu = {.pc=0xe1ae, .a=0x96, .x=0xbd, .y=0x47, .sp=0xc6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ae, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe1af, .a=0x96, .x=0xbd, .y=0x48, .sp=0xc6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe1ae, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe1ae, .value=0xfc, .type=IO_READ},
        {.addr=0xe1af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0176) {
    const struct CPU_State initial_cpu = {.pc=0x6a0e, .a=0xc7, .x=0xb6, .y=0x85, .sp=0x3f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6a0f, .a=0xc7, .x=0xb6, .y=0x86, .sp=0x3f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6a0e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6a0e, .value=0xfc, .type=IO_READ},
        {.addr=0x6a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0177) {
    const struct CPU_State initial_cpu = {.pc=0xd639, .a=0x00, .x=0x70, .y=0x99, .sp=0x6b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xd639, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd63a, .a=0x00, .x=0x70, .y=0x9a, .sp=0x6b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd639, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd639, .value=0xfc, .type=IO_READ},
        {.addr=0xd63a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb76d, .a=0x33, .x=0x07, .y=0x3c, .sp=0xb1, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb76d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb76e, .a=0x33, .x=0x07, .y=0x3d, .sp=0xb1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb76d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb76d, .value=0xfc, .type=IO_READ},
        {.addr=0xb76e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe1b6, .a=0x34, .x=0xa4, .y=0x79, .sp=0xda, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe1b7, .a=0x34, .x=0xa4, .y=0x7a, .sp=0xda, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe1b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe1b6, .value=0xfc, .type=IO_READ},
        {.addr=0xe1b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017A) {
    const struct CPU_State initial_cpu = {.pc=0x74a7, .a=0x4e, .x=0xd5, .y=0x37, .sp=0x4f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x74a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x74a8, .a=0x4e, .x=0xd5, .y=0x38, .sp=0x4f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x74a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x74a7, .value=0xfc, .type=IO_READ},
        {.addr=0x74a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017B) {
    const struct CPU_State initial_cpu = {.pc=0x7201, .a=0x27, .x=0x1e, .y=0x74, .sp=0x15, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7201, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7202, .a=0x27, .x=0x1e, .y=0x75, .sp=0x15, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7201, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7201, .value=0xfc, .type=IO_READ},
        {.addr=0x7202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017C) {
    const struct CPU_State initial_cpu = {.pc=0x1740, .a=0x25, .x=0xac, .y=0x7c, .sp=0x95, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1740, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1741, .a=0x25, .x=0xac, .y=0x7d, .sp=0x95, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1740, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1740, .value=0xfc, .type=IO_READ},
        {.addr=0x1741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017D) {
    const struct CPU_State initial_cpu = {.pc=0x736a, .a=0x4c, .x=0x2b, .y=0xe9, .sp=0x1b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x736a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x736b, .a=0x4c, .x=0x2b, .y=0xea, .sp=0x1b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x736a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x736a, .value=0xfc, .type=IO_READ},
        {.addr=0x736b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4a2f, .a=0x17, .x=0x23, .y=0x08, .sp=0xd2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4a30, .a=0x17, .x=0x23, .y=0x09, .sp=0xd2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4a2f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4a2f, .value=0xfc, .type=IO_READ},
        {.addr=0x4a30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_017F) {
    const struct CPU_State initial_cpu = {.pc=0x28a7, .a=0xb5, .x=0x1e, .y=0xb2, .sp=0x11, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x28a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x28a8, .a=0xb5, .x=0x1e, .y=0xb3, .sp=0x11, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x28a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x28a7, .value=0xfc, .type=IO_READ},
        {.addr=0x28a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0180) {
    const struct CPU_State initial_cpu = {.pc=0x07ca, .a=0x07, .x=0x92, .y=0x84, .sp=0x1c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x07ca, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x07cb, .a=0x07, .x=0x92, .y=0x85, .sp=0x1c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x07ca, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x07ca, .value=0xfc, .type=IO_READ},
        {.addr=0x07cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0181) {
    const struct CPU_State initial_cpu = {.pc=0x2caa, .a=0x0b, .x=0x35, .y=0x93, .sp=0x7e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x2caa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2cab, .a=0x0b, .x=0x35, .y=0x94, .sp=0x7e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2caa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2caa, .value=0xfc, .type=IO_READ},
        {.addr=0x2cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0182) {
    const struct CPU_State initial_cpu = {.pc=0x44c0, .a=0x21, .x=0xba, .y=0xa6, .sp=0xa6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x44c0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x44c1, .a=0x21, .x=0xba, .y=0xa7, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x44c0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x44c0, .value=0xfc, .type=IO_READ},
        {.addr=0x44c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0183) {
    const struct CPU_State initial_cpu = {.pc=0x76f0, .a=0xb7, .x=0x0a, .y=0x8f, .sp=0x4a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x76f0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x76f1, .a=0xb7, .x=0x0a, .y=0x90, .sp=0x4a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x76f0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x76f0, .value=0xfc, .type=IO_READ},
        {.addr=0x76f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0184) {
    const struct CPU_State initial_cpu = {.pc=0xdfa2, .a=0x5a, .x=0x29, .y=0xad, .sp=0x20, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdfa3, .a=0x5a, .x=0x29, .y=0xae, .sp=0x20, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdfa2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdfa2, .value=0xfc, .type=IO_READ},
        {.addr=0xdfa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0185) {
    const struct CPU_State initial_cpu = {.pc=0x367b, .a=0xf0, .x=0x50, .y=0x43, .sp=0x99, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x367b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x367c, .a=0xf0, .x=0x50, .y=0x44, .sp=0x99, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x367b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x367b, .value=0xfc, .type=IO_READ},
        {.addr=0x367c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0186) {
    const struct CPU_State initial_cpu = {.pc=0x0cf3, .a=0x4b, .x=0xc7, .y=0xad, .sp=0x2d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0cf4, .a=0x4b, .x=0xc7, .y=0xae, .sp=0x2d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0cf3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0cf3, .value=0xfc, .type=IO_READ},
        {.addr=0x0cf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc753, .a=0xf7, .x=0x8d, .y=0xe4, .sp=0x1f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc753, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc754, .a=0xf7, .x=0x8d, .y=0xe5, .sp=0x1f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc753, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc753, .value=0xfc, .type=IO_READ},
        {.addr=0xc754, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0188) {
    const struct CPU_State initial_cpu = {.pc=0x3e02, .a=0x3c, .x=0xf0, .y=0xd5, .sp=0xa5, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3e02, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3e03, .a=0x3c, .x=0xf0, .y=0xd6, .sp=0xa5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3e02, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3e02, .value=0xfc, .type=IO_READ},
        {.addr=0x3e03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0189) {
    const struct CPU_State initial_cpu = {.pc=0x9f3f, .a=0x5d, .x=0xcb, .y=0x68, .sp=0xc0, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9f3f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f40, .a=0x5d, .x=0xcb, .y=0x69, .sp=0xc0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9f3f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f3f, .value=0xfc, .type=IO_READ},
        {.addr=0x9f40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018A) {
    const struct CPU_State initial_cpu = {.pc=0x30a8, .a=0xc3, .x=0xca, .y=0xbc, .sp=0x6a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x30a8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x30a9, .a=0xc3, .x=0xca, .y=0xbd, .sp=0x6a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x30a8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x30a8, .value=0xfc, .type=IO_READ},
        {.addr=0x30a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018B) {
    const struct CPU_State initial_cpu = {.pc=0xea4b, .a=0xb2, .x=0x57, .y=0x17, .sp=0x14, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xea4b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xea4c, .a=0xb2, .x=0x57, .y=0x18, .sp=0x14, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xea4b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xea4b, .value=0xfc, .type=IO_READ},
        {.addr=0xea4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018C) {
    const struct CPU_State initial_cpu = {.pc=0xc608, .a=0x08, .x=0x93, .y=0x83, .sp=0xc9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc608, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc609, .a=0x08, .x=0x93, .y=0x84, .sp=0xc9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc608, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc608, .value=0xfc, .type=IO_READ},
        {.addr=0xc609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018D) {
    const struct CPU_State initial_cpu = {.pc=0xf2e7, .a=0x3c, .x=0xf4, .y=0x20, .sp=0xb3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf2e7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf2e8, .a=0x3c, .x=0xf4, .y=0x21, .sp=0xb3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf2e7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf2e7, .value=0xfc, .type=IO_READ},
        {.addr=0xf2e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018E) {
    const struct CPU_State initial_cpu = {.pc=0xc852, .a=0xc7, .x=0x2d, .y=0x6c, .sp=0x35, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc852, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc853, .a=0xc7, .x=0x2d, .y=0x6d, .sp=0x35, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc852, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc852, .value=0xfc, .type=IO_READ},
        {.addr=0xc853, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_018F) {
    const struct CPU_State initial_cpu = {.pc=0x6127, .a=0x9e, .x=0x1e, .y=0x2d, .sp=0xd7, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x6127, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6128, .a=0x9e, .x=0x1e, .y=0x2e, .sp=0xd7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6127, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6127, .value=0xfc, .type=IO_READ},
        {.addr=0x6128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0190) {
    const struct CPU_State initial_cpu = {.pc=0xf446, .a=0x9f, .x=0xe8, .y=0x24, .sp=0x4a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf446, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf447, .a=0x9f, .x=0xe8, .y=0x25, .sp=0x4a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf446, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf446, .value=0xfc, .type=IO_READ},
        {.addr=0xf447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0191) {
    const struct CPU_State initial_cpu = {.pc=0x276c, .a=0xd7, .x=0x10, .y=0xfe, .sp=0xa3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x276c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x276d, .a=0xd7, .x=0x10, .y=0xff, .sp=0xa3, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x276c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x276c, .value=0xfc, .type=IO_READ},
        {.addr=0x276d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0192) {
    const struct CPU_State initial_cpu = {.pc=0x14fd, .a=0x49, .x=0x6b, .y=0x61, .sp=0x85, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x14fd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x14fe, .a=0x49, .x=0x6b, .y=0x62, .sp=0x85, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x14fd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x14fd, .value=0xfc, .type=IO_READ},
        {.addr=0x14fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0193) {
    const struct CPU_State initial_cpu = {.pc=0x3e30, .a=0xa0, .x=0x11, .y=0x34, .sp=0x4d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3e30, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3e31, .a=0xa0, .x=0x11, .y=0x35, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3e30, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3e30, .value=0xfc, .type=IO_READ},
        {.addr=0x3e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0194) {
    const struct CPU_State initial_cpu = {.pc=0x6348, .a=0x11, .x=0x04, .y=0x6c, .sp=0x1b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6348, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6349, .a=0x11, .x=0x04, .y=0x6d, .sp=0x1b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6348, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6348, .value=0xfc, .type=IO_READ},
        {.addr=0x6349, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0195) {
    const struct CPU_State initial_cpu = {.pc=0x6299, .a=0xf9, .x=0x0c, .y=0xa7, .sp=0xc5, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6299, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x629a, .a=0xf9, .x=0x0c, .y=0xa8, .sp=0xc5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6299, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6299, .value=0xfc, .type=IO_READ},
        {.addr=0x629a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0196) {
    const struct CPU_State initial_cpu = {.pc=0x7890, .a=0xfe, .x=0x03, .y=0x1d, .sp=0xae, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7890, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7891, .a=0xfe, .x=0x03, .y=0x1e, .sp=0xae, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7890, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7890, .value=0xfc, .type=IO_READ},
        {.addr=0x7891, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa9e9, .a=0xb6, .x=0x57, .y=0x11, .sp=0x0f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa9ea, .a=0xb6, .x=0x57, .y=0x12, .sp=0x0f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa9e9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa9e9, .value=0xfc, .type=IO_READ},
        {.addr=0xa9ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0198) {
    const struct CPU_State initial_cpu = {.pc=0xfccc, .a=0x1d, .x=0x82, .y=0xb1, .sp=0x02, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xfccc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfccd, .a=0x1d, .x=0x82, .y=0xb2, .sp=0x02, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xfccc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfccc, .value=0xfc, .type=IO_READ},
        {.addr=0xfccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0199) {
    const struct CPU_State initial_cpu = {.pc=0xc40c, .a=0xc1, .x=0x15, .y=0x1f, .sp=0x05, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc40c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc40d, .a=0xc1, .x=0x15, .y=0x20, .sp=0x05, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc40c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc40c, .value=0xfc, .type=IO_READ},
        {.addr=0xc40d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019A) {
    const struct CPU_State initial_cpu = {.pc=0x4a2e, .a=0x26, .x=0x12, .y=0x86, .sp=0x3e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4a2f, .a=0x26, .x=0x12, .y=0x87, .sp=0x3e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4a2e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4a2e, .value=0xfc, .type=IO_READ},
        {.addr=0x4a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019B) {
    const struct CPU_State initial_cpu = {.pc=0x979b, .a=0x77, .x=0x44, .y=0x67, .sp=0xd8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x979b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x979c, .a=0x77, .x=0x44, .y=0x68, .sp=0xd8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x979b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x979b, .value=0xfc, .type=IO_READ},
        {.addr=0x979c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019C) {
    const struct CPU_State initial_cpu = {.pc=0x3e30, .a=0x7d, .x=0x5a, .y=0xa7, .sp=0xbd, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e30, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3e31, .a=0x7d, .x=0x5a, .y=0xa8, .sp=0xbd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3e30, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3e30, .value=0xfc, .type=IO_READ},
        {.addr=0x3e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5e55, .a=0x9c, .x=0x92, .y=0xf7, .sp=0x94, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5e55, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5e56, .a=0x9c, .x=0x92, .y=0xf8, .sp=0x94, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5e55, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5e55, .value=0xfc, .type=IO_READ},
        {.addr=0x5e56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019E) {
    const struct CPU_State initial_cpu = {.pc=0xcfd8, .a=0x02, .x=0x4c, .y=0xf7, .sp=0x54, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xcfd8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcfd9, .a=0x02, .x=0x4c, .y=0xf8, .sp=0x54, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xcfd8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcfd8, .value=0xfc, .type=IO_READ},
        {.addr=0xcfd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_019F) {
    const struct CPU_State initial_cpu = {.pc=0x1b59, .a=0x0e, .x=0x04, .y=0x7b, .sp=0x9a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1b59, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1b5a, .a=0x0e, .x=0x04, .y=0x7c, .sp=0x9a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1b59, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1b59, .value=0xfc, .type=IO_READ},
        {.addr=0x1b5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xe8e0, .a=0xdb, .x=0x43, .y=0x19, .sp=0x7f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe8e1, .a=0xdb, .x=0x43, .y=0x1a, .sp=0x7f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe8e0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe8e0, .value=0xfc, .type=IO_READ},
        {.addr=0xe8e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xd176, .a=0xb3, .x=0xbe, .y=0xc8, .sp=0xef, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd176, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd177, .a=0xb3, .x=0xbe, .y=0xc9, .sp=0xef, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd176, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd176, .value=0xfc, .type=IO_READ},
        {.addr=0xd177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd68a, .a=0x50, .x=0xc5, .y=0x8f, .sp=0x0f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd68a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd68b, .a=0x50, .x=0xc5, .y=0x90, .sp=0x0f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd68a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd68a, .value=0xfc, .type=IO_READ},
        {.addr=0xd68b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xfd7d, .a=0x9c, .x=0x6f, .y=0x2f, .sp=0xe0, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xfd7d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfd7e, .a=0x9c, .x=0x6f, .y=0x30, .sp=0xe0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfd7d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfd7d, .value=0xfc, .type=IO_READ},
        {.addr=0xfd7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x8af9, .a=0xbd, .x=0x75, .y=0xbf, .sp=0x6d, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8af9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8afa, .a=0xbd, .x=0x75, .y=0xc0, .sp=0x6d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8af9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8af9, .value=0xfc, .type=IO_READ},
        {.addr=0x8afa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xa11a, .a=0x93, .x=0xf7, .y=0x10, .sp=0x2b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa11a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa11b, .a=0x93, .x=0xf7, .y=0x11, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa11a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa11a, .value=0xfc, .type=IO_READ},
        {.addr=0xa11b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xcd6e, .a=0xde, .x=0x09, .y=0x21, .sp=0xe2, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd6e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcd6f, .a=0xde, .x=0x09, .y=0x22, .sp=0xe2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xcd6e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcd6e, .value=0xfc, .type=IO_READ},
        {.addr=0xcd6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x26da, .a=0x93, .x=0x6b, .y=0xa6, .sp=0x2a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x26da, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x26db, .a=0x93, .x=0x6b, .y=0xa7, .sp=0x2a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x26da, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x26da, .value=0xfc, .type=IO_READ},
        {.addr=0x26db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x1373, .a=0x04, .x=0xe9, .y=0x94, .sp=0x1a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1373, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1374, .a=0x04, .x=0xe9, .y=0x95, .sp=0x1a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1373, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1373, .value=0xfc, .type=IO_READ},
        {.addr=0x1374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xfb97, .a=0x6d, .x=0x10, .y=0x70, .sp=0xa2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xfb97, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfb98, .a=0x6d, .x=0x10, .y=0x71, .sp=0xa2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xfb97, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfb97, .value=0xfc, .type=IO_READ},
        {.addr=0xfb98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x28b6, .a=0xc4, .x=0xc8, .y=0xb7, .sp=0xb9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x28b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x28b7, .a=0xc4, .x=0xc8, .y=0xb8, .sp=0xb9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x28b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x28b6, .value=0xfc, .type=IO_READ},
        {.addr=0x28b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x9e16, .a=0xde, .x=0x8e, .y=0x41, .sp=0x05, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9e16, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9e17, .a=0xde, .x=0x8e, .y=0x42, .sp=0x05, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9e16, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9e16, .value=0xfc, .type=IO_READ},
        {.addr=0x9e17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb277, .a=0x1b, .x=0xc2, .y=0x7b, .sp=0x01, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb277, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0x1b, .x=0xc2, .y=0x7c, .sp=0x01, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb277, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb277, .value=0xfc, .type=IO_READ},
        {.addr=0xb278, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x33b4, .a=0xe7, .x=0xdc, .y=0x95, .sp=0x81, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x33b4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x33b5, .a=0xe7, .x=0xdc, .y=0x96, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x33b4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x33b4, .value=0xfc, .type=IO_READ},
        {.addr=0x33b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xbef8, .a=0x56, .x=0xb5, .y=0x5a, .sp=0x3a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbef8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbef9, .a=0x56, .x=0xb5, .y=0x5b, .sp=0x3a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbef8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbef8, .value=0xfc, .type=IO_READ},
        {.addr=0xbef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x9820, .a=0x7e, .x=0x23, .y=0x0b, .sp=0x84, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9820, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9821, .a=0x7e, .x=0x23, .y=0x0c, .sp=0x84, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9820, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9820, .value=0xfc, .type=IO_READ},
        {.addr=0x9821, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x58ff, .a=0x2a, .x=0x09, .y=0x2c, .sp=0xeb, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x58ff, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5900, .a=0x2a, .x=0x09, .y=0x2d, .sp=0xeb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x58ff, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x58ff, .value=0xfc, .type=IO_READ},
        {.addr=0x5900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x363e, .a=0x77, .x=0x03, .y=0x1f, .sp=0xbe, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x363e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x363f, .a=0x77, .x=0x03, .y=0x20, .sp=0xbe, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x363e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x363e, .value=0xfc, .type=IO_READ},
        {.addr=0x363f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x1454, .a=0xd7, .x=0x4a, .y=0x1e, .sp=0xec, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1454, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1455, .a=0xd7, .x=0x4a, .y=0x1f, .sp=0xec, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1454, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1454, .value=0xfc, .type=IO_READ},
        {.addr=0x1455, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xb1bf, .a=0x5a, .x=0x72, .y=0xe1, .sp=0x0c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb1bf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb1c0, .a=0x5a, .x=0x72, .y=0xe2, .sp=0x0c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb1bf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb1bf, .value=0xfc, .type=IO_READ},
        {.addr=0xb1c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x8a0e, .a=0x40, .x=0xd9, .y=0xe4, .sp=0x66, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8a0e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8a0f, .a=0x40, .x=0xd9, .y=0xe5, .sp=0x66, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8a0e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8a0e, .value=0xfc, .type=IO_READ},
        {.addr=0x8a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x34f1, .a=0x0d, .x=0xd2, .y=0x2a, .sp=0x74, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x34f1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x34f2, .a=0x0d, .x=0xd2, .y=0x2b, .sp=0x74, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x34f1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x34f1, .value=0xfc, .type=IO_READ},
        {.addr=0x34f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xb9fc, .a=0x16, .x=0xcc, .y=0xd4, .sp=0x36, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xb9fc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb9fd, .a=0x16, .x=0xcc, .y=0xd5, .sp=0x36, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb9fc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb9fc, .value=0xfc, .type=IO_READ},
        {.addr=0xb9fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x968e, .a=0x7c, .x=0xa6, .y=0x78, .sp=0xa8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x968e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x968f, .a=0x7c, .x=0xa6, .y=0x79, .sp=0xa8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x968e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x968e, .value=0xfc, .type=IO_READ},
        {.addr=0x968f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x3d3a, .a=0x2c, .x=0xe7, .y=0x5f, .sp=0xdb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3d3b, .a=0x2c, .x=0xe7, .y=0x60, .sp=0xdb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3d3a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3d3a, .value=0xfc, .type=IO_READ},
        {.addr=0x3d3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xfc5a, .a=0x48, .x=0x67, .y=0xd1, .sp=0x87, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfc5a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfc5b, .a=0x48, .x=0x67, .y=0xd2, .sp=0x87, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xfc5a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfc5a, .value=0xfc, .type=IO_READ},
        {.addr=0xfc5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xb84e, .a=0x83, .x=0xf1, .y=0x02, .sp=0x0a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb84e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb84f, .a=0x83, .x=0xf1, .y=0x03, .sp=0x0a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb84e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb84e, .value=0xfc, .type=IO_READ},
        {.addr=0xb84f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x17b0, .a=0xbe, .x=0x46, .y=0x4c, .sp=0x36, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x17b0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x17b1, .a=0xbe, .x=0x46, .y=0x4d, .sp=0x36, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x17b0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x17b0, .value=0xfc, .type=IO_READ},
        {.addr=0x17b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xb676, .a=0x21, .x=0x92, .y=0x20, .sp=0x83, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb676, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb677, .a=0x21, .x=0x92, .y=0x21, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb676, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb676, .value=0xfc, .type=IO_READ},
        {.addr=0xb677, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x6c5f, .a=0x89, .x=0x39, .y=0x59, .sp=0xc4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6c60, .a=0x89, .x=0x39, .y=0x5a, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6c5f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6c5f, .value=0xfc, .type=IO_READ},
        {.addr=0x6c60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xf97a, .a=0xc6, .x=0x04, .y=0x49, .sp=0xee, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xf97a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf97b, .a=0xc6, .x=0x04, .y=0x4a, .sp=0xee, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf97a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf97a, .value=0xfc, .type=IO_READ},
        {.addr=0xf97b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x16ca, .a=0x0e, .x=0xed, .y=0x48, .sp=0xa8, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x16ca, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x16cb, .a=0x0e, .x=0xed, .y=0x49, .sp=0xa8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x16ca, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x16ca, .value=0xfc, .type=IO_READ},
        {.addr=0x16cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x2b9b, .a=0x19, .x=0x18, .y=0x65, .sp=0xdf, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2b9c, .a=0x19, .x=0x18, .y=0x66, .sp=0xdf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2b9b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2b9b, .value=0xfc, .type=IO_READ},
        {.addr=0x2b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x5bca, .a=0x00, .x=0xcf, .y=0xd0, .sp=0x01, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5bca, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5bcb, .a=0x00, .x=0xcf, .y=0xd1, .sp=0x01, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5bca, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5bca, .value=0xfc, .type=IO_READ},
        {.addr=0x5bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xe0f3, .a=0x35, .x=0x7c, .y=0xea, .sp=0x39, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe0f4, .a=0x35, .x=0x7c, .y=0xeb, .sp=0x39, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe0f3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe0f3, .value=0xfc, .type=IO_READ},
        {.addr=0xe0f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xd84e, .a=0x07, .x=0x04, .y=0x3e, .sp=0x0d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd84e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd84f, .a=0x07, .x=0x04, .y=0x3f, .sp=0x0d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd84e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd84e, .value=0xfc, .type=IO_READ},
        {.addr=0xd84f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xba43, .a=0xd3, .x=0x5b, .y=0xfb, .sp=0x04, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xba43, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xba44, .a=0xd3, .x=0x5b, .y=0xfc, .sp=0x04, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xba43, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xba43, .value=0xfc, .type=IO_READ},
        {.addr=0xba44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x3045, .a=0x71, .x=0x50, .y=0x0f, .sp=0xcf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3045, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3046, .a=0x71, .x=0x50, .y=0x10, .sp=0xcf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3045, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3045, .value=0xfc, .type=IO_READ},
        {.addr=0x3046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xc161, .a=0x6d, .x=0x66, .y=0x07, .sp=0x1e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc161, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc162, .a=0x6d, .x=0x66, .y=0x08, .sp=0x1e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc161, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc161, .value=0xfc, .type=IO_READ},
        {.addr=0xc162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7ef5, .a=0xd9, .x=0x35, .y=0x83, .sp=0x99, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7ef6, .a=0xd9, .x=0x35, .y=0x84, .sp=0x99, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7ef5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7ef5, .value=0xfc, .type=IO_READ},
        {.addr=0x7ef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xcd20, .a=0x22, .x=0x47, .y=0x89, .sp=0xd3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xcd20, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcd21, .a=0x22, .x=0x47, .y=0x8a, .sp=0xd3, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xcd20, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcd20, .value=0xfc, .type=IO_READ},
        {.addr=0xcd21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x1dd7, .a=0x0f, .x=0xfa, .y=0x76, .sp=0x4d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1dd8, .a=0x0f, .x=0xfa, .y=0x77, .sp=0x4d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1dd7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1dd7, .value=0xfc, .type=IO_READ},
        {.addr=0x1dd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf906, .a=0x4a, .x=0xbc, .y=0x87, .sp=0xe6, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf906, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf907, .a=0x4a, .x=0xbc, .y=0x88, .sp=0xe6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf906, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf906, .value=0xfc, .type=IO_READ},
        {.addr=0xf907, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x9dfd, .a=0x65, .x=0x9b, .y=0x89, .sp=0x0f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9dfd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9dfe, .a=0x65, .x=0x9b, .y=0x8a, .sp=0x0f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9dfd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9dfd, .value=0xfc, .type=IO_READ},
        {.addr=0x9dfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x8a7f, .a=0x28, .x=0xb0, .y=0x29, .sp=0x12, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8a80, .a=0x28, .x=0xb0, .y=0x2a, .sp=0x12, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8a7f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8a7f, .value=0xfc, .type=IO_READ},
        {.addr=0x8a80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x3c85, .a=0x15, .x=0xe7, .y=0x61, .sp=0x22, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x3c85, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3c86, .a=0x15, .x=0xe7, .y=0x62, .sp=0x22, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3c85, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3c85, .value=0xfc, .type=IO_READ},
        {.addr=0x3c86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x3a86, .a=0x13, .x=0x84, .y=0x79, .sp=0x21, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x3a86, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a87, .a=0x13, .x=0x84, .y=0x7a, .sp=0x21, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3a86, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a86, .value=0xfc, .type=IO_READ},
        {.addr=0x3a87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x1bef, .a=0x3a, .x=0x69, .y=0x3b, .sp=0x32, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1bef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1bf0, .a=0x3a, .x=0x69, .y=0x3c, .sp=0x32, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1bef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1bef, .value=0xfc, .type=IO_READ},
        {.addr=0x1bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x6eee, .a=0x77, .x=0x9c, .y=0x16, .sp=0x5d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6eee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6eef, .a=0x77, .x=0x9c, .y=0x17, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6eee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6eee, .value=0xfc, .type=IO_READ},
        {.addr=0x6eef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x12c4, .a=0x3a, .x=0xaf, .y=0xec, .sp=0x9e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x12c4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x12c5, .a=0x3a, .x=0xaf, .y=0xed, .sp=0x9e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x12c4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x12c4, .value=0xfc, .type=IO_READ},
        {.addr=0x12c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x393c, .a=0x1c, .x=0x65, .y=0x1d, .sp=0xed, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x393c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x393d, .a=0x1c, .x=0x65, .y=0x1e, .sp=0xed, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x393c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x393c, .value=0xfc, .type=IO_READ},
        {.addr=0x393d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xb792, .a=0x26, .x=0x17, .y=0x69, .sp=0x55, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb792, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb793, .a=0x26, .x=0x17, .y=0x6a, .sp=0x55, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb792, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb792, .value=0xfc, .type=IO_READ},
        {.addr=0xb793, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xc895, .a=0x60, .x=0x9a, .y=0x5a, .sp=0x37, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc895, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc896, .a=0x60, .x=0x9a, .y=0x5b, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc895, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc895, .value=0xfc, .type=IO_READ},
        {.addr=0xc896, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x31c5, .a=0x58, .x=0x70, .y=0x41, .sp=0x08, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x31c5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x31c6, .a=0x58, .x=0x70, .y=0x42, .sp=0x08, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x31c5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x31c5, .value=0xfc, .type=IO_READ},
        {.addr=0x31c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5fc5, .a=0xe3, .x=0xbd, .y=0xb5, .sp=0xfc, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5fc6, .a=0xe3, .x=0xbd, .y=0xb6, .sp=0xfc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5fc5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5fc5, .value=0xfc, .type=IO_READ},
        {.addr=0x5fc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9798, .a=0xf8, .x=0xd3, .y=0x59, .sp=0x1e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x9798, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9799, .a=0xf8, .x=0xd3, .y=0x5a, .sp=0x1e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9798, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9798, .value=0xfc, .type=IO_READ},
        {.addr=0x9799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x976a, .a=0xd1, .x=0x16, .y=0x9c, .sp=0x70, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x976a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x976b, .a=0xd1, .x=0x16, .y=0x9d, .sp=0x70, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x976a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x976a, .value=0xfc, .type=IO_READ},
        {.addr=0x976b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x64eb, .a=0xb3, .x=0xa7, .y=0x2c, .sp=0x45, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x64eb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x64ec, .a=0xb3, .x=0xa7, .y=0x2d, .sp=0x45, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x64eb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x64eb, .value=0xfc, .type=IO_READ},
        {.addr=0x64ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x3c94, .a=0xe8, .x=0x22, .y=0x9b, .sp=0x69, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3c94, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3c95, .a=0xe8, .x=0x22, .y=0x9c, .sp=0x69, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3c94, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3c94, .value=0xfc, .type=IO_READ},
        {.addr=0x3c95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x7667, .a=0x5d, .x=0x1e, .y=0xe0, .sp=0xa7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7667, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7668, .a=0x5d, .x=0x1e, .y=0xe1, .sp=0xa7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7667, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7667, .value=0xfc, .type=IO_READ},
        {.addr=0x7668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xf4d5, .a=0x2d, .x=0x99, .y=0xda, .sp=0x12, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf4d6, .a=0x2d, .x=0x99, .y=0xdb, .sp=0x12, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf4d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf4d5, .value=0xfc, .type=IO_READ},
        {.addr=0xf4d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x56e1, .a=0x6b, .x=0xd6, .y=0x54, .sp=0xf8, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x56e1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x56e2, .a=0x6b, .x=0xd6, .y=0x55, .sp=0xf8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x56e1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x56e1, .value=0xfc, .type=IO_READ},
        {.addr=0x56e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x7589, .a=0x1d, .x=0xcd, .y=0xcc, .sp=0xc9, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7589, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x758a, .a=0x1d, .x=0xcd, .y=0xcd, .sp=0xc9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7589, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7589, .value=0xfc, .type=IO_READ},
        {.addr=0x758a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x7982, .a=0x19, .x=0xa6, .y=0x33, .sp=0x19, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7982, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7983, .a=0x19, .x=0xa6, .y=0x34, .sp=0x19, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7982, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7982, .value=0xfc, .type=IO_READ},
        {.addr=0x7983, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x20c6, .a=0x8d, .x=0x2e, .y=0xa4, .sp=0xc5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x20c6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x20c7, .a=0x8d, .x=0x2e, .y=0xa5, .sp=0xc5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x20c6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x20c6, .value=0xfc, .type=IO_READ},
        {.addr=0x20c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x7314, .a=0x84, .x=0x2a, .y=0x61, .sp=0x12, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7314, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7315, .a=0x84, .x=0x2a, .y=0x62, .sp=0x12, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7314, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7314, .value=0xfc, .type=IO_READ},
        {.addr=0x7315, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x35fb, .a=0x53, .x=0xc0, .y=0x59, .sp=0x20, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x35fb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x35fc, .a=0x53, .x=0xc0, .y=0x5a, .sp=0x20, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x35fb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x35fb, .value=0xfc, .type=IO_READ},
        {.addr=0x35fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xa122, .a=0xe0, .x=0x86, .y=0x62, .sp=0x0f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa122, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa123, .a=0xe0, .x=0x86, .y=0x63, .sp=0x0f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa122, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa122, .value=0xfc, .type=IO_READ},
        {.addr=0xa123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xb1e1, .a=0x92, .x=0x4f, .y=0x36, .sp=0x4a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb1e2, .a=0x92, .x=0x4f, .y=0x37, .sp=0x4a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb1e1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb1e1, .value=0xfc, .type=IO_READ},
        {.addr=0xb1e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xb323, .a=0x7a, .x=0x0f, .y=0xb9, .sp=0xe0, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb323, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb324, .a=0x7a, .x=0x0f, .y=0xba, .sp=0xe0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb323, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb323, .value=0xfc, .type=IO_READ},
        {.addr=0xb324, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x983b, .a=0x4c, .x=0x42, .y=0xa6, .sp=0x1f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x983b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x983c, .a=0x4c, .x=0x42, .y=0xa7, .sp=0x1f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x983b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x983b, .value=0xfc, .type=IO_READ},
        {.addr=0x983c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x1dd4, .a=0x4d, .x=0xca, .y=0xc7, .sp=0xf2, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1dd5, .a=0x4d, .x=0xca, .y=0xc8, .sp=0xf2, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1dd4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1dd4, .value=0xfc, .type=IO_READ},
        {.addr=0x1dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xae89, .a=0x07, .x=0xce, .y=0x28, .sp=0x45, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xae89, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xae8a, .a=0x07, .x=0xce, .y=0x29, .sp=0x45, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xae89, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xae89, .value=0xfc, .type=IO_READ},
        {.addr=0xae8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x5f7f, .a=0x6e, .x=0xfc, .y=0xac, .sp=0x74, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f7f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5f80, .a=0x6e, .x=0xfc, .y=0xad, .sp=0x74, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5f7f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5f7f, .value=0xfc, .type=IO_READ},
        {.addr=0x5f80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xf508, .a=0xa7, .x=0x0a, .y=0xc4, .sp=0x29, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf508, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf509, .a=0xa7, .x=0x0a, .y=0xc5, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf508, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf508, .value=0xfc, .type=IO_READ},
        {.addr=0xf509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa669, .a=0xce, .x=0xf8, .y=0x88, .sp=0xa0, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa669, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa66a, .a=0xce, .x=0xf8, .y=0x89, .sp=0xa0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa669, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa669, .value=0xfc, .type=IO_READ},
        {.addr=0xa66a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x8223, .a=0x34, .x=0xd4, .y=0xd2, .sp=0x5a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8223, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8224, .a=0x34, .x=0xd4, .y=0xd3, .sp=0x5a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8223, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8223, .value=0xfc, .type=IO_READ},
        {.addr=0x8224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x37f1, .a=0x95, .x=0xdb, .y=0x44, .sp=0x74, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x37f1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x37f2, .a=0x95, .x=0xdb, .y=0x45, .sp=0x74, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x37f1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x37f1, .value=0xfc, .type=IO_READ},
        {.addr=0x37f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x5b47, .a=0x26, .x=0xc9, .y=0xf1, .sp=0x96, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5b47, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b48, .a=0x26, .x=0xc9, .y=0xf2, .sp=0x96, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5b47, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b47, .value=0xfc, .type=IO_READ},
        {.addr=0x5b48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xabea, .a=0xbc, .x=0x8b, .y=0xe8, .sp=0x6a, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xabea, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xabeb, .a=0xbc, .x=0x8b, .y=0xe9, .sp=0x6a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xabea, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xabea, .value=0xfc, .type=IO_READ},
        {.addr=0xabeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xddd5, .a=0x84, .x=0xe4, .y=0xc9, .sp=0xc4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xddd5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xddd6, .a=0x84, .x=0xe4, .y=0xca, .sp=0xc4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xddd5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xddd5, .value=0xfc, .type=IO_READ},
        {.addr=0xddd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe70c, .a=0x4b, .x=0x49, .y=0xd5, .sp=0xe3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xe70c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe70d, .a=0x4b, .x=0x49, .y=0xd6, .sp=0xe3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe70c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe70c, .value=0xfc, .type=IO_READ},
        {.addr=0xe70d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xdb62, .a=0xdf, .x=0x65, .y=0xaf, .sp=0x30, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xdb62, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdb63, .a=0xdf, .x=0x65, .y=0xb0, .sp=0x30, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdb62, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdb62, .value=0xfc, .type=IO_READ},
        {.addr=0xdb63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x5b9b, .a=0x28, .x=0x4d, .y=0x10, .sp=0xff, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x5b9b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b9c, .a=0x28, .x=0x4d, .y=0x11, .sp=0xff, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5b9b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b9b, .value=0xfc, .type=IO_READ},
        {.addr=0x5b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x43eb, .a=0x32, .x=0x0c, .y=0x06, .sp=0x47, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x43eb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0x32, .x=0x0c, .y=0x07, .sp=0x47, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x43eb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x43eb, .value=0xfc, .type=IO_READ},
        {.addr=0x43ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xaebf, .a=0xc2, .x=0xae, .y=0x6e, .sp=0xf1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xaebf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaec0, .a=0xc2, .x=0xae, .y=0x6f, .sp=0xf1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xaebf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaebf, .value=0xfc, .type=IO_READ},
        {.addr=0xaec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x34b6, .a=0x74, .x=0xcc, .y=0xe9, .sp=0x98, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x34b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x34b7, .a=0x74, .x=0xcc, .y=0xea, .sp=0x98, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x34b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x34b6, .value=0xfc, .type=IO_READ},
        {.addr=0x34b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x9f19, .a=0x48, .x=0x6c, .y=0x87, .sp=0x4d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f19, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f1a, .a=0x48, .x=0x6c, .y=0x88, .sp=0x4d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9f19, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f19, .value=0xfc, .type=IO_READ},
        {.addr=0x9f1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xbaf8, .a=0x06, .x=0xc2, .y=0x08, .sp=0xcc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xbaf8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbaf9, .a=0x06, .x=0xc2, .y=0x09, .sp=0xcc, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbaf8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbaf8, .value=0xfc, .type=IO_READ},
        {.addr=0xbaf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x7892, .a=0xa1, .x=0x9a, .y=0xfb, .sp=0xb2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7892, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7893, .a=0xa1, .x=0x9a, .y=0xfc, .sp=0xb2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7892, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7892, .value=0xfc, .type=IO_READ},
        {.addr=0x7893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xa1a1, .a=0xfa, .x=0xde, .y=0xfc, .sp=0xa5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa1a2, .a=0xfa, .x=0xde, .y=0xfd, .sp=0xa5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa1a1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa1a1, .value=0xfc, .type=IO_READ},
        {.addr=0xa1a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x7508, .a=0x19, .x=0xf8, .y=0xda, .sp=0xa8, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7508, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7509, .a=0x19, .x=0xf8, .y=0xdb, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7508, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7508, .value=0xfc, .type=IO_READ},
        {.addr=0x7509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x8d49, .a=0xaa, .x=0xac, .y=0xf9, .sp=0x1c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8d49, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8d4a, .a=0xaa, .x=0xac, .y=0xfa, .sp=0x1c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8d49, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8d49, .value=0xfc, .type=IO_READ},
        {.addr=0x8d4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x192b, .a=0x0a, .x=0xd2, .y=0x52, .sp=0x52, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x192b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x192c, .a=0x0a, .x=0xd2, .y=0x53, .sp=0x52, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x192b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x192b, .value=0xfc, .type=IO_READ},
        {.addr=0x192c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xbfd5, .a=0x02, .x=0x72, .y=0x77, .sp=0x5b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbfd6, .a=0x02, .x=0x72, .y=0x78, .sp=0x5b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbfd5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbfd5, .value=0xfc, .type=IO_READ},
        {.addr=0xbfd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x1c29, .a=0x75, .x=0x92, .y=0x4e, .sp=0xaa, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1c29, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1c2a, .a=0x75, .x=0x92, .y=0x4f, .sp=0xaa, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1c29, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1c29, .value=0xfc, .type=IO_READ},
        {.addr=0x1c2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0200) {
    const struct CPU_State initial_cpu = {.pc=0xa39f, .a=0x3b, .x=0xb4, .y=0xd2, .sp=0x16, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa39f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa3a0, .a=0x3b, .x=0xb4, .y=0xd3, .sp=0x16, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa39f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa39f, .value=0xfc, .type=IO_READ},
        {.addr=0xa3a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1a7e, .a=0x9c, .x=0x80, .y=0xfd, .sp=0x7d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1a7f, .a=0x9c, .x=0x80, .y=0xfe, .sp=0x7d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1a7e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1a7e, .value=0xfc, .type=IO_READ},
        {.addr=0x1a7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0202) {
    const struct CPU_State initial_cpu = {.pc=0xf387, .a=0xcd, .x=0x5b, .y=0x9c, .sp=0x65, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xf387, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf388, .a=0xcd, .x=0x5b, .y=0x9d, .sp=0x65, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf387, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf387, .value=0xfc, .type=IO_READ},
        {.addr=0xf388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0203) {
    const struct CPU_State initial_cpu = {.pc=0x5015, .a=0x4a, .x=0xec, .y=0x83, .sp=0x6c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5015, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5016, .a=0x4a, .x=0xec, .y=0x84, .sp=0x6c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5015, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5015, .value=0xfc, .type=IO_READ},
        {.addr=0x5016, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0204) {
    const struct CPU_State initial_cpu = {.pc=0xfba2, .a=0xb4, .x=0xd0, .y=0xc7, .sp=0x1c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfba2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfba3, .a=0xb4, .x=0xd0, .y=0xc8, .sp=0x1c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfba2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfba2, .value=0xfc, .type=IO_READ},
        {.addr=0xfba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0205) {
    const struct CPU_State initial_cpu = {.pc=0x6049, .a=0xb3, .x=0x48, .y=0xc5, .sp=0xa3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x6049, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x604a, .a=0xb3, .x=0x48, .y=0xc6, .sp=0xa3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6049, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6049, .value=0xfc, .type=IO_READ},
        {.addr=0x604a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc2c6, .a=0x11, .x=0xcc, .y=0xc7, .sp=0x20, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc2c6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc2c7, .a=0x11, .x=0xcc, .y=0xc8, .sp=0x20, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc2c6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc2c6, .value=0xfc, .type=IO_READ},
        {.addr=0xc2c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0207) {
    const struct CPU_State initial_cpu = {.pc=0x93f5, .a=0x87, .x=0xd3, .y=0x4a, .sp=0x8f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x93f5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x93f6, .a=0x87, .x=0xd3, .y=0x4b, .sp=0x8f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x93f5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x93f5, .value=0xfc, .type=IO_READ},
        {.addr=0x93f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0208) {
    const struct CPU_State initial_cpu = {.pc=0xbddd, .a=0xe4, .x=0xaf, .y=0xee, .sp=0x3c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbddd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbdde, .a=0xe4, .x=0xaf, .y=0xef, .sp=0x3c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbddd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbddd, .value=0xfc, .type=IO_READ},
        {.addr=0xbdde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0209) {
    const struct CPU_State initial_cpu = {.pc=0x6c03, .a=0x73, .x=0x7b, .y=0x58, .sp=0x53, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6c03, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6c04, .a=0x73, .x=0x7b, .y=0x59, .sp=0x53, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6c03, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6c03, .value=0xfc, .type=IO_READ},
        {.addr=0x6c04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020A) {
    const struct CPU_State initial_cpu = {.pc=0x48fc, .a=0xb0, .x=0x67, .y=0xaa, .sp=0x19, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x48fc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x48fd, .a=0xb0, .x=0x67, .y=0xab, .sp=0x19, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x48fc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x48fc, .value=0xfc, .type=IO_READ},
        {.addr=0x48fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020B) {
    const struct CPU_State initial_cpu = {.pc=0x7d81, .a=0xc2, .x=0x98, .y=0x64, .sp=0xb6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7d81, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7d82, .a=0xc2, .x=0x98, .y=0x65, .sp=0xb6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7d81, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7d81, .value=0xfc, .type=IO_READ},
        {.addr=0x7d82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020C) {
    const struct CPU_State initial_cpu = {.pc=0x6e16, .a=0x3d, .x=0x03, .y=0x85, .sp=0x5f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6e16, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6e17, .a=0x3d, .x=0x03, .y=0x86, .sp=0x5f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6e16, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6e16, .value=0xfc, .type=IO_READ},
        {.addr=0x6e17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020D) {
    const struct CPU_State initial_cpu = {.pc=0x50e1, .a=0x88, .x=0x03, .y=0x82, .sp=0x2b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x50e1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x50e2, .a=0x88, .x=0x03, .y=0x83, .sp=0x2b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x50e1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x50e1, .value=0xfc, .type=IO_READ},
        {.addr=0x50e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020E) {
    const struct CPU_State initial_cpu = {.pc=0x2e52, .a=0x97, .x=0x8f, .y=0x39, .sp=0x75, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2e52, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2e53, .a=0x97, .x=0x8f, .y=0x3a, .sp=0x75, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2e52, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2e52, .value=0xfc, .type=IO_READ},
        {.addr=0x2e53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_020F) {
    const struct CPU_State initial_cpu = {.pc=0x39c8, .a=0x74, .x=0x33, .y=0x20, .sp=0xef, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x39c8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x39c9, .a=0x74, .x=0x33, .y=0x21, .sp=0xef, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x39c8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x39c8, .value=0xfc, .type=IO_READ},
        {.addr=0x39c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0210) {
    const struct CPU_State initial_cpu = {.pc=0x9b16, .a=0xd1, .x=0xa1, .y=0xd6, .sp=0x96, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9b16, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9b17, .a=0xd1, .x=0xa1, .y=0xd7, .sp=0x96, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9b16, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9b16, .value=0xfc, .type=IO_READ},
        {.addr=0x9b17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0211) {
    const struct CPU_State initial_cpu = {.pc=0x978e, .a=0x1f, .x=0xda, .y=0x11, .sp=0x2e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x978e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x978f, .a=0x1f, .x=0xda, .y=0x12, .sp=0x2e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x978e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x978e, .value=0xfc, .type=IO_READ},
        {.addr=0x978f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0212) {
    const struct CPU_State initial_cpu = {.pc=0xc9dd, .a=0xae, .x=0xbd, .y=0x59, .sp=0xb9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xc9dd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc9de, .a=0xae, .x=0xbd, .y=0x5a, .sp=0xb9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc9dd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc9dd, .value=0xfc, .type=IO_READ},
        {.addr=0xc9de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0213) {
    const struct CPU_State initial_cpu = {.pc=0x7825, .a=0xa8, .x=0x59, .y=0xf8, .sp=0xbe, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7825, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7826, .a=0xa8, .x=0x59, .y=0xf9, .sp=0xbe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7825, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7825, .value=0xfc, .type=IO_READ},
        {.addr=0x7826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8c84, .a=0xd0, .x=0xe2, .y=0x66, .sp=0x44, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8c84, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8c85, .a=0xd0, .x=0xe2, .y=0x67, .sp=0x44, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8c84, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8c84, .value=0xfc, .type=IO_READ},
        {.addr=0x8c85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0215) {
    const struct CPU_State initial_cpu = {.pc=0xd3d1, .a=0x4a, .x=0x5f, .y=0x87, .sp=0x6f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd3d2, .a=0x4a, .x=0x5f, .y=0x88, .sp=0x6f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd3d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd3d1, .value=0xfc, .type=IO_READ},
        {.addr=0xd3d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0216) {
    const struct CPU_State initial_cpu = {.pc=0xe4e7, .a=0x4e, .x=0x9b, .y=0x74, .sp=0x1b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe4e8, .a=0x4e, .x=0x9b, .y=0x75, .sp=0x1b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe4e7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe4e7, .value=0xfc, .type=IO_READ},
        {.addr=0xe4e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0217) {
    const struct CPU_State initial_cpu = {.pc=0x8650, .a=0xf7, .x=0x80, .y=0x20, .sp=0xde, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x8650, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8651, .a=0xf7, .x=0x80, .y=0x21, .sp=0xde, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8650, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8650, .value=0xfc, .type=IO_READ},
        {.addr=0x8651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0218) {
    const struct CPU_State initial_cpu = {.pc=0xc15e, .a=0x4f, .x=0x94, .y=0x8d, .sp=0x4f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc15e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc15f, .a=0x4f, .x=0x94, .y=0x8e, .sp=0x4f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc15e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc15e, .value=0xfc, .type=IO_READ},
        {.addr=0xc15f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0219) {
    const struct CPU_State initial_cpu = {.pc=0x4ab2, .a=0x02, .x=0xce, .y=0x16, .sp=0x57, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4ab2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4ab3, .a=0x02, .x=0xce, .y=0x17, .sp=0x57, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4ab2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4ab2, .value=0xfc, .type=IO_READ},
        {.addr=0x4ab3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021A) {
    const struct CPU_State initial_cpu = {.pc=0x805e, .a=0xb8, .x=0x88, .y=0x47, .sp=0x3a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x805e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x805f, .a=0xb8, .x=0x88, .y=0x48, .sp=0x3a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x805e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x805e, .value=0xfc, .type=IO_READ},
        {.addr=0x805f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021B) {
    const struct CPU_State initial_cpu = {.pc=0x02cc, .a=0x6f, .x=0xa3, .y=0x81, .sp=0x39, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x02cc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x02cd, .a=0x6f, .x=0xa3, .y=0x82, .sp=0x39, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x02cc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x02cc, .value=0xfc, .type=IO_READ},
        {.addr=0x02cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021C) {
    const struct CPU_State initial_cpu = {.pc=0x36f8, .a=0xd2, .x=0xd4, .y=0x03, .sp=0x83, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x36f8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x36f9, .a=0xd2, .x=0xd4, .y=0x04, .sp=0x83, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x36f8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x36f8, .value=0xfc, .type=IO_READ},
        {.addr=0x36f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021D) {
    const struct CPU_State initial_cpu = {.pc=0x16b9, .a=0xab, .x=0xad, .y=0x07, .sp=0x7d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x16b9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x16ba, .a=0xab, .x=0xad, .y=0x08, .sp=0x7d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x16b9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x16b9, .value=0xfc, .type=IO_READ},
        {.addr=0x16ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021E) {
    const struct CPU_State initial_cpu = {.pc=0x9f64, .a=0x3b, .x=0x69, .y=0x30, .sp=0x1e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9f64, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f65, .a=0x3b, .x=0x69, .y=0x31, .sp=0x1e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9f64, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f64, .value=0xfc, .type=IO_READ},
        {.addr=0x9f65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_021F) {
    const struct CPU_State initial_cpu = {.pc=0x6156, .a=0x64, .x=0x28, .y=0x2a, .sp=0x04, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6156, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6157, .a=0x64, .x=0x28, .y=0x2b, .sp=0x04, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6156, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6156, .value=0xfc, .type=IO_READ},
        {.addr=0x6157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9c1b, .a=0x8a, .x=0x38, .y=0xc3, .sp=0x0c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c1b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9c1c, .a=0x8a, .x=0x38, .y=0xc4, .sp=0x0c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9c1b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9c1b, .value=0xfc, .type=IO_READ},
        {.addr=0x9c1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0221) {
    const struct CPU_State initial_cpu = {.pc=0x4ac0, .a=0xb0, .x=0xca, .y=0x62, .sp=0x34, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4ac1, .a=0xb0, .x=0xca, .y=0x63, .sp=0x34, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4ac0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4ac0, .value=0xfc, .type=IO_READ},
        {.addr=0x4ac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0222) {
    const struct CPU_State initial_cpu = {.pc=0x0ca8, .a=0x7c, .x=0x2d, .y=0x9c, .sp=0x32, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0ca9, .a=0x7c, .x=0x2d, .y=0x9d, .sp=0x32, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0ca8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0ca8, .value=0xfc, .type=IO_READ},
        {.addr=0x0ca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0223) {
    const struct CPU_State initial_cpu = {.pc=0x02d7, .a=0xdc, .x=0x8b, .y=0xdb, .sp=0x4f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x02d7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x02d8, .a=0xdc, .x=0x8b, .y=0xdc, .sp=0x4f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x02d7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x02d7, .value=0xfc, .type=IO_READ},
        {.addr=0x02d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0224) {
    const struct CPU_State initial_cpu = {.pc=0xfd9c, .a=0xb7, .x=0x09, .y=0x4a, .sp=0xd0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xfd9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfd9d, .a=0xb7, .x=0x09, .y=0x4b, .sp=0xd0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xfd9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfd9c, .value=0xfc, .type=IO_READ},
        {.addr=0xfd9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0225) {
    const struct CPU_State initial_cpu = {.pc=0xd37b, .a=0x08, .x=0xe9, .y=0x1f, .sp=0xba, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd37b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd37c, .a=0x08, .x=0xe9, .y=0x20, .sp=0xba, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd37b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd37b, .value=0xfc, .type=IO_READ},
        {.addr=0xd37c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6d15, .a=0x97, .x=0x05, .y=0x58, .sp=0x8d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6d15, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6d16, .a=0x97, .x=0x05, .y=0x59, .sp=0x8d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6d15, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6d15, .value=0xfc, .type=IO_READ},
        {.addr=0x6d16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0227) {
    const struct CPU_State initial_cpu = {.pc=0xb4e6, .a=0x03, .x=0x56, .y=0xc7, .sp=0x2f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb4e6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb4e7, .a=0x03, .x=0x56, .y=0xc8, .sp=0x2f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb4e6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb4e6, .value=0xfc, .type=IO_READ},
        {.addr=0xb4e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0228) {
    const struct CPU_State initial_cpu = {.pc=0xd580, .a=0xf4, .x=0x2a, .y=0xc8, .sp=0x6a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd580, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd581, .a=0xf4, .x=0x2a, .y=0xc9, .sp=0x6a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd580, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd580, .value=0xfc, .type=IO_READ},
        {.addr=0xd581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0229) {
    const struct CPU_State initial_cpu = {.pc=0xcada, .a=0x89, .x=0x98, .y=0x31, .sp=0x01, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcada, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcadb, .a=0x89, .x=0x98, .y=0x32, .sp=0x01, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcada, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcada, .value=0xfc, .type=IO_READ},
        {.addr=0xcadb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022A) {
    const struct CPU_State initial_cpu = {.pc=0xb1e3, .a=0xf5, .x=0x29, .y=0x33, .sp=0x7e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb1e4, .a=0xf5, .x=0x29, .y=0x34, .sp=0x7e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb1e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb1e3, .value=0xfc, .type=IO_READ},
        {.addr=0xb1e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022B) {
    const struct CPU_State initial_cpu = {.pc=0xdc15, .a=0x95, .x=0x33, .y=0x27, .sp=0xe9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xdc15, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdc16, .a=0x95, .x=0x33, .y=0x28, .sp=0xe9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xdc15, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdc15, .value=0xfc, .type=IO_READ},
        {.addr=0xdc16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf226, .a=0x5f, .x=0x3e, .y=0x93, .sp=0x50, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf226, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf227, .a=0x5f, .x=0x3e, .y=0x94, .sp=0x50, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf226, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf226, .value=0xfc, .type=IO_READ},
        {.addr=0xf227, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022D) {
    const struct CPU_State initial_cpu = {.pc=0x308a, .a=0xb6, .x=0xb6, .y=0x14, .sp=0x5e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x308a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x308b, .a=0xb6, .x=0xb6, .y=0x15, .sp=0x5e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x308a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x308a, .value=0xfc, .type=IO_READ},
        {.addr=0x308b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022E) {
    const struct CPU_State initial_cpu = {.pc=0x0fbe, .a=0x15, .x=0x54, .y=0x6b, .sp=0x55, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbe, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0fbf, .a=0x15, .x=0x54, .y=0x6c, .sp=0x55, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0fbe, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0fbe, .value=0xfc, .type=IO_READ},
        {.addr=0x0fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa8a1, .a=0xbf, .x=0x48, .y=0x5a, .sp=0xd4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa8a2, .a=0xbf, .x=0x48, .y=0x5b, .sp=0xd4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa8a1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa8a1, .value=0xfc, .type=IO_READ},
        {.addr=0xa8a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0230) {
    const struct CPU_State initial_cpu = {.pc=0x0732, .a=0xb2, .x=0x90, .y=0x39, .sp=0xdd, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0732, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0733, .a=0xb2, .x=0x90, .y=0x3a, .sp=0xdd, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0732, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0732, .value=0xfc, .type=IO_READ},
        {.addr=0x0733, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9041, .a=0xbb, .x=0xe4, .y=0x44, .sp=0xd8, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x9041, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9042, .a=0xbb, .x=0xe4, .y=0x45, .sp=0xd8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9041, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9041, .value=0xfc, .type=IO_READ},
        {.addr=0x9042, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0232) {
    const struct CPU_State initial_cpu = {.pc=0x57d5, .a=0x07, .x=0x83, .y=0x98, .sp=0x20, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x57d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x57d6, .a=0x07, .x=0x83, .y=0x99, .sp=0x20, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x57d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x57d5, .value=0xfc, .type=IO_READ},
        {.addr=0x57d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0233) {
    const struct CPU_State initial_cpu = {.pc=0x9a56, .a=0x4d, .x=0x19, .y=0xa3, .sp=0x23, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9a56, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9a57, .a=0x4d, .x=0x19, .y=0xa4, .sp=0x23, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9a56, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9a56, .value=0xfc, .type=IO_READ},
        {.addr=0x9a57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0234) {
    const struct CPU_State initial_cpu = {.pc=0x61e9, .a=0x15, .x=0x22, .y=0x05, .sp=0x5d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x61e9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x61ea, .a=0x15, .x=0x22, .y=0x06, .sp=0x5d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x61e9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x61e9, .value=0xfc, .type=IO_READ},
        {.addr=0x61ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0235) {
    const struct CPU_State initial_cpu = {.pc=0x9c4e, .a=0x5e, .x=0x8e, .y=0xba, .sp=0xa1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9c4e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9c4f, .a=0x5e, .x=0x8e, .y=0xbb, .sp=0xa1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9c4e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9c4e, .value=0xfc, .type=IO_READ},
        {.addr=0x9c4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0236) {
    const struct CPU_State initial_cpu = {.pc=0x251f, .a=0x78, .x=0x97, .y=0xd8, .sp=0xad, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x251f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2520, .a=0x78, .x=0x97, .y=0xd9, .sp=0xad, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x251f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x251f, .value=0xfc, .type=IO_READ},
        {.addr=0x2520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0237) {
    const struct CPU_State initial_cpu = {.pc=0x7067, .a=0x68, .x=0x06, .y=0x4a, .sp=0xe5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7067, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7068, .a=0x68, .x=0x06, .y=0x4b, .sp=0xe5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7067, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7067, .value=0xfc, .type=IO_READ},
        {.addr=0x7068, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0238) {
    const struct CPU_State initial_cpu = {.pc=0x74b6, .a=0x05, .x=0x16, .y=0xd2, .sp=0xc1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x74b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x74b7, .a=0x05, .x=0x16, .y=0xd3, .sp=0xc1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x74b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x74b6, .value=0xfc, .type=IO_READ},
        {.addr=0x74b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0239) {
    const struct CPU_State initial_cpu = {.pc=0x56d5, .a=0xea, .x=0x6b, .y=0xb2, .sp=0x50, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x56d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x56d6, .a=0xea, .x=0x6b, .y=0xb3, .sp=0x50, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x56d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x56d5, .value=0xfc, .type=IO_READ},
        {.addr=0x56d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023A) {
    const struct CPU_State initial_cpu = {.pc=0x3953, .a=0xe5, .x=0xd3, .y=0x38, .sp=0x6f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3953, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3954, .a=0xe5, .x=0xd3, .y=0x39, .sp=0x6f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3953, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3953, .value=0xfc, .type=IO_READ},
        {.addr=0x3954, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9971, .a=0xf0, .x=0x76, .y=0xbf, .sp=0xb7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9971, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9972, .a=0xf0, .x=0x76, .y=0xc0, .sp=0xb7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9971, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9971, .value=0xfc, .type=IO_READ},
        {.addr=0x9972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023C) {
    const struct CPU_State initial_cpu = {.pc=0x7da2, .a=0xf1, .x=0xdd, .y=0x55, .sp=0xd1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7da2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7da3, .a=0xf1, .x=0xdd, .y=0x56, .sp=0xd1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7da2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7da2, .value=0xfc, .type=IO_READ},
        {.addr=0x7da3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023D) {
    const struct CPU_State initial_cpu = {.pc=0x2a51, .a=0x0f, .x=0x34, .y=0xb7, .sp=0x96, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a51, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2a52, .a=0x0f, .x=0x34, .y=0xb8, .sp=0x96, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2a51, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2a51, .value=0xfc, .type=IO_READ},
        {.addr=0x2a52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023E) {
    const struct CPU_State initial_cpu = {.pc=0x67d7, .a=0x21, .x=0xcb, .y=0x58, .sp=0x1a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x67d7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x67d8, .a=0x21, .x=0xcb, .y=0x59, .sp=0x1a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x67d7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x67d7, .value=0xfc, .type=IO_READ},
        {.addr=0x67d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_023F) {
    const struct CPU_State initial_cpu = {.pc=0x8b7a, .a=0x5c, .x=0xcb, .y=0x3e, .sp=0xd8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8b7a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8b7b, .a=0x5c, .x=0xcb, .y=0x3f, .sp=0xd8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8b7a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8b7a, .value=0xfc, .type=IO_READ},
        {.addr=0x8b7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0240) {
    const struct CPU_State initial_cpu = {.pc=0xa67c, .a=0x48, .x=0x72, .y=0xb2, .sp=0x4e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa67c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa67d, .a=0x48, .x=0x72, .y=0xb3, .sp=0x4e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa67c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa67c, .value=0xfc, .type=IO_READ},
        {.addr=0xa67d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0241) {
    const struct CPU_State initial_cpu = {.pc=0x1f63, .a=0x4f, .x=0x88, .y=0x0f, .sp=0xa0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x1f63, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1f64, .a=0x4f, .x=0x88, .y=0x10, .sp=0xa0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1f63, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1f63, .value=0xfc, .type=IO_READ},
        {.addr=0x1f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0242) {
    const struct CPU_State initial_cpu = {.pc=0x6357, .a=0x05, .x=0x01, .y=0x3d, .sp=0x01, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6357, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6358, .a=0x05, .x=0x01, .y=0x3e, .sp=0x01, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6357, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6357, .value=0xfc, .type=IO_READ},
        {.addr=0x6358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0243) {
    const struct CPU_State initial_cpu = {.pc=0x4169, .a=0xda, .x=0xfc, .y=0xe4, .sp=0x5f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4169, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x416a, .a=0xda, .x=0xfc, .y=0xe5, .sp=0x5f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4169, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4169, .value=0xfc, .type=IO_READ},
        {.addr=0x416a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0244) {
    const struct CPU_State initial_cpu = {.pc=0xae43, .a=0x4b, .x=0xda, .y=0xfd, .sp=0xb1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xae43, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xae44, .a=0x4b, .x=0xda, .y=0xfe, .sp=0xb1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xae43, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xae43, .value=0xfc, .type=IO_READ},
        {.addr=0xae44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0245) {
    const struct CPU_State initial_cpu = {.pc=0x9f5d, .a=0x9c, .x=0x48, .y=0xd4, .sp=0xac, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9f5d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f5e, .a=0x9c, .x=0x48, .y=0xd5, .sp=0xac, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9f5d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f5d, .value=0xfc, .type=IO_READ},
        {.addr=0x9f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0246) {
    const struct CPU_State initial_cpu = {.pc=0x831a, .a=0x0b, .x=0x4b, .y=0x6a, .sp=0x19, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x831a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x831b, .a=0x0b, .x=0x4b, .y=0x6b, .sp=0x19, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x831a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x831a, .value=0xfc, .type=IO_READ},
        {.addr=0x831b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0247) {
    const struct CPU_State initial_cpu = {.pc=0x886f, .a=0x83, .x=0x38, .y=0xe7, .sp=0x26, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x886f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8870, .a=0x83, .x=0x38, .y=0xe8, .sp=0x26, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x886f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x886f, .value=0xfc, .type=IO_READ},
        {.addr=0x8870, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0248) {
    const struct CPU_State initial_cpu = {.pc=0xb3d1, .a=0xcb, .x=0x7a, .y=0x45, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb3d2, .a=0xcb, .x=0x7a, .y=0x46, .sp=0xe3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb3d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb3d1, .value=0xfc, .type=IO_READ},
        {.addr=0xb3d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0249) {
    const struct CPU_State initial_cpu = {.pc=0xdace, .a=0x08, .x=0x7e, .y=0x61, .sp=0x54, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xdace, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdacf, .a=0x08, .x=0x7e, .y=0x62, .sp=0x54, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdace, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdace, .value=0xfc, .type=IO_READ},
        {.addr=0xdacf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024A) {
    const struct CPU_State initial_cpu = {.pc=0x69ea, .a=0x77, .x=0x14, .y=0xb8, .sp=0x9d, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x69ea, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x69eb, .a=0x77, .x=0x14, .y=0xb9, .sp=0x9d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x69ea, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x69ea, .value=0xfc, .type=IO_READ},
        {.addr=0x69eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024B) {
    const struct CPU_State initial_cpu = {.pc=0xbd16, .a=0x19, .x=0x21, .y=0xf2, .sp=0x72, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xbd16, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbd17, .a=0x19, .x=0x21, .y=0xf3, .sp=0x72, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xbd16, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbd16, .value=0xfc, .type=IO_READ},
        {.addr=0xbd17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024C) {
    const struct CPU_State initial_cpu = {.pc=0x2928, .a=0x3b, .x=0x7a, .y=0xf0, .sp=0x39, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2928, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2929, .a=0x3b, .x=0x7a, .y=0xf1, .sp=0x39, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2928, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2928, .value=0xfc, .type=IO_READ},
        {.addr=0x2929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024D) {
    const struct CPU_State initial_cpu = {.pc=0x5f13, .a=0xc0, .x=0xd6, .y=0x4a, .sp=0xe8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5f13, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5f14, .a=0xc0, .x=0xd6, .y=0x4b, .sp=0xe8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5f13, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5f13, .value=0xfc, .type=IO_READ},
        {.addr=0x5f14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024E) {
    const struct CPU_State initial_cpu = {.pc=0x1d42, .a=0xa4, .x=0x51, .y=0x56, .sp=0xb3, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1d42, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1d43, .a=0xa4, .x=0x51, .y=0x57, .sp=0xb3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1d42, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1d42, .value=0xfc, .type=IO_READ},
        {.addr=0x1d43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_024F) {
    const struct CPU_State initial_cpu = {.pc=0xa182, .a=0xc9, .x=0x36, .y=0xc7, .sp=0xe1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa182, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa183, .a=0xc9, .x=0x36, .y=0xc8, .sp=0xe1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa182, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa182, .value=0xfc, .type=IO_READ},
        {.addr=0xa183, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0250) {
    const struct CPU_State initial_cpu = {.pc=0x578e, .a=0x92, .x=0x49, .y=0xe1, .sp=0xa0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x578e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x578f, .a=0x92, .x=0x49, .y=0xe2, .sp=0xa0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x578e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x578e, .value=0xfc, .type=IO_READ},
        {.addr=0x578f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0251) {
    const struct CPU_State initial_cpu = {.pc=0x6e37, .a=0x0b, .x=0x62, .y=0x88, .sp=0x28, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6e37, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6e38, .a=0x0b, .x=0x62, .y=0x89, .sp=0x28, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6e37, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6e37, .value=0xfc, .type=IO_READ},
        {.addr=0x6e38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0252) {
    const struct CPU_State initial_cpu = {.pc=0x0b60, .a=0x5f, .x=0xf0, .y=0x9f, .sp=0x39, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0b60, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0b61, .a=0x5f, .x=0xf0, .y=0xa0, .sp=0x39, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0b60, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0b60, .value=0xfc, .type=IO_READ},
        {.addr=0x0b61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf603, .a=0x6d, .x=0x29, .y=0x06, .sp=0xad, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf603, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf604, .a=0x6d, .x=0x29, .y=0x07, .sp=0xad, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf603, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf603, .value=0xfc, .type=IO_READ},
        {.addr=0xf604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0254) {
    const struct CPU_State initial_cpu = {.pc=0xbb2e, .a=0x9f, .x=0x9d, .y=0x0b, .sp=0xbd, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xbb2e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbb2f, .a=0x9f, .x=0x9d, .y=0x0c, .sp=0xbd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbb2e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbb2e, .value=0xfc, .type=IO_READ},
        {.addr=0xbb2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0255) {
    const struct CPU_State initial_cpu = {.pc=0x3e3b, .a=0x1c, .x=0x99, .y=0x04, .sp=0xd3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3e3c, .a=0x1c, .x=0x99, .y=0x05, .sp=0xd3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3e3b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3e3b, .value=0xfc, .type=IO_READ},
        {.addr=0x3e3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0256) {
    const struct CPU_State initial_cpu = {.pc=0x42c9, .a=0x34, .x=0xd2, .y=0xf2, .sp=0xe7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x42c9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x42ca, .a=0x34, .x=0xd2, .y=0xf3, .sp=0xe7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x42c9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x42c9, .value=0xfc, .type=IO_READ},
        {.addr=0x42ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0257) {
    const struct CPU_State initial_cpu = {.pc=0x5674, .a=0xe2, .x=0x6f, .y=0x70, .sp=0xdd, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5674, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5675, .a=0xe2, .x=0x6f, .y=0x71, .sp=0xdd, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5674, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5674, .value=0xfc, .type=IO_READ},
        {.addr=0x5675, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0258) {
    const struct CPU_State initial_cpu = {.pc=0x85ba, .a=0xbd, .x=0xe5, .y=0x59, .sp=0x13, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x85ba, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x85bb, .a=0xbd, .x=0xe5, .y=0x5a, .sp=0x13, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x85ba, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x85ba, .value=0xfc, .type=IO_READ},
        {.addr=0x85bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0259) {
    const struct CPU_State initial_cpu = {.pc=0x90e4, .a=0xf3, .x=0x6e, .y=0x67, .sp=0x89, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x90e4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x90e5, .a=0xf3, .x=0x6e, .y=0x68, .sp=0x89, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x90e4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x90e4, .value=0xfc, .type=IO_READ},
        {.addr=0x90e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025A) {
    const struct CPU_State initial_cpu = {.pc=0x5373, .a=0x07, .x=0xd3, .y=0x97, .sp=0x2d, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5373, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5374, .a=0x07, .x=0xd3, .y=0x98, .sp=0x2d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5373, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5373, .value=0xfc, .type=IO_READ},
        {.addr=0x5374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025B) {
    const struct CPU_State initial_cpu = {.pc=0x1127, .a=0x67, .x=0xf4, .y=0x94, .sp=0xbe, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1127, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1128, .a=0x67, .x=0xf4, .y=0x95, .sp=0xbe, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1127, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1127, .value=0xfc, .type=IO_READ},
        {.addr=0x1128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025C) {
    const struct CPU_State initial_cpu = {.pc=0x1c57, .a=0x32, .x=0xcb, .y=0x9e, .sp=0xc0, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c57, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1c58, .a=0x32, .x=0xcb, .y=0x9f, .sp=0xc0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1c57, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1c57, .value=0xfc, .type=IO_READ},
        {.addr=0x1c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025D) {
    const struct CPU_State initial_cpu = {.pc=0x096f, .a=0xf1, .x=0x0a, .y=0xaa, .sp=0x3c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x096f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0970, .a=0xf1, .x=0x0a, .y=0xab, .sp=0x3c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x096f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x096f, .value=0xfc, .type=IO_READ},
        {.addr=0x0970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025E) {
    const struct CPU_State initial_cpu = {.pc=0x6304, .a=0x7d, .x=0x8d, .y=0x3b, .sp=0xe3, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6304, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6305, .a=0x7d, .x=0x8d, .y=0x3c, .sp=0xe3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6304, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6304, .value=0xfc, .type=IO_READ},
        {.addr=0x6305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_025F) {
    const struct CPU_State initial_cpu = {.pc=0x4edb, .a=0x5f, .x=0xa9, .y=0xb9, .sp=0x59, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4edb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4edc, .a=0x5f, .x=0xa9, .y=0xba, .sp=0x59, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4edb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4edb, .value=0xfc, .type=IO_READ},
        {.addr=0x4edc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0260) {
    const struct CPU_State initial_cpu = {.pc=0x6d68, .a=0x43, .x=0x6c, .y=0xfd, .sp=0x10, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6d68, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6d69, .a=0x43, .x=0x6c, .y=0xfe, .sp=0x10, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6d68, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6d68, .value=0xfc, .type=IO_READ},
        {.addr=0x6d69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0261) {
    const struct CPU_State initial_cpu = {.pc=0x642f, .a=0xb2, .x=0x40, .y=0xda, .sp=0xca, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x642f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6430, .a=0xb2, .x=0x40, .y=0xdb, .sp=0xca, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x642f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x642f, .value=0xfc, .type=IO_READ},
        {.addr=0x6430, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0262) {
    const struct CPU_State initial_cpu = {.pc=0xcf25, .a=0xb1, .x=0x7e, .y=0x41, .sp=0xc4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xcf25, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcf26, .a=0xb1, .x=0x7e, .y=0x42, .sp=0xc4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcf25, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcf25, .value=0xfc, .type=IO_READ},
        {.addr=0xcf26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0263) {
    const struct CPU_State initial_cpu = {.pc=0x6449, .a=0xba, .x=0x9a, .y=0x8d, .sp=0xce, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6449, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x644a, .a=0xba, .x=0x9a, .y=0x8e, .sp=0xce, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6449, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6449, .value=0xfc, .type=IO_READ},
        {.addr=0x644a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0264) {
    const struct CPU_State initial_cpu = {.pc=0xd4b2, .a=0x45, .x=0x73, .y=0x26, .sp=0xa8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd4b3, .a=0x45, .x=0x73, .y=0x27, .sp=0xa8, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd4b2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd4b2, .value=0xfc, .type=IO_READ},
        {.addr=0xd4b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0265) {
    const struct CPU_State initial_cpu = {.pc=0x7d8e, .a=0x09, .x=0xe6, .y=0x9e, .sp=0x8e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7d8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7d8f, .a=0x09, .x=0xe6, .y=0x9f, .sp=0x8e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7d8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7d8e, .value=0xfc, .type=IO_READ},
        {.addr=0x7d8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0266) {
    const struct CPU_State initial_cpu = {.pc=0x3f3b, .a=0x4d, .x=0x3a, .y=0x00, .sp=0xcb, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3f3b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3f3c, .a=0x4d, .x=0x3a, .y=0x01, .sp=0xcb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3f3b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3f3b, .value=0xfc, .type=IO_READ},
        {.addr=0x3f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0267) {
    const struct CPU_State initial_cpu = {.pc=0x3ab8, .a=0xce, .x=0x91, .y=0x8a, .sp=0xd5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3ab9, .a=0xce, .x=0x91, .y=0x8b, .sp=0xd5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3ab8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ab8, .value=0xfc, .type=IO_READ},
        {.addr=0x3ab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0268) {
    const struct CPU_State initial_cpu = {.pc=0x23c3, .a=0x2f, .x=0x1f, .y=0x81, .sp=0x19, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x23c3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x23c4, .a=0x2f, .x=0x1f, .y=0x82, .sp=0x19, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x23c3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x23c3, .value=0xfc, .type=IO_READ},
        {.addr=0x23c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0269) {
    const struct CPU_State initial_cpu = {.pc=0x446d, .a=0x12, .x=0x36, .y=0xa4, .sp=0x35, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x446d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x446e, .a=0x12, .x=0x36, .y=0xa5, .sp=0x35, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x446d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x446d, .value=0xfc, .type=IO_READ},
        {.addr=0x446e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026A) {
    const struct CPU_State initial_cpu = {.pc=0xc8bd, .a=0xee, .x=0x9d, .y=0x85, .sp=0x40, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc8bd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc8be, .a=0xee, .x=0x9d, .y=0x86, .sp=0x40, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc8bd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc8bd, .value=0xfc, .type=IO_READ},
        {.addr=0xc8be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026B) {
    const struct CPU_State initial_cpu = {.pc=0xaa30, .a=0xb3, .x=0xd5, .y=0x0e, .sp=0xaf, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xaa30, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaa31, .a=0xb3, .x=0xd5, .y=0x0f, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xaa30, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaa30, .value=0xfc, .type=IO_READ},
        {.addr=0xaa31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026C) {
    const struct CPU_State initial_cpu = {.pc=0x0e35, .a=0x3c, .x=0xca, .y=0x84, .sp=0x55, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0e35, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0e36, .a=0x3c, .x=0xca, .y=0x85, .sp=0x55, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0e35, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0e35, .value=0xfc, .type=IO_READ},
        {.addr=0x0e36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026D) {
    const struct CPU_State initial_cpu = {.pc=0x66e0, .a=0x62, .x=0x8f, .y=0x93, .sp=0xb5, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x66e0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x66e1, .a=0x62, .x=0x8f, .y=0x94, .sp=0xb5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x66e0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x66e0, .value=0xfc, .type=IO_READ},
        {.addr=0x66e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026E) {
    const struct CPU_State initial_cpu = {.pc=0x4d5e, .a=0xae, .x=0x27, .y=0xb9, .sp=0xa9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4d5e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d5f, .a=0xae, .x=0x27, .y=0xba, .sp=0xa9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4d5e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d5e, .value=0xfc, .type=IO_READ},
        {.addr=0x4d5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_026F) {
    const struct CPU_State initial_cpu = {.pc=0xd71c, .a=0x47, .x=0x5b, .y=0x1c, .sp=0xb7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd71c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd71d, .a=0x47, .x=0x5b, .y=0x1d, .sp=0xb7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd71c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd71c, .value=0xfc, .type=IO_READ},
        {.addr=0xd71d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7b04, .a=0x0b, .x=0xd6, .y=0xc2, .sp=0xba, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7b04, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7b05, .a=0x0b, .x=0xd6, .y=0xc3, .sp=0xba, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7b04, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7b04, .value=0xfc, .type=IO_READ},
        {.addr=0x7b05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0271) {
    const struct CPU_State initial_cpu = {.pc=0xcc96, .a=0x5a, .x=0x27, .y=0xba, .sp=0x14, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xcc96, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcc97, .a=0x5a, .x=0x27, .y=0xbb, .sp=0x14, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcc96, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcc96, .value=0xfc, .type=IO_READ},
        {.addr=0xcc97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0272) {
    const struct CPU_State initial_cpu = {.pc=0x3954, .a=0xe6, .x=0x88, .y=0xd7, .sp=0x26, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3954, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3955, .a=0xe6, .x=0x88, .y=0xd8, .sp=0x26, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3954, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3954, .value=0xfc, .type=IO_READ},
        {.addr=0x3955, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1e83, .a=0x71, .x=0x08, .y=0xf6, .sp=0xd9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1e83, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1e84, .a=0x71, .x=0x08, .y=0xf7, .sp=0xd9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1e83, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1e83, .value=0xfc, .type=IO_READ},
        {.addr=0x1e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0274) {
    const struct CPU_State initial_cpu = {.pc=0x05d3, .a=0xde, .x=0x00, .y=0x45, .sp=0x98, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x05d3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x05d4, .a=0xde, .x=0x00, .y=0x46, .sp=0x98, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x05d3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x05d3, .value=0xfc, .type=IO_READ},
        {.addr=0x05d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0275) {
    const struct CPU_State initial_cpu = {.pc=0xcbf5, .a=0x5f, .x=0x73, .y=0xdf, .sp=0x77, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcbf6, .a=0x5f, .x=0x73, .y=0xe0, .sp=0x77, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcbf5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcbf5, .value=0xfc, .type=IO_READ},
        {.addr=0xcbf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0276) {
    const struct CPU_State initial_cpu = {.pc=0x05d7, .a=0x6c, .x=0xe5, .y=0x5a, .sp=0xdd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x05d7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x05d8, .a=0x6c, .x=0xe5, .y=0x5b, .sp=0xdd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x05d7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x05d7, .value=0xfc, .type=IO_READ},
        {.addr=0x05d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0277) {
    const struct CPU_State initial_cpu = {.pc=0x8781, .a=0x62, .x=0x8b, .y=0x3e, .sp=0x8b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x8781, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8782, .a=0x62, .x=0x8b, .y=0x3f, .sp=0x8b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8781, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8781, .value=0xfc, .type=IO_READ},
        {.addr=0x8782, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0278) {
    const struct CPU_State initial_cpu = {.pc=0x19d1, .a=0xbd, .x=0xcb, .y=0xe4, .sp=0x58, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x19d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x19d2, .a=0xbd, .x=0xcb, .y=0xe5, .sp=0x58, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x19d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x19d1, .value=0xfc, .type=IO_READ},
        {.addr=0x19d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0279) {
    const struct CPU_State initial_cpu = {.pc=0x5485, .a=0xdc, .x=0x6e, .y=0x04, .sp=0xeb, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5485, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5486, .a=0xdc, .x=0x6e, .y=0x05, .sp=0xeb, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5485, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5485, .value=0xfc, .type=IO_READ},
        {.addr=0x5486, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027A) {
    const struct CPU_State initial_cpu = {.pc=0x0e0f, .a=0x32, .x=0xc3, .y=0x69, .sp=0x0c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0e10, .a=0x32, .x=0xc3, .y=0x6a, .sp=0x0c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0e0f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0e0f, .value=0xfc, .type=IO_READ},
        {.addr=0x0e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027B) {
    const struct CPU_State initial_cpu = {.pc=0x6102, .a=0x1d, .x=0x95, .y=0xe7, .sp=0xa8, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6102, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6103, .a=0x1d, .x=0x95, .y=0xe8, .sp=0xa8, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6102, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6102, .value=0xfc, .type=IO_READ},
        {.addr=0x6103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027C) {
    const struct CPU_State initial_cpu = {.pc=0x0632, .a=0x15, .x=0x79, .y=0x23, .sp=0x90, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0632, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0633, .a=0x15, .x=0x79, .y=0x24, .sp=0x90, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0632, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0632, .value=0xfc, .type=IO_READ},
        {.addr=0x0633, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027D) {
    const struct CPU_State initial_cpu = {.pc=0x3243, .a=0xcd, .x=0x47, .y=0xe1, .sp=0x33, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3243, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3244, .a=0xcd, .x=0x47, .y=0xe2, .sp=0x33, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3243, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3243, .value=0xfc, .type=IO_READ},
        {.addr=0x3244, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027E) {
    const struct CPU_State initial_cpu = {.pc=0x9545, .a=0xd0, .x=0xda, .y=0xee, .sp=0x1d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9545, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9546, .a=0xd0, .x=0xda, .y=0xef, .sp=0x1d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9545, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9545, .value=0xfc, .type=IO_READ},
        {.addr=0x9546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_027F) {
    const struct CPU_State initial_cpu = {.pc=0x23da, .a=0x19, .x=0x13, .y=0x0d, .sp=0xac, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x23da, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x23db, .a=0x19, .x=0x13, .y=0x0e, .sp=0xac, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x23da, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x23da, .value=0xfc, .type=IO_READ},
        {.addr=0x23db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0280) {
    const struct CPU_State initial_cpu = {.pc=0xc431, .a=0xbe, .x=0xca, .y=0xee, .sp=0x14, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc431, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc432, .a=0xbe, .x=0xca, .y=0xef, .sp=0x14, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc431, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc431, .value=0xfc, .type=IO_READ},
        {.addr=0xc432, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe8da, .a=0xc8, .x=0xf1, .y=0x34, .sp=0xf7, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe8da, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe8db, .a=0xc8, .x=0xf1, .y=0x35, .sp=0xf7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe8da, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe8da, .value=0xfc, .type=IO_READ},
        {.addr=0xe8db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0282) {
    const struct CPU_State initial_cpu = {.pc=0x50e8, .a=0x99, .x=0xd1, .y=0xed, .sp=0x33, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x50e8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x50e9, .a=0x99, .x=0xd1, .y=0xee, .sp=0x33, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x50e8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x50e8, .value=0xfc, .type=IO_READ},
        {.addr=0x50e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0283) {
    const struct CPU_State initial_cpu = {.pc=0x7155, .a=0x77, .x=0x01, .y=0xec, .sp=0x34, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x7155, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7156, .a=0x77, .x=0x01, .y=0xed, .sp=0x34, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7155, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7155, .value=0xfc, .type=IO_READ},
        {.addr=0x7156, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8ba8, .a=0x0c, .x=0x9e, .y=0xfe, .sp=0xda, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ba9, .a=0x0c, .x=0x9e, .y=0xff, .sp=0xda, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8ba8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8ba8, .value=0xfc, .type=IO_READ},
        {.addr=0x8ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0285) {
    const struct CPU_State initial_cpu = {.pc=0x5213, .a=0x5a, .x=0xcb, .y=0xfc, .sp=0x2a, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5213, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5214, .a=0x5a, .x=0xcb, .y=0xfd, .sp=0x2a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5213, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5213, .value=0xfc, .type=IO_READ},
        {.addr=0x5214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0286) {
    const struct CPU_State initial_cpu = {.pc=0x39b0, .a=0x67, .x=0x42, .y=0x8c, .sp=0x0d, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x39b0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x39b1, .a=0x67, .x=0x42, .y=0x8d, .sp=0x0d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x39b0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x39b0, .value=0xfc, .type=IO_READ},
        {.addr=0x39b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0287) {
    const struct CPU_State initial_cpu = {.pc=0x8b90, .a=0x57, .x=0xc3, .y=0x49, .sp=0xc8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8b90, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8b91, .a=0x57, .x=0xc3, .y=0x4a, .sp=0xc8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8b90, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8b90, .value=0xfc, .type=IO_READ},
        {.addr=0x8b91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0288) {
    const struct CPU_State initial_cpu = {.pc=0x1825, .a=0x54, .x=0xe5, .y=0x89, .sp=0x15, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1825, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1826, .a=0x54, .x=0xe5, .y=0x8a, .sp=0x15, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1825, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1825, .value=0xfc, .type=IO_READ},
        {.addr=0x1826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0289) {
    const struct CPU_State initial_cpu = {.pc=0x95b5, .a=0x2d, .x=0x2a, .y=0x43, .sp=0x0e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x95b5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x95b6, .a=0x2d, .x=0x2a, .y=0x44, .sp=0x0e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x95b5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x95b5, .value=0xfc, .type=IO_READ},
        {.addr=0x95b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028A) {
    const struct CPU_State initial_cpu = {.pc=0xf4e3, .a=0x79, .x=0xac, .y=0xae, .sp=0x2b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf4e4, .a=0x79, .x=0xac, .y=0xaf, .sp=0x2b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf4e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf4e3, .value=0xfc, .type=IO_READ},
        {.addr=0xf4e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028B) {
    const struct CPU_State initial_cpu = {.pc=0xd063, .a=0x38, .x=0x5b, .y=0xe0, .sp=0x3b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd063, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd064, .a=0x38, .x=0x5b, .y=0xe1, .sp=0x3b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd063, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd063, .value=0xfc, .type=IO_READ},
        {.addr=0xd064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028C) {
    const struct CPU_State initial_cpu = {.pc=0x48e2, .a=0xce, .x=0x81, .y=0xc6, .sp=0x75, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x48e2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x48e3, .a=0xce, .x=0x81, .y=0xc7, .sp=0x75, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x48e2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x48e2, .value=0xfc, .type=IO_READ},
        {.addr=0x48e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028D) {
    const struct CPU_State initial_cpu = {.pc=0xcdf9, .a=0xab, .x=0xc3, .y=0xc9, .sp=0x5a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcdfa, .a=0xab, .x=0xc3, .y=0xca, .sp=0x5a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xcdf9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcdf9, .value=0xfc, .type=IO_READ},
        {.addr=0xcdfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028E) {
    const struct CPU_State initial_cpu = {.pc=0x1c90, .a=0x69, .x=0xd1, .y=0x5b, .sp=0x95, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1c90, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1c91, .a=0x69, .x=0xd1, .y=0x5c, .sp=0x95, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1c90, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1c90, .value=0xfc, .type=IO_READ},
        {.addr=0x1c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_028F) {
    const struct CPU_State initial_cpu = {.pc=0x58d1, .a=0xb4, .x=0x0b, .y=0x7e, .sp=0x9d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x58d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x58d2, .a=0xb4, .x=0x0b, .y=0x7f, .sp=0x9d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x58d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x58d1, .value=0xfc, .type=IO_READ},
        {.addr=0x58d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0290) {
    const struct CPU_State initial_cpu = {.pc=0x5869, .a=0xb6, .x=0xb4, .y=0xa9, .sp=0x70, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5869, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x586a, .a=0xb6, .x=0xb4, .y=0xaa, .sp=0x70, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5869, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5869, .value=0xfc, .type=IO_READ},
        {.addr=0x586a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0291) {
    const struct CPU_State initial_cpu = {.pc=0xb502, .a=0xb1, .x=0x1f, .y=0x65, .sp=0x24, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb502, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb503, .a=0xb1, .x=0x1f, .y=0x66, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb502, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb502, .value=0xfc, .type=IO_READ},
        {.addr=0xb503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0292) {
    const struct CPU_State initial_cpu = {.pc=0x52f0, .a=0x17, .x=0x0b, .y=0xf5, .sp=0x15, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x52f0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x52f1, .a=0x17, .x=0x0b, .y=0xf6, .sp=0x15, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x52f0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x52f0, .value=0xfc, .type=IO_READ},
        {.addr=0x52f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1a7d, .a=0xae, .x=0xf7, .y=0x5c, .sp=0x18, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1a7e, .a=0xae, .x=0xf7, .y=0x5d, .sp=0x18, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1a7d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1a7d, .value=0xfc, .type=IO_READ},
        {.addr=0x1a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0294) {
    const struct CPU_State initial_cpu = {.pc=0x11a2, .a=0x5b, .x=0x8c, .y=0xa2, .sp=0xc2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x11a2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x11a3, .a=0x5b, .x=0x8c, .y=0xa3, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x11a2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x11a2, .value=0xfc, .type=IO_READ},
        {.addr=0x11a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0295) {
    const struct CPU_State initial_cpu = {.pc=0xba8e, .a=0xa6, .x=0x45, .y=0x70, .sp=0xde, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xba8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xba8f, .a=0xa6, .x=0x45, .y=0x71, .sp=0xde, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xba8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xba8e, .value=0xfc, .type=IO_READ},
        {.addr=0xba8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc145, .a=0x60, .x=0x84, .y=0x7c, .sp=0x1a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc145, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc146, .a=0x60, .x=0x84, .y=0x7d, .sp=0x1a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc145, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc145, .value=0xfc, .type=IO_READ},
        {.addr=0xc146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0297) {
    const struct CPU_State initial_cpu = {.pc=0x67cd, .a=0x8f, .x=0x2c, .y=0x9c, .sp=0x89, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x67cd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x67ce, .a=0x8f, .x=0x2c, .y=0x9d, .sp=0x89, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x67cd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x67cd, .value=0xfc, .type=IO_READ},
        {.addr=0x67ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0298) {
    const struct CPU_State initial_cpu = {.pc=0x76d8, .a=0xcc, .x=0xdd, .y=0x4b, .sp=0xc2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x76d8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x76d9, .a=0xcc, .x=0xdd, .y=0x4c, .sp=0xc2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x76d8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x76d8, .value=0xfc, .type=IO_READ},
        {.addr=0x76d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0299) {
    const struct CPU_State initial_cpu = {.pc=0x9cc5, .a=0xf3, .x=0x96, .y=0xb0, .sp=0x24, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9cc6, .a=0xf3, .x=0x96, .y=0xb1, .sp=0x24, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9cc5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9cc5, .value=0xfc, .type=IO_READ},
        {.addr=0x9cc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029A) {
    const struct CPU_State initial_cpu = {.pc=0xa8d5, .a=0xfd, .x=0xc6, .y=0xb5, .sp=0x6d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa8d6, .a=0xfd, .x=0xc6, .y=0xb6, .sp=0x6d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa8d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa8d5, .value=0xfc, .type=IO_READ},
        {.addr=0xa8d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029B) {
    const struct CPU_State initial_cpu = {.pc=0x6c8e, .a=0xd3, .x=0x0f, .y=0xf8, .sp=0xa6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6c8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6c8f, .a=0xd3, .x=0x0f, .y=0xf9, .sp=0xa6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6c8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6c8e, .value=0xfc, .type=IO_READ},
        {.addr=0x6c8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029C) {
    const struct CPU_State initial_cpu = {.pc=0x11f7, .a=0xcb, .x=0x86, .y=0x1b, .sp=0xbe, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x11f7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x11f8, .a=0xcb, .x=0x86, .y=0x1c, .sp=0xbe, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x11f7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x11f7, .value=0xfc, .type=IO_READ},
        {.addr=0x11f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029D) {
    const struct CPU_State initial_cpu = {.pc=0x30cd, .a=0xd6, .x=0xab, .y=0xcb, .sp=0xbf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x30cd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x30ce, .a=0xd6, .x=0xab, .y=0xcc, .sp=0xbf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x30cd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x30cd, .value=0xfc, .type=IO_READ},
        {.addr=0x30ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa827, .a=0xa9, .x=0x50, .y=0x09, .sp=0xf5, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa827, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa828, .a=0xa9, .x=0x50, .y=0x0a, .sp=0xf5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa827, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa827, .value=0xfc, .type=IO_READ},
        {.addr=0xa828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_029F) {
    const struct CPU_State initial_cpu = {.pc=0xac6f, .a=0x99, .x=0xaf, .y=0x0c, .sp=0xf0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xac6f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xac70, .a=0x99, .x=0xaf, .y=0x0d, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xac6f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xac6f, .value=0xfc, .type=IO_READ},
        {.addr=0xac70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x71e7, .a=0x15, .x=0xea, .y=0x0c, .sp=0x53, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x71e7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x71e8, .a=0x15, .x=0xea, .y=0x0d, .sp=0x53, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x71e7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x71e7, .value=0xfc, .type=IO_READ},
        {.addr=0x71e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x1bb8, .a=0xc7, .x=0x1c, .y=0x29, .sp=0xcb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1bb9, .a=0xc7, .x=0x1c, .y=0x2a, .sp=0xcb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1bb8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1bb8, .value=0xfc, .type=IO_READ},
        {.addr=0x1bb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xd3d6, .a=0x1b, .x=0x30, .y=0x62, .sp=0xd1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd3d7, .a=0x1b, .x=0x30, .y=0x63, .sp=0xd1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd3d6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd3d6, .value=0xfc, .type=IO_READ},
        {.addr=0xd3d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x7629, .a=0x2a, .x=0xc4, .y=0x5b, .sp=0xce, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7629, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x762a, .a=0x2a, .x=0xc4, .y=0x5c, .sp=0xce, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7629, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7629, .value=0xfc, .type=IO_READ},
        {.addr=0x762a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x527c, .a=0x98, .x=0x5e, .y=0xf1, .sp=0x2b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x527c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x527d, .a=0x98, .x=0x5e, .y=0xf2, .sp=0x2b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x527c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x527c, .value=0xfc, .type=IO_READ},
        {.addr=0x527d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xb18d, .a=0x3a, .x=0xc7, .y=0x33, .sp=0xf6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb18d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb18e, .a=0x3a, .x=0xc7, .y=0x34, .sp=0xf6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb18d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb18d, .value=0xfc, .type=IO_READ},
        {.addr=0xb18e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xe395, .a=0x73, .x=0xd5, .y=0xec, .sp=0x3a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe395, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe396, .a=0x73, .x=0xd5, .y=0xed, .sp=0x3a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe395, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe395, .value=0xfc, .type=IO_READ},
        {.addr=0xe396, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x34fa, .a=0x3b, .x=0x2e, .y=0x52, .sp=0x4a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x34fa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x34fb, .a=0x3b, .x=0x2e, .y=0x53, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x34fa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x34fa, .value=0xfc, .type=IO_READ},
        {.addr=0x34fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xcc05, .a=0x32, .x=0xf4, .y=0x8d, .sp=0x9b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcc05, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcc06, .a=0x32, .x=0xf4, .y=0x8e, .sp=0x9b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcc05, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcc05, .value=0xfc, .type=IO_READ},
        {.addr=0xcc06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x691c, .a=0x50, .x=0xf7, .y=0x27, .sp=0xea, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x691c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x691d, .a=0x50, .x=0xf7, .y=0x28, .sp=0xea, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x691c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x691c, .value=0xfc, .type=IO_READ},
        {.addr=0x691d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xc39f, .a=0x11, .x=0x78, .y=0x70, .sp=0x88, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc39f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc3a0, .a=0x11, .x=0x78, .y=0x71, .sp=0x88, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc39f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc39f, .value=0xfc, .type=IO_READ},
        {.addr=0xc3a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4d4a, .a=0xee, .x=0x5b, .y=0x3f, .sp=0x04, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4d4a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d4b, .a=0xee, .x=0x5b, .y=0x40, .sp=0x04, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4d4a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d4a, .value=0xfc, .type=IO_READ},
        {.addr=0x4d4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1fff, .a=0xe6, .x=0x84, .y=0x6d, .sp=0xaa, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1fff, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2000, .a=0xe6, .x=0x84, .y=0x6e, .sp=0xaa, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1fff, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1fff, .value=0xfc, .type=IO_READ},
        {.addr=0x2000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xfe3b, .a=0x45, .x=0x48, .y=0xc4, .sp=0xf0, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfe3b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfe3c, .a=0x45, .x=0x48, .y=0xc5, .sp=0xf0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfe3b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfe3b, .value=0xfc, .type=IO_READ},
        {.addr=0xfe3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x8364, .a=0x48, .x=0xf6, .y=0xb4, .sp=0x11, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8364, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8365, .a=0x48, .x=0xf6, .y=0xb5, .sp=0x11, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8364, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8364, .value=0xfc, .type=IO_READ},
        {.addr=0x8365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x5791, .a=0xe0, .x=0x8e, .y=0xd9, .sp=0xb2, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5791, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5792, .a=0xe0, .x=0x8e, .y=0xda, .sp=0xb2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5791, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5791, .value=0xfc, .type=IO_READ},
        {.addr=0x5792, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xfa49, .a=0x84, .x=0x7b, .y=0x3e, .sp=0x76, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xfa49, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfa4a, .a=0x84, .x=0x7b, .y=0x3f, .sp=0x76, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xfa49, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfa49, .value=0xfc, .type=IO_READ},
        {.addr=0xfa4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xb726, .a=0x1c, .x=0x06, .y=0xf6, .sp=0x42, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb726, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb727, .a=0x1c, .x=0x06, .y=0xf7, .sp=0x42, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb726, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb726, .value=0xfc, .type=IO_READ},
        {.addr=0xb727, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x6b0b, .a=0x04, .x=0x12, .y=0x98, .sp=0xe1, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6b0b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6b0c, .a=0x04, .x=0x12, .y=0x99, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6b0b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6b0b, .value=0xfc, .type=IO_READ},
        {.addr=0x6b0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0d96, .a=0xd4, .x=0x0b, .y=0x57, .sp=0x9e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0d96, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0d97, .a=0xd4, .x=0x0b, .y=0x58, .sp=0x9e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0d96, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0d96, .value=0xfc, .type=IO_READ},
        {.addr=0x0d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xd120, .a=0xa0, .x=0x78, .y=0x8b, .sp=0x1e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd120, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd121, .a=0xa0, .x=0x78, .y=0x8c, .sp=0x1e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd120, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd120, .value=0xfc, .type=IO_READ},
        {.addr=0xd121, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe940, .a=0x2f, .x=0x47, .y=0x7f, .sp=0x19, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe940, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe941, .a=0x2f, .x=0x47, .y=0x80, .sp=0x19, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe940, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe940, .value=0xfc, .type=IO_READ},
        {.addr=0xe941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x1bab, .a=0xc9, .x=0x79, .y=0x42, .sp=0xa2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1bab, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1bac, .a=0xc9, .x=0x79, .y=0x43, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1bab, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1bab, .value=0xfc, .type=IO_READ},
        {.addr=0x1bac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x7af8, .a=0xda, .x=0x4d, .y=0x58, .sp=0x29, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7af8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7af9, .a=0xda, .x=0x4d, .y=0x59, .sp=0x29, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7af8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7af8, .value=0xfc, .type=IO_READ},
        {.addr=0x7af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3ddf, .a=0xe0, .x=0xa6, .y=0xca, .sp=0x71, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3ddf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3de0, .a=0xe0, .x=0xa6, .y=0xcb, .sp=0x71, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3ddf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ddf, .value=0xfc, .type=IO_READ},
        {.addr=0x3de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xded2, .a=0x9e, .x=0xab, .y=0x76, .sp=0x2f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xded2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xded3, .a=0x9e, .x=0xab, .y=0x77, .sp=0x2f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xded2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xded2, .value=0xfc, .type=IO_READ},
        {.addr=0xded3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xe109, .a=0x68, .x=0xc0, .y=0x61, .sp=0x5b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe109, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe10a, .a=0x68, .x=0xc0, .y=0x62, .sp=0x5b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe109, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe109, .value=0xfc, .type=IO_READ},
        {.addr=0xe10a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xcd1f, .a=0x60, .x=0x6b, .y=0x6a, .sp=0x27, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcd20, .a=0x60, .x=0x6b, .y=0x6b, .sp=0x27, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcd1f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcd1f, .value=0xfc, .type=IO_READ},
        {.addr=0xcd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xf254, .a=0x54, .x=0x7f, .y=0x7c, .sp=0x62, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf254, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf255, .a=0x54, .x=0x7f, .y=0x7d, .sp=0x62, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf254, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf254, .value=0xfc, .type=IO_READ},
        {.addr=0xf255, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xe277, .a=0x7b, .x=0xb8, .y=0x5e, .sp=0x88, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe277, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe278, .a=0x7b, .x=0xb8, .y=0x5f, .sp=0x88, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe277, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe277, .value=0xfc, .type=IO_READ},
        {.addr=0xe278, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0ffa, .a=0x4e, .x=0x41, .y=0xff, .sp=0xaf, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0ffa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0ffb, .a=0x4e, .x=0x41, .y=0x00, .sp=0xaf, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0ffa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0ffa, .value=0xfc, .type=IO_READ},
        {.addr=0x0ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x64ab, .a=0xdf, .x=0xf6, .y=0xb7, .sp=0x01, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x64ab, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x64ac, .a=0xdf, .x=0xf6, .y=0xb8, .sp=0x01, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x64ab, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x64ab, .value=0xfc, .type=IO_READ},
        {.addr=0x64ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2774, .a=0x5c, .x=0xf4, .y=0x3f, .sp=0xc5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2774, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2775, .a=0x5c, .x=0xf4, .y=0x40, .sp=0xc5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x2774, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2774, .value=0xfc, .type=IO_READ},
        {.addr=0x2775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x249a, .a=0x28, .x=0x76, .y=0x23, .sp=0xdc, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x249a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x249b, .a=0x28, .x=0x76, .y=0x24, .sp=0xdc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x249a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x249a, .value=0xfc, .type=IO_READ},
        {.addr=0x249b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xa63d, .a=0xb3, .x=0xe4, .y=0x17, .sp=0xe5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa63d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa63e, .a=0xb3, .x=0xe4, .y=0x18, .sp=0xe5, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa63d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa63d, .value=0xfc, .type=IO_READ},
        {.addr=0xa63e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xf920, .a=0x56, .x=0xa6, .y=0x16, .sp=0xad, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf920, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf921, .a=0x56, .x=0xa6, .y=0x17, .sp=0xad, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf920, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf920, .value=0xfc, .type=IO_READ},
        {.addr=0xf921, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x1581, .a=0x9b, .x=0x2a, .y=0x71, .sp=0x8f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1581, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1582, .a=0x9b, .x=0x2a, .y=0x72, .sp=0x8f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1581, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1581, .value=0xfc, .type=IO_READ},
        {.addr=0x1582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xadca, .a=0x08, .x=0xbd, .y=0xf8, .sp=0x4d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xadca, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xadcb, .a=0x08, .x=0xbd, .y=0xf9, .sp=0x4d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xadca, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xadca, .value=0xfc, .type=IO_READ},
        {.addr=0xadcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xdf8e, .a=0x2c, .x=0xd1, .y=0x7d, .sp=0xc7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xdf8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdf8f, .a=0x2c, .x=0xd1, .y=0x7e, .sp=0xc7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdf8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdf8e, .value=0xfc, .type=IO_READ},
        {.addr=0xdf8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x4d54, .a=0x26, .x=0x86, .y=0xc7, .sp=0x96, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4d54, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d55, .a=0x26, .x=0x86, .y=0xc8, .sp=0x96, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4d54, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d54, .value=0xfc, .type=IO_READ},
        {.addr=0x4d55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x728d, .a=0xbd, .x=0xfa, .y=0xc8, .sp=0x4b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x728d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x728e, .a=0xbd, .x=0xfa, .y=0xc9, .sp=0x4b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x728d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x728d, .value=0xfc, .type=IO_READ},
        {.addr=0x728e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x49ed, .a=0xb4, .x=0x3e, .y=0xe0, .sp=0x1d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x49ed, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x49ee, .a=0xb4, .x=0x3e, .y=0xe1, .sp=0x1d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x49ed, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x49ed, .value=0xfc, .type=IO_READ},
        {.addr=0x49ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x8f82, .a=0xed, .x=0x81, .y=0x02, .sp=0x90, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8f82, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8f83, .a=0xed, .x=0x81, .y=0x03, .sp=0x90, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8f82, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8f82, .value=0xfc, .type=IO_READ},
        {.addr=0x8f83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x38f4, .a=0x62, .x=0x21, .y=0x99, .sp=0xb2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x38f4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x38f5, .a=0x62, .x=0x21, .y=0x9a, .sp=0xb2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x38f4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x38f4, .value=0xfc, .type=IO_READ},
        {.addr=0x38f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xf22e, .a=0xee, .x=0x07, .y=0x7c, .sp=0x97, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf22e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf22f, .a=0xee, .x=0x07, .y=0x7d, .sp=0x97, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf22e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf22e, .value=0xfc, .type=IO_READ},
        {.addr=0xf22f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xfae0, .a=0x8e, .x=0x19, .y=0x34, .sp=0x5d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfae0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfae1, .a=0x8e, .x=0x19, .y=0x35, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfae0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfae0, .value=0xfc, .type=IO_READ},
        {.addr=0xfae1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x0388, .a=0xf8, .x=0xde, .y=0xaa, .sp=0x9a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0388, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0389, .a=0xf8, .x=0xde, .y=0xab, .sp=0x9a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0388, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0388, .value=0xfc, .type=IO_READ},
        {.addr=0x0389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x68b5, .a=0x22, .x=0x80, .y=0x41, .sp=0xf1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x68b5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x68b6, .a=0x22, .x=0x80, .y=0x42, .sp=0xf1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x68b5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x68b5, .value=0xfc, .type=IO_READ},
        {.addr=0x68b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x5f0b, .a=0xd0, .x=0x4e, .y=0x2c, .sp=0x40, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5f0c, .a=0xd0, .x=0x4e, .y=0x2d, .sp=0x40, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5f0b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5f0b, .value=0xfc, .type=IO_READ},
        {.addr=0x5f0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x3c00, .a=0xfb, .x=0x31, .y=0x3a, .sp=0xb0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3c00, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3c01, .a=0xfb, .x=0x31, .y=0x3b, .sp=0xb0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3c00, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3c00, .value=0xfc, .type=IO_READ},
        {.addr=0x3c01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5ac9, .a=0x96, .x=0x77, .y=0xb6, .sp=0xaa, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5aca, .a=0x96, .x=0x77, .y=0xb7, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5ac9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5ac9, .value=0xfc, .type=IO_READ},
        {.addr=0x5aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x9a34, .a=0xa2, .x=0x6b, .y=0x39, .sp=0xff, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a34, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9a35, .a=0xa2, .x=0x6b, .y=0x3a, .sp=0xff, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9a34, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9a34, .value=0xfc, .type=IO_READ},
        {.addr=0x9a35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x74a4, .a=0xb4, .x=0x4f, .y=0x64, .sp=0xdc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x74a4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x74a5, .a=0xb4, .x=0x4f, .y=0x65, .sp=0xdc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x74a4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x74a4, .value=0xfc, .type=IO_READ},
        {.addr=0x74a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x38dc, .a=0x29, .x=0xb5, .y=0x9c, .sp=0x17, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x38dc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x38dd, .a=0x29, .x=0xb5, .y=0x9d, .sp=0x17, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x38dc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x38dc, .value=0xfc, .type=IO_READ},
        {.addr=0x38dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x008c, .a=0xbe, .x=0xbb, .y=0xb2, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x008d, .a=0xbe, .x=0xbb, .y=0xb3, .sp=0x4b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x008c, .value=0xfc, .type=IO_READ},
        {.addr=0x008d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xf421, .a=0x9f, .x=0xf8, .y=0x0e, .sp=0x34, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf421, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf422, .a=0x9f, .x=0xf8, .y=0x0f, .sp=0x34, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf421, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf421, .value=0xfc, .type=IO_READ},
        {.addr=0xf422, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x0d59, .a=0x1a, .x=0x2b, .y=0x30, .sp=0x34, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0d59, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0d5a, .a=0x1a, .x=0x2b, .y=0x31, .sp=0x34, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0d59, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0d59, .value=0xfc, .type=IO_READ},
        {.addr=0x0d5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xd043, .a=0x94, .x=0x98, .y=0xe8, .sp=0xec, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd043, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd044, .a=0x94, .x=0x98, .y=0xe9, .sp=0xec, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd043, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd043, .value=0xfc, .type=IO_READ},
        {.addr=0xd044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7a24, .a=0x5b, .x=0x61, .y=0xce, .sp=0xeb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7a24, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7a25, .a=0x5b, .x=0x61, .y=0xcf, .sp=0xeb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7a24, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7a24, .value=0xfc, .type=IO_READ},
        {.addr=0x7a25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xa854, .a=0x86, .x=0x24, .y=0x49, .sp=0x74, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa854, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa855, .a=0x86, .x=0x24, .y=0x4a, .sp=0x74, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa854, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa854, .value=0xfc, .type=IO_READ},
        {.addr=0xa855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x9f6c, .a=0xba, .x=0xc6, .y=0x84, .sp=0x56, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9f6c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f6d, .a=0xba, .x=0xc6, .y=0x85, .sp=0x56, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9f6c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f6c, .value=0xfc, .type=IO_READ},
        {.addr=0x9f6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xc929, .a=0xad, .x=0xdf, .y=0x00, .sp=0x7d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xc929, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc92a, .a=0xad, .x=0xdf, .y=0x01, .sp=0x7d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc929, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc929, .value=0xfc, .type=IO_READ},
        {.addr=0xc92a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x813f, .a=0x07, .x=0x87, .y=0x24, .sp=0x11, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x813f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8140, .a=0x07, .x=0x87, .y=0x25, .sp=0x11, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x813f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x813f, .value=0xfc, .type=IO_READ},
        {.addr=0x8140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x15b3, .a=0xbb, .x=0xc5, .y=0x05, .sp=0xdd, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x15b3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x15b4, .a=0xbb, .x=0xc5, .y=0x06, .sp=0xdd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x15b3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x15b3, .value=0xfc, .type=IO_READ},
        {.addr=0x15b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x1fbf, .a=0xb8, .x=0x9f, .y=0x4d, .sp=0xf9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1fbf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1fc0, .a=0xb8, .x=0x9f, .y=0x4e, .sp=0xf9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1fbf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1fbf, .value=0xfc, .type=IO_READ},
        {.addr=0x1fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x08c9, .a=0x3e, .x=0x7c, .y=0x31, .sp=0x8d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x08c9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x08ca, .a=0x3e, .x=0x7c, .y=0x32, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x08c9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x08c9, .value=0xfc, .type=IO_READ},
        {.addr=0x08ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1fec, .a=0x43, .x=0xcf, .y=0xb8, .sp=0x0b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x1fec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1fed, .a=0x43, .x=0xcf, .y=0xb9, .sp=0x0b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1fec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1fec, .value=0xfc, .type=IO_READ},
        {.addr=0x1fed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xfe87, .a=0x76, .x=0x3a, .y=0x8b, .sp=0xe6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xfe87, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfe88, .a=0x76, .x=0x3a, .y=0x8c, .sp=0xe6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfe87, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfe87, .value=0xfc, .type=IO_READ},
        {.addr=0xfe88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x056f, .a=0xfa, .x=0xe5, .y=0x79, .sp=0x03, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x056f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0570, .a=0xfa, .x=0xe5, .y=0x7a, .sp=0x03, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x056f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x056f, .value=0xfc, .type=IO_READ},
        {.addr=0x0570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x39bb, .a=0xee, .x=0x97, .y=0xe3, .sp=0x03, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x39bb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x39bc, .a=0xee, .x=0x97, .y=0xe4, .sp=0x03, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x39bb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x39bb, .value=0xfc, .type=IO_READ},
        {.addr=0x39bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xd33c, .a=0x86, .x=0x44, .y=0x82, .sp=0x25, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd33c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd33d, .a=0x86, .x=0x44, .y=0x83, .sp=0x25, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd33c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd33c, .value=0xfc, .type=IO_READ},
        {.addr=0xd33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xa655, .a=0xb6, .x=0xfc, .y=0xa3, .sp=0x3d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa655, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa656, .a=0xb6, .x=0xfc, .y=0xa4, .sp=0x3d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa655, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa655, .value=0xfc, .type=IO_READ},
        {.addr=0xa656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xc883, .a=0x6f, .x=0x59, .y=0x96, .sp=0x42, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xc883, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc884, .a=0x6f, .x=0x59, .y=0x97, .sp=0x42, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc883, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc883, .value=0xfc, .type=IO_READ},
        {.addr=0xc884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xdbe3, .a=0x9d, .x=0xdf, .y=0x60, .sp=0x23, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdbe3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdbe4, .a=0x9d, .x=0xdf, .y=0x61, .sp=0x23, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xdbe3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdbe3, .value=0xfc, .type=IO_READ},
        {.addr=0xdbe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5537, .a=0x01, .x=0x93, .y=0x68, .sp=0xeb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5537, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5538, .a=0x01, .x=0x93, .y=0x69, .sp=0xeb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5537, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5537, .value=0xfc, .type=IO_READ},
        {.addr=0x5538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x9599, .a=0x50, .x=0xfd, .y=0xe5, .sp=0x03, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x9599, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x959a, .a=0x50, .x=0xfd, .y=0xe6, .sp=0x03, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9599, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9599, .value=0xfc, .type=IO_READ},
        {.addr=0x959a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xf876, .a=0xde, .x=0x69, .y=0x37, .sp=0xc9, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf876, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf877, .a=0xde, .x=0x69, .y=0x38, .sp=0xc9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf876, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf876, .value=0xfc, .type=IO_READ},
        {.addr=0xf877, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xb5e8, .a=0x1a, .x=0xbb, .y=0x08, .sp=0x27, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb5e9, .a=0x1a, .x=0xbb, .y=0x09, .sp=0x27, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb5e8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb5e8, .value=0xfc, .type=IO_READ},
        {.addr=0xb5e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9f61, .a=0x67, .x=0x26, .y=0xea, .sp=0xa3, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f61, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f62, .a=0x67, .x=0x26, .y=0xeb, .sp=0xa3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9f61, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f61, .value=0xfc, .type=IO_READ},
        {.addr=0x9f62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x14a7, .a=0x4e, .x=0xb8, .y=0x1c, .sp=0xe9, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x14a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x14a8, .a=0x4e, .x=0xb8, .y=0x1d, .sp=0xe9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x14a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x14a7, .value=0xfc, .type=IO_READ},
        {.addr=0x14a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x71ec, .a=0x87, .x=0x18, .y=0x91, .sp=0xf7, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x71ec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x71ed, .a=0x87, .x=0x18, .y=0x92, .sp=0xf7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x71ec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x71ec, .value=0xfc, .type=IO_READ},
        {.addr=0x71ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x0754, .a=0x42, .x=0x02, .y=0x04, .sp=0x75, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0754, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0755, .a=0x42, .x=0x02, .y=0x05, .sp=0x75, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0754, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0754, .value=0xfc, .type=IO_READ},
        {.addr=0x0755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xb55f, .a=0xf3, .x=0x06, .y=0x9d, .sp=0xb3, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb55f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb560, .a=0xf3, .x=0x06, .y=0x9e, .sp=0xb3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb55f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb55f, .value=0xfc, .type=IO_READ},
        {.addr=0xb560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x75c9, .a=0x95, .x=0xa0, .y=0xe0, .sp=0x46, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x75c9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x75ca, .a=0x95, .x=0xa0, .y=0xe1, .sp=0x46, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x75c9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x75c9, .value=0xfc, .type=IO_READ},
        {.addr=0x75ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x52c8, .a=0x2b, .x=0x34, .y=0xb0, .sp=0x81, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x52c8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x52c9, .a=0x2b, .x=0x34, .y=0xb1, .sp=0x81, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x52c8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x52c8, .value=0xfc, .type=IO_READ},
        {.addr=0x52c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x6efa, .a=0x6c, .x=0xe5, .y=0x5e, .sp=0x67, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6efa, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6efb, .a=0x6c, .x=0xe5, .y=0x5f, .sp=0x67, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6efa, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6efa, .value=0xfc, .type=IO_READ},
        {.addr=0x6efb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x0aee, .a=0xca, .x=0x26, .y=0x18, .sp=0x10, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0aee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0aef, .a=0xca, .x=0x26, .y=0x19, .sp=0x10, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0aee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0aee, .value=0xfc, .type=IO_READ},
        {.addr=0x0aef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xe49c, .a=0x17, .x=0xc7, .y=0xd8, .sp=0x02, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe49c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe49d, .a=0x17, .x=0xc7, .y=0xd9, .sp=0x02, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe49c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe49c, .value=0xfc, .type=IO_READ},
        {.addr=0xe49d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x873f, .a=0x44, .x=0xa4, .y=0xa4, .sp=0xd8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x873f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8740, .a=0x44, .x=0xa4, .y=0xa5, .sp=0xd8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x873f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x873f, .value=0xfc, .type=IO_READ},
        {.addr=0x8740, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xaa97, .a=0x5a, .x=0x4f, .y=0x32, .sp=0x5e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xaa97, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaa98, .a=0x5a, .x=0x4f, .y=0x33, .sp=0x5e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xaa97, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaa97, .value=0xfc, .type=IO_READ},
        {.addr=0xaa98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xd9cb, .a=0x85, .x=0xbe, .y=0x85, .sp=0x3c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd9cb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd9cc, .a=0x85, .x=0xbe, .y=0x86, .sp=0x3c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd9cb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd9cb, .value=0xfc, .type=IO_READ},
        {.addr=0xd9cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x3e78, .a=0x1f, .x=0xbb, .y=0xb8, .sp=0x75, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3e78, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3e79, .a=0x1f, .x=0xbb, .y=0xb9, .sp=0x75, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3e78, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3e78, .value=0xfc, .type=IO_READ},
        {.addr=0x3e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8850, .a=0x16, .x=0x28, .y=0xad, .sp=0x1d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x8850, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8851, .a=0x16, .x=0x28, .y=0xae, .sp=0x1d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8850, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8850, .value=0xfc, .type=IO_READ},
        {.addr=0x8851, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xcd2d, .a=0xf7, .x=0xb8, .y=0x90, .sp=0x2d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcd2e, .a=0xf7, .x=0xb8, .y=0x91, .sp=0x2d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xcd2d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcd2d, .value=0xfc, .type=IO_READ},
        {.addr=0xcd2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x5942, .a=0xc2, .x=0x53, .y=0x98, .sp=0xcb, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5942, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5943, .a=0xc2, .x=0x53, .y=0x99, .sp=0xcb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x5942, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5942, .value=0xfc, .type=IO_READ},
        {.addr=0x5943, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x078c, .a=0x06, .x=0xe3, .y=0x6b, .sp=0xf5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x078c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x078d, .a=0x06, .x=0xe3, .y=0x6c, .sp=0xf5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x078c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x078c, .value=0xfc, .type=IO_READ},
        {.addr=0x078d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0300) {
    const struct CPU_State initial_cpu = {.pc=0xab45, .a=0x7b, .x=0xb2, .y=0xfe, .sp=0x47, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xab45, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xab46, .a=0x7b, .x=0xb2, .y=0xff, .sp=0x47, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xab45, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xab45, .value=0xfc, .type=IO_READ},
        {.addr=0xab46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0301) {
    const struct CPU_State initial_cpu = {.pc=0x030e, .a=0xe3, .x=0x07, .y=0x57, .sp=0x3e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x030e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x030f, .a=0xe3, .x=0x07, .y=0x58, .sp=0x3e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x030e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x030e, .value=0xfc, .type=IO_READ},
        {.addr=0x030f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9d78, .a=0x72, .x=0xf9, .y=0x34, .sp=0xae, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9d78, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9d79, .a=0x72, .x=0xf9, .y=0x35, .sp=0xae, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9d78, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9d78, .value=0xfc, .type=IO_READ},
        {.addr=0x9d79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0303) {
    const struct CPU_State initial_cpu = {.pc=0x00d6, .a=0xef, .x=0xd0, .y=0xf5, .sp=0x2c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x00d7, .a=0xef, .x=0xd0, .y=0xf6, .sp=0x2c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x00d6, .value=0xfc, .type=IO_READ},
        {.addr=0x00d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6c9d, .a=0x61, .x=0x90, .y=0xfe, .sp=0x82, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6c9e, .a=0x61, .x=0x90, .y=0xff, .sp=0x82, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6c9d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6c9d, .value=0xfc, .type=IO_READ},
        {.addr=0x6c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0305) {
    const struct CPU_State initial_cpu = {.pc=0x4231, .a=0xc4, .x=0x1b, .y=0xe9, .sp=0xce, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4231, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4232, .a=0xc4, .x=0x1b, .y=0xea, .sp=0xce, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4231, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4231, .value=0xfc, .type=IO_READ},
        {.addr=0x4232, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0306) {
    const struct CPU_State initial_cpu = {.pc=0xe78a, .a=0x22, .x=0x7e, .y=0x01, .sp=0x8a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe78a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe78b, .a=0x22, .x=0x7e, .y=0x02, .sp=0x8a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe78a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe78a, .value=0xfc, .type=IO_READ},
        {.addr=0xe78b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2ced, .a=0x7a, .x=0x2d, .y=0x18, .sp=0x59, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2ced, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2cee, .a=0x7a, .x=0x2d, .y=0x19, .sp=0x59, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2ced, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2ced, .value=0xfc, .type=IO_READ},
        {.addr=0x2cee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0308) {
    const struct CPU_State initial_cpu = {.pc=0x81d1, .a=0x49, .x=0x1e, .y=0xeb, .sp=0xb6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x81d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x81d2, .a=0x49, .x=0x1e, .y=0xec, .sp=0xb6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x81d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x81d1, .value=0xfc, .type=IO_READ},
        {.addr=0x81d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0309) {
    const struct CPU_State initial_cpu = {.pc=0x5647, .a=0xe8, .x=0x55, .y=0x92, .sp=0x44, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x5647, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5648, .a=0xe8, .x=0x55, .y=0x93, .sp=0x44, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5647, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5647, .value=0xfc, .type=IO_READ},
        {.addr=0x5648, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030A) {
    const struct CPU_State initial_cpu = {.pc=0x294c, .a=0x3f, .x=0xaf, .y=0xbe, .sp=0x44, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x294c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x294d, .a=0x3f, .x=0xaf, .y=0xbf, .sp=0x44, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x294c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x294c, .value=0xfc, .type=IO_READ},
        {.addr=0x294d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030B) {
    const struct CPU_State initial_cpu = {.pc=0x49f0, .a=0xc4, .x=0xe9, .y=0xbf, .sp=0x4b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x49f0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x49f1, .a=0xc4, .x=0xe9, .y=0xc0, .sp=0x4b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x49f0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x49f0, .value=0xfc, .type=IO_READ},
        {.addr=0x49f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030C) {
    const struct CPU_State initial_cpu = {.pc=0xde70, .a=0xa7, .x=0xec, .y=0xa4, .sp=0xf7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xde70, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xde71, .a=0xa7, .x=0xec, .y=0xa5, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xde70, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xde70, .value=0xfc, .type=IO_READ},
        {.addr=0xde71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb0bb, .a=0xc3, .x=0x2e, .y=0xba, .sp=0xba, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb0bb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb0bc, .a=0xc3, .x=0x2e, .y=0xbb, .sp=0xba, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb0bb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb0bb, .value=0xfc, .type=IO_READ},
        {.addr=0xb0bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030E) {
    const struct CPU_State initial_cpu = {.pc=0xdf1f, .a=0x61, .x=0x4c, .y=0xfc, .sp=0x8b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdf20, .a=0x61, .x=0x4c, .y=0xfd, .sp=0x8b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdf1f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdf1f, .value=0xfc, .type=IO_READ},
        {.addr=0xdf20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_030F) {
    const struct CPU_State initial_cpu = {.pc=0x3dce, .a=0xba, .x=0x2c, .y=0x0d, .sp=0xaf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x3dce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3dcf, .a=0xba, .x=0x2c, .y=0x0e, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3dce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3dce, .value=0xfc, .type=IO_READ},
        {.addr=0x3dcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0310) {
    const struct CPU_State initial_cpu = {.pc=0x5730, .a=0xb2, .x=0x61, .y=0xab, .sp=0xcf, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5730, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5731, .a=0xb2, .x=0x61, .y=0xac, .sp=0xcf, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x5730, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5730, .value=0xfc, .type=IO_READ},
        {.addr=0x5731, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0311) {
    const struct CPU_State initial_cpu = {.pc=0xa471, .a=0x9b, .x=0x17, .y=0xe7, .sp=0xd5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa471, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa472, .a=0x9b, .x=0x17, .y=0xe8, .sp=0xd5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa471, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa471, .value=0xfc, .type=IO_READ},
        {.addr=0xa472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0312) {
    const struct CPU_State initial_cpu = {.pc=0xaf40, .a=0x7c, .x=0x76, .y=0x33, .sp=0xd8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xaf40, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xaf41, .a=0x7c, .x=0x76, .y=0x34, .sp=0xd8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xaf40, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xaf40, .value=0xfc, .type=IO_READ},
        {.addr=0xaf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0313) {
    const struct CPU_State initial_cpu = {.pc=0xc2a5, .a=0xce, .x=0xc9, .y=0x9a, .sp=0x4f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc2a6, .a=0xce, .x=0xc9, .y=0x9b, .sp=0x4f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc2a5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc2a5, .value=0xfc, .type=IO_READ},
        {.addr=0xc2a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0314) {
    const struct CPU_State initial_cpu = {.pc=0x4f33, .a=0xe5, .x=0xb1, .y=0x0f, .sp=0x29, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4f33, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4f34, .a=0xe5, .x=0xb1, .y=0x10, .sp=0x29, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4f33, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4f33, .value=0xfc, .type=IO_READ},
        {.addr=0x4f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0315) {
    const struct CPU_State initial_cpu = {.pc=0x3ec5, .a=0x5e, .x=0x53, .y=0x85, .sp=0xb7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3ec6, .a=0x5e, .x=0x53, .y=0x86, .sp=0xb7, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3ec5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ec5, .value=0xfc, .type=IO_READ},
        {.addr=0x3ec6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc3a7, .a=0x82, .x=0xef, .y=0x48, .sp=0xbb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc3a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc3a8, .a=0x82, .x=0xef, .y=0x49, .sp=0xbb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc3a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc3a7, .value=0xfc, .type=IO_READ},
        {.addr=0xc3a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0317) {
    const struct CPU_State initial_cpu = {.pc=0xc11a, .a=0x21, .x=0x38, .y=0x78, .sp=0xa4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc11a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc11b, .a=0x21, .x=0x38, .y=0x79, .sp=0xa4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc11a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc11a, .value=0xfc, .type=IO_READ},
        {.addr=0xc11b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0318) {
    const struct CPU_State initial_cpu = {.pc=0x1d13, .a=0x8f, .x=0x28, .y=0x65, .sp=0xf5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x1d13, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1d14, .a=0x8f, .x=0x28, .y=0x66, .sp=0xf5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1d13, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1d13, .value=0xfc, .type=IO_READ},
        {.addr=0x1d14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0319) {
    const struct CPU_State initial_cpu = {.pc=0xb6d8, .a=0x64, .x=0x65, .y=0xac, .sp=0x70, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb6d9, .a=0x64, .x=0x65, .y=0xad, .sp=0x70, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb6d8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb6d8, .value=0xfc, .type=IO_READ},
        {.addr=0xb6d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031A) {
    const struct CPU_State initial_cpu = {.pc=0x6b9a, .a=0x1d, .x=0x39, .y=0x23, .sp=0xb1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0x1d, .x=0x39, .y=0x24, .sp=0xb1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6b9a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6b9a, .value=0xfc, .type=IO_READ},
        {.addr=0x6b9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3a4a, .a=0x9f, .x=0x11, .y=0x1e, .sp=0x93, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3a4a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a4b, .a=0x9f, .x=0x11, .y=0x1f, .sp=0x93, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3a4a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a4a, .value=0xfc, .type=IO_READ},
        {.addr=0x3a4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031C) {
    const struct CPU_State initial_cpu = {.pc=0x7f6e, .a=0xda, .x=0xc1, .y=0xcf, .sp=0xcb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7f6f, .a=0xda, .x=0xc1, .y=0xd0, .sp=0xcb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7f6e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7f6e, .value=0xfc, .type=IO_READ},
        {.addr=0x7f6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031D) {
    const struct CPU_State initial_cpu = {.pc=0x5af3, .a=0x03, .x=0x54, .y=0x48, .sp=0xf6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5af3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5af4, .a=0x03, .x=0x54, .y=0x49, .sp=0xf6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5af3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5af3, .value=0xfc, .type=IO_READ},
        {.addr=0x5af4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031E) {
    const struct CPU_State initial_cpu = {.pc=0xa08a, .a=0x1c, .x=0xf3, .y=0xa0, .sp=0xdd, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa08a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa08b, .a=0x1c, .x=0xf3, .y=0xa1, .sp=0xdd, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa08a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa08a, .value=0xfc, .type=IO_READ},
        {.addr=0xa08b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_031F) {
    const struct CPU_State initial_cpu = {.pc=0x39dc, .a=0x20, .x=0xfe, .y=0xed, .sp=0x55, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x39dc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x39dd, .a=0x20, .x=0xfe, .y=0xee, .sp=0x55, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x39dc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x39dc, .value=0xfc, .type=IO_READ},
        {.addr=0x39dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0320) {
    const struct CPU_State initial_cpu = {.pc=0x4c38, .a=0xcb, .x=0xcd, .y=0x65, .sp=0x1f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4c38, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4c39, .a=0xcb, .x=0xcd, .y=0x66, .sp=0x1f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4c38, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4c38, .value=0xfc, .type=IO_READ},
        {.addr=0x4c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0321) {
    const struct CPU_State initial_cpu = {.pc=0x157b, .a=0x49, .x=0x73, .y=0xb2, .sp=0x8c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x157b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x157c, .a=0x49, .x=0x73, .y=0xb3, .sp=0x8c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x157b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x157b, .value=0xfc, .type=IO_READ},
        {.addr=0x157c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc6af, .a=0x78, .x=0x90, .y=0xf2, .sp=0xab, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc6af, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc6b0, .a=0x78, .x=0x90, .y=0xf3, .sp=0xab, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc6af, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc6af, .value=0xfc, .type=IO_READ},
        {.addr=0xc6b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0323) {
    const struct CPU_State initial_cpu = {.pc=0x6b13, .a=0xbc, .x=0x03, .y=0xac, .sp=0x7b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6b13, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6b14, .a=0xbc, .x=0x03, .y=0xad, .sp=0x7b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6b13, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6b13, .value=0xfc, .type=IO_READ},
        {.addr=0x6b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0324) {
    const struct CPU_State initial_cpu = {.pc=0xa8ce, .a=0xe2, .x=0x47, .y=0x19, .sp=0xac, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa8cf, .a=0xe2, .x=0x47, .y=0x1a, .sp=0xac, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa8ce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa8ce, .value=0xfc, .type=IO_READ},
        {.addr=0xa8cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0325) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0x1e, .x=0xee, .y=0xcd, .sp=0x8e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x131a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x131b, .a=0x1e, .x=0xee, .y=0xce, .sp=0x8e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x131a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0xfc, .type=IO_READ},
        {.addr=0x131b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0326) {
    const struct CPU_State initial_cpu = {.pc=0x4157, .a=0x79, .x=0x82, .y=0x35, .sp=0x67, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4157, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4158, .a=0x79, .x=0x82, .y=0x36, .sp=0x67, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4157, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4157, .value=0xfc, .type=IO_READ},
        {.addr=0x4158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0327) {
    const struct CPU_State initial_cpu = {.pc=0x852b, .a=0xc5, .x=0xbe, .y=0xce, .sp=0x0f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x852b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x852c, .a=0xc5, .x=0xbe, .y=0xcf, .sp=0x0f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x852b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x852b, .value=0xfc, .type=IO_READ},
        {.addr=0x852c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0328) {
    const struct CPU_State initial_cpu = {.pc=0x2bee, .a=0xba, .x=0xaf, .y=0x2c, .sp=0xda, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2bee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2bef, .a=0xba, .x=0xaf, .y=0x2d, .sp=0xda, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2bee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2bee, .value=0xfc, .type=IO_READ},
        {.addr=0x2bef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0329) {
    const struct CPU_State initial_cpu = {.pc=0x49b9, .a=0x93, .x=0x5f, .y=0x57, .sp=0xf2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x49b9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x49ba, .a=0x93, .x=0x5f, .y=0x58, .sp=0xf2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x49b9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x49b9, .value=0xfc, .type=IO_READ},
        {.addr=0x49ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032A) {
    const struct CPU_State initial_cpu = {.pc=0x07b9, .a=0xbd, .x=0xf4, .y=0x8d, .sp=0x99, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x07b9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x07ba, .a=0xbd, .x=0xf4, .y=0x8e, .sp=0x99, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x07b9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x07b9, .value=0xfc, .type=IO_READ},
        {.addr=0x07ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032B) {
    const struct CPU_State initial_cpu = {.pc=0x28db, .a=0x24, .x=0xaa, .y=0x52, .sp=0x89, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x28db, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x28dc, .a=0x24, .x=0xaa, .y=0x53, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x28db, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x28db, .value=0xfc, .type=IO_READ},
        {.addr=0x28dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032C) {
    const struct CPU_State initial_cpu = {.pc=0x8da8, .a=0x14, .x=0x6d, .y=0xc5, .sp=0xa3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8da8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8da9, .a=0x14, .x=0x6d, .y=0xc6, .sp=0xa3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8da8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8da8, .value=0xfc, .type=IO_READ},
        {.addr=0x8da9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032D) {
    const struct CPU_State initial_cpu = {.pc=0x393f, .a=0xa0, .x=0x5b, .y=0xfb, .sp=0x95, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x393f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3940, .a=0xa0, .x=0x5b, .y=0xfc, .sp=0x95, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x393f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x393f, .value=0xfc, .type=IO_READ},
        {.addr=0x3940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe3e1, .a=0x2a, .x=0x44, .y=0xff, .sp=0x28, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe3e2, .a=0x2a, .x=0x44, .y=0x00, .sp=0x28, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xe3e1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe3e1, .value=0xfc, .type=IO_READ},
        {.addr=0xe3e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa4de, .a=0x9b, .x=0xf3, .y=0xbd, .sp=0x61, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa4de, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa4df, .a=0x9b, .x=0xf3, .y=0xbe, .sp=0x61, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa4de, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa4de, .value=0xfc, .type=IO_READ},
        {.addr=0xa4df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0330) {
    const struct CPU_State initial_cpu = {.pc=0x5f02, .a=0xc1, .x=0xf1, .y=0x67, .sp=0xff, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5f02, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5f03, .a=0xc1, .x=0xf1, .y=0x68, .sp=0xff, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5f02, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5f02, .value=0xfc, .type=IO_READ},
        {.addr=0x5f03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0331) {
    const struct CPU_State initial_cpu = {.pc=0xf0c9, .a=0xa2, .x=0x84, .y=0x40, .sp=0xa8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf0ca, .a=0xa2, .x=0x84, .y=0x41, .sp=0xa8, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf0c9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf0c9, .value=0xfc, .type=IO_READ},
        {.addr=0xf0ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0332) {
    const struct CPU_State initial_cpu = {.pc=0x45c5, .a=0xaf, .x=0x8b, .y=0xb3, .sp=0x6e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x45c5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x45c6, .a=0xaf, .x=0x8b, .y=0xb4, .sp=0x6e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x45c5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x45c5, .value=0xfc, .type=IO_READ},
        {.addr=0x45c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0333) {
    const struct CPU_State initial_cpu = {.pc=0x699e, .a=0x00, .x=0x32, .y=0x3e, .sp=0x62, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x699e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x699f, .a=0x00, .x=0x32, .y=0x3f, .sp=0x62, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x699e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x699e, .value=0xfc, .type=IO_READ},
        {.addr=0x699f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0334) {
    const struct CPU_State initial_cpu = {.pc=0xda0d, .a=0x9c, .x=0x16, .y=0x26, .sp=0xcb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xda0d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xda0e, .a=0x9c, .x=0x16, .y=0x27, .sp=0xcb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xda0d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xda0d, .value=0xfc, .type=IO_READ},
        {.addr=0xda0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0335) {
    const struct CPU_State initial_cpu = {.pc=0x5540, .a=0x8b, .x=0x92, .y=0x30, .sp=0x20, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5540, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5541, .a=0x8b, .x=0x92, .y=0x31, .sp=0x20, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5540, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5540, .value=0xfc, .type=IO_READ},
        {.addr=0x5541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0336) {
    const struct CPU_State initial_cpu = {.pc=0x7ad7, .a=0x31, .x=0x05, .y=0x8d, .sp=0x66, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x7ad7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7ad8, .a=0x31, .x=0x05, .y=0x8e, .sp=0x66, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7ad7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7ad7, .value=0xfc, .type=IO_READ},
        {.addr=0x7ad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0337) {
    const struct CPU_State initial_cpu = {.pc=0xe08c, .a=0x6d, .x=0x16, .y=0xb7, .sp=0xea, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe08c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe08d, .a=0x6d, .x=0x16, .y=0xb8, .sp=0xea, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe08c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe08c, .value=0xfc, .type=IO_READ},
        {.addr=0xe08d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0338) {
    const struct CPU_State initial_cpu = {.pc=0x513f, .a=0xba, .x=0xb7, .y=0x9b, .sp=0xc9, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x513f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5140, .a=0xba, .x=0xb7, .y=0x9c, .sp=0xc9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x513f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x513f, .value=0xfc, .type=IO_READ},
        {.addr=0x5140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0339) {
    const struct CPU_State initial_cpu = {.pc=0x213b, .a=0xe3, .x=0xb4, .y=0xbe, .sp=0xe7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x213b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0xe3, .x=0xb4, .y=0xbf, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x213b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x213b, .value=0xfc, .type=IO_READ},
        {.addr=0x213c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033A) {
    const struct CPU_State initial_cpu = {.pc=0xb3bf, .a=0xb4, .x=0x7b, .y=0x56, .sp=0x8e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb3bf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb3c0, .a=0xb4, .x=0x7b, .y=0x57, .sp=0x8e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb3bf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb3bf, .value=0xfc, .type=IO_READ},
        {.addr=0xb3c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033B) {
    const struct CPU_State initial_cpu = {.pc=0xdf1d, .a=0x01, .x=0xae, .y=0xb3, .sp=0x60, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdf1e, .a=0x01, .x=0xae, .y=0xb4, .sp=0x60, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdf1d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdf1d, .value=0xfc, .type=IO_READ},
        {.addr=0xdf1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033C) {
    const struct CPU_State initial_cpu = {.pc=0x4097, .a=0x8c, .x=0x26, .y=0x29, .sp=0x69, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4097, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4098, .a=0x8c, .x=0x26, .y=0x2a, .sp=0x69, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4097, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4097, .value=0xfc, .type=IO_READ},
        {.addr=0x4098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033D) {
    const struct CPU_State initial_cpu = {.pc=0x6b3a, .a=0xf0, .x=0x32, .y=0x9b, .sp=0x54, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6b3b, .a=0xf0, .x=0x32, .y=0x9c, .sp=0x54, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6b3a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6b3a, .value=0xfc, .type=IO_READ},
        {.addr=0x6b3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033E) {
    const struct CPU_State initial_cpu = {.pc=0xfb87, .a=0x47, .x=0xa1, .y=0x59, .sp=0x86, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xfb87, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfb88, .a=0x47, .x=0xa1, .y=0x5a, .sp=0x86, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfb87, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfb87, .value=0xfc, .type=IO_READ},
        {.addr=0xfb88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_033F) {
    const struct CPU_State initial_cpu = {.pc=0x86c1, .a=0x3f, .x=0x82, .y=0x00, .sp=0x64, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x86c1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x86c2, .a=0x3f, .x=0x82, .y=0x01, .sp=0x64, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x86c1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x86c1, .value=0xfc, .type=IO_READ},
        {.addr=0x86c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0340) {
    const struct CPU_State initial_cpu = {.pc=0xf495, .a=0x24, .x=0x28, .y=0x18, .sp=0xe1, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf495, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf496, .a=0x24, .x=0x28, .y=0x19, .sp=0xe1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf495, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf495, .value=0xfc, .type=IO_READ},
        {.addr=0xf496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0341) {
    const struct CPU_State initial_cpu = {.pc=0xc3b7, .a=0x47, .x=0x18, .y=0x72, .sp=0x31, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc3b8, .a=0x47, .x=0x18, .y=0x73, .sp=0x31, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc3b7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc3b7, .value=0xfc, .type=IO_READ},
        {.addr=0xc3b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0342) {
    const struct CPU_State initial_cpu = {.pc=0x8ece, .a=0x95, .x=0x10, .y=0x1b, .sp=0x0e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8ece, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ecf, .a=0x95, .x=0x10, .y=0x1c, .sp=0x0e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8ece, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8ece, .value=0xfc, .type=IO_READ},
        {.addr=0x8ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0343) {
    const struct CPU_State initial_cpu = {.pc=0x026a, .a=0xea, .x=0x2f, .y=0x9b, .sp=0x08, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x026a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x026b, .a=0xea, .x=0x2f, .y=0x9c, .sp=0x08, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x026a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x026a, .value=0xfc, .type=IO_READ},
        {.addr=0x026b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0344) {
    const struct CPU_State initial_cpu = {.pc=0x3771, .a=0xd8, .x=0xf8, .y=0xe9, .sp=0x2a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3771, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3772, .a=0xd8, .x=0xf8, .y=0xea, .sp=0x2a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3771, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3771, .value=0xfc, .type=IO_READ},
        {.addr=0x3772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0345) {
    const struct CPU_State initial_cpu = {.pc=0x19e2, .a=0xfb, .x=0x56, .y=0x44, .sp=0x45, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x19e2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x19e3, .a=0xfb, .x=0x56, .y=0x45, .sp=0x45, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x19e2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x19e2, .value=0xfc, .type=IO_READ},
        {.addr=0x19e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0346) {
    const struct CPU_State initial_cpu = {.pc=0x1528, .a=0xa5, .x=0x9b, .y=0xae, .sp=0x2a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1528, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1529, .a=0xa5, .x=0x9b, .y=0xaf, .sp=0x2a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1528, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1528, .value=0xfc, .type=IO_READ},
        {.addr=0x1529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0347) {
    const struct CPU_State initial_cpu = {.pc=0xb299, .a=0xb3, .x=0x64, .y=0xc4, .sp=0x7e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb299, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb29a, .a=0xb3, .x=0x64, .y=0xc5, .sp=0x7e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb299, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb299, .value=0xfc, .type=IO_READ},
        {.addr=0xb29a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0348) {
    const struct CPU_State initial_cpu = {.pc=0xa050, .a=0xef, .x=0xfb, .y=0x1f, .sp=0xf7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa050, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa051, .a=0xef, .x=0xfb, .y=0x20, .sp=0xf7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa050, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa050, .value=0xfc, .type=IO_READ},
        {.addr=0xa051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0349) {
    const struct CPU_State initial_cpu = {.pc=0x8aec, .a=0x74, .x=0xf7, .y=0x00, .sp=0x49, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8aec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8aed, .a=0x74, .x=0xf7, .y=0x01, .sp=0x49, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8aec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8aec, .value=0xfc, .type=IO_READ},
        {.addr=0x8aed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034A) {
    const struct CPU_State initial_cpu = {.pc=0x6422, .a=0x1f, .x=0xbe, .y=0x0e, .sp=0x6d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6422, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6423, .a=0x1f, .x=0xbe, .y=0x0f, .sp=0x6d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6422, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6422, .value=0xfc, .type=IO_READ},
        {.addr=0x6423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034B) {
    const struct CPU_State initial_cpu = {.pc=0x2a46, .a=0x68, .x=0x09, .y=0xb2, .sp=0x81, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x2a46, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2a47, .a=0x68, .x=0x09, .y=0xb3, .sp=0x81, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2a46, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2a46, .value=0xfc, .type=IO_READ},
        {.addr=0x2a47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034C) {
    const struct CPU_State initial_cpu = {.pc=0xd24b, .a=0x09, .x=0xa0, .y=0xd7, .sp=0xcc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd24b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd24c, .a=0x09, .x=0xa0, .y=0xd8, .sp=0xcc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd24b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd24b, .value=0xfc, .type=IO_READ},
        {.addr=0xd24c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034D) {
    const struct CPU_State initial_cpu = {.pc=0xb42a, .a=0xc6, .x=0xc5, .y=0x9d, .sp=0x7c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xb42a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb42b, .a=0xc6, .x=0xc5, .y=0x9e, .sp=0x7c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb42a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb42a, .value=0xfc, .type=IO_READ},
        {.addr=0xb42b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034E) {
    const struct CPU_State initial_cpu = {.pc=0xf722, .a=0x7f, .x=0xaa, .y=0x0e, .sp=0x1c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf722, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf723, .a=0x7f, .x=0xaa, .y=0x0f, .sp=0x1c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf722, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf722, .value=0xfc, .type=IO_READ},
        {.addr=0xf723, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_034F) {
    const struct CPU_State initial_cpu = {.pc=0x2694, .a=0x2d, .x=0x28, .y=0x9b, .sp=0x9e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2694, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2695, .a=0x2d, .x=0x28, .y=0x9c, .sp=0x9e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2694, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2694, .value=0xfc, .type=IO_READ},
        {.addr=0x2695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0350) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0x19, .x=0x9e, .y=0x3a, .sp=0x07, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1000, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1001, .a=0x19, .x=0x9e, .y=0x3b, .sp=0x07, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x1000, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0xfc, .type=IO_READ},
        {.addr=0x1001, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0351) {
    const struct CPU_State initial_cpu = {.pc=0x27d2, .a=0xcb, .x=0x54, .y=0xb1, .sp=0x67, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x27d2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x27d3, .a=0xcb, .x=0x54, .y=0xb2, .sp=0x67, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x27d2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x27d2, .value=0xfc, .type=IO_READ},
        {.addr=0x27d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf08c, .a=0xe5, .x=0x84, .y=0x6c, .sp=0xc7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf08c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf08d, .a=0xe5, .x=0x84, .y=0x6d, .sp=0xc7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf08c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf08c, .value=0xfc, .type=IO_READ},
        {.addr=0xf08d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0353) {
    const struct CPU_State initial_cpu = {.pc=0x8d5c, .a=0x9f, .x=0xcf, .y=0xbb, .sp=0xd5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8d5d, .a=0x9f, .x=0xcf, .y=0xbc, .sp=0xd5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8d5c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8d5c, .value=0xfc, .type=IO_READ},
        {.addr=0x8d5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0354) {
    const struct CPU_State initial_cpu = {.pc=0x2005, .a=0x9f, .x=0x87, .y=0x05, .sp=0xd7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2005, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2006, .a=0x9f, .x=0x87, .y=0x06, .sp=0xd7, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2005, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2005, .value=0xfc, .type=IO_READ},
        {.addr=0x2006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0355) {
    const struct CPU_State initial_cpu = {.pc=0x2d77, .a=0x40, .x=0x75, .y=0x9e, .sp=0x99, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2d77, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2d78, .a=0x40, .x=0x75, .y=0x9f, .sp=0x99, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2d77, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2d77, .value=0xfc, .type=IO_READ},
        {.addr=0x2d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3441, .a=0x7d, .x=0x0d, .y=0x7e, .sp=0xe3, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x3441, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3442, .a=0x7d, .x=0x0d, .y=0x7f, .sp=0xe3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3441, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3441, .value=0xfc, .type=IO_READ},
        {.addr=0x3442, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0357) {
    const struct CPU_State initial_cpu = {.pc=0x65cf, .a=0x8d, .x=0x5f, .y=0xb6, .sp=0x2c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x65cf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x65d0, .a=0x8d, .x=0x5f, .y=0xb7, .sp=0x2c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x65cf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x65cf, .value=0xfc, .type=IO_READ},
        {.addr=0x65d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5ca7, .a=0x0f, .x=0x09, .y=0x93, .sp=0x10, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5ca8, .a=0x0f, .x=0x09, .y=0x94, .sp=0x10, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5ca7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5ca7, .value=0xfc, .type=IO_READ},
        {.addr=0x5ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0359) {
    const struct CPU_State initial_cpu = {.pc=0x17e4, .a=0xa2, .x=0x5c, .y=0xb1, .sp=0x6d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x17e4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x17e5, .a=0xa2, .x=0x5c, .y=0xb2, .sp=0x6d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x17e4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x17e4, .value=0xfc, .type=IO_READ},
        {.addr=0x17e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3fdf, .a=0x2a, .x=0xeb, .y=0xd6, .sp=0x3f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3fdf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3fe0, .a=0x2a, .x=0xeb, .y=0xd7, .sp=0x3f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3fdf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3fdf, .value=0xfc, .type=IO_READ},
        {.addr=0x3fe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035B) {
    const struct CPU_State initial_cpu = {.pc=0x3cbd, .a=0x87, .x=0x35, .y=0x6b, .sp=0xf9, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3cbd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3cbe, .a=0x87, .x=0x35, .y=0x6c, .sp=0xf9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3cbd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3cbd, .value=0xfc, .type=IO_READ},
        {.addr=0x3cbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0e07, .a=0xd1, .x=0xa4, .y=0x52, .sp=0xcc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0e07, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0e08, .a=0xd1, .x=0xa4, .y=0x53, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0e07, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0e07, .value=0xfc, .type=IO_READ},
        {.addr=0x0e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035D) {
    const struct CPU_State initial_cpu = {.pc=0xfb26, .a=0x91, .x=0x9d, .y=0xc3, .sp=0x62, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xfb26, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfb27, .a=0x91, .x=0x9d, .y=0xc4, .sp=0x62, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfb26, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfb26, .value=0xfc, .type=IO_READ},
        {.addr=0xfb27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035E) {
    const struct CPU_State initial_cpu = {.pc=0x4c34, .a=0x77, .x=0x64, .y=0xde, .sp=0xff, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4c34, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4c35, .a=0x77, .x=0x64, .y=0xdf, .sp=0xff, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4c34, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4c34, .value=0xfc, .type=IO_READ},
        {.addr=0x4c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa70b, .a=0x20, .x=0x3b, .y=0x4d, .sp=0xf2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa70b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa70c, .a=0x20, .x=0x3b, .y=0x4e, .sp=0xf2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa70b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa70b, .value=0xfc, .type=IO_READ},
        {.addr=0xa70c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0360) {
    const struct CPU_State initial_cpu = {.pc=0x39d1, .a=0xdd, .x=0xd5, .y=0xf6, .sp=0xdd, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x39d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x39d2, .a=0xdd, .x=0xd5, .y=0xf7, .sp=0xdd, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x39d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x39d1, .value=0xfc, .type=IO_READ},
        {.addr=0x39d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0361) {
    const struct CPU_State initial_cpu = {.pc=0xff98, .a=0x8f, .x=0xee, .y=0xd0, .sp=0x70, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xff98, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xff99, .a=0x8f, .x=0xee, .y=0xd1, .sp=0x70, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xff98, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xff98, .value=0xfc, .type=IO_READ},
        {.addr=0xff99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0362) {
    const struct CPU_State initial_cpu = {.pc=0x6ca9, .a=0x86, .x=0x74, .y=0xa3, .sp=0xf2, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6caa, .a=0x86, .x=0x74, .y=0xa4, .sp=0xf2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6ca9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6ca9, .value=0xfc, .type=IO_READ},
        {.addr=0x6caa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0363) {
    const struct CPU_State initial_cpu = {.pc=0x63dd, .a=0xc9, .x=0xa7, .y=0x6d, .sp=0x9e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x63dd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x63de, .a=0xc9, .x=0xa7, .y=0x6e, .sp=0x9e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x63dd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x63dd, .value=0xfc, .type=IO_READ},
        {.addr=0x63de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0364) {
    const struct CPU_State initial_cpu = {.pc=0x5682, .a=0x39, .x=0x7c, .y=0xf2, .sp=0x6e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5682, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5683, .a=0x39, .x=0x7c, .y=0xf3, .sp=0x6e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5682, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5682, .value=0xfc, .type=IO_READ},
        {.addr=0x5683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0365) {
    const struct CPU_State initial_cpu = {.pc=0xd786, .a=0xb1, .x=0xb1, .y=0x35, .sp=0x30, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd786, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd787, .a=0xb1, .x=0xb1, .y=0x36, .sp=0x30, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd786, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd786, .value=0xfc, .type=IO_READ},
        {.addr=0xd787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0366) {
    const struct CPU_State initial_cpu = {.pc=0x3447, .a=0x3e, .x=0x67, .y=0x01, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x3447, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3448, .a=0x3e, .x=0x67, .y=0x02, .sp=0xdc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3447, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3447, .value=0xfc, .type=IO_READ},
        {.addr=0x3448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0367) {
    const struct CPU_State initial_cpu = {.pc=0x4e17, .a=0xbe, .x=0x2f, .y=0xcc, .sp=0xe9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e17, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4e18, .a=0xbe, .x=0x2f, .y=0xcd, .sp=0xe9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4e17, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4e17, .value=0xfc, .type=IO_READ},
        {.addr=0x4e18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0368) {
    const struct CPU_State initial_cpu = {.pc=0xf02d, .a=0x40, .x=0x8b, .y=0x48, .sp=0xa7, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf02d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf02e, .a=0x40, .x=0x8b, .y=0x49, .sp=0xa7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf02d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf02d, .value=0xfc, .type=IO_READ},
        {.addr=0xf02e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0369) {
    const struct CPU_State initial_cpu = {.pc=0xfad5, .a=0xa5, .x=0x52, .y=0xfd, .sp=0xbd, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xfad5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfad6, .a=0xa5, .x=0x52, .y=0xfe, .sp=0xbd, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xfad5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfad5, .value=0xfc, .type=IO_READ},
        {.addr=0xfad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036A) {
    const struct CPU_State initial_cpu = {.pc=0x16a7, .a=0x59, .x=0x84, .y=0xdd, .sp=0xd9, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x16a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x16a8, .a=0x59, .x=0x84, .y=0xde, .sp=0xd9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x16a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x16a7, .value=0xfc, .type=IO_READ},
        {.addr=0x16a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036B) {
    const struct CPU_State initial_cpu = {.pc=0x74d7, .a=0xda, .x=0xc5, .y=0x81, .sp=0xbf, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x74d7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x74d8, .a=0xda, .x=0xc5, .y=0x82, .sp=0xbf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x74d7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x74d7, .value=0xfc, .type=IO_READ},
        {.addr=0x74d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036C) {
    const struct CPU_State initial_cpu = {.pc=0x2acd, .a=0x58, .x=0x73, .y=0x6c, .sp=0x07, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2acd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2ace, .a=0x58, .x=0x73, .y=0x6d, .sp=0x07, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2acd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2acd, .value=0xfc, .type=IO_READ},
        {.addr=0x2ace, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036D) {
    const struct CPU_State initial_cpu = {.pc=0xb63c, .a=0x8c, .x=0xa8, .y=0xb5, .sp=0x9d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb63c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb63d, .a=0x8c, .x=0xa8, .y=0xb6, .sp=0x9d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb63c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb63c, .value=0xfc, .type=IO_READ},
        {.addr=0xb63d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036E) {
    const struct CPU_State initial_cpu = {.pc=0x569b, .a=0x3d, .x=0xf5, .y=0xca, .sp=0x56, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x569b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x569c, .a=0x3d, .x=0xf5, .y=0xcb, .sp=0x56, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x569b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x569b, .value=0xfc, .type=IO_READ},
        {.addr=0x569c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_036F) {
    const struct CPU_State initial_cpu = {.pc=0x73f4, .a=0x17, .x=0xff, .y=0x94, .sp=0x60, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x73f4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x73f5, .a=0x17, .x=0xff, .y=0x95, .sp=0x60, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x73f4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x73f4, .value=0xfc, .type=IO_READ},
        {.addr=0x73f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0370) {
    const struct CPU_State initial_cpu = {.pc=0xcdcf, .a=0x5f, .x=0xc0, .y=0x51, .sp=0x75, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xcdcf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcdd0, .a=0x5f, .x=0xc0, .y=0x52, .sp=0x75, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xcdcf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcdcf, .value=0xfc, .type=IO_READ},
        {.addr=0xcdd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0371) {
    const struct CPU_State initial_cpu = {.pc=0x724c, .a=0xf1, .x=0x36, .y=0xde, .sp=0xb4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x724c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x724d, .a=0xf1, .x=0x36, .y=0xdf, .sp=0xb4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x724c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x724c, .value=0xfc, .type=IO_READ},
        {.addr=0x724d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0372) {
    const struct CPU_State initial_cpu = {.pc=0xd66b, .a=0xea, .x=0x23, .y=0xbe, .sp=0x2c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd66b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd66c, .a=0xea, .x=0x23, .y=0xbf, .sp=0x2c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd66b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd66b, .value=0xfc, .type=IO_READ},
        {.addr=0xd66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0373) {
    const struct CPU_State initial_cpu = {.pc=0x76d1, .a=0xfb, .x=0x89, .y=0x69, .sp=0xc5, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x76d1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x76d2, .a=0xfb, .x=0x89, .y=0x6a, .sp=0xc5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x76d1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x76d1, .value=0xfc, .type=IO_READ},
        {.addr=0x76d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb8f2, .a=0xe0, .x=0x20, .y=0xb0, .sp=0xf3, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb8f3, .a=0xe0, .x=0x20, .y=0xb1, .sp=0xf3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb8f2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb8f2, .value=0xfc, .type=IO_READ},
        {.addr=0xb8f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0375) {
    const struct CPU_State initial_cpu = {.pc=0x7f0d, .a=0xe8, .x=0x52, .y=0xae, .sp=0x2e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x7f0d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7f0e, .a=0xe8, .x=0x52, .y=0xaf, .sp=0x2e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7f0d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7f0d, .value=0xfc, .type=IO_READ},
        {.addr=0x7f0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0376) {
    const struct CPU_State initial_cpu = {.pc=0x9b9b, .a=0x67, .x=0xd8, .y=0x56, .sp=0x81, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9b9b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9b9c, .a=0x67, .x=0xd8, .y=0x57, .sp=0x81, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9b9b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9b9b, .value=0xfc, .type=IO_READ},
        {.addr=0x9b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0377) {
    const struct CPU_State initial_cpu = {.pc=0xc01a, .a=0xd8, .x=0x0b, .y=0x40, .sp=0x39, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc01a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc01b, .a=0xd8, .x=0x0b, .y=0x41, .sp=0x39, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc01a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc01a, .value=0xfc, .type=IO_READ},
        {.addr=0xc01b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0378) {
    const struct CPU_State initial_cpu = {.pc=0x2940, .a=0xde, .x=0xec, .y=0x15, .sp=0x8a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2940, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2941, .a=0xde, .x=0xec, .y=0x16, .sp=0x8a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2940, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2940, .value=0xfc, .type=IO_READ},
        {.addr=0x2941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0379) {
    const struct CPU_State initial_cpu = {.pc=0xf9e3, .a=0xf8, .x=0xc2, .y=0x69, .sp=0x6a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf9e4, .a=0xf8, .x=0xc2, .y=0x6a, .sp=0x6a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf9e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf9e3, .value=0xfc, .type=IO_READ},
        {.addr=0xf9e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037A) {
    const struct CPU_State initial_cpu = {.pc=0xf5a7, .a=0x22, .x=0xe0, .y=0xac, .sp=0x30, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf5a8, .a=0x22, .x=0xe0, .y=0xad, .sp=0x30, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf5a7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf5a7, .value=0xfc, .type=IO_READ},
        {.addr=0xf5a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037B) {
    const struct CPU_State initial_cpu = {.pc=0x172e, .a=0xfe, .x=0x22, .y=0xd9, .sp=0x9a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x172e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x172f, .a=0xfe, .x=0x22, .y=0xda, .sp=0x9a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x172e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x172e, .value=0xfc, .type=IO_READ},
        {.addr=0x172f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037C) {
    const struct CPU_State initial_cpu = {.pc=0xa13b, .a=0x94, .x=0xc3, .y=0x9d, .sp=0xeb, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xa13b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa13c, .a=0x94, .x=0xc3, .y=0x9e, .sp=0xeb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa13b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa13b, .value=0xfc, .type=IO_READ},
        {.addr=0xa13c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037D) {
    const struct CPU_State initial_cpu = {.pc=0x2f8e, .a=0x7e, .x=0xc8, .y=0x41, .sp=0x75, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2f8f, .a=0x7e, .x=0xc8, .y=0x42, .sp=0x75, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2f8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2f8e, .value=0xfc, .type=IO_READ},
        {.addr=0x2f8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0c6f, .a=0xa2, .x=0x87, .y=0x01, .sp=0x65, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0c70, .a=0xa2, .x=0x87, .y=0x02, .sp=0x65, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0c6f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0c6f, .value=0xfc, .type=IO_READ},
        {.addr=0x0c70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_037F) {
    const struct CPU_State initial_cpu = {.pc=0x70b3, .a=0xe7, .x=0x10, .y=0x00, .sp=0x52, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x70b3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x70b4, .a=0xe7, .x=0x10, .y=0x01, .sp=0x52, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x70b3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x70b3, .value=0xfc, .type=IO_READ},
        {.addr=0x70b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0380) {
    const struct CPU_State initial_cpu = {.pc=0x8f28, .a=0xb5, .x=0xad, .y=0x1a, .sp=0xc5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8f28, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8f29, .a=0xb5, .x=0xad, .y=0x1b, .sp=0xc5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8f28, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8f28, .value=0xfc, .type=IO_READ},
        {.addr=0x8f29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0381) {
    const struct CPU_State initial_cpu = {.pc=0x731c, .a=0x4b, .x=0x7c, .y=0xfc, .sp=0xdc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x731c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x731d, .a=0x4b, .x=0x7c, .y=0xfd, .sp=0xdc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x731c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x731c, .value=0xfc, .type=IO_READ},
        {.addr=0x731d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0382) {
    const struct CPU_State initial_cpu = {.pc=0x91f7, .a=0xb3, .x=0x45, .y=0xaf, .sp=0xf7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x91f7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x91f8, .a=0xb3, .x=0x45, .y=0xb0, .sp=0xf7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x91f7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x91f7, .value=0xfc, .type=IO_READ},
        {.addr=0x91f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0383) {
    const struct CPU_State initial_cpu = {.pc=0x7a05, .a=0xcb, .x=0x9b, .y=0x9d, .sp=0x8f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7a05, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7a06, .a=0xcb, .x=0x9b, .y=0x9e, .sp=0x8f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7a05, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7a05, .value=0xfc, .type=IO_READ},
        {.addr=0x7a06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0384) {
    const struct CPU_State initial_cpu = {.pc=0x3a83, .a=0x9b, .x=0x23, .y=0xb7, .sp=0x1c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3a83, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a84, .a=0x9b, .x=0x23, .y=0xb8, .sp=0x1c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3a83, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a83, .value=0xfc, .type=IO_READ},
        {.addr=0x3a84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0385) {
    const struct CPU_State initial_cpu = {.pc=0x6186, .a=0xcf, .x=0x0e, .y=0xd6, .sp=0xa4, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6186, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6187, .a=0xcf, .x=0x0e, .y=0xd7, .sp=0xa4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6186, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6186, .value=0xfc, .type=IO_READ},
        {.addr=0x6187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0536, .a=0x98, .x=0x89, .y=0x51, .sp=0xbe, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0536, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0537, .a=0x98, .x=0x89, .y=0x52, .sp=0xbe, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0536, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0536, .value=0xfc, .type=IO_READ},
        {.addr=0x0537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0387) {
    const struct CPU_State initial_cpu = {.pc=0xad7a, .a=0x74, .x=0x80, .y=0x00, .sp=0xe6, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xad7a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xad7b, .a=0x74, .x=0x80, .y=0x01, .sp=0xe6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xad7a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xad7a, .value=0xfc, .type=IO_READ},
        {.addr=0xad7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0388) {
    const struct CPU_State initial_cpu = {.pc=0xee9c, .a=0xa4, .x=0x96, .y=0x07, .sp=0x20, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xee9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xee9d, .a=0xa4, .x=0x96, .y=0x08, .sp=0x20, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xee9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xee9c, .value=0xfc, .type=IO_READ},
        {.addr=0xee9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0389) {
    const struct CPU_State initial_cpu = {.pc=0xf8a3, .a=0xd4, .x=0xb5, .y=0x43, .sp=0x38, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf8a4, .a=0xd4, .x=0xb5, .y=0x44, .sp=0x38, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf8a3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf8a3, .value=0xfc, .type=IO_READ},
        {.addr=0xf8a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038A) {
    const struct CPU_State initial_cpu = {.pc=0xbb1e, .a=0x1a, .x=0x1d, .y=0x60, .sp=0x69, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbb1f, .a=0x1a, .x=0x1d, .y=0x61, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbb1e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbb1e, .value=0xfc, .type=IO_READ},
        {.addr=0xbb1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038B) {
    const struct CPU_State initial_cpu = {.pc=0xcf02, .a=0xd2, .x=0xfe, .y=0xda, .sp=0x90, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcf02, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcf03, .a=0xd2, .x=0xfe, .y=0xdb, .sp=0x90, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcf02, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcf02, .value=0xfc, .type=IO_READ},
        {.addr=0xcf03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038C) {
    const struct CPU_State initial_cpu = {.pc=0x5c73, .a=0x38, .x=0x30, .y=0xc4, .sp=0xd8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c73, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5c74, .a=0x38, .x=0x30, .y=0xc5, .sp=0xd8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5c73, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5c73, .value=0xfc, .type=IO_READ},
        {.addr=0x5c74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038D) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0xfd, .x=0x83, .y=0x64, .sp=0xbe, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5b40, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0xfd, .x=0x83, .y=0x65, .sp=0xbe, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5b40, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0xfc, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038E) {
    const struct CPU_State initial_cpu = {.pc=0xb184, .a=0xdd, .x=0x62, .y=0xa6, .sp=0xee, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb184, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb185, .a=0xdd, .x=0x62, .y=0xa7, .sp=0xee, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb184, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb184, .value=0xfc, .type=IO_READ},
        {.addr=0xb185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_038F) {
    const struct CPU_State initial_cpu = {.pc=0xab1a, .a=0x2a, .x=0x1f, .y=0xaf, .sp=0x4e, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xab1a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xab1b, .a=0x2a, .x=0x1f, .y=0xb0, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xab1a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xab1a, .value=0xfc, .type=IO_READ},
        {.addr=0xab1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0390) {
    const struct CPU_State initial_cpu = {.pc=0x6f85, .a=0xce, .x=0x2c, .y=0xa2, .sp=0xb6, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6f85, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6f86, .a=0xce, .x=0x2c, .y=0xa3, .sp=0xb6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6f85, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6f85, .value=0xfc, .type=IO_READ},
        {.addr=0x6f86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0391) {
    const struct CPU_State initial_cpu = {.pc=0xcbc8, .a=0xf2, .x=0x5a, .y=0xb9, .sp=0x40, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xcbc8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcbc9, .a=0xf2, .x=0x5a, .y=0xba, .sp=0x40, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xcbc8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcbc8, .value=0xfc, .type=IO_READ},
        {.addr=0xcbc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0392) {
    const struct CPU_State initial_cpu = {.pc=0x674a, .a=0x74, .x=0xf6, .y=0x28, .sp=0x1a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x674a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x674b, .a=0x74, .x=0xf6, .y=0x29, .sp=0x1a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x674a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x674a, .value=0xfc, .type=IO_READ},
        {.addr=0x674b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0393) {
    const struct CPU_State initial_cpu = {.pc=0xe767, .a=0x52, .x=0xc1, .y=0x88, .sp=0xa8, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe767, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe768, .a=0x52, .x=0xc1, .y=0x89, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe767, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe767, .value=0xfc, .type=IO_READ},
        {.addr=0xe768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0394) {
    const struct CPU_State initial_cpu = {.pc=0x5155, .a=0xfc, .x=0xf8, .y=0x9b, .sp=0xfb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5155, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5156, .a=0xfc, .x=0xf8, .y=0x9c, .sp=0xfb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5155, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5155, .value=0xfc, .type=IO_READ},
        {.addr=0x5156, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0395) {
    const struct CPU_State initial_cpu = {.pc=0x41d5, .a=0x8c, .x=0xf4, .y=0x86, .sp=0xfa, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x41d5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x41d6, .a=0x8c, .x=0xf4, .y=0x87, .sp=0xfa, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x41d5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x41d5, .value=0xfc, .type=IO_READ},
        {.addr=0x41d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0396) {
    const struct CPU_State initial_cpu = {.pc=0xe69e, .a=0x33, .x=0x1d, .y=0x93, .sp=0x1e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe69e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe69f, .a=0x33, .x=0x1d, .y=0x94, .sp=0x1e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe69e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe69e, .value=0xfc, .type=IO_READ},
        {.addr=0xe69f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0397) {
    const struct CPU_State initial_cpu = {.pc=0x3810, .a=0x25, .x=0xab, .y=0x2f, .sp=0xdd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3810, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3811, .a=0x25, .x=0xab, .y=0x30, .sp=0xdd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3810, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3810, .value=0xfc, .type=IO_READ},
        {.addr=0x3811, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0398) {
    const struct CPU_State initial_cpu = {.pc=0xceb2, .a=0xe9, .x=0x07, .y=0x49, .sp=0xa3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xceb2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xceb3, .a=0xe9, .x=0x07, .y=0x4a, .sp=0xa3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xceb2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xceb2, .value=0xfc, .type=IO_READ},
        {.addr=0xceb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_0399) {
    const struct CPU_State initial_cpu = {.pc=0x783b, .a=0xba, .x=0x9f, .y=0x69, .sp=0x76, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x783b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x783c, .a=0xba, .x=0x9f, .y=0x6a, .sp=0x76, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x783b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x783b, .value=0xfc, .type=IO_READ},
        {.addr=0x783c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039A) {
    const struct CPU_State initial_cpu = {.pc=0xf253, .a=0xb4, .x=0xfd, .y=0x47, .sp=0x51, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xf253, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf254, .a=0xb4, .x=0xfd, .y=0x48, .sp=0x51, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf253, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf253, .value=0xfc, .type=IO_READ},
        {.addr=0xf254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039B) {
    const struct CPU_State initial_cpu = {.pc=0x843e, .a=0x9f, .x=0x37, .y=0xb8, .sp=0x5e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x843e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x843f, .a=0x9f, .x=0x37, .y=0xb9, .sp=0x5e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x843e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x843e, .value=0xfc, .type=IO_READ},
        {.addr=0x843f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039C) {
    const struct CPU_State initial_cpu = {.pc=0x685d, .a=0x0b, .x=0x91, .y=0x39, .sp=0x31, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x685d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x685e, .a=0x0b, .x=0x91, .y=0x3a, .sp=0x31, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x685d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x685d, .value=0xfc, .type=IO_READ},
        {.addr=0x685e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039D) {
    const struct CPU_State initial_cpu = {.pc=0xdade, .a=0xf4, .x=0xf9, .y=0x99, .sp=0x7f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xdade, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xdadf, .a=0xf4, .x=0xf9, .y=0x9a, .sp=0x7f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdade, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xdade, .value=0xfc, .type=IO_READ},
        {.addr=0xdadf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039E) {
    const struct CPU_State initial_cpu = {.pc=0x2006, .a=0x06, .x=0xf7, .y=0x08, .sp=0xcd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x2006, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2007, .a=0x06, .x=0xf7, .y=0x09, .sp=0xcd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2006, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2006, .value=0xfc, .type=IO_READ},
        {.addr=0x2007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_039F) {
    const struct CPU_State initial_cpu = {.pc=0x1230, .a=0x30, .x=0x17, .y=0x72, .sp=0xd4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1230, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1231, .a=0x30, .x=0x17, .y=0x73, .sp=0xd4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1230, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1230, .value=0xfc, .type=IO_READ},
        {.addr=0x1231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x1793, .a=0x9c, .x=0x6e, .y=0x91, .sp=0x9e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1793, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1794, .a=0x9c, .x=0x6e, .y=0x92, .sp=0x9e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1793, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1793, .value=0xfc, .type=IO_READ},
        {.addr=0x1794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xc418, .a=0x70, .x=0x95, .y=0x77, .sp=0xce, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc418, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc419, .a=0x70, .x=0x95, .y=0x78, .sp=0xce, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc418, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc418, .value=0xfc, .type=IO_READ},
        {.addr=0xc419, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xb220, .a=0x71, .x=0x38, .y=0x98, .sp=0x59, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb220, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb221, .a=0x71, .x=0x38, .y=0x99, .sp=0x59, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb220, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb220, .value=0xfc, .type=IO_READ},
        {.addr=0xb221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xffbf, .a=0x22, .x=0x25, .y=0xf0, .sp=0x97, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xffbf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xffc0, .a=0x22, .x=0x25, .y=0xf1, .sp=0x97, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xffbf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xffbf, .value=0xfc, .type=IO_READ},
        {.addr=0xffc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xf2d2, .a=0x27, .x=0x40, .y=0x19, .sp=0x7f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf2d3, .a=0x27, .x=0x40, .y=0x1a, .sp=0x7f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf2d2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf2d2, .value=0xfc, .type=IO_READ},
        {.addr=0xf2d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x0eb8, .a=0xe6, .x=0xf2, .y=0xb6, .sp=0xef, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0eb9, .a=0xe6, .x=0xf2, .y=0xb7, .sp=0xef, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0eb8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0eb8, .value=0xfc, .type=IO_READ},
        {.addr=0x0eb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x5b22, .a=0x91, .x=0x17, .y=0x2a, .sp=0x26, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5b22, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5b23, .a=0x91, .x=0x17, .y=0x2b, .sp=0x26, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5b22, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5b22, .value=0xfc, .type=IO_READ},
        {.addr=0x5b23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x278a, .a=0x39, .x=0x52, .y=0xaa, .sp=0xf7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x278a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x278b, .a=0x39, .x=0x52, .y=0xab, .sp=0xf7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x278a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x278a, .value=0xfc, .type=IO_READ},
        {.addr=0x278b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x7779, .a=0x0e, .x=0x21, .y=0x78, .sp=0x5e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7779, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x777a, .a=0x0e, .x=0x21, .y=0x79, .sp=0x5e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7779, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7779, .value=0xfc, .type=IO_READ},
        {.addr=0x777a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x953f, .a=0xa2, .x=0xc1, .y=0xc7, .sp=0x65, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x953f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9540, .a=0xa2, .x=0xc1, .y=0xc8, .sp=0x65, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x953f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x953f, .value=0xfc, .type=IO_READ},
        {.addr=0x9540, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x60ef, .a=0x5e, .x=0x01, .y=0x76, .sp=0xb9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x60ef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x60f0, .a=0x5e, .x=0x01, .y=0x77, .sp=0xb9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x60ef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x60ef, .value=0xfc, .type=IO_READ},
        {.addr=0x60f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xc23c, .a=0x20, .x=0x4d, .y=0xbd, .sp=0x5b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc23c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc23d, .a=0x20, .x=0x4d, .y=0xbe, .sp=0x5b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc23c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc23c, .value=0xfc, .type=IO_READ},
        {.addr=0xc23d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xca01, .a=0x32, .x=0x69, .y=0x2d, .sp=0x8f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xca01, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xca02, .a=0x32, .x=0x69, .y=0x2e, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xca01, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xca01, .value=0xfc, .type=IO_READ},
        {.addr=0xca02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x4d4a, .a=0x03, .x=0x5a, .y=0xa3, .sp=0x93, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x4d4a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4d4b, .a=0x03, .x=0x5a, .y=0xa4, .sp=0x93, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4d4a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4d4a, .value=0xfc, .type=IO_READ},
        {.addr=0x4d4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xa02f, .a=0x07, .x=0xaa, .y=0x22, .sp=0xd2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xa02f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa030, .a=0x07, .x=0xaa, .y=0x23, .sp=0xd2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa02f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa02f, .value=0xfc, .type=IO_READ},
        {.addr=0xa030, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xc1b5, .a=0x1d, .x=0xfc, .y=0xb4, .sp=0x54, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc1b6, .a=0x1d, .x=0xfc, .y=0xb5, .sp=0x54, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc1b5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc1b5, .value=0xfc, .type=IO_READ},
        {.addr=0xc1b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x4f54, .a=0x5c, .x=0x78, .y=0xd5, .sp=0xc9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4f54, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4f55, .a=0x5c, .x=0x78, .y=0xd6, .sp=0xc9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4f54, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4f54, .value=0xfc, .type=IO_READ},
        {.addr=0x4f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x37ee, .a=0x19, .x=0x16, .y=0x52, .sp=0xf0, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x37ee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x37ef, .a=0x19, .x=0x16, .y=0x53, .sp=0xf0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x37ee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x37ee, .value=0xfc, .type=IO_READ},
        {.addr=0x37ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7ce1, .a=0x53, .x=0xa9, .y=0xd0, .sp=0x3d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7ce2, .a=0x53, .x=0xa9, .y=0xd1, .sp=0x3d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7ce1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7ce1, .value=0xfc, .type=IO_READ},
        {.addr=0x7ce2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xa52e, .a=0xf2, .x=0xcd, .y=0xdc, .sp=0xfa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xa52e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa52f, .a=0xf2, .x=0xcd, .y=0xdd, .sp=0xfa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa52e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa52e, .value=0xfc, .type=IO_READ},
        {.addr=0xa52f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xd110, .a=0x8a, .x=0xce, .y=0x7c, .sp=0x87, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd110, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd111, .a=0x8a, .x=0xce, .y=0x7d, .sp=0x87, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd110, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd110, .value=0xfc, .type=IO_READ},
        {.addr=0xd111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xb356, .a=0xe4, .x=0xe3, .y=0xc4, .sp=0x5e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb356, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb357, .a=0xe4, .x=0xe3, .y=0xc5, .sp=0x5e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb356, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb356, .value=0xfc, .type=IO_READ},
        {.addr=0xb357, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xb017, .a=0x84, .x=0x6e, .y=0x4e, .sp=0xf2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb017, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb018, .a=0x84, .x=0x6e, .y=0x4f, .sp=0xf2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb017, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb017, .value=0xfc, .type=IO_READ},
        {.addr=0xb018, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x16e3, .a=0x2d, .x=0xff, .y=0xf4, .sp=0x1e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x16e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x16e4, .a=0x2d, .x=0xff, .y=0xf5, .sp=0x1e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x16e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x16e3, .value=0xfc, .type=IO_READ},
        {.addr=0x16e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xc6e3, .a=0xfd, .x=0x9b, .y=0x18, .sp=0x0d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc6e3, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc6e4, .a=0xfd, .x=0x9b, .y=0x19, .sp=0x0d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc6e3, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc6e3, .value=0xfc, .type=IO_READ},
        {.addr=0xc6e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xbd5d, .a=0xae, .x=0x9a, .y=0x08, .sp=0x39, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xbd5d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbd5e, .a=0xae, .x=0x9a, .y=0x09, .sp=0x39, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xbd5d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbd5d, .value=0xfc, .type=IO_READ},
        {.addr=0xbd5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x38b0, .a=0x2e, .x=0x33, .y=0x14, .sp=0x59, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x38b0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x38b1, .a=0x2e, .x=0x33, .y=0x15, .sp=0x59, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x38b0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x38b0, .value=0xfc, .type=IO_READ},
        {.addr=0x38b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x687a, .a=0x11, .x=0x7c, .y=0x81, .sp=0x49, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x687a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x687b, .a=0x11, .x=0x7c, .y=0x82, .sp=0x49, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x687a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x687a, .value=0xfc, .type=IO_READ},
        {.addr=0x687b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x2452, .a=0xc6, .x=0x57, .y=0xa4, .sp=0x18, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2452, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2453, .a=0xc6, .x=0x57, .y=0xa5, .sp=0x18, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2452, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2452, .value=0xfc, .type=IO_READ},
        {.addr=0x2453, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x096b, .a=0x15, .x=0x41, .y=0xeb, .sp=0x34, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x096b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x096c, .a=0x15, .x=0x41, .y=0xec, .sp=0x34, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x096b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x096b, .value=0xfc, .type=IO_READ},
        {.addr=0x096c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xf126, .a=0x9b, .x=0xf6, .y=0xf0, .sp=0x97, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf126, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf127, .a=0x9b, .x=0xf6, .y=0xf1, .sp=0x97, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf126, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf126, .value=0xfc, .type=IO_READ},
        {.addr=0xf127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x15ba, .a=0x17, .x=0x7f, .y=0xd9, .sp=0xb3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x15ba, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x15bb, .a=0x17, .x=0x7f, .y=0xda, .sp=0xb3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x15ba, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x15ba, .value=0xfc, .type=IO_READ},
        {.addr=0x15bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xe7a5, .a=0x1c, .x=0x80, .y=0xe1, .sp=0x88, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe7a6, .a=0x1c, .x=0x80, .y=0xe2, .sp=0x88, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe7a5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe7a5, .value=0xfc, .type=IO_READ},
        {.addr=0xe7a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x9080, .a=0x09, .x=0x5e, .y=0xc2, .sp=0x6e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9080, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9081, .a=0x09, .x=0x5e, .y=0xc3, .sp=0x6e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9080, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9080, .value=0xfc, .type=IO_READ},
        {.addr=0x9081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xe16b, .a=0x6e, .x=0x60, .y=0x5c, .sp=0xf6, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe16b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe16c, .a=0x6e, .x=0x60, .y=0x5d, .sp=0xf6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe16b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe16b, .value=0xfc, .type=IO_READ},
        {.addr=0xe16c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x86c0, .a=0x10, .x=0xc6, .y=0x4e, .sp=0x36, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x86c0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x86c1, .a=0x10, .x=0xc6, .y=0x4f, .sp=0x36, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x86c0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x86c0, .value=0xfc, .type=IO_READ},
        {.addr=0x86c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x032f, .a=0xb2, .x=0x15, .y=0xaf, .sp=0xb9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x032f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0330, .a=0xb2, .x=0x15, .y=0xb0, .sp=0xb9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x032f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x032f, .value=0xfc, .type=IO_READ},
        {.addr=0x0330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xfbbb, .a=0xe7, .x=0xc7, .y=0x23, .sp=0x52, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfbbb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfbbc, .a=0xe7, .x=0xc7, .y=0x24, .sp=0x52, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfbbb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfbbb, .value=0xfc, .type=IO_READ},
        {.addr=0xfbbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xfacc, .a=0x69, .x=0xb8, .y=0xe3, .sp=0xaf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xfacc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfacd, .a=0x69, .x=0xb8, .y=0xe4, .sp=0xaf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xfacc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfacc, .value=0xfc, .type=IO_READ},
        {.addr=0xfacd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x1857, .a=0x13, .x=0xbf, .y=0xf7, .sp=0x35, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1857, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1858, .a=0x13, .x=0xbf, .y=0xf8, .sp=0x35, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1857, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1857, .value=0xfc, .type=IO_READ},
        {.addr=0x1858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8ff8, .a=0x98, .x=0x30, .y=0x33, .sp=0x3c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ff9, .a=0x98, .x=0x30, .y=0x34, .sp=0x3c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8ff8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8ff8, .value=0xfc, .type=IO_READ},
        {.addr=0x8ff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x0a00, .a=0xf4, .x=0x27, .y=0x10, .sp=0xbb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a00, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0xf4, .x=0x27, .y=0x11, .sp=0xbb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0a00, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0a00, .value=0xfc, .type=IO_READ},
        {.addr=0x0a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x9c3c, .a=0x17, .x=0x1a, .y=0x69, .sp=0x71, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9c3c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9c3d, .a=0x17, .x=0x1a, .y=0x6a, .sp=0x71, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9c3c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9c3c, .value=0xfc, .type=IO_READ},
        {.addr=0x9c3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x8d15, .a=0x36, .x=0x04, .y=0x0f, .sp=0x5c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d15, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8d16, .a=0x36, .x=0x04, .y=0x10, .sp=0x5c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8d15, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8d15, .value=0xfc, .type=IO_READ},
        {.addr=0x8d16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0x88, .x=0x2c, .y=0xe0, .sp=0x59, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x775f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7760, .a=0x88, .x=0x2c, .y=0xe1, .sp=0x59, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x775f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0xfc, .type=IO_READ},
        {.addr=0x7760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa476, .a=0xd8, .x=0xf1, .y=0x7a, .sp=0x6b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa476, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa477, .a=0xd8, .x=0xf1, .y=0x7b, .sp=0x6b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa476, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa476, .value=0xfc, .type=IO_READ},
        {.addr=0xa477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x2863, .a=0xc9, .x=0xcc, .y=0xc7, .sp=0xa3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x2863, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x2864, .a=0xc9, .x=0xcc, .y=0xc8, .sp=0xa3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2863, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x2863, .value=0xfc, .type=IO_READ},
        {.addr=0x2864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x90bf, .a=0x82, .x=0xe0, .y=0x01, .sp=0x39, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x90bf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x90c0, .a=0x82, .x=0xe0, .y=0x02, .sp=0x39, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x90bf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x90bf, .value=0xfc, .type=IO_READ},
        {.addr=0x90c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xa950, .a=0x4c, .x=0x46, .y=0x92, .sp=0x79, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa950, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xa951, .a=0x4c, .x=0x46, .y=0x93, .sp=0x79, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa950, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xa950, .value=0xfc, .type=IO_READ},
        {.addr=0xa951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x4659, .a=0x58, .x=0x20, .y=0x51, .sp=0xdf, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x4659, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x465a, .a=0x58, .x=0x20, .y=0x52, .sp=0xdf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4659, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4659, .value=0xfc, .type=IO_READ},
        {.addr=0x465a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x85ec, .a=0x9f, .x=0xf3, .y=0x46, .sp=0xaf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x85ec, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x85ed, .a=0x9f, .x=0xf3, .y=0x47, .sp=0xaf, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x85ec, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x85ec, .value=0xfc, .type=IO_READ},
        {.addr=0x85ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xcbef, .a=0x7f, .x=0xb4, .y=0x72, .sp=0x9b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xcbef, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xcbf0, .a=0x7f, .x=0xb4, .y=0x73, .sp=0x9b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xcbef, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xcbef, .value=0xfc, .type=IO_READ},
        {.addr=0xcbf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x8ab1, .a=0xeb, .x=0x8d, .y=0x51, .sp=0x24, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ab2, .a=0xeb, .x=0x8d, .y=0x52, .sp=0x24, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8ab1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8ab1, .value=0xfc, .type=IO_READ},
        {.addr=0x8ab2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6d34, .a=0x24, .x=0x3a, .y=0x00, .sp=0x65, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6d34, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6d35, .a=0x24, .x=0x3a, .y=0x01, .sp=0x65, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6d34, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6d34, .value=0xfc, .type=IO_READ},
        {.addr=0x6d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xd580, .a=0x36, .x=0x7f, .y=0x34, .sp=0x9a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd580, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd581, .a=0x36, .x=0x7f, .y=0x35, .sp=0x9a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd580, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd580, .value=0xfc, .type=IO_READ},
        {.addr=0xd581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x1198, .a=0xf6, .x=0xe7, .y=0x81, .sp=0x8d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1198, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1199, .a=0xf6, .x=0xe7, .y=0x82, .sp=0x8d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1198, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1198, .value=0xfc, .type=IO_READ},
        {.addr=0x1199, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xc881, .a=0x4f, .x=0xc5, .y=0x32, .sp=0x86, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc881, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc882, .a=0x4f, .x=0xc5, .y=0x33, .sp=0x86, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc881, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc881, .value=0xfc, .type=IO_READ},
        {.addr=0xc882, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x6bae, .a=0xb1, .x=0x3b, .y=0x93, .sp=0x98, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6bae, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6baf, .a=0xb1, .x=0x3b, .y=0x94, .sp=0x98, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6bae, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6bae, .value=0xfc, .type=IO_READ},
        {.addr=0x6baf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd736, .a=0x63, .x=0xdd, .y=0x75, .sp=0x61, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd736, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd737, .a=0x63, .x=0xdd, .y=0x76, .sp=0x61, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd736, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd736, .value=0xfc, .type=IO_READ},
        {.addr=0xd737, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xfbb1, .a=0x5b, .x=0x14, .y=0xc7, .sp=0xef, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb1, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfbb2, .a=0x5b, .x=0x14, .y=0xc8, .sp=0xef, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xfbb1, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfbb1, .value=0xfc, .type=IO_READ},
        {.addr=0xfbb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x4a9c, .a=0x97, .x=0xc0, .y=0x1b, .sp=0x18, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4a9d, .a=0x97, .x=0xc0, .y=0x1c, .sp=0x18, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4a9c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4a9c, .value=0xfc, .type=IO_READ},
        {.addr=0x4a9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xab96, .a=0xc1, .x=0x1f, .y=0x6b, .sp=0x5f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xab96, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xab97, .a=0xc1, .x=0x1f, .y=0x6c, .sp=0x5f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xab96, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xab96, .value=0xfc, .type=IO_READ},
        {.addr=0xab97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x42fe, .a=0xa6, .x=0xe1, .y=0x6a, .sp=0x3f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x42fe, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x42ff, .a=0xa6, .x=0xe1, .y=0x6b, .sp=0x3f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x42fe, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x42fe, .value=0xfc, .type=IO_READ},
        {.addr=0x42ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x257c, .a=0x1b, .x=0xdd, .y=0x84, .sp=0x67, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x257c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x257d, .a=0x1b, .x=0xdd, .y=0x85, .sp=0x67, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x257c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x257c, .value=0xfc, .type=IO_READ},
        {.addr=0x257d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x76b8, .a=0x27, .x=0xdf, .y=0x10, .sp=0x70, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x76b8, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x76b9, .a=0x27, .x=0xdf, .y=0x11, .sp=0x70, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x76b8, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x76b8, .value=0xfc, .type=IO_READ},
        {.addr=0x76b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xbe51, .a=0xaa, .x=0x0c, .y=0xc1, .sp=0x3f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe51, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbe52, .a=0xaa, .x=0x0c, .y=0xc2, .sp=0x3f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xbe51, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbe51, .value=0xfc, .type=IO_READ},
        {.addr=0xbe52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x9baf, .a=0xd0, .x=0xae, .y=0xe0, .sp=0x6f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9baf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9bb0, .a=0xd0, .x=0xae, .y=0xe1, .sp=0x6f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9baf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9baf, .value=0xfc, .type=IO_READ},
        {.addr=0x9bb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb2d4, .a=0x89, .x=0xb6, .y=0x5a, .sp=0x68, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb2d5, .a=0x89, .x=0xb6, .y=0x5b, .sp=0x68, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb2d4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb2d4, .value=0xfc, .type=IO_READ},
        {.addr=0xb2d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6e3b, .a=0xb9, .x=0xaf, .y=0x2d, .sp=0xff, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6e3b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6e3c, .a=0xb9, .x=0xaf, .y=0x2e, .sp=0xff, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6e3b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6e3b, .value=0xfc, .type=IO_READ},
        {.addr=0x6e3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8770, .a=0xe7, .x=0x3a, .y=0xbb, .sp=0xbd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8770, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8771, .a=0xe7, .x=0x3a, .y=0xbc, .sp=0xbd, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8770, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8770, .value=0xfc, .type=IO_READ},
        {.addr=0x8771, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb577, .a=0x27, .x=0x96, .y=0xd1, .sp=0xbc, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xb577, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xb578, .a=0x27, .x=0x96, .y=0xd2, .sp=0xbc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xb577, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xb577, .value=0xfc, .type=IO_READ},
        {.addr=0xb578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FC, _FC_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x5296, .a=0xe9, .x=0xb9, .y=0x34, .sp=0xb9, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5296, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5297, .a=0xe9, .x=0xb9, .y=0x35, .sp=0xb9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5296, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5296, .value=0xfc, .type=IO_READ},
        {.addr=0x5297, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FC 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
