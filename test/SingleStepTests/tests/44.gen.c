#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_44, _44_0000) {
    const struct CPU_State initial_cpu = {.pc=0x5b30, .a=0x55, .x=0x99, .y=0xe1, .sp=0x5f, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xac}, {.addr=0x5b30, .value=0x44}, {.addr=0x5b31, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x5b32, .a=0xf9, .x=0x99, .y=0xe1, .sp=0x5f, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xac}, {.addr=0x5b30, .value=0x44}, {.addr=0x5b31, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b30, .value=0x44, .type=IO_READ},
        {.addr=0x5b31, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0001) {
    const struct CPU_State initial_cpu = {.pc=0x3998, .a=0xe0, .x=0xb3, .y=0x08, .sp=0xce, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x5b}, {.addr=0x3998, .value=0x44}, {.addr=0x3999, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x399a, .a=0xbb, .x=0xb3, .y=0x08, .sp=0xce, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x5b}, {.addr=0x3998, .value=0x44}, {.addr=0x3999, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x3998, .value=0x44, .type=IO_READ},
        {.addr=0x3999, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0002) {
    const struct CPU_State initial_cpu = {.pc=0xdb5e, .a=0xa6, .x=0xb9, .y=0xab, .sp=0xaa, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x7e}, {.addr=0xdb5e, .value=0x44}, {.addr=0xdb5f, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xdb60, .a=0xd8, .x=0xb9, .y=0xab, .sp=0xaa, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x7e}, {.addr=0xdb5e, .value=0x44}, {.addr=0xdb5f, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb5e, .value=0x44, .type=IO_READ},
        {.addr=0xdb5f, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0003) {
    const struct CPU_State initial_cpu = {.pc=0x2328, .a=0xfa, .x=0x1f, .y=0x97, .sp=0x18, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x6c}, {.addr=0x2328, .value=0x44}, {.addr=0x2329, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x232a, .a=0x96, .x=0x1f, .y=0x97, .sp=0x18, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x6c}, {.addr=0x2328, .value=0x44}, {.addr=0x2329, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2328, .value=0x44, .type=IO_READ},
        {.addr=0x2329, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0005) {
    const struct CPU_State initial_cpu = {.pc=0x145d, .a=0x58, .x=0x97, .y=0x7b, .sp=0x7a, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xd3}, {.addr=0x145d, .value=0x44}, {.addr=0x145e, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x145f, .a=0x8b, .x=0x97, .y=0x7b, .sp=0x7a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xd3}, {.addr=0x145d, .value=0x44}, {.addr=0x145e, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x145d, .value=0x44, .type=IO_READ},
        {.addr=0x145e, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0006) {
    const struct CPU_State initial_cpu = {.pc=0xbb82, .a=0xa9, .x=0x9b, .y=0xb5, .sp=0x82, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xa2}, {.addr=0xbb82, .value=0x44}, {.addr=0xbb83, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xbb84, .a=0x0b, .x=0x9b, .y=0xb5, .sp=0x82, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xa2}, {.addr=0xbb82, .value=0x44}, {.addr=0xbb83, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb82, .value=0x44, .type=IO_READ},
        {.addr=0xbb83, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7ec4, .a=0x04, .x=0x80, .y=0x63, .sp=0xa2, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xbf}, {.addr=0x7ec4, .value=0x44}, {.addr=0x7ec5, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x7ec6, .a=0xbb, .x=0x80, .y=0x63, .sp=0xa2, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xbf}, {.addr=0x7ec4, .value=0x44}, {.addr=0x7ec5, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ec4, .value=0x44, .type=IO_READ},
        {.addr=0x7ec5, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0008) {
    const struct CPU_State initial_cpu = {.pc=0xddb2, .a=0x87, .x=0xbb, .y=0x44, .sp=0x05, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xf0}, {.addr=0xddb2, .value=0x44}, {.addr=0xddb3, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xddb4, .a=0x77, .x=0xbb, .y=0x44, .sp=0x05, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xf0}, {.addr=0xddb2, .value=0x44}, {.addr=0xddb3, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xddb2, .value=0x44, .type=IO_READ},
        {.addr=0xddb3, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0009) {
    const struct CPU_State initial_cpu = {.pc=0xba6f, .a=0x2e, .x=0x63, .y=0x7b, .sp=0xc4, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x3e}, {.addr=0xba6f, .value=0x44}, {.addr=0xba70, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xba71, .a=0x10, .x=0x63, .y=0x7b, .sp=0xc4, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x3e}, {.addr=0xba6f, .value=0x44}, {.addr=0xba70, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xba6f, .value=0x44, .type=IO_READ},
        {.addr=0xba70, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_000A) {
    const struct CPU_State initial_cpu = {.pc=0x15e4, .a=0xe2, .x=0xc4, .y=0x35, .sp=0xb7, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x06}, {.addr=0x15e4, .value=0x44}, {.addr=0x15e5, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x15e6, .a=0xe4, .x=0xc4, .y=0x35, .sp=0xb7, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x06}, {.addr=0x15e4, .value=0x44}, {.addr=0x15e5, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x15e4, .value=0x44, .type=IO_READ},
        {.addr=0x15e5, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_000B) {
    const struct CPU_State initial_cpu = {.pc=0xfaef, .a=0xa0, .x=0x5c, .y=0x5d, .sp=0xc1, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0xfb}, {.addr=0xfaef, .value=0x44}, {.addr=0xfaf0, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xfaf1, .a=0x5b, .x=0x5c, .y=0x5d, .sp=0xc1, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0xfb}, {.addr=0xfaef, .value=0x44}, {.addr=0xfaf0, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaef, .value=0x44, .type=IO_READ},
        {.addr=0xfaf0, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_000C) {
    const struct CPU_State initial_cpu = {.pc=0x6df2, .a=0x52, .x=0xd5, .y=0x91, .sp=0x33, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xbf}, {.addr=0x6df2, .value=0x44}, {.addr=0x6df3, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x6df4, .a=0xed, .x=0xd5, .y=0x91, .sp=0x33, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xbf}, {.addr=0x6df2, .value=0x44}, {.addr=0x6df3, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x6df2, .value=0x44, .type=IO_READ},
        {.addr=0x6df3, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_000E) {
    const struct CPU_State initial_cpu = {.pc=0x0b70, .a=0x29, .x=0xb2, .y=0xcf, .sp=0xa5, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0xa5}, {.addr=0x0b70, .value=0x44}, {.addr=0x0b71, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x0b72, .a=0x8c, .x=0xb2, .y=0xcf, .sp=0xa5, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0xa5}, {.addr=0x0b70, .value=0x44}, {.addr=0x0b71, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b70, .value=0x44, .type=IO_READ},
        {.addr=0x0b71, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6c92, .a=0xb4, .x=0xad, .y=0x01, .sp=0x4f, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x31}, {.addr=0x6c92, .value=0x44}, {.addr=0x6c93, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x6c94, .a=0x85, .x=0xad, .y=0x01, .sp=0x4f, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x31}, {.addr=0x6c92, .value=0x44}, {.addr=0x6c93, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c92, .value=0x44, .type=IO_READ},
        {.addr=0x6c93, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9911, .a=0xae, .x=0xea, .y=0x6c, .sp=0x01, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x9e}, {.addr=0x9911, .value=0x44}, {.addr=0x9912, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9913, .a=0x30, .x=0xea, .y=0x6c, .sp=0x01, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x9e}, {.addr=0x9911, .value=0x44}, {.addr=0x9912, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9911, .value=0x44, .type=IO_READ},
        {.addr=0x9912, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0011) {
    const struct CPU_State initial_cpu = {.pc=0xb5d9, .a=0x04, .x=0xaf, .y=0xe2, .sp=0xb0, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x54}, {.addr=0xb5d9, .value=0x44}, {.addr=0xb5da, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xb5db, .a=0x50, .x=0xaf, .y=0xe2, .sp=0xb0, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x54}, {.addr=0xb5d9, .value=0x44}, {.addr=0xb5da, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d9, .value=0x44, .type=IO_READ},
        {.addr=0xb5da, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0012) {
    const struct CPU_State initial_cpu = {.pc=0xca0d, .a=0x4a, .x=0xd6, .y=0xb6, .sp=0xaf, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x5c}, {.addr=0xca0d, .value=0x44}, {.addr=0xca0e, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xca0f, .a=0x16, .x=0xd6, .y=0xb6, .sp=0xaf, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x5c}, {.addr=0xca0d, .value=0x44}, {.addr=0xca0e, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xca0d, .value=0x44, .type=IO_READ},
        {.addr=0xca0e, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0013) {
    const struct CPU_State initial_cpu = {.pc=0x9ad6, .a=0xe8, .x=0xfb, .y=0xcc, .sp=0x8b, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0xee}, {.addr=0x9ad6, .value=0x44}, {.addr=0x9ad7, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x9ad8, .a=0x06, .x=0xfb, .y=0xcc, .sp=0x8b, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0xee}, {.addr=0x9ad6, .value=0x44}, {.addr=0x9ad7, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ad6, .value=0x44, .type=IO_READ},
        {.addr=0x9ad7, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0014) {
    const struct CPU_State initial_cpu = {.pc=0x0224, .a=0xa9, .x=0xe2, .y=0x92, .sp=0x47, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xe3}, {.addr=0x0224, .value=0x44}, {.addr=0x0225, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x0226, .a=0x4a, .x=0xe2, .y=0x92, .sp=0x47, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xe3}, {.addr=0x0224, .value=0x44}, {.addr=0x0225, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x0224, .value=0x44, .type=IO_READ},
        {.addr=0x0225, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0015) {
    const struct CPU_State initial_cpu = {.pc=0x3c3a, .a=0x8f, .x=0x15, .y=0x1c, .sp=0xee, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xab}, {.addr=0x3c3a, .value=0x44}, {.addr=0x3c3b, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x3c3c, .a=0x24, .x=0x15, .y=0x1c, .sp=0xee, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xab}, {.addr=0x3c3a, .value=0x44}, {.addr=0x3c3b, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c3a, .value=0x44, .type=IO_READ},
        {.addr=0x3c3b, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0017) {
    const struct CPU_State initial_cpu = {.pc=0x31df, .a=0x74, .x=0xe1, .y=0x39, .sp=0xcc, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x11}, {.addr=0x31df, .value=0x44}, {.addr=0x31e0, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x31e1, .a=0x65, .x=0xe1, .y=0x39, .sp=0xcc, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x11}, {.addr=0x31df, .value=0x44}, {.addr=0x31e0, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x31df, .value=0x44, .type=IO_READ},
        {.addr=0x31e0, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0018) {
    const struct CPU_State initial_cpu = {.pc=0x27b6, .a=0x3f, .x=0x7f, .y=0xbc, .sp=0x80, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xe0}, {.addr=0x27b6, .value=0x44}, {.addr=0x27b7, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x27b8, .a=0xdf, .x=0x7f, .y=0xbc, .sp=0x80, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xe0}, {.addr=0x27b6, .value=0x44}, {.addr=0x27b7, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x27b6, .value=0x44, .type=IO_READ},
        {.addr=0x27b7, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0019) {
    const struct CPU_State initial_cpu = {.pc=0x9270, .a=0x4d, .x=0x94, .y=0x0c, .sp=0x61, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xbc}, {.addr=0x9270, .value=0x44}, {.addr=0x9271, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x9272, .a=0xf1, .x=0x94, .y=0x0c, .sp=0x61, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xbc}, {.addr=0x9270, .value=0x44}, {.addr=0x9271, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9270, .value=0x44, .type=IO_READ},
        {.addr=0x9271, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001A) {
    const struct CPU_State initial_cpu = {.pc=0x29bd, .a=0xe9, .x=0x19, .y=0x00, .sp=0xb4, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xbf}, {.addr=0x29bd, .value=0x44}, {.addr=0x29be, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x29bf, .a=0x56, .x=0x19, .y=0x00, .sp=0xb4, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xbf}, {.addr=0x29bd, .value=0x44}, {.addr=0x29be, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x29bd, .value=0x44, .type=IO_READ},
        {.addr=0x29be, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001B) {
    const struct CPU_State initial_cpu = {.pc=0xfd7d, .a=0x29, .x=0x41, .y=0x02, .sp=0x02, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x81}, {.addr=0xfd7d, .value=0x44}, {.addr=0xfd7e, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xfd7f, .a=0xa8, .x=0x41, .y=0x02, .sp=0x02, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x81}, {.addr=0xfd7d, .value=0x44}, {.addr=0xfd7e, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd7d, .value=0x44, .type=IO_READ},
        {.addr=0xfd7e, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001C) {
    const struct CPU_State initial_cpu = {.pc=0xbca8, .a=0x3c, .x=0x79, .y=0xa8, .sp=0x2a, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x55}, {.addr=0xbca8, .value=0x44}, {.addr=0xbca9, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xbcaa, .a=0x69, .x=0x79, .y=0xa8, .sp=0x2a, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x55}, {.addr=0xbca8, .value=0x44}, {.addr=0xbca9, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xbca8, .value=0x44, .type=IO_READ},
        {.addr=0xbca9, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4446, .a=0xca, .x=0x1e, .y=0x20, .sp=0xd4, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x83}, {.addr=0x4446, .value=0x44}, {.addr=0x4447, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x4448, .a=0x49, .x=0x1e, .y=0x20, .sp=0xd4, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x83}, {.addr=0x4446, .value=0x44}, {.addr=0x4447, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x4446, .value=0x44, .type=IO_READ},
        {.addr=0x4447, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001E) {
    const struct CPU_State initial_cpu = {.pc=0xc370, .a=0x5d, .x=0xcc, .y=0x08, .sp=0x7b, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xd8}, {.addr=0xc370, .value=0x44}, {.addr=0xc371, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xc372, .a=0x85, .x=0xcc, .y=0x08, .sp=0x7b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xd8}, {.addr=0xc370, .value=0x44}, {.addr=0xc371, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xc370, .value=0x44, .type=IO_READ},
        {.addr=0xc371, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_001F) {
    const struct CPU_State initial_cpu = {.pc=0x601e, .a=0x7c, .x=0x36, .y=0x40, .sp=0x65, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x68}, {.addr=0x601e, .value=0x44}, {.addr=0x601f, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x6020, .a=0x14, .x=0x36, .y=0x40, .sp=0x65, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x68}, {.addr=0x601e, .value=0x44}, {.addr=0x601f, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x601e, .value=0x44, .type=IO_READ},
        {.addr=0x601f, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0020) {
    const struct CPU_State initial_cpu = {.pc=0x55f4, .a=0xda, .x=0x0e, .y=0x66, .sp=0x75, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xf5}, {.addr=0x55f4, .value=0x44}, {.addr=0x55f5, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x55f6, .a=0x2f, .x=0x0e, .y=0x66, .sp=0x75, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xf5}, {.addr=0x55f4, .value=0x44}, {.addr=0x55f5, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x55f4, .value=0x44, .type=IO_READ},
        {.addr=0x55f5, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0021) {
    const struct CPU_State initial_cpu = {.pc=0x462e, .a=0x34, .x=0xf9, .y=0xe9, .sp=0x69, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xfb}, {.addr=0x462e, .value=0x44}, {.addr=0x462f, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x4630, .a=0xcf, .x=0xf9, .y=0xe9, .sp=0x69, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xfb}, {.addr=0x462e, .value=0x44}, {.addr=0x462f, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x462e, .value=0x44, .type=IO_READ},
        {.addr=0x462f, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0022) {
    const struct CPU_State initial_cpu = {.pc=0x7174, .a=0xe4, .x=0x43, .y=0x2d, .sp=0x43, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x42}, {.addr=0x7174, .value=0x44}, {.addr=0x7175, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x7176, .a=0xa6, .x=0x43, .y=0x2d, .sp=0x43, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x42}, {.addr=0x7174, .value=0x44}, {.addr=0x7175, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x7174, .value=0x44, .type=IO_READ},
        {.addr=0x7175, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0023) {
    const struct CPU_State initial_cpu = {.pc=0x90d4, .a=0x67, .x=0x9b, .y=0x70, .sp=0x38, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x5d}, {.addr=0x90d4, .value=0x44}, {.addr=0x90d5, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x90d6, .a=0x3a, .x=0x9b, .y=0x70, .sp=0x38, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x5d}, {.addr=0x90d4, .value=0x44}, {.addr=0x90d5, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x90d4, .value=0x44, .type=IO_READ},
        {.addr=0x90d5, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0024) {
    const struct CPU_State initial_cpu = {.pc=0x05ef, .a=0xd2, .x=0x2c, .y=0x49, .sp=0x5f, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x43}, {.addr=0x05ef, .value=0x44}, {.addr=0x05f0, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x05f1, .a=0x91, .x=0x2c, .y=0x49, .sp=0x5f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x43}, {.addr=0x05ef, .value=0x44}, {.addr=0x05f0, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x05ef, .value=0x44, .type=IO_READ},
        {.addr=0x05f0, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd7c0, .a=0x65, .x=0x92, .y=0x2e, .sp=0x82, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x00}, {.addr=0xd7c0, .value=0x44}, {.addr=0xd7c1, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xd7c2, .a=0x65, .x=0x92, .y=0x2e, .sp=0x82, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x00}, {.addr=0xd7c0, .value=0x44}, {.addr=0xd7c1, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7c0, .value=0x44, .type=IO_READ},
        {.addr=0xd7c1, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0026) {
    const struct CPU_State initial_cpu = {.pc=0x97d7, .a=0xc7, .x=0x38, .y=0x62, .sp=0x59, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xfa}, {.addr=0x97d7, .value=0x44}, {.addr=0x97d8, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x97d9, .a=0x3d, .x=0x38, .y=0x62, .sp=0x59, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xfa}, {.addr=0x97d7, .value=0x44}, {.addr=0x97d8, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x97d7, .value=0x44, .type=IO_READ},
        {.addr=0x97d8, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5126, .a=0x2f, .x=0xf3, .y=0x52, .sp=0x41, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0xfa}, {.addr=0x5126, .value=0x44}, {.addr=0x5127, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x5128, .a=0xd5, .x=0xf3, .y=0x52, .sp=0x41, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0xfa}, {.addr=0x5126, .value=0x44}, {.addr=0x5127, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5126, .value=0x44, .type=IO_READ},
        {.addr=0x5127, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0028) {
    const struct CPU_State initial_cpu = {.pc=0x38db, .a=0xcd, .x=0xc9, .y=0x47, .sp=0x6d, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x6e}, {.addr=0x38db, .value=0x44}, {.addr=0x38dc, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x38dd, .a=0xa3, .x=0xc9, .y=0x47, .sp=0x6d, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x6e}, {.addr=0x38db, .value=0x44}, {.addr=0x38dc, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x38db, .value=0x44, .type=IO_READ},
        {.addr=0x38dc, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0029) {
    const struct CPU_State initial_cpu = {.pc=0x0303, .a=0xad, .x=0x2a, .y=0x84, .sp=0x1e, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x30}, {.addr=0x0303, .value=0x44}, {.addr=0x0304, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x0305, .a=0x9d, .x=0x2a, .y=0x84, .sp=0x1e, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x30}, {.addr=0x0303, .value=0x44}, {.addr=0x0304, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0303, .value=0x44, .type=IO_READ},
        {.addr=0x0304, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002A) {
    const struct CPU_State initial_cpu = {.pc=0x22fd, .a=0xd8, .x=0xb7, .y=0x6c, .sp=0xcf, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xb8}, {.addr=0x22fd, .value=0x44}, {.addr=0x22fe, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x22ff, .a=0x60, .x=0xb7, .y=0x6c, .sp=0xcf, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xb8}, {.addr=0x22fd, .value=0x44}, {.addr=0x22fe, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x22fd, .value=0x44, .type=IO_READ},
        {.addr=0x22fe, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1ed6, .a=0xe7, .x=0x0d, .y=0x2f, .sp=0x22, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xd3}, {.addr=0x1ed6, .value=0x44}, {.addr=0x1ed7, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x1ed8, .a=0x34, .x=0x0d, .y=0x2f, .sp=0x22, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xd3}, {.addr=0x1ed6, .value=0x44}, {.addr=0x1ed7, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ed6, .value=0x44, .type=IO_READ},
        {.addr=0x1ed7, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002C) {
    const struct CPU_State initial_cpu = {.pc=0xeb04, .a=0xa4, .x=0x72, .y=0xf2, .sp=0xae, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xad}, {.addr=0xeb04, .value=0x44}, {.addr=0xeb05, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xeb06, .a=0x09, .x=0x72, .y=0xf2, .sp=0xae, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xad}, {.addr=0xeb04, .value=0x44}, {.addr=0xeb05, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb04, .value=0x44, .type=IO_READ},
        {.addr=0xeb05, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002D) {
    const struct CPU_State initial_cpu = {.pc=0x00cc, .a=0xa7, .x=0xcb, .y=0x1c, .sp=0x25, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xf5}, {.addr=0x00cc, .value=0x44}, {.addr=0x00cd, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x00ce, .a=0x52, .x=0xcb, .y=0x1c, .sp=0x25, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xf5}, {.addr=0x00cc, .value=0x44}, {.addr=0x00cd, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x00cc, .value=0x44, .type=IO_READ},
        {.addr=0x00cd, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9c43, .a=0xd2, .x=0x64, .y=0x76, .sp=0x13, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xb6}, {.addr=0x9c43, .value=0x44}, {.addr=0x9c44, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x9c45, .a=0x64, .x=0x64, .y=0x76, .sp=0x13, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xb6}, {.addr=0x9c43, .value=0x44}, {.addr=0x9c44, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c43, .value=0x44, .type=IO_READ},
        {.addr=0x9c44, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_002F) {
    const struct CPU_State initial_cpu = {.pc=0x4ff2, .a=0x12, .x=0xb9, .y=0xca, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x6e}, {.addr=0x4ff2, .value=0x44}, {.addr=0x4ff3, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x4ff4, .a=0x7c, .x=0xb9, .y=0xca, .sp=0x1d, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x6e}, {.addr=0x4ff2, .value=0x44}, {.addr=0x4ff3, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ff2, .value=0x44, .type=IO_READ},
        {.addr=0x4ff3, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0030) {
    const struct CPU_State initial_cpu = {.pc=0x9b89, .a=0x4a, .x=0x4a, .y=0x53, .sp=0x66, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x2b}, {.addr=0x9b89, .value=0x44}, {.addr=0x9b8a, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x9b8b, .a=0x61, .x=0x4a, .y=0x53, .sp=0x66, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x2b}, {.addr=0x9b89, .value=0x44}, {.addr=0x9b8a, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b89, .value=0x44, .type=IO_READ},
        {.addr=0x9b8a, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0031) {
    const struct CPU_State initial_cpu = {.pc=0xec72, .a=0xcb, .x=0xdc, .y=0x4f, .sp=0xd6, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xb3}, {.addr=0xec72, .value=0x44}, {.addr=0xec73, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xec74, .a=0x78, .x=0xdc, .y=0x4f, .sp=0xd6, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xb3}, {.addr=0xec72, .value=0x44}, {.addr=0xec73, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xec72, .value=0x44, .type=IO_READ},
        {.addr=0xec73, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0032) {
    const struct CPU_State initial_cpu = {.pc=0x0b4c, .a=0xa2, .x=0x43, .y=0x77, .sp=0x5f, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x99}, {.addr=0x0b4c, .value=0x44}, {.addr=0x0b4d, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x0b4e, .a=0x3b, .x=0x43, .y=0x77, .sp=0x5f, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x99}, {.addr=0x0b4c, .value=0x44}, {.addr=0x0b4d, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b4c, .value=0x44, .type=IO_READ},
        {.addr=0x0b4d, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0033) {
    const struct CPU_State initial_cpu = {.pc=0x8a6f, .a=0x1e, .x=0x8b, .y=0x91, .sp=0x4c, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x3e}, {.addr=0x8a6f, .value=0x44}, {.addr=0x8a70, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x8a71, .a=0x20, .x=0x8b, .y=0x91, .sp=0x4c, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x3e}, {.addr=0x8a6f, .value=0x44}, {.addr=0x8a70, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a6f, .value=0x44, .type=IO_READ},
        {.addr=0x8a70, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0034) {
    const struct CPU_State initial_cpu = {.pc=0x8829, .a=0x9d, .x=0x2c, .y=0xff, .sp=0x2a, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0xae}, {.addr=0x8829, .value=0x44}, {.addr=0x882a, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x882b, .a=0x33, .x=0x2c, .y=0xff, .sp=0x2a, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0xae}, {.addr=0x8829, .value=0x44}, {.addr=0x882a, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8829, .value=0x44, .type=IO_READ},
        {.addr=0x882a, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0035) {
    const struct CPU_State initial_cpu = {.pc=0xd88d, .a=0x6d, .x=0x7e, .y=0x63, .sp=0x3d, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x15}, {.addr=0xd88d, .value=0x44}, {.addr=0xd88e, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xd88f, .a=0x78, .x=0x7e, .y=0x63, .sp=0x3d, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x15}, {.addr=0xd88d, .value=0x44}, {.addr=0xd88e, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd88d, .value=0x44, .type=IO_READ},
        {.addr=0xd88e, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0036) {
    const struct CPU_State initial_cpu = {.pc=0xb5ba, .a=0xef, .x=0x24, .y=0xf4, .sp=0xbc, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x2e}, {.addr=0xb5ba, .value=0x44}, {.addr=0xb5bb, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xb5bc, .a=0xc1, .x=0x24, .y=0xf4, .sp=0xbc, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x2e}, {.addr=0xb5ba, .value=0x44}, {.addr=0xb5bb, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5ba, .value=0x44, .type=IO_READ},
        {.addr=0xb5bb, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0037) {
    const struct CPU_State initial_cpu = {.pc=0xbc17, .a=0x5d, .x=0x8c, .y=0x5d, .sp=0xd0, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x58}, {.addr=0xbc17, .value=0x44}, {.addr=0xbc18, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xbc19, .a=0x05, .x=0x8c, .y=0x5d, .sp=0xd0, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x58}, {.addr=0xbc17, .value=0x44}, {.addr=0xbc18, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc17, .value=0x44, .type=IO_READ},
        {.addr=0xbc18, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0038) {
    const struct CPU_State initial_cpu = {.pc=0x60f2, .a=0x2f, .x=0xfe, .y=0xcf, .sp=0x44, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x41}, {.addr=0x60f2, .value=0x44}, {.addr=0x60f3, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x60f4, .a=0x6e, .x=0xfe, .y=0xcf, .sp=0x44, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x41}, {.addr=0x60f2, .value=0x44}, {.addr=0x60f3, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x60f2, .value=0x44, .type=IO_READ},
        {.addr=0x60f3, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0039) {
    const struct CPU_State initial_cpu = {.pc=0x07b0, .a=0xa9, .x=0x8c, .y=0xb2, .sp=0xbc, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x66}, {.addr=0x07b0, .value=0x44}, {.addr=0x07b1, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x07b2, .a=0xcf, .x=0x8c, .y=0xb2, .sp=0xbc, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x66}, {.addr=0x07b0, .value=0x44}, {.addr=0x07b1, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x07b0, .value=0x44, .type=IO_READ},
        {.addr=0x07b1, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2a02, .a=0x0f, .x=0x09, .y=0xfc, .sp=0x4f, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x4e}, {.addr=0x2a02, .value=0x44}, {.addr=0x2a03, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x2a04, .a=0x41, .x=0x09, .y=0xfc, .sp=0x4f, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x4e}, {.addr=0x2a02, .value=0x44}, {.addr=0x2a03, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a02, .value=0x44, .type=IO_READ},
        {.addr=0x2a03, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003B) {
    const struct CPU_State initial_cpu = {.pc=0xb2c9, .a=0x1b, .x=0xf8, .y=0xbf, .sp=0xc5, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x31}, {.addr=0xb2c9, .value=0x44}, {.addr=0xb2ca, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xb2cb, .a=0x2a, .x=0xf8, .y=0xbf, .sp=0xc5, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x31}, {.addr=0xb2c9, .value=0x44}, {.addr=0xb2ca, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2c9, .value=0x44, .type=IO_READ},
        {.addr=0xb2ca, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6007, .a=0x32, .x=0x34, .y=0x5b, .sp=0x9d, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xde}, {.addr=0x6007, .value=0x44}, {.addr=0x6008, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x6009, .a=0xec, .x=0x34, .y=0x5b, .sp=0x9d, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xde}, {.addr=0x6007, .value=0x44}, {.addr=0x6008, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x6007, .value=0x44, .type=IO_READ},
        {.addr=0x6008, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003D) {
    const struct CPU_State initial_cpu = {.pc=0xf784, .a=0x6d, .x=0xf5, .y=0xf5, .sp=0x97, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x77}, {.addr=0xf784, .value=0x44}, {.addr=0xf785, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xf786, .a=0x1a, .x=0xf5, .y=0xf5, .sp=0x97, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x77}, {.addr=0xf784, .value=0x44}, {.addr=0xf785, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf784, .value=0x44, .type=IO_READ},
        {.addr=0xf785, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003E) {
    const struct CPU_State initial_cpu = {.pc=0x6eee, .a=0x0f, .x=0x62, .y=0x66, .sp=0x17, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x14}, {.addr=0x6eee, .value=0x44}, {.addr=0x6eef, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x6ef0, .a=0x1b, .x=0x62, .y=0x66, .sp=0x17, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x14}, {.addr=0x6eee, .value=0x44}, {.addr=0x6eef, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6eee, .value=0x44, .type=IO_READ},
        {.addr=0x6eef, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_003F) {
    const struct CPU_State initial_cpu = {.pc=0x2cd7, .a=0x84, .x=0x42, .y=0x3d, .sp=0xe4, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x27}, {.addr=0x2cd7, .value=0x44}, {.addr=0x2cd8, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x2cd9, .a=0xa3, .x=0x42, .y=0x3d, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x27}, {.addr=0x2cd7, .value=0x44}, {.addr=0x2cd8, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cd7, .value=0x44, .type=IO_READ},
        {.addr=0x2cd8, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0040) {
    const struct CPU_State initial_cpu = {.pc=0x0538, .a=0xc3, .x=0x0e, .y=0x2b, .sp=0x80, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x59}, {.addr=0x0538, .value=0x44}, {.addr=0x0539, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x053a, .a=0x9a, .x=0x0e, .y=0x2b, .sp=0x80, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x59}, {.addr=0x0538, .value=0x44}, {.addr=0x0539, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0538, .value=0x44, .type=IO_READ},
        {.addr=0x0539, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0041) {
    const struct CPU_State initial_cpu = {.pc=0x82d9, .a=0x52, .x=0xc2, .y=0xf2, .sp=0x04, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x41}, {.addr=0x82d9, .value=0x44}, {.addr=0x82da, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x82db, .a=0x13, .x=0xc2, .y=0xf2, .sp=0x04, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x41}, {.addr=0x82d9, .value=0x44}, {.addr=0x82da, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x82d9, .value=0x44, .type=IO_READ},
        {.addr=0x82da, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0042) {
    const struct CPU_State initial_cpu = {.pc=0x5a8f, .a=0xf2, .x=0xe8, .y=0xc8, .sp=0xf2, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x5f}, {.addr=0x5a8f, .value=0x44}, {.addr=0x5a90, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x5a91, .a=0xad, .x=0xe8, .y=0xc8, .sp=0xf2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x5f}, {.addr=0x5a8f, .value=0x44}, {.addr=0x5a90, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a8f, .value=0x44, .type=IO_READ},
        {.addr=0x5a90, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0043) {
    const struct CPU_State initial_cpu = {.pc=0xebdf, .a=0x83, .x=0x6c, .y=0xc0, .sp=0xda, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x87}, {.addr=0xebdf, .value=0x44}, {.addr=0xebe0, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xebe1, .a=0x04, .x=0x6c, .y=0xc0, .sp=0xda, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x87}, {.addr=0xebdf, .value=0x44}, {.addr=0xebe0, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xebdf, .value=0x44, .type=IO_READ},
        {.addr=0xebe0, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0044) {
    const struct CPU_State initial_cpu = {.pc=0x9756, .a=0x30, .x=0x4c, .y=0xa5, .sp=0xe8, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x15}, {.addr=0x9756, .value=0x44}, {.addr=0x9757, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x9758, .a=0x25, .x=0x4c, .y=0xa5, .sp=0xe8, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x15}, {.addr=0x9756, .value=0x44}, {.addr=0x9757, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x9756, .value=0x44, .type=IO_READ},
        {.addr=0x9757, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0045) {
    const struct CPU_State initial_cpu = {.pc=0x563d, .a=0xbd, .x=0xed, .y=0xae, .sp=0xba, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0xb6}, {.addr=0x563d, .value=0x44}, {.addr=0x563e, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x563f, .a=0x0b, .x=0xed, .y=0xae, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0xb6}, {.addr=0x563d, .value=0x44}, {.addr=0x563e, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x563d, .value=0x44, .type=IO_READ},
        {.addr=0x563e, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0046) {
    const struct CPU_State initial_cpu = {.pc=0xbb57, .a=0xec, .x=0x61, .y=0x23, .sp=0xf6, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x22}, {.addr=0xbb57, .value=0x44}, {.addr=0xbb58, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xbb59, .a=0xce, .x=0x61, .y=0x23, .sp=0xf6, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x22}, {.addr=0xbb57, .value=0x44}, {.addr=0xbb58, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb57, .value=0x44, .type=IO_READ},
        {.addr=0xbb58, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0047) {
    const struct CPU_State initial_cpu = {.pc=0xfd6c, .a=0x22, .x=0xa9, .y=0x21, .sp=0x34, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x9c}, {.addr=0xfd6c, .value=0x44}, {.addr=0xfd6d, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xfd6e, .a=0xbe, .x=0xa9, .y=0x21, .sp=0x34, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x9c}, {.addr=0xfd6c, .value=0x44}, {.addr=0xfd6d, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd6c, .value=0x44, .type=IO_READ},
        {.addr=0xfd6d, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0048) {
    const struct CPU_State initial_cpu = {.pc=0x8fdf, .a=0x9e, .x=0x99, .y=0x2e, .sp=0x1a, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x49}, {.addr=0x8fdf, .value=0x44}, {.addr=0x8fe0, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x8fe1, .a=0xd7, .x=0x99, .y=0x2e, .sp=0x1a, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x49}, {.addr=0x8fdf, .value=0x44}, {.addr=0x8fe0, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fdf, .value=0x44, .type=IO_READ},
        {.addr=0x8fe0, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0049) {
    const struct CPU_State initial_cpu = {.pc=0xf1ed, .a=0x64, .x=0xab, .y=0x86, .sp=0xff, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x61}, {.addr=0xf1ed, .value=0x44}, {.addr=0xf1ee, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xf1ef, .a=0x05, .x=0xab, .y=0x86, .sp=0xff, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x61}, {.addr=0xf1ed, .value=0x44}, {.addr=0xf1ee, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1ed, .value=0x44, .type=IO_READ},
        {.addr=0xf1ee, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004A) {
    const struct CPU_State initial_cpu = {.pc=0xe3d3, .a=0xec, .x=0x62, .y=0xe9, .sp=0xb3, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xd8}, {.addr=0xe3d3, .value=0x44}, {.addr=0xe3d4, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xe3d5, .a=0x34, .x=0x62, .y=0xe9, .sp=0xb3, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xd8}, {.addr=0xe3d3, .value=0x44}, {.addr=0xe3d4, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3d3, .value=0x44, .type=IO_READ},
        {.addr=0xe3d4, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004B) {
    const struct CPU_State initial_cpu = {.pc=0x82a3, .a=0x79, .x=0x41, .y=0x73, .sp=0x3c, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xef}, {.addr=0x82a3, .value=0x44}, {.addr=0x82a4, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x82a5, .a=0x96, .x=0x41, .y=0x73, .sp=0x3c, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xef}, {.addr=0x82a3, .value=0x44}, {.addr=0x82a4, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x82a3, .value=0x44, .type=IO_READ},
        {.addr=0x82a4, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004C) {
    const struct CPU_State initial_cpu = {.pc=0x1427, .a=0xbe, .x=0x88, .y=0x7a, .sp=0x30, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x2b}, {.addr=0x1427, .value=0x44}, {.addr=0x1428, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x1429, .a=0x95, .x=0x88, .y=0x7a, .sp=0x30, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x2b}, {.addr=0x1427, .value=0x44}, {.addr=0x1428, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1427, .value=0x44, .type=IO_READ},
        {.addr=0x1428, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004D) {
    const struct CPU_State initial_cpu = {.pc=0x03fb, .a=0x8f, .x=0x4b, .y=0xf3, .sp=0xc5, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xa6}, {.addr=0x03fb, .value=0x44}, {.addr=0x03fc, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x03fd, .a=0x29, .x=0x4b, .y=0xf3, .sp=0xc5, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xa6}, {.addr=0x03fb, .value=0x44}, {.addr=0x03fc, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x03fb, .value=0x44, .type=IO_READ},
        {.addr=0x03fc, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004E) {
    const struct CPU_State initial_cpu = {.pc=0x9c09, .a=0xcb, .x=0x2a, .y=0x11, .sp=0x29, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xf7}, {.addr=0x9c09, .value=0x44}, {.addr=0x9c0a, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x9c0b, .a=0x3c, .x=0x2a, .y=0x11, .sp=0x29, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xf7}, {.addr=0x9c09, .value=0x44}, {.addr=0x9c0a, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c09, .value=0x44, .type=IO_READ},
        {.addr=0x9c0a, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_004F) {
    const struct CPU_State initial_cpu = {.pc=0x9514, .a=0xee, .x=0xe2, .y=0xa3, .sp=0x25, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xd9}, {.addr=0x9514, .value=0x44}, {.addr=0x9515, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x9516, .a=0x37, .x=0xe2, .y=0xa3, .sp=0x25, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xd9}, {.addr=0x9514, .value=0x44}, {.addr=0x9515, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9514, .value=0x44, .type=IO_READ},
        {.addr=0x9515, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0050) {
    const struct CPU_State initial_cpu = {.pc=0x9fe8, .a=0x7e, .x=0x7e, .y=0xf9, .sp=0xe5, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x52}, {.addr=0x9fe8, .value=0x44}, {.addr=0x9fe9, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x9fea, .a=0x2c, .x=0x7e, .y=0xf9, .sp=0xe5, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x52}, {.addr=0x9fe8, .value=0x44}, {.addr=0x9fe9, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fe8, .value=0x44, .type=IO_READ},
        {.addr=0x9fe9, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0051) {
    const struct CPU_State initial_cpu = {.pc=0x47d5, .a=0x7e, .x=0xa9, .y=0x66, .sp=0xcc, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xa2}, {.addr=0x47d5, .value=0x44}, {.addr=0x47d6, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x47d7, .a=0xdc, .x=0xa9, .y=0x66, .sp=0xcc, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xa2}, {.addr=0x47d5, .value=0x44}, {.addr=0x47d6, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x47d5, .value=0x44, .type=IO_READ},
        {.addr=0x47d6, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0052) {
    const struct CPU_State initial_cpu = {.pc=0x8ef5, .a=0xfe, .x=0x88, .y=0xf2, .sp=0xad, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xc1}, {.addr=0x8ef5, .value=0x44}, {.addr=0x8ef6, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x8ef7, .a=0x3f, .x=0x88, .y=0xf2, .sp=0xad, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xc1}, {.addr=0x8ef5, .value=0x44}, {.addr=0x8ef6, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ef5, .value=0x44, .type=IO_READ},
        {.addr=0x8ef6, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0053) {
    const struct CPU_State initial_cpu = {.pc=0x7f6d, .a=0x6b, .x=0x4f, .y=0xe5, .sp=0xdd, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xeb}, {.addr=0x7f6d, .value=0x44}, {.addr=0x7f6e, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x7f6f, .a=0x80, .x=0x4f, .y=0xe5, .sp=0xdd, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xeb}, {.addr=0x7f6d, .value=0x44}, {.addr=0x7f6e, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f6d, .value=0x44, .type=IO_READ},
        {.addr=0x7f6e, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0054) {
    const struct CPU_State initial_cpu = {.pc=0x6fa8, .a=0x3b, .x=0x51, .y=0x7e, .sp=0x71, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xc1}, {.addr=0x6fa8, .value=0x44}, {.addr=0x6fa9, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x6faa, .a=0xfa, .x=0x51, .y=0x7e, .sp=0x71, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xc1}, {.addr=0x6fa8, .value=0x44}, {.addr=0x6fa9, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fa8, .value=0x44, .type=IO_READ},
        {.addr=0x6fa9, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0055) {
    const struct CPU_State initial_cpu = {.pc=0x3890, .a=0x23, .x=0xc3, .y=0x7b, .sp=0x4f, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xf1}, {.addr=0x3890, .value=0x44}, {.addr=0x3891, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x3892, .a=0xd2, .x=0xc3, .y=0x7b, .sp=0x4f, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xf1}, {.addr=0x3890, .value=0x44}, {.addr=0x3891, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3890, .value=0x44, .type=IO_READ},
        {.addr=0x3891, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6a12, .a=0x80, .x=0xf1, .y=0x8b, .sp=0xc9, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0xf8}, {.addr=0x6a12, .value=0x44}, {.addr=0x6a13, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x6a14, .a=0x78, .x=0xf1, .y=0x8b, .sp=0xc9, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0xf8}, {.addr=0x6a12, .value=0x44}, {.addr=0x6a13, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a12, .value=0x44, .type=IO_READ},
        {.addr=0x6a13, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0057) {
    const struct CPU_State initial_cpu = {.pc=0x4fa7, .a=0x7d, .x=0xf3, .y=0x13, .sp=0xc4, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xcf}, {.addr=0x4fa7, .value=0x44}, {.addr=0x4fa8, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x4fa9, .a=0xb2, .x=0xf3, .y=0x13, .sp=0xc4, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xcf}, {.addr=0x4fa7, .value=0x44}, {.addr=0x4fa8, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fa7, .value=0x44, .type=IO_READ},
        {.addr=0x4fa8, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0058) {
    const struct CPU_State initial_cpu = {.pc=0x8d95, .a=0x84, .x=0xa3, .y=0xca, .sp=0x43, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x00}, {.addr=0x8d95, .value=0x44}, {.addr=0x8d96, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x8d97, .a=0x84, .x=0xa3, .y=0xca, .sp=0x43, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x00}, {.addr=0x8d95, .value=0x44}, {.addr=0x8d96, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d95, .value=0x44, .type=IO_READ},
        {.addr=0x8d96, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0059) {
    const struct CPU_State initial_cpu = {.pc=0xa319, .a=0x7b, .x=0x65, .y=0x6e, .sp=0x85, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x34}, {.addr=0xa319, .value=0x44}, {.addr=0xa31a, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xa31b, .a=0x4f, .x=0x65, .y=0x6e, .sp=0x85, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x34}, {.addr=0xa319, .value=0x44}, {.addr=0xa31a, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa319, .value=0x44, .type=IO_READ},
        {.addr=0xa31a, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005A) {
    const struct CPU_State initial_cpu = {.pc=0x2aac, .a=0x0b, .x=0x3c, .y=0x62, .sp=0x3d, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x2b}, {.addr=0x2aac, .value=0x44}, {.addr=0x2aad, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x2aae, .a=0x20, .x=0x3c, .y=0x62, .sp=0x3d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x2b}, {.addr=0x2aac, .value=0x44}, {.addr=0x2aad, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2aac, .value=0x44, .type=IO_READ},
        {.addr=0x2aad, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005B) {
    const struct CPU_State initial_cpu = {.pc=0x173b, .a=0x23, .x=0x46, .y=0x63, .sp=0xeb, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x5d}, {.addr=0x173b, .value=0x44}, {.addr=0x173c, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x173d, .a=0x7e, .x=0x46, .y=0x63, .sp=0xeb, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x5d}, {.addr=0x173b, .value=0x44}, {.addr=0x173c, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x173b, .value=0x44, .type=IO_READ},
        {.addr=0x173c, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005C) {
    const struct CPU_State initial_cpu = {.pc=0x53e2, .a=0xfa, .x=0xdb, .y=0x55, .sp=0x15, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x9a}, {.addr=0x53e2, .value=0x44}, {.addr=0x53e3, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x53e4, .a=0x60, .x=0xdb, .y=0x55, .sp=0x15, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x9a}, {.addr=0x53e2, .value=0x44}, {.addr=0x53e3, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x53e2, .value=0x44, .type=IO_READ},
        {.addr=0x53e3, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005D) {
    const struct CPU_State initial_cpu = {.pc=0x2389, .a=0xbd, .x=0xec, .y=0x95, .sp=0x10, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x67}, {.addr=0x2389, .value=0x44}, {.addr=0x238a, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x238b, .a=0xda, .x=0xec, .y=0x95, .sp=0x10, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x67}, {.addr=0x2389, .value=0x44}, {.addr=0x238a, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2389, .value=0x44, .type=IO_READ},
        {.addr=0x238a, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005E) {
    const struct CPU_State initial_cpu = {.pc=0xce35, .a=0xbd, .x=0x5c, .y=0xb4, .sp=0x6f, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xa0}, {.addr=0xce35, .value=0x44}, {.addr=0xce36, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xce37, .a=0x1d, .x=0x5c, .y=0xb4, .sp=0x6f, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xa0}, {.addr=0xce35, .value=0x44}, {.addr=0xce36, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xce35, .value=0x44, .type=IO_READ},
        {.addr=0xce36, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_005F) {
    const struct CPU_State initial_cpu = {.pc=0xfc3d, .a=0xf0, .x=0x87, .y=0x15, .sp=0x56, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x21}, {.addr=0xfc3d, .value=0x44}, {.addr=0xfc3e, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xfc3f, .a=0xd1, .x=0x87, .y=0x15, .sp=0x56, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x21}, {.addr=0xfc3d, .value=0x44}, {.addr=0xfc3e, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc3d, .value=0x44, .type=IO_READ},
        {.addr=0xfc3e, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0060) {
    const struct CPU_State initial_cpu = {.pc=0x352c, .a=0x55, .x=0x1b, .y=0x36, .sp=0xa8, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xcf}, {.addr=0x352c, .value=0x44}, {.addr=0x352d, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x352e, .a=0x9a, .x=0x1b, .y=0x36, .sp=0xa8, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xcf}, {.addr=0x352c, .value=0x44}, {.addr=0x352d, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x352c, .value=0x44, .type=IO_READ},
        {.addr=0x352d, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0061) {
    const struct CPU_State initial_cpu = {.pc=0x552a, .a=0xa1, .x=0x3a, .y=0x93, .sp=0x0f, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x47}, {.addr=0x552a, .value=0x44}, {.addr=0x552b, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x552c, .a=0xe6, .x=0x3a, .y=0x93, .sp=0x0f, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x47}, {.addr=0x552a, .value=0x44}, {.addr=0x552b, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x552a, .value=0x44, .type=IO_READ},
        {.addr=0x552b, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0062) {
    const struct CPU_State initial_cpu = {.pc=0x004c, .a=0x55, .x=0x4d, .y=0x0b, .sp=0x30, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x44}, {.addr=0x004d, .value=0x86}, {.addr=0x0086, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x004e, .a=0x9d, .x=0x4d, .y=0x0b, .sp=0x30, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x44}, {.addr=0x004d, .value=0x86}, {.addr=0x0086, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x004c, .value=0x44, .type=IO_READ},
        {.addr=0x004d, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0063) {
    const struct CPU_State initial_cpu = {.pc=0x4ef0, .a=0x31, .x=0xc7, .y=0x5f, .sp=0x37, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x8f}, {.addr=0x4ef0, .value=0x44}, {.addr=0x4ef1, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x4ef2, .a=0xbe, .x=0xc7, .y=0x5f, .sp=0x37, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x8f}, {.addr=0x4ef0, .value=0x44}, {.addr=0x4ef1, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ef0, .value=0x44, .type=IO_READ},
        {.addr=0x4ef1, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0064) {
    const struct CPU_State initial_cpu = {.pc=0x30f9, .a=0xdf, .x=0xc4, .y=0xb6, .sp=0x64, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0xa9}, {.addr=0x30f9, .value=0x44}, {.addr=0x30fa, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x30fb, .a=0x76, .x=0xc4, .y=0xb6, .sp=0x64, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0xa9}, {.addr=0x30f9, .value=0x44}, {.addr=0x30fa, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x30f9, .value=0x44, .type=IO_READ},
        {.addr=0x30fa, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0065) {
    const struct CPU_State initial_cpu = {.pc=0x39d1, .a=0xab, .x=0x13, .y=0x32, .sp=0x0b, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x89}, {.addr=0x39d1, .value=0x44}, {.addr=0x39d2, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x39d3, .a=0x22, .x=0x13, .y=0x32, .sp=0x0b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x89}, {.addr=0x39d1, .value=0x44}, {.addr=0x39d2, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x39d1, .value=0x44, .type=IO_READ},
        {.addr=0x39d2, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0066) {
    const struct CPU_State initial_cpu = {.pc=0x8085, .a=0x38, .x=0x11, .y=0xdc, .sp=0xb1, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x90}, {.addr=0x8085, .value=0x44}, {.addr=0x8086, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x8087, .a=0xa8, .x=0x11, .y=0xdc, .sp=0xb1, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x90}, {.addr=0x8085, .value=0x44}, {.addr=0x8086, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8085, .value=0x44, .type=IO_READ},
        {.addr=0x8086, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0067) {
    const struct CPU_State initial_cpu = {.pc=0x30f2, .a=0xe4, .x=0xca, .y=0x61, .sp=0x69, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x03}, {.addr=0x30f2, .value=0x44}, {.addr=0x30f3, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x30f4, .a=0xe7, .x=0xca, .y=0x61, .sp=0x69, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x03}, {.addr=0x30f2, .value=0x44}, {.addr=0x30f3, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x30f2, .value=0x44, .type=IO_READ},
        {.addr=0x30f3, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0068) {
    const struct CPU_State initial_cpu = {.pc=0x92a8, .a=0x51, .x=0x17, .y=0x1c, .sp=0x3a, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x43}, {.addr=0x92a8, .value=0x44}, {.addr=0x92a9, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x92aa, .a=0x12, .x=0x17, .y=0x1c, .sp=0x3a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x43}, {.addr=0x92a8, .value=0x44}, {.addr=0x92a9, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x92a8, .value=0x44, .type=IO_READ},
        {.addr=0x92a9, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0069) {
    const struct CPU_State initial_cpu = {.pc=0x26e9, .a=0x5e, .x=0x42, .y=0x5e, .sp=0xfc, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x49}, {.addr=0x26e9, .value=0x44}, {.addr=0x26ea, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x26eb, .a=0x17, .x=0x42, .y=0x5e, .sp=0xfc, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x49}, {.addr=0x26e9, .value=0x44}, {.addr=0x26ea, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x26e9, .value=0x44, .type=IO_READ},
        {.addr=0x26ea, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006A) {
    const struct CPU_State initial_cpu = {.pc=0x74b8, .a=0x16, .x=0x9e, .y=0xd3, .sp=0xc1, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x68}, {.addr=0x74b8, .value=0x44}, {.addr=0x74b9, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x74ba, .a=0x7e, .x=0x9e, .y=0xd3, .sp=0xc1, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x68}, {.addr=0x74b8, .value=0x44}, {.addr=0x74b9, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x74b8, .value=0x44, .type=IO_READ},
        {.addr=0x74b9, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006B) {
    const struct CPU_State initial_cpu = {.pc=0x9e56, .a=0x42, .x=0x48, .y=0x59, .sp=0x20, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xe8}, {.addr=0x9e56, .value=0x44}, {.addr=0x9e57, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x9e58, .a=0xaa, .x=0x48, .y=0x59, .sp=0x20, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xe8}, {.addr=0x9e56, .value=0x44}, {.addr=0x9e57, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e56, .value=0x44, .type=IO_READ},
        {.addr=0x9e57, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006C) {
    const struct CPU_State initial_cpu = {.pc=0x8648, .a=0x87, .x=0x46, .y=0xbc, .sp=0x09, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x56}, {.addr=0x8648, .value=0x44}, {.addr=0x8649, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x864a, .a=0xd1, .x=0x46, .y=0xbc, .sp=0x09, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x56}, {.addr=0x8648, .value=0x44}, {.addr=0x8649, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8648, .value=0x44, .type=IO_READ},
        {.addr=0x8649, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006D) {
    const struct CPU_State initial_cpu = {.pc=0x9b66, .a=0x77, .x=0xa6, .y=0xb8, .sp=0x46, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x58}, {.addr=0x9b66, .value=0x44}, {.addr=0x9b67, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x9b68, .a=0x2f, .x=0xa6, .y=0xb8, .sp=0x46, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x58}, {.addr=0x9b66, .value=0x44}, {.addr=0x9b67, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b66, .value=0x44, .type=IO_READ},
        {.addr=0x9b67, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006E) {
    const struct CPU_State initial_cpu = {.pc=0x52cd, .a=0x72, .x=0x19, .y=0xe3, .sp=0xff, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xc4}, {.addr=0x52cd, .value=0x44}, {.addr=0x52ce, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x52cf, .a=0xb6, .x=0x19, .y=0xe3, .sp=0xff, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xc4}, {.addr=0x52cd, .value=0x44}, {.addr=0x52ce, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x52cd, .value=0x44, .type=IO_READ},
        {.addr=0x52ce, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_006F) {
    const struct CPU_State initial_cpu = {.pc=0x32c0, .a=0xa5, .x=0xc2, .y=0xcb, .sp=0x60, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x7b}, {.addr=0x32c0, .value=0x44}, {.addr=0x32c1, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x32c2, .a=0xde, .x=0xc2, .y=0xcb, .sp=0x60, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x7b}, {.addr=0x32c0, .value=0x44}, {.addr=0x32c1, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x32c0, .value=0x44, .type=IO_READ},
        {.addr=0x32c1, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0070) {
    const struct CPU_State initial_cpu = {.pc=0x8cc2, .a=0x99, .x=0xc1, .y=0x97, .sp=0x18, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xf4}, {.addr=0x8cc2, .value=0x44}, {.addr=0x8cc3, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x8cc4, .a=0x6d, .x=0xc1, .y=0x97, .sp=0x18, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xf4}, {.addr=0x8cc2, .value=0x44}, {.addr=0x8cc3, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cc2, .value=0x44, .type=IO_READ},
        {.addr=0x8cc3, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0071) {
    const struct CPU_State initial_cpu = {.pc=0xe612, .a=0x26, .x=0x2a, .y=0x9a, .sp=0xf9, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0x1b}, {.addr=0xe612, .value=0x44}, {.addr=0xe613, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xe614, .a=0x3d, .x=0x2a, .y=0x9a, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0x1b}, {.addr=0xe612, .value=0x44}, {.addr=0xe613, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe612, .value=0x44, .type=IO_READ},
        {.addr=0xe613, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0072) {
    const struct CPU_State initial_cpu = {.pc=0xee9c, .a=0xc7, .x=0xf2, .y=0x8f, .sp=0x6b, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x0a}, {.addr=0xee9c, .value=0x44}, {.addr=0xee9d, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xee9e, .a=0xcd, .x=0xf2, .y=0x8f, .sp=0x6b, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x0a}, {.addr=0xee9c, .value=0x44}, {.addr=0xee9d, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xee9c, .value=0x44, .type=IO_READ},
        {.addr=0xee9d, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2979, .a=0xd8, .x=0xe6, .y=0x6e, .sp=0xcc, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x3d}, {.addr=0x2979, .value=0x44}, {.addr=0x297a, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x297b, .a=0xe5, .x=0xe6, .y=0x6e, .sp=0xcc, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x3d}, {.addr=0x2979, .value=0x44}, {.addr=0x297a, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x2979, .value=0x44, .type=IO_READ},
        {.addr=0x297a, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7071, .a=0xd2, .x=0x23, .y=0x45, .sp=0xe7, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xd1}, {.addr=0x7071, .value=0x44}, {.addr=0x7072, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x7073, .a=0x03, .x=0x23, .y=0x45, .sp=0xe7, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xd1}, {.addr=0x7071, .value=0x44}, {.addr=0x7072, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x7071, .value=0x44, .type=IO_READ},
        {.addr=0x7072, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0075) {
    const struct CPU_State initial_cpu = {.pc=0x32e9, .a=0xa6, .x=0xbf, .y=0xe1, .sp=0x72, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x13}, {.addr=0x32e9, .value=0x44}, {.addr=0x32ea, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x32eb, .a=0xb5, .x=0xbf, .y=0xe1, .sp=0x72, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x13}, {.addr=0x32e9, .value=0x44}, {.addr=0x32ea, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x32e9, .value=0x44, .type=IO_READ},
        {.addr=0x32ea, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0077) {
    const struct CPU_State initial_cpu = {.pc=0x19a8, .a=0xdb, .x=0x85, .y=0x96, .sp=0x83, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x18}, {.addr=0x19a8, .value=0x44}, {.addr=0x19a9, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x19aa, .a=0xc3, .x=0x85, .y=0x96, .sp=0x83, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x18}, {.addr=0x19a8, .value=0x44}, {.addr=0x19a9, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x19a8, .value=0x44, .type=IO_READ},
        {.addr=0x19a9, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0078) {
    const struct CPU_State initial_cpu = {.pc=0xcc8c, .a=0x17, .x=0x63, .y=0xe6, .sp=0x48, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x9c}, {.addr=0xcc8c, .value=0x44}, {.addr=0xcc8d, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xcc8e, .a=0x8b, .x=0x63, .y=0xe6, .sp=0x48, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x9c}, {.addr=0xcc8c, .value=0x44}, {.addr=0xcc8d, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc8c, .value=0x44, .type=IO_READ},
        {.addr=0xcc8d, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0079) {
    const struct CPU_State initial_cpu = {.pc=0x7251, .a=0x96, .x=0x2c, .y=0xc9, .sp=0x0f, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x67}, {.addr=0x7251, .value=0x44}, {.addr=0x7252, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x7253, .a=0xf1, .x=0x2c, .y=0xc9, .sp=0x0f, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x67}, {.addr=0x7251, .value=0x44}, {.addr=0x7252, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x7251, .value=0x44, .type=IO_READ},
        {.addr=0x7252, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5fff, .a=0x3d, .x=0xa7, .y=0x56, .sp=0x44, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x93}, {.addr=0x5fff, .value=0x44}, {.addr=0x6000, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x6001, .a=0xae, .x=0xa7, .y=0x56, .sp=0x44, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x93}, {.addr=0x5fff, .value=0x44}, {.addr=0x6000, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fff, .value=0x44, .type=IO_READ},
        {.addr=0x6000, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_007B) {
    const struct CPU_State initial_cpu = {.pc=0xb5f4, .a=0xd1, .x=0x7b, .y=0xf2, .sp=0xfc, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x0e}, {.addr=0xb5f4, .value=0x44}, {.addr=0xb5f5, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xb5f6, .a=0xdf, .x=0x7b, .y=0xf2, .sp=0xfc, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x0e}, {.addr=0xb5f4, .value=0x44}, {.addr=0xb5f5, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5f4, .value=0x44, .type=IO_READ},
        {.addr=0xb5f5, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_007C) {
    const struct CPU_State initial_cpu = {.pc=0x2518, .a=0x02, .x=0xc9, .y=0xde, .sp=0xc8, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x9f}, {.addr=0x2518, .value=0x44}, {.addr=0x2519, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x251a, .a=0x9d, .x=0xc9, .y=0xde, .sp=0xc8, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x9f}, {.addr=0x2518, .value=0x44}, {.addr=0x2519, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x2518, .value=0x44, .type=IO_READ},
        {.addr=0x2519, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_007D) {
    const struct CPU_State initial_cpu = {.pc=0x3a31, .a=0x22, .x=0xf0, .y=0x52, .sp=0x58, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xdf}, {.addr=0x3a31, .value=0x44}, {.addr=0x3a32, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x3a33, .a=0xfd, .x=0xf0, .y=0x52, .sp=0x58, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xdf}, {.addr=0x3a31, .value=0x44}, {.addr=0x3a32, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a31, .value=0x44, .type=IO_READ},
        {.addr=0x3a32, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_007F) {
    const struct CPU_State initial_cpu = {.pc=0xdf98, .a=0x0e, .x=0xee, .y=0xa2, .sp=0x40, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x03}, {.addr=0xdf98, .value=0x44}, {.addr=0xdf99, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xdf9a, .a=0x0d, .x=0xee, .y=0xa2, .sp=0x40, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x03}, {.addr=0xdf98, .value=0x44}, {.addr=0xdf99, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf98, .value=0x44, .type=IO_READ},
        {.addr=0xdf99, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0080) {
    const struct CPU_State initial_cpu = {.pc=0x9aca, .a=0x88, .x=0xf9, .y=0xf1, .sp=0xd8, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x30}, {.addr=0x9aca, .value=0x44}, {.addr=0x9acb, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x9acc, .a=0xb8, .x=0xf9, .y=0xf1, .sp=0xd8, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x30}, {.addr=0x9aca, .value=0x44}, {.addr=0x9acb, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aca, .value=0x44, .type=IO_READ},
        {.addr=0x9acb, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0081) {
    const struct CPU_State initial_cpu = {.pc=0x4a01, .a=0x7b, .x=0xb7, .y=0xd8, .sp=0xb5, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x41}, {.addr=0x4a01, .value=0x44}, {.addr=0x4a02, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x4a03, .a=0x3a, .x=0xb7, .y=0xd8, .sp=0xb5, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x41}, {.addr=0x4a01, .value=0x44}, {.addr=0x4a02, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a01, .value=0x44, .type=IO_READ},
        {.addr=0x4a02, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0082) {
    const struct CPU_State initial_cpu = {.pc=0xd031, .a=0x8f, .x=0x0a, .y=0x87, .sp=0xb7, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xc5}, {.addr=0xd031, .value=0x44}, {.addr=0xd032, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xd033, .a=0x4a, .x=0x0a, .y=0x87, .sp=0xb7, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xc5}, {.addr=0xd031, .value=0x44}, {.addr=0xd032, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd031, .value=0x44, .type=IO_READ},
        {.addr=0xd032, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7042, .a=0xcb, .x=0x54, .y=0xb9, .sp=0x19, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x12}, {.addr=0x7042, .value=0x44}, {.addr=0x7043, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x7044, .a=0xd9, .x=0x54, .y=0xb9, .sp=0x19, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x12}, {.addr=0x7042, .value=0x44}, {.addr=0x7043, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x7042, .value=0x44, .type=IO_READ},
        {.addr=0x7043, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0085) {
    const struct CPU_State initial_cpu = {.pc=0x59bf, .a=0x36, .x=0x6f, .y=0xea, .sp=0x91, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x52}, {.addr=0x59bf, .value=0x44}, {.addr=0x59c0, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x59c1, .a=0x64, .x=0x6f, .y=0xea, .sp=0x91, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x52}, {.addr=0x59bf, .value=0x44}, {.addr=0x59c0, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x59bf, .value=0x44, .type=IO_READ},
        {.addr=0x59c0, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0086) {
    const struct CPU_State initial_cpu = {.pc=0x150f, .a=0xbf, .x=0x9d, .y=0x36, .sp=0xcb, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x6c}, {.addr=0x150f, .value=0x44}, {.addr=0x1510, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x1511, .a=0xd3, .x=0x9d, .y=0x36, .sp=0xcb, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x6c}, {.addr=0x150f, .value=0x44}, {.addr=0x1510, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x150f, .value=0x44, .type=IO_READ},
        {.addr=0x1510, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0087) {
    const struct CPU_State initial_cpu = {.pc=0x53ed, .a=0x21, .x=0xa8, .y=0x2d, .sp=0x2f, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xa1}, {.addr=0x53ed, .value=0x44}, {.addr=0x53ee, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x53ef, .a=0x80, .x=0xa8, .y=0x2d, .sp=0x2f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xa1}, {.addr=0x53ed, .value=0x44}, {.addr=0x53ee, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x53ed, .value=0x44, .type=IO_READ},
        {.addr=0x53ee, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0088) {
    const struct CPU_State initial_cpu = {.pc=0x8981, .a=0x5b, .x=0x09, .y=0x9b, .sp=0xbf, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x5d}, {.addr=0x8981, .value=0x44}, {.addr=0x8982, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x8983, .a=0x06, .x=0x09, .y=0x9b, .sp=0xbf, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x5d}, {.addr=0x8981, .value=0x44}, {.addr=0x8982, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8981, .value=0x44, .type=IO_READ},
        {.addr=0x8982, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0089) {
    const struct CPU_State initial_cpu = {.pc=0x25ed, .a=0xb2, .x=0x83, .y=0x13, .sp=0xaf, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xd3}, {.addr=0x25ed, .value=0x44}, {.addr=0x25ee, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x25ef, .a=0x61, .x=0x83, .y=0x13, .sp=0xaf, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xd3}, {.addr=0x25ed, .value=0x44}, {.addr=0x25ee, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x25ed, .value=0x44, .type=IO_READ},
        {.addr=0x25ee, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_008A) {
    const struct CPU_State initial_cpu = {.pc=0xff19, .a=0xc6, .x=0xca, .y=0xba, .sp=0x95, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0xe3}, {.addr=0xff19, .value=0x44}, {.addr=0xff1a, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xff1b, .a=0x25, .x=0xca, .y=0xba, .sp=0x95, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0xe3}, {.addr=0xff19, .value=0x44}, {.addr=0xff1a, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xff19, .value=0x44, .type=IO_READ},
        {.addr=0xff1a, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_008C) {
    const struct CPU_State initial_cpu = {.pc=0xe6c4, .a=0xe4, .x=0xf5, .y=0xd6, .sp=0x87, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xf1}, {.addr=0xe6c4, .value=0x44}, {.addr=0xe6c5, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xe6c6, .a=0x15, .x=0xf5, .y=0xd6, .sp=0x87, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xf1}, {.addr=0xe6c4, .value=0x44}, {.addr=0xe6c5, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6c4, .value=0x44, .type=IO_READ},
        {.addr=0xe6c5, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_008D) {
    const struct CPU_State initial_cpu = {.pc=0xf29e, .a=0x6a, .x=0x84, .y=0xbd, .sp=0x3c, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x41}, {.addr=0xf29e, .value=0x44}, {.addr=0xf29f, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a0, .a=0x2b, .x=0x84, .y=0xbd, .sp=0x3c, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x41}, {.addr=0xf29e, .value=0x44}, {.addr=0xf29f, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf29e, .value=0x44, .type=IO_READ},
        {.addr=0xf29f, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd2ac, .a=0xc4, .x=0x9c, .y=0xc9, .sp=0xed, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x39}, {.addr=0xd2ac, .value=0x44}, {.addr=0xd2ad, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xd2ae, .a=0xfd, .x=0x9c, .y=0xc9, .sp=0xed, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x39}, {.addr=0xd2ac, .value=0x44}, {.addr=0xd2ad, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2ac, .value=0x44, .type=IO_READ},
        {.addr=0xd2ad, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_008F) {
    const struct CPU_State initial_cpu = {.pc=0xe9b4, .a=0xf6, .x=0x92, .y=0xd5, .sp=0x9d, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x3b}, {.addr=0xe9b4, .value=0x44}, {.addr=0xe9b5, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xe9b6, .a=0xcd, .x=0x92, .y=0xd5, .sp=0x9d, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x3b}, {.addr=0xe9b4, .value=0x44}, {.addr=0xe9b5, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9b4, .value=0x44, .type=IO_READ},
        {.addr=0xe9b5, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0b2b, .a=0xf4, .x=0x09, .y=0x78, .sp=0x1e, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xfc}, {.addr=0x0b2b, .value=0x44}, {.addr=0x0b2c, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x0b2d, .a=0x08, .x=0x09, .y=0x78, .sp=0x1e, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xfc}, {.addr=0x0b2b, .value=0x44}, {.addr=0x0b2c, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b2b, .value=0x44, .type=IO_READ},
        {.addr=0x0b2c, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0091) {
    const struct CPU_State initial_cpu = {.pc=0x4a61, .a=0x18, .x=0x64, .y=0xde, .sp=0x56, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xb0}, {.addr=0x4a61, .value=0x44}, {.addr=0x4a62, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x4a63, .a=0xa8, .x=0x64, .y=0xde, .sp=0x56, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xb0}, {.addr=0x4a61, .value=0x44}, {.addr=0x4a62, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a61, .value=0x44, .type=IO_READ},
        {.addr=0x4a62, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0092) {
    const struct CPU_State initial_cpu = {.pc=0x6c41, .a=0x11, .x=0x03, .y=0x0b, .sp=0x55, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x16}, {.addr=0x6c41, .value=0x44}, {.addr=0x6c42, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x6c43, .a=0x07, .x=0x03, .y=0x0b, .sp=0x55, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x16}, {.addr=0x6c41, .value=0x44}, {.addr=0x6c42, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c41, .value=0x44, .type=IO_READ},
        {.addr=0x6c42, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7180, .a=0x01, .x=0xc7, .y=0x2d, .sp=0x4b, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x52}, {.addr=0x7180, .value=0x44}, {.addr=0x7181, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x7182, .a=0x53, .x=0xc7, .y=0x2d, .sp=0x4b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x52}, {.addr=0x7180, .value=0x44}, {.addr=0x7181, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7180, .value=0x44, .type=IO_READ},
        {.addr=0x7181, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8755, .a=0x36, .x=0x2d, .y=0xff, .sp=0xe6, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xcc}, {.addr=0x8755, .value=0x44}, {.addr=0x8756, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x8757, .a=0xfa, .x=0x2d, .y=0xff, .sp=0xe6, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xcc}, {.addr=0x8755, .value=0x44}, {.addr=0x8756, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x8755, .value=0x44, .type=IO_READ},
        {.addr=0x8756, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0095) {
    const struct CPU_State initial_cpu = {.pc=0xf151, .a=0x52, .x=0x3f, .y=0xf8, .sp=0x97, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x49}, {.addr=0xf151, .value=0x44}, {.addr=0xf152, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xf153, .a=0x1b, .x=0x3f, .y=0xf8, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x49}, {.addr=0xf151, .value=0x44}, {.addr=0xf152, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xf151, .value=0x44, .type=IO_READ},
        {.addr=0xf152, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2021, .a=0x22, .x=0x82, .y=0x84, .sp=0x78, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x2d}, {.addr=0x2021, .value=0x44}, {.addr=0x2022, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x2023, .a=0x0f, .x=0x82, .y=0x84, .sp=0x78, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x2d}, {.addr=0x2021, .value=0x44}, {.addr=0x2022, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x2021, .value=0x44, .type=IO_READ},
        {.addr=0x2022, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0097) {
    const struct CPU_State initial_cpu = {.pc=0x15da, .a=0x56, .x=0xa6, .y=0xf5, .sp=0xf0, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x2a}, {.addr=0x15da, .value=0x44}, {.addr=0x15db, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x15dc, .a=0x7c, .x=0xa6, .y=0xf5, .sp=0xf0, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x2a}, {.addr=0x15da, .value=0x44}, {.addr=0x15db, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x15da, .value=0x44, .type=IO_READ},
        {.addr=0x15db, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0098) {
    const struct CPU_State initial_cpu = {.pc=0xc656, .a=0xd9, .x=0x0e, .y=0x2c, .sp=0xcc, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x79}, {.addr=0xc656, .value=0x44}, {.addr=0xc657, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xc658, .a=0xa0, .x=0x0e, .y=0x2c, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x79}, {.addr=0xc656, .value=0x44}, {.addr=0xc657, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc656, .value=0x44, .type=IO_READ},
        {.addr=0xc657, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0099) {
    const struct CPU_State initial_cpu = {.pc=0x3b5b, .a=0x49, .x=0x64, .y=0xe8, .sp=0x28, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xc2}, {.addr=0x3b5b, .value=0x44}, {.addr=0x3b5c, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x3b5d, .a=0x8b, .x=0x64, .y=0xe8, .sp=0x28, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xc2}, {.addr=0x3b5b, .value=0x44}, {.addr=0x3b5c, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b5b, .value=0x44, .type=IO_READ},
        {.addr=0x3b5c, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009A) {
    const struct CPU_State initial_cpu = {.pc=0x3728, .a=0xde, .x=0xdb, .y=0xee, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xcc}, {.addr=0x3728, .value=0x44}, {.addr=0x3729, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x372a, .a=0x12, .x=0xdb, .y=0xee, .sp=0x26, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xcc}, {.addr=0x3728, .value=0x44}, {.addr=0x3729, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3728, .value=0x44, .type=IO_READ},
        {.addr=0x3729, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009B) {
    const struct CPU_State initial_cpu = {.pc=0x529d, .a=0xd4, .x=0x8d, .y=0x0f, .sp=0x14, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x7f}, {.addr=0x529d, .value=0x44}, {.addr=0x529e, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x529f, .a=0xab, .x=0x8d, .y=0x0f, .sp=0x14, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x7f}, {.addr=0x529d, .value=0x44}, {.addr=0x529e, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x529d, .value=0x44, .type=IO_READ},
        {.addr=0x529e, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009C) {
    const struct CPU_State initial_cpu = {.pc=0x628e, .a=0xc2, .x=0xaf, .y=0xec, .sp=0x56, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xb0}, {.addr=0x628e, .value=0x44}, {.addr=0x628f, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x6290, .a=0x72, .x=0xaf, .y=0xec, .sp=0x56, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xb0}, {.addr=0x628e, .value=0x44}, {.addr=0x628f, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x628e, .value=0x44, .type=IO_READ},
        {.addr=0x628f, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009D) {
    const struct CPU_State initial_cpu = {.pc=0x3e17, .a=0xb3, .x=0xbd, .y=0x0e, .sp=0x0a, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xae}, {.addr=0x3e17, .value=0x44}, {.addr=0x3e18, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x3e19, .a=0x1d, .x=0xbd, .y=0x0e, .sp=0x0a, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xae}, {.addr=0x3e17, .value=0x44}, {.addr=0x3e18, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e17, .value=0x44, .type=IO_READ},
        {.addr=0x3e18, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009E) {
    const struct CPU_State initial_cpu = {.pc=0x6e0f, .a=0x65, .x=0x81, .y=0x4e, .sp=0x1c, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x49}, {.addr=0x6e0f, .value=0x44}, {.addr=0x6e10, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x6e11, .a=0x2c, .x=0x81, .y=0x4e, .sp=0x1c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x49}, {.addr=0x6e0f, .value=0x44}, {.addr=0x6e10, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e0f, .value=0x44, .type=IO_READ},
        {.addr=0x6e10, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_009F) {
    const struct CPU_State initial_cpu = {.pc=0xf65c, .a=0xf5, .x=0xf3, .y=0xc8, .sp=0xd1, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xff}, {.addr=0xf65c, .value=0x44}, {.addr=0xf65d, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xf65e, .a=0x0a, .x=0xf3, .y=0xc8, .sp=0xd1, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xff}, {.addr=0xf65c, .value=0x44}, {.addr=0xf65d, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf65c, .value=0x44, .type=IO_READ},
        {.addr=0xf65d, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x53f5, .a=0xa4, .x=0xc0, .y=0x6c, .sp=0x94, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x4d}, {.addr=0x53f5, .value=0x44}, {.addr=0x53f6, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x53f7, .a=0xe9, .x=0xc0, .y=0x6c, .sp=0x94, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x4d}, {.addr=0x53f5, .value=0x44}, {.addr=0x53f6, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x53f5, .value=0x44, .type=IO_READ},
        {.addr=0x53f6, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x2a6c, .a=0x2a, .x=0x5a, .y=0x70, .sp=0x3b, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x44}, {.addr=0x2a6c, .value=0x44}, {.addr=0x2a6d, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x2a6e, .a=0x6e, .x=0x5a, .y=0x70, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x44}, {.addr=0x2a6c, .value=0x44}, {.addr=0x2a6d, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a6c, .value=0x44, .type=IO_READ},
        {.addr=0x2a6d, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x331e, .a=0x00, .x=0x75, .y=0x34, .sp=0x7d, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xc6}, {.addr=0x331e, .value=0x44}, {.addr=0x331f, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x3320, .a=0xc6, .x=0x75, .y=0x34, .sp=0x7d, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xc6}, {.addr=0x331e, .value=0x44}, {.addr=0x331f, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x331e, .value=0x44, .type=IO_READ},
        {.addr=0x331f, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x8355, .a=0xea, .x=0x13, .y=0x24, .sp=0x91, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x03}, {.addr=0x8355, .value=0x44}, {.addr=0x8356, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x8357, .a=0xe9, .x=0x13, .y=0x24, .sp=0x91, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x03}, {.addr=0x8355, .value=0x44}, {.addr=0x8356, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x8355, .value=0x44, .type=IO_READ},
        {.addr=0x8356, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x5a09, .a=0xff, .x=0x7a, .y=0xc9, .sp=0xdc, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xbc}, {.addr=0x5a09, .value=0x44}, {.addr=0x5a0a, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x5a0b, .a=0x43, .x=0x7a, .y=0xc9, .sp=0xdc, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xbc}, {.addr=0x5a09, .value=0x44}, {.addr=0x5a0a, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a09, .value=0x44, .type=IO_READ},
        {.addr=0x5a0a, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xf1a0, .a=0xd5, .x=0x70, .y=0x70, .sp=0xea, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xa2}, {.addr=0xf1a0, .value=0x44}, {.addr=0xf1a1, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xf1a2, .a=0x77, .x=0x70, .y=0x70, .sp=0xea, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xa2}, {.addr=0xf1a0, .value=0x44}, {.addr=0xf1a1, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1a0, .value=0x44, .type=IO_READ},
        {.addr=0xf1a1, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0xbb, .x=0xfc, .y=0x1f, .sp=0x91, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xe6}, {.addr=0x2deb, .value=0x44}, {.addr=0x2dec, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x2ded, .a=0x5d, .x=0xfc, .y=0x1f, .sp=0x91, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xe6}, {.addr=0x2deb, .value=0x44}, {.addr=0x2dec, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0x44, .type=IO_READ},
        {.addr=0x2dec, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x5119, .a=0x3f, .x=0xe3, .y=0x39, .sp=0x7d, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x61}, {.addr=0x5119, .value=0x44}, {.addr=0x511a, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x511b, .a=0x5e, .x=0xe3, .y=0x39, .sp=0x7d, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x61}, {.addr=0x5119, .value=0x44}, {.addr=0x511a, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5119, .value=0x44, .type=IO_READ},
        {.addr=0x511a, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6f27, .a=0x76, .x=0xd1, .y=0x2b, .sp=0xd0, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xd3}, {.addr=0x6f27, .value=0x44}, {.addr=0x6f28, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x6f29, .a=0xa5, .x=0xd1, .y=0x2b, .sp=0xd0, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xd3}, {.addr=0x6f27, .value=0x44}, {.addr=0x6f28, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f27, .value=0x44, .type=IO_READ},
        {.addr=0x6f28, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a57, .a=0xea, .x=0x57, .y=0xb8, .sp=0x7b, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x1b}, {.addr=0x5a57, .value=0x44}, {.addr=0x5a58, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x5a59, .a=0xf1, .x=0x57, .y=0xb8, .sp=0x7b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x1b}, {.addr=0x5a57, .value=0x44}, {.addr=0x5a58, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a57, .value=0x44, .type=IO_READ},
        {.addr=0x5a58, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x4810, .a=0xc9, .x=0x67, .y=0xe6, .sp=0xf3, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xd3}, {.addr=0x4810, .value=0x44}, {.addr=0x4811, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x4812, .a=0x1a, .x=0x67, .y=0xe6, .sp=0xf3, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xd3}, {.addr=0x4810, .value=0x44}, {.addr=0x4811, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4810, .value=0x44, .type=IO_READ},
        {.addr=0x4811, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x4339, .a=0x16, .x=0xd3, .y=0xa8, .sp=0xa0, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x80}, {.addr=0x4339, .value=0x44}, {.addr=0x433a, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x433b, .a=0x96, .x=0xd3, .y=0xa8, .sp=0xa0, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x80}, {.addr=0x4339, .value=0x44}, {.addr=0x433a, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x4339, .value=0x44, .type=IO_READ},
        {.addr=0x433a, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xfe07, .a=0xc4, .x=0x9a, .y=0x4a, .sp=0x83, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xe8}, {.addr=0xfe07, .value=0x44}, {.addr=0xfe08, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xfe09, .a=0x2c, .x=0x9a, .y=0x4a, .sp=0x83, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xe8}, {.addr=0xfe07, .value=0x44}, {.addr=0xfe08, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe07, .value=0x44, .type=IO_READ},
        {.addr=0xfe08, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xcb80, .a=0xfd, .x=0xd4, .y=0x82, .sp=0x33, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x0e}, {.addr=0xcb80, .value=0x44}, {.addr=0xcb81, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xcb82, .a=0xf3, .x=0xd4, .y=0x82, .sp=0x33, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x0e}, {.addr=0xcb80, .value=0x44}, {.addr=0xcb81, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb80, .value=0x44, .type=IO_READ},
        {.addr=0xcb81, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdcc9, .a=0xff, .x=0x8f, .y=0x08, .sp=0xa9, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x85}, {.addr=0xdcc9, .value=0x44}, {.addr=0xdcca, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xdccb, .a=0x7a, .x=0x8f, .y=0x08, .sp=0xa9, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x85}, {.addr=0xdcc9, .value=0x44}, {.addr=0xdcca, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcc9, .value=0x44, .type=IO_READ},
        {.addr=0xdcca, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0x3e, .x=0x82, .y=0xf2, .sp=0x1f, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xa4}, {.addr=0x984e, .value=0x44}, {.addr=0x984f, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0x9a, .x=0x82, .y=0xf2, .sp=0x1f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xa4}, {.addr=0x984e, .value=0x44}, {.addr=0x984f, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0x44, .type=IO_READ},
        {.addr=0x984f, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb0b3, .a=0xe4, .x=0xe8, .y=0xc9, .sp=0x6b, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x9f}, {.addr=0xb0b3, .value=0x44}, {.addr=0xb0b4, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xb0b5, .a=0x7b, .x=0xe8, .y=0xc9, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x9f}, {.addr=0xb0b3, .value=0x44}, {.addr=0xb0b4, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0b3, .value=0x44, .type=IO_READ},
        {.addr=0xb0b4, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xeb53, .a=0xaa, .x=0xf6, .y=0xb3, .sp=0xab, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x68}, {.addr=0xeb53, .value=0x44}, {.addr=0xeb54, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xeb55, .a=0xc2, .x=0xf6, .y=0xb3, .sp=0xab, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x68}, {.addr=0xeb53, .value=0x44}, {.addr=0xeb54, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb53, .value=0x44, .type=IO_READ},
        {.addr=0xeb54, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xfcd7, .a=0x58, .x=0x3f, .y=0x36, .sp=0x34, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x02}, {.addr=0xfcd7, .value=0x44}, {.addr=0xfcd8, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd9, .a=0x5a, .x=0x3f, .y=0x36, .sp=0x34, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x02}, {.addr=0xfcd7, .value=0x44}, {.addr=0xfcd8, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd7, .value=0x44, .type=IO_READ},
        {.addr=0xfcd8, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7688, .a=0x3d, .x=0xcb, .y=0x6a, .sp=0x19, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xc9}, {.addr=0x7688, .value=0x44}, {.addr=0x7689, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x768a, .a=0xf4, .x=0xcb, .y=0x6a, .sp=0x19, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xc9}, {.addr=0x7688, .value=0x44}, {.addr=0x7689, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x7688, .value=0x44, .type=IO_READ},
        {.addr=0x7689, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xf016, .a=0xe8, .x=0x13, .y=0xf1, .sp=0xc8, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x56}, {.addr=0xf016, .value=0x44}, {.addr=0xf017, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xf018, .a=0xbe, .x=0x13, .y=0xf1, .sp=0xc8, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x56}, {.addr=0xf016, .value=0x44}, {.addr=0xf017, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xf016, .value=0x44, .type=IO_READ},
        {.addr=0xf017, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x1ae5, .a=0x28, .x=0xaf, .y=0xc2, .sp=0x6a, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xc2}, {.addr=0x1ae5, .value=0x44}, {.addr=0x1ae6, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae7, .a=0xea, .x=0xaf, .y=0xc2, .sp=0x6a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xc2}, {.addr=0x1ae5, .value=0x44}, {.addr=0x1ae6, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ae5, .value=0x44, .type=IO_READ},
        {.addr=0x1ae6, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xc2fb, .a=0x4b, .x=0x65, .y=0xfd, .sp=0x83, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x97}, {.addr=0xc2fb, .value=0x44}, {.addr=0xc2fc, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xc2fd, .a=0xdc, .x=0x65, .y=0xfd, .sp=0x83, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x97}, {.addr=0xc2fb, .value=0x44}, {.addr=0xc2fc, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2fb, .value=0x44, .type=IO_READ},
        {.addr=0xc2fc, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xa8ce, .a=0x0c, .x=0xd2, .y=0x72, .sp=0x3f, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xdc}, {.addr=0xa8ce, .value=0x44}, {.addr=0xa8cf, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xa8d0, .a=0xd0, .x=0xd2, .y=0x72, .sp=0x3f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xdc}, {.addr=0xa8ce, .value=0x44}, {.addr=0xa8cf, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8ce, .value=0x44, .type=IO_READ},
        {.addr=0xa8cf, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x4532, .a=0x77, .x=0xc2, .y=0x10, .sp=0xa8, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0xd7}, {.addr=0x4532, .value=0x44}, {.addr=0x4533, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x4534, .a=0xa0, .x=0xc2, .y=0x10, .sp=0xa8, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0xd7}, {.addr=0x4532, .value=0x44}, {.addr=0x4533, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4532, .value=0x44, .type=IO_READ},
        {.addr=0x4533, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x91a8, .a=0x65, .x=0x5a, .y=0xd2, .sp=0x81, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x36}, {.addr=0x91a8, .value=0x44}, {.addr=0x91a9, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x91aa, .a=0x53, .x=0x5a, .y=0xd2, .sp=0x81, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x36}, {.addr=0x91a8, .value=0x44}, {.addr=0x91a9, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x91a8, .value=0x44, .type=IO_READ},
        {.addr=0x91a9, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x53b6, .a=0xd8, .x=0x16, .y=0x19, .sp=0x83, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0xe0}, {.addr=0x53b6, .value=0x44}, {.addr=0x53b7, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x53b8, .a=0x38, .x=0x16, .y=0x19, .sp=0x83, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0xe0}, {.addr=0x53b6, .value=0x44}, {.addr=0x53b7, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x53b6, .value=0x44, .type=IO_READ},
        {.addr=0x53b7, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x853d, .a=0xb1, .x=0x64, .y=0x46, .sp=0xea, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x25}, {.addr=0x853d, .value=0x44}, {.addr=0x853e, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x853f, .a=0x94, .x=0x64, .y=0x46, .sp=0xea, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x25}, {.addr=0x853d, .value=0x44}, {.addr=0x853e, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x853d, .value=0x44, .type=IO_READ},
        {.addr=0x853e, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x40e3, .a=0x77, .x=0xd4, .y=0xfd, .sp=0x3d, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xc0}, {.addr=0x40e3, .value=0x44}, {.addr=0x40e4, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x40e5, .a=0xb7, .x=0xd4, .y=0xfd, .sp=0x3d, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xc0}, {.addr=0x40e3, .value=0x44}, {.addr=0x40e4, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e3, .value=0x44, .type=IO_READ},
        {.addr=0x40e4, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xc439, .a=0xe2, .x=0xaa, .y=0xbd, .sp=0xba, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xbd}, {.addr=0xc439, .value=0x44}, {.addr=0xc43a, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xc43b, .a=0x5f, .x=0xaa, .y=0xbd, .sp=0xba, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xbd}, {.addr=0xc439, .value=0x44}, {.addr=0xc43a, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xc439, .value=0x44, .type=IO_READ},
        {.addr=0xc43a, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x16a4, .a=0x2a, .x=0x38, .y=0x45, .sp=0xe0, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xc4}, {.addr=0x16a4, .value=0x44}, {.addr=0x16a5, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x16a6, .a=0xee, .x=0x38, .y=0x45, .sp=0xe0, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xc4}, {.addr=0x16a4, .value=0x44}, {.addr=0x16a5, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x16a4, .value=0x44, .type=IO_READ},
        {.addr=0x16a5, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xa886, .a=0x5e, .x=0xd4, .y=0xc8, .sp=0xc0, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xa6}, {.addr=0xa886, .value=0x44}, {.addr=0xa887, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xa888, .a=0xf8, .x=0xd4, .y=0xc8, .sp=0xc0, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xa6}, {.addr=0xa886, .value=0x44}, {.addr=0xa887, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xa886, .value=0x44, .type=IO_READ},
        {.addr=0xa887, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x8d8a, .a=0xbb, .x=0xc0, .y=0x9a, .sp=0xff, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xde}, {.addr=0x8d8a, .value=0x44}, {.addr=0x8d8b, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x8d8c, .a=0x65, .x=0xc0, .y=0x9a, .sp=0xff, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xde}, {.addr=0x8d8a, .value=0x44}, {.addr=0x8d8b, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d8a, .value=0x44, .type=IO_READ},
        {.addr=0x8d8b, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xaa6d, .a=0x90, .x=0x44, .y=0xa1, .sp=0xc1, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x35}, {.addr=0xaa6d, .value=0x44}, {.addr=0xaa6e, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xaa6f, .a=0xa5, .x=0x44, .y=0xa1, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x35}, {.addr=0xaa6d, .value=0x44}, {.addr=0xaa6e, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa6d, .value=0x44, .type=IO_READ},
        {.addr=0xaa6e, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xecd2, .a=0x7f, .x=0xc0, .y=0x51, .sp=0xc7, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x88}, {.addr=0xecd2, .value=0x44}, {.addr=0xecd3, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xecd4, .a=0xf7, .x=0xc0, .y=0x51, .sp=0xc7, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x88}, {.addr=0xecd2, .value=0x44}, {.addr=0xecd3, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xecd2, .value=0x44, .type=IO_READ},
        {.addr=0xecd3, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xebed, .a=0x21, .x=0xd7, .y=0x4e, .sp=0x8b, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xe4}, {.addr=0xebed, .value=0x44}, {.addr=0xebee, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xebef, .a=0xc5, .x=0xd7, .y=0x4e, .sp=0x8b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xe4}, {.addr=0xebed, .value=0x44}, {.addr=0xebee, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xebed, .value=0x44, .type=IO_READ},
        {.addr=0xebee, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xa69f, .a=0x33, .x=0xc9, .y=0x97, .sp=0x85, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x23}, {.addr=0xa69f, .value=0x44}, {.addr=0xa6a0, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xa6a1, .a=0x10, .x=0xc9, .y=0x97, .sp=0x85, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x23}, {.addr=0xa69f, .value=0x44}, {.addr=0xa6a0, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xa69f, .value=0x44, .type=IO_READ},
        {.addr=0xa6a0, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xf128, .a=0xec, .x=0x9f, .y=0x89, .sp=0x2f, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x36}, {.addr=0xf128, .value=0x44}, {.addr=0xf129, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xf12a, .a=0xda, .x=0x9f, .y=0x89, .sp=0x2f, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x36}, {.addr=0xf128, .value=0x44}, {.addr=0xf129, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf128, .value=0x44, .type=IO_READ},
        {.addr=0xf129, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x59b4, .a=0x16, .x=0x96, .y=0xa6, .sp=0x74, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xee}, {.addr=0x59b4, .value=0x44}, {.addr=0x59b5, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x59b6, .a=0xf8, .x=0x96, .y=0xa6, .sp=0x74, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xee}, {.addr=0x59b4, .value=0x44}, {.addr=0x59b5, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x59b4, .value=0x44, .type=IO_READ},
        {.addr=0x59b5, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xd66b, .a=0x6a, .x=0xc2, .y=0x02, .sp=0xd2, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x63}, {.addr=0xd66b, .value=0x44}, {.addr=0xd66c, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xd66d, .a=0x09, .x=0xc2, .y=0x02, .sp=0xd2, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x63}, {.addr=0xd66b, .value=0x44}, {.addr=0xd66c, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xd66b, .value=0x44, .type=IO_READ},
        {.addr=0xd66c, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x00d8, .a=0x66, .x=0x89, .y=0x1e, .sp=0x0b, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x7a}, {.addr=0x00d8, .value=0x44}, {.addr=0x00d9, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x00da, .a=0x1c, .x=0x89, .y=0x1e, .sp=0x0b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x7a}, {.addr=0x00d8, .value=0x44}, {.addr=0x00d9, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x00d8, .value=0x44, .type=IO_READ},
        {.addr=0x00d9, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7cf1, .a=0x99, .x=0x58, .y=0x86, .sp=0x2f, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x0c}, {.addr=0x7cf1, .value=0x44}, {.addr=0x7cf2, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x7cf3, .a=0x95, .x=0x58, .y=0x86, .sp=0x2f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x0c}, {.addr=0x7cf1, .value=0x44}, {.addr=0x7cf2, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cf1, .value=0x44, .type=IO_READ},
        {.addr=0x7cf2, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x9a2a, .a=0xaf, .x=0x28, .y=0x42, .sp=0x87, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x8e}, {.addr=0x9a2a, .value=0x44}, {.addr=0x9a2b, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x9a2c, .a=0x21, .x=0x28, .y=0x42, .sp=0x87, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x8e}, {.addr=0x9a2a, .value=0x44}, {.addr=0x9a2b, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a2a, .value=0x44, .type=IO_READ},
        {.addr=0x9a2b, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x0d84, .a=0xd1, .x=0x20, .y=0x51, .sp=0xdf, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x1f}, {.addr=0x0d84, .value=0x44}, {.addr=0x0d85, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x0d86, .a=0xce, .x=0x20, .y=0x51, .sp=0xdf, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x1f}, {.addr=0x0d84, .value=0x44}, {.addr=0x0d85, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d84, .value=0x44, .type=IO_READ},
        {.addr=0x0d85, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x0621, .a=0x3e, .x=0x1a, .y=0xee, .sp=0x4c, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x10}, {.addr=0x0621, .value=0x44}, {.addr=0x0622, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x0623, .a=0x2e, .x=0x1a, .y=0xee, .sp=0x4c, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x10}, {.addr=0x0621, .value=0x44}, {.addr=0x0622, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x0621, .value=0x44, .type=IO_READ},
        {.addr=0x0622, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xa3a9, .a=0x12, .x=0xdb, .y=0x7c, .sp=0xfa, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x9b}, {.addr=0xa3a9, .value=0x44}, {.addr=0xa3aa, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xa3ab, .a=0x89, .x=0xdb, .y=0x7c, .sp=0xfa, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x9b}, {.addr=0xa3a9, .value=0x44}, {.addr=0xa3aa, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3a9, .value=0x44, .type=IO_READ},
        {.addr=0xa3aa, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0xeb, .x=0x79, .y=0x5a, .sp=0x89, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x1d}, {.addr=0xfcec, .value=0x44}, {.addr=0xfced, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xfcee, .a=0xf6, .x=0x79, .y=0x5a, .sp=0x89, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x1d}, {.addr=0xfcec, .value=0x44}, {.addr=0xfced, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0x44, .type=IO_READ},
        {.addr=0xfced, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xf533, .a=0x8a, .x=0x7a, .y=0x6e, .sp=0x4a, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x38}, {.addr=0xf533, .value=0x44}, {.addr=0xf534, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xf535, .a=0xb2, .x=0x7a, .y=0x6e, .sp=0x4a, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x38}, {.addr=0xf533, .value=0x44}, {.addr=0xf534, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xf533, .value=0x44, .type=IO_READ},
        {.addr=0xf534, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x1e96, .a=0x93, .x=0x0a, .y=0xd4, .sp=0xaa, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x54}, {.addr=0x1e96, .value=0x44}, {.addr=0x1e97, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x1e98, .a=0xc7, .x=0x0a, .y=0xd4, .sp=0xaa, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x54}, {.addr=0x1e96, .value=0x44}, {.addr=0x1e97, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e96, .value=0x44, .type=IO_READ},
        {.addr=0x1e97, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xcdf2, .a=0x74, .x=0x22, .y=0x0c, .sp=0xd3, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0xc4}, {.addr=0xcdf2, .value=0x44}, {.addr=0xcdf3, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xcdf4, .a=0xb0, .x=0x22, .y=0x0c, .sp=0xd3, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0xc4}, {.addr=0xcdf2, .value=0x44}, {.addr=0xcdf3, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdf2, .value=0x44, .type=IO_READ},
        {.addr=0xcdf3, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xf8b4, .a=0x0d, .x=0x0b, .y=0x22, .sp=0xee, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x85}, {.addr=0xf8b4, .value=0x44}, {.addr=0xf8b5, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xf8b6, .a=0x88, .x=0x0b, .y=0x22, .sp=0xee, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x85}, {.addr=0xf8b4, .value=0x44}, {.addr=0xf8b5, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8b4, .value=0x44, .type=IO_READ},
        {.addr=0xf8b5, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x1150, .a=0x2d, .x=0xa1, .y=0xfe, .sp=0xd1, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x55}, {.addr=0x1150, .value=0x44}, {.addr=0x1151, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x1152, .a=0x78, .x=0xa1, .y=0xfe, .sp=0xd1, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x55}, {.addr=0x1150, .value=0x44}, {.addr=0x1151, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x1150, .value=0x44, .type=IO_READ},
        {.addr=0x1151, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xde1c, .a=0xea, .x=0x24, .y=0xa0, .sp=0xcb, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x42}, {.addr=0xde1c, .value=0x44}, {.addr=0xde1d, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xde1e, .a=0xa8, .x=0x24, .y=0xa0, .sp=0xcb, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x42}, {.addr=0xde1c, .value=0x44}, {.addr=0xde1d, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xde1c, .value=0x44, .type=IO_READ},
        {.addr=0xde1d, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xa03b, .a=0x18, .x=0xa1, .y=0xcf, .sp=0xe9, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x9f}, {.addr=0xa03b, .value=0x44}, {.addr=0xa03c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xa03d, .a=0x87, .x=0xa1, .y=0xcf, .sp=0xe9, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x9f}, {.addr=0xa03b, .value=0x44}, {.addr=0xa03c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xa03b, .value=0x44, .type=IO_READ},
        {.addr=0xa03c, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xab40, .a=0xcb, .x=0x90, .y=0xb4, .sp=0xd4, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x35}, {.addr=0xab40, .value=0x44}, {.addr=0xab41, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xab42, .a=0xfe, .x=0x90, .y=0xb4, .sp=0xd4, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x35}, {.addr=0xab40, .value=0x44}, {.addr=0xab41, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xab40, .value=0x44, .type=IO_READ},
        {.addr=0xab41, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x2961, .a=0x66, .x=0x8d, .y=0xfe, .sp=0x37, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xd3}, {.addr=0x2961, .value=0x44}, {.addr=0x2962, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x2963, .a=0xb5, .x=0x8d, .y=0xfe, .sp=0x37, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xd3}, {.addr=0x2961, .value=0x44}, {.addr=0x2962, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x2961, .value=0x44, .type=IO_READ},
        {.addr=0x2962, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xde7c, .a=0xe6, .x=0x70, .y=0x8e, .sp=0x64, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xfe}, {.addr=0xde7c, .value=0x44}, {.addr=0xde7d, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xde7e, .a=0x18, .x=0x70, .y=0x8e, .sp=0x64, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xfe}, {.addr=0xde7c, .value=0x44}, {.addr=0xde7d, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xde7c, .value=0x44, .type=IO_READ},
        {.addr=0xde7d, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xbdcc, .a=0xe9, .x=0xc1, .y=0x74, .sp=0x60, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xd5}, {.addr=0xbdcc, .value=0x44}, {.addr=0xbdcd, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0xbdce, .a=0x3c, .x=0xc1, .y=0x74, .sp=0x60, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xd5}, {.addr=0xbdcc, .value=0x44}, {.addr=0xbdcd, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdcc, .value=0x44, .type=IO_READ},
        {.addr=0xbdcd, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x11e3, .a=0xd6, .x=0x25, .y=0xe4, .sp=0xdb, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x6b}, {.addr=0x11e3, .value=0x44}, {.addr=0x11e4, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0xbd, .x=0x25, .y=0xe4, .sp=0xdb, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x6b}, {.addr=0x11e3, .value=0x44}, {.addr=0x11e4, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x11e3, .value=0x44, .type=IO_READ},
        {.addr=0x11e4, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x0427, .a=0xe1, .x=0x52, .y=0x02, .sp=0x9a, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xbc}, {.addr=0x0427, .value=0x44}, {.addr=0x0428, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x0429, .a=0x5d, .x=0x52, .y=0x02, .sp=0x9a, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xbc}, {.addr=0x0427, .value=0x44}, {.addr=0x0428, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0427, .value=0x44, .type=IO_READ},
        {.addr=0x0428, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x07a8, .a=0x2f, .x=0x55, .y=0x1e, .sp=0x85, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x16}, {.addr=0x07a8, .value=0x44}, {.addr=0x07a9, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x07aa, .a=0x39, .x=0x55, .y=0x1e, .sp=0x85, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x16}, {.addr=0x07a8, .value=0x44}, {.addr=0x07a9, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x07a8, .value=0x44, .type=IO_READ},
        {.addr=0x07a9, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x8edf, .a=0xba, .x=0xc1, .y=0x45, .sp=0xab, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x77}, {.addr=0x8edf, .value=0x44}, {.addr=0x8ee0, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x8ee1, .a=0xcd, .x=0xc1, .y=0x45, .sp=0xab, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x77}, {.addr=0x8edf, .value=0x44}, {.addr=0x8ee0, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8edf, .value=0x44, .type=IO_READ},
        {.addr=0x8ee0, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x6c50, .a=0xba, .x=0x71, .y=0x79, .sp=0xed, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xe7}, {.addr=0x6c50, .value=0x44}, {.addr=0x6c51, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x6c52, .a=0x5d, .x=0x71, .y=0x79, .sp=0xed, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xe7}, {.addr=0x6c50, .value=0x44}, {.addr=0x6c51, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c50, .value=0x44, .type=IO_READ},
        {.addr=0x6c51, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x98e1, .a=0xc6, .x=0xa6, .y=0xea, .sp=0x4a, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x83}, {.addr=0x98e1, .value=0x44}, {.addr=0x98e2, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x98e3, .a=0x45, .x=0xa6, .y=0xea, .sp=0x4a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x83}, {.addr=0x98e1, .value=0x44}, {.addr=0x98e2, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x98e1, .value=0x44, .type=IO_READ},
        {.addr=0x98e2, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x17ac, .a=0x92, .x=0x15, .y=0x83, .sp=0xe5, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x52}, {.addr=0x17ac, .value=0x44}, {.addr=0x17ad, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x17ae, .a=0xc0, .x=0x15, .y=0x83, .sp=0xe5, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x52}, {.addr=0x17ac, .value=0x44}, {.addr=0x17ad, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x17ac, .value=0x44, .type=IO_READ},
        {.addr=0x17ad, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xd2f2, .a=0x52, .x=0xc5, .y=0x8b, .sp=0x02, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x05}, {.addr=0xd2f2, .value=0x44}, {.addr=0xd2f3, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xd2f4, .a=0x57, .x=0xc5, .y=0x8b, .sp=0x02, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x05}, {.addr=0xd2f2, .value=0x44}, {.addr=0xd2f3, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2f2, .value=0x44, .type=IO_READ},
        {.addr=0xd2f3, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xe952, .a=0xc3, .x=0x25, .y=0x5c, .sp=0xdf, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x6c}, {.addr=0xe952, .value=0x44}, {.addr=0xe953, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe954, .a=0xaf, .x=0x25, .y=0x5c, .sp=0xdf, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x6c}, {.addr=0xe952, .value=0x44}, {.addr=0xe953, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe952, .value=0x44, .type=IO_READ},
        {.addr=0xe953, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xe167, .a=0xa0, .x=0x81, .y=0xaa, .sp=0x35, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xc1}, {.addr=0xe167, .value=0x44}, {.addr=0xe168, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xe169, .a=0x61, .x=0x81, .y=0xaa, .sp=0x35, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xc1}, {.addr=0xe167, .value=0x44}, {.addr=0xe168, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xe167, .value=0x44, .type=IO_READ},
        {.addr=0xe168, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x31c1, .a=0xae, .x=0xd3, .y=0xb9, .sp=0x56, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x78}, {.addr=0x31c1, .value=0x44}, {.addr=0x31c2, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x31c3, .a=0xd6, .x=0xd3, .y=0xb9, .sp=0x56, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x78}, {.addr=0x31c1, .value=0x44}, {.addr=0x31c2, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x31c1, .value=0x44, .type=IO_READ},
        {.addr=0x31c2, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2b33, .a=0xa1, .x=0x83, .y=0xf5, .sp=0x6f, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xca}, {.addr=0x2b33, .value=0x44}, {.addr=0x2b34, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x2b35, .a=0x6b, .x=0x83, .y=0xf5, .sp=0x6f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xca}, {.addr=0x2b33, .value=0x44}, {.addr=0x2b34, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b33, .value=0x44, .type=IO_READ},
        {.addr=0x2b34, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x9b6b, .a=0x83, .x=0x17, .y=0x7d, .sp=0x3c, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xab}, {.addr=0x9b6b, .value=0x44}, {.addr=0x9b6c, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x9b6d, .a=0x28, .x=0x17, .y=0x7d, .sp=0x3c, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xab}, {.addr=0x9b6b, .value=0x44}, {.addr=0x9b6c, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b6b, .value=0x44, .type=IO_READ},
        {.addr=0x9b6c, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x2a2d, .a=0x35, .x=0xcd, .y=0x7e, .sp=0x1f, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x85}, {.addr=0x2a2d, .value=0x44}, {.addr=0x2a2e, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x2a2f, .a=0xb0, .x=0xcd, .y=0x7e, .sp=0x1f, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x85}, {.addr=0x2a2d, .value=0x44}, {.addr=0x2a2e, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a2d, .value=0x44, .type=IO_READ},
        {.addr=0x2a2e, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xba3f, .a=0xa1, .x=0xf6, .y=0x97, .sp=0x38, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xf7}, {.addr=0xba3f, .value=0x44}, {.addr=0xba40, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xba41, .a=0x56, .x=0xf6, .y=0x97, .sp=0x38, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xf7}, {.addr=0xba3f, .value=0x44}, {.addr=0xba40, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xba3f, .value=0x44, .type=IO_READ},
        {.addr=0xba40, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x88f1, .a=0xb0, .x=0x72, .y=0x13, .sp=0x8f, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x84}, {.addr=0x88f1, .value=0x44}, {.addr=0x88f2, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x88f3, .a=0x34, .x=0x72, .y=0x13, .sp=0x8f, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x84}, {.addr=0x88f1, .value=0x44}, {.addr=0x88f2, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x88f1, .value=0x44, .type=IO_READ},
        {.addr=0x88f2, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xbdca, .a=0xca, .x=0x6e, .y=0xda, .sp=0x21, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xfc}, {.addr=0xbdca, .value=0x44}, {.addr=0xbdcb, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xbdcc, .a=0x36, .x=0x6e, .y=0xda, .sp=0x21, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xfc}, {.addr=0xbdca, .value=0x44}, {.addr=0xbdcb, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdca, .value=0x44, .type=IO_READ},
        {.addr=0xbdcb, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7324, .a=0xa6, .x=0x87, .y=0x73, .sp=0xb1, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x10}, {.addr=0x7324, .value=0x44}, {.addr=0x7325, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x7326, .a=0xb6, .x=0x87, .y=0x73, .sp=0xb1, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x10}, {.addr=0x7324, .value=0x44}, {.addr=0x7325, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x7324, .value=0x44, .type=IO_READ},
        {.addr=0x7325, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xe189, .a=0x31, .x=0x67, .y=0xac, .sp=0x0c, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x1d}, {.addr=0xe189, .value=0x44}, {.addr=0xe18a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xe18b, .a=0x2c, .x=0x67, .y=0xac, .sp=0x0c, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x1d}, {.addr=0xe189, .value=0x44}, {.addr=0xe18a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe189, .value=0x44, .type=IO_READ},
        {.addr=0xe18a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x3dbc, .a=0x1c, .x=0xf7, .y=0xbb, .sp=0x9c, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xf4}, {.addr=0x3dbc, .value=0x44}, {.addr=0x3dbd, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x3dbe, .a=0xe8, .x=0xf7, .y=0xbb, .sp=0x9c, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xf4}, {.addr=0x3dbc, .value=0x44}, {.addr=0x3dbd, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dbc, .value=0x44, .type=IO_READ},
        {.addr=0x3dbd, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x4b33, .a=0x04, .x=0x4e, .y=0xaf, .sp=0x0d, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xcb}, {.addr=0x4b33, .value=0x44}, {.addr=0x4b34, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x4b35, .a=0xcf, .x=0x4e, .y=0xaf, .sp=0x0d, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xcb}, {.addr=0x4b33, .value=0x44}, {.addr=0x4b34, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b33, .value=0x44, .type=IO_READ},
        {.addr=0x4b34, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x43a1, .a=0x5b, .x=0xb2, .y=0xb7, .sp=0x7c, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x9d}, {.addr=0x43a1, .value=0x44}, {.addr=0x43a2, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x43a3, .a=0xc6, .x=0xb2, .y=0xb7, .sp=0x7c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x9d}, {.addr=0x43a1, .value=0x44}, {.addr=0x43a2, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x43a1, .value=0x44, .type=IO_READ},
        {.addr=0x43a2, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x9a2f, .a=0x85, .x=0xf7, .y=0x3c, .sp=0x5b, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xe4}, {.addr=0x9a2f, .value=0x44}, {.addr=0x9a30, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x9a31, .a=0x61, .x=0xf7, .y=0x3c, .sp=0x5b, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xe4}, {.addr=0x9a2f, .value=0x44}, {.addr=0x9a30, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a2f, .value=0x44, .type=IO_READ},
        {.addr=0x9a30, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xe8f9, .a=0x53, .x=0x1d, .y=0xf7, .sp=0xed, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x4f}, {.addr=0xe8f9, .value=0x44}, {.addr=0xe8fa, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xe8fb, .a=0x1c, .x=0x1d, .y=0xf7, .sp=0xed, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x4f}, {.addr=0xe8f9, .value=0x44}, {.addr=0xe8fa, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8f9, .value=0x44, .type=IO_READ},
        {.addr=0xe8fa, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xa6d1, .a=0x4f, .x=0x20, .y=0x00, .sp=0x6b, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x7a}, {.addr=0xa6d1, .value=0x44}, {.addr=0xa6d2, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xa6d3, .a=0x35, .x=0x20, .y=0x00, .sp=0x6b, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x7a}, {.addr=0xa6d1, .value=0x44}, {.addr=0xa6d2, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6d1, .value=0x44, .type=IO_READ},
        {.addr=0xa6d2, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x132f, .a=0x80, .x=0xec, .y=0x6b, .sp=0xdc, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x43}, {.addr=0x132f, .value=0x44}, {.addr=0x1330, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x1331, .a=0xc3, .x=0xec, .y=0x6b, .sp=0xdc, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x43}, {.addr=0x132f, .value=0x44}, {.addr=0x1330, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x132f, .value=0x44, .type=IO_READ},
        {.addr=0x1330, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x986d, .a=0x1e, .x=0x97, .y=0x20, .sp=0x62, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x07}, {.addr=0x986d, .value=0x44}, {.addr=0x986e, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x986f, .a=0x19, .x=0x97, .y=0x20, .sp=0x62, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x07}, {.addr=0x986d, .value=0x44}, {.addr=0x986e, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x986d, .value=0x44, .type=IO_READ},
        {.addr=0x986e, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x7e3f, .a=0x1a, .x=0x12, .y=0x1c, .sp=0x32, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x72}, {.addr=0x7e3f, .value=0x44}, {.addr=0x7e40, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x7e41, .a=0x68, .x=0x12, .y=0x1c, .sp=0x32, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x72}, {.addr=0x7e3f, .value=0x44}, {.addr=0x7e40, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e3f, .value=0x44, .type=IO_READ},
        {.addr=0x7e40, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x1662, .a=0xc7, .x=0x2b, .y=0x6c, .sp=0xe5, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xfd}, {.addr=0x1662, .value=0x44}, {.addr=0x1663, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x1664, .a=0x3a, .x=0x2b, .y=0x6c, .sp=0xe5, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xfd}, {.addr=0x1662, .value=0x44}, {.addr=0x1663, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1662, .value=0x44, .type=IO_READ},
        {.addr=0x1663, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x13f3, .a=0x18, .x=0xe6, .y=0x1b, .sp=0x6e, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x0d}, {.addr=0x13f3, .value=0x44}, {.addr=0x13f4, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x13f5, .a=0x15, .x=0xe6, .y=0x1b, .sp=0x6e, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x0d}, {.addr=0x13f3, .value=0x44}, {.addr=0x13f4, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x13f3, .value=0x44, .type=IO_READ},
        {.addr=0x13f4, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x7074, .a=0x52, .x=0xde, .y=0xf9, .sp=0xbf, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x6d}, {.addr=0x7074, .value=0x44}, {.addr=0x7075, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x7076, .a=0x3f, .x=0xde, .y=0xf9, .sp=0xbf, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x6d}, {.addr=0x7074, .value=0x44}, {.addr=0x7075, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7074, .value=0x44, .type=IO_READ},
        {.addr=0x7075, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x4508, .a=0x78, .x=0x1d, .y=0x6f, .sp=0x7a, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xdf}, {.addr=0x4508, .value=0x44}, {.addr=0x4509, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x450a, .a=0xa7, .x=0x1d, .y=0x6f, .sp=0x7a, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xdf}, {.addr=0x4508, .value=0x44}, {.addr=0x4509, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x4508, .value=0x44, .type=IO_READ},
        {.addr=0x4509, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x19e5, .a=0xda, .x=0x57, .y=0x80, .sp=0x00, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x8e}, {.addr=0x19e5, .value=0x44}, {.addr=0x19e6, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x19e7, .a=0x54, .x=0x57, .y=0x80, .sp=0x00, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x8e}, {.addr=0x19e5, .value=0x44}, {.addr=0x19e6, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x19e5, .value=0x44, .type=IO_READ},
        {.addr=0x19e6, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xf498, .a=0x5b, .x=0xb3, .y=0xa1, .sp=0x2e, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0xc4}, {.addr=0xf498, .value=0x44}, {.addr=0xf499, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xf49a, .a=0x9f, .x=0xb3, .y=0xa1, .sp=0x2e, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0xc4}, {.addr=0xf498, .value=0x44}, {.addr=0xf499, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf498, .value=0x44, .type=IO_READ},
        {.addr=0xf499, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xe1a2, .a=0x3d, .x=0x89, .y=0xa0, .sp=0xf1, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x0f}, {.addr=0xe1a2, .value=0x44}, {.addr=0xe1a3, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xe1a4, .a=0x32, .x=0x89, .y=0xa0, .sp=0xf1, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x0f}, {.addr=0xe1a2, .value=0x44}, {.addr=0xe1a3, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1a2, .value=0x44, .type=IO_READ},
        {.addr=0xe1a3, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xc881, .a=0xdf, .x=0xf1, .y=0xca, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x79}, {.addr=0xc881, .value=0x44}, {.addr=0xc882, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xc883, .a=0xa6, .x=0xf1, .y=0xca, .sp=0xca, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x79}, {.addr=0xc881, .value=0x44}, {.addr=0xc882, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc881, .value=0x44, .type=IO_READ},
        {.addr=0xc882, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0100) {
    const struct CPU_State initial_cpu = {.pc=0xdbf0, .a=0x18, .x=0x8d, .y=0x76, .sp=0x0a, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xd9}, {.addr=0xdbf0, .value=0x44}, {.addr=0xdbf1, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xdbf2, .a=0xc1, .x=0x8d, .y=0x76, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xd9}, {.addr=0xdbf0, .value=0x44}, {.addr=0xdbf1, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbf0, .value=0x44, .type=IO_READ},
        {.addr=0xdbf1, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0101) {
    const struct CPU_State initial_cpu = {.pc=0x01e6, .a=0x5b, .x=0x20, .y=0xf8, .sp=0x93, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x39}, {.addr=0x01e6, .value=0x44}, {.addr=0x01e7, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x01e8, .a=0x62, .x=0x20, .y=0xf8, .sp=0x93, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x39}, {.addr=0x01e6, .value=0x44}, {.addr=0x01e7, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x01e6, .value=0x44, .type=IO_READ},
        {.addr=0x01e7, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf0b7, .a=0xdb, .x=0xbe, .y=0x2f, .sp=0x7d, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0xea}, {.addr=0xf0b7, .value=0x44}, {.addr=0xf0b8, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xf0b9, .a=0x31, .x=0xbe, .y=0x2f, .sp=0x7d, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0xea}, {.addr=0xf0b7, .value=0x44}, {.addr=0xf0b8, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0b7, .value=0x44, .type=IO_READ},
        {.addr=0xf0b8, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0103) {
    const struct CPU_State initial_cpu = {.pc=0x7f00, .a=0x0e, .x=0x2f, .y=0x1d, .sp=0xbc, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x75}, {.addr=0x7f00, .value=0x44}, {.addr=0x7f01, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x7f02, .a=0x7b, .x=0x2f, .y=0x1d, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x75}, {.addr=0x7f00, .value=0x44}, {.addr=0x7f01, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f00, .value=0x44, .type=IO_READ},
        {.addr=0x7f01, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0104) {
    const struct CPU_State initial_cpu = {.pc=0x6e3c, .a=0x58, .x=0x06, .y=0x72, .sp=0x75, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xc3}, {.addr=0x6e3c, .value=0x44}, {.addr=0x6e3d, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x6e3e, .a=0x9b, .x=0x06, .y=0x72, .sp=0x75, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xc3}, {.addr=0x6e3c, .value=0x44}, {.addr=0x6e3d, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e3c, .value=0x44, .type=IO_READ},
        {.addr=0x6e3d, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0105) {
    const struct CPU_State initial_cpu = {.pc=0x8aa9, .a=0x5b, .x=0x5b, .y=0x12, .sp=0x70, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0xd6}, {.addr=0x8aa9, .value=0x44}, {.addr=0x8aaa, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x8aab, .a=0x8d, .x=0x5b, .y=0x12, .sp=0x70, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0xd6}, {.addr=0x8aa9, .value=0x44}, {.addr=0x8aaa, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aa9, .value=0x44, .type=IO_READ},
        {.addr=0x8aaa, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0106) {
    const struct CPU_State initial_cpu = {.pc=0xcf66, .a=0xdb, .x=0xe4, .y=0xd6, .sp=0x54, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x8b}, {.addr=0xcf66, .value=0x44}, {.addr=0xcf67, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xcf68, .a=0x50, .x=0xe4, .y=0xd6, .sp=0x54, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x8b}, {.addr=0xcf66, .value=0x44}, {.addr=0xcf67, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf66, .value=0x44, .type=IO_READ},
        {.addr=0xcf67, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0107) {
    const struct CPU_State initial_cpu = {.pc=0x852e, .a=0x6c, .x=0x11, .y=0x0f, .sp=0x6d, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x99}, {.addr=0x852e, .value=0x44}, {.addr=0x852f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x8530, .a=0xf5, .x=0x11, .y=0x0f, .sp=0x6d, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x99}, {.addr=0x852e, .value=0x44}, {.addr=0x852f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x852e, .value=0x44, .type=IO_READ},
        {.addr=0x852f, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0108) {
    const struct CPU_State initial_cpu = {.pc=0x99d6, .a=0x20, .x=0xf1, .y=0x0a, .sp=0x2c, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x15}, {.addr=0x99d6, .value=0x44}, {.addr=0x99d7, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x99d8, .a=0x35, .x=0xf1, .y=0x0a, .sp=0x2c, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x15}, {.addr=0x99d6, .value=0x44}, {.addr=0x99d7, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x99d6, .value=0x44, .type=IO_READ},
        {.addr=0x99d7, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_010A) {
    const struct CPU_State initial_cpu = {.pc=0xfd50, .a=0xe7, .x=0xfc, .y=0x2f, .sp=0xf2, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x5a}, {.addr=0xfd50, .value=0x44}, {.addr=0xfd51, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xfd52, .a=0xbd, .x=0xfc, .y=0x2f, .sp=0xf2, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x5a}, {.addr=0xfd50, .value=0x44}, {.addr=0xfd51, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd50, .value=0x44, .type=IO_READ},
        {.addr=0xfd51, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_010B) {
    const struct CPU_State initial_cpu = {.pc=0x7b53, .a=0x13, .x=0x99, .y=0x3d, .sp=0xe1, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x21}, {.addr=0x7b53, .value=0x44}, {.addr=0x7b54, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0x32, .x=0x99, .y=0x3d, .sp=0xe1, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x21}, {.addr=0x7b53, .value=0x44}, {.addr=0x7b54, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b53, .value=0x44, .type=IO_READ},
        {.addr=0x7b54, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_010D) {
    const struct CPU_State initial_cpu = {.pc=0x7283, .a=0x5f, .x=0xa7, .y=0xfe, .sp=0xf5, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x4e}, {.addr=0x7283, .value=0x44}, {.addr=0x7284, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x7285, .a=0x11, .x=0xa7, .y=0xfe, .sp=0xf5, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x4e}, {.addr=0x7283, .value=0x44}, {.addr=0x7284, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7283, .value=0x44, .type=IO_READ},
        {.addr=0x7284, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_010E) {
    const struct CPU_State initial_cpu = {.pc=0xbd39, .a=0xb4, .x=0x26, .y=0x98, .sp=0x6e, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x96}, {.addr=0xbd39, .value=0x44}, {.addr=0xbd3a, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xbd3b, .a=0x22, .x=0x26, .y=0x98, .sp=0x6e, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x96}, {.addr=0xbd39, .value=0x44}, {.addr=0xbd3a, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd39, .value=0x44, .type=IO_READ},
        {.addr=0xbd3a, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_010F) {
    const struct CPU_State initial_cpu = {.pc=0x45cb, .a=0xd1, .x=0xf0, .y=0x9d, .sp=0x10, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x6e}, {.addr=0x45cb, .value=0x44}, {.addr=0x45cc, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x45cd, .a=0xbf, .x=0xf0, .y=0x9d, .sp=0x10, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x6e}, {.addr=0x45cb, .value=0x44}, {.addr=0x45cc, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x45cb, .value=0x44, .type=IO_READ},
        {.addr=0x45cc, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0110) {
    const struct CPU_State initial_cpu = {.pc=0x05e0, .a=0x60, .x=0x30, .y=0x23, .sp=0xad, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xe4}, {.addr=0x05e0, .value=0x44}, {.addr=0x05e1, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x05e2, .a=0x84, .x=0x30, .y=0x23, .sp=0xad, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xe4}, {.addr=0x05e0, .value=0x44}, {.addr=0x05e1, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x05e0, .value=0x44, .type=IO_READ},
        {.addr=0x05e1, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0111) {
    const struct CPU_State initial_cpu = {.pc=0x788d, .a=0x32, .x=0x6b, .y=0x56, .sp=0xcc, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x50}, {.addr=0x788d, .value=0x44}, {.addr=0x788e, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x788f, .a=0x62, .x=0x6b, .y=0x56, .sp=0xcc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x50}, {.addr=0x788d, .value=0x44}, {.addr=0x788e, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x788d, .value=0x44, .type=IO_READ},
        {.addr=0x788e, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc45a, .a=0x98, .x=0xa0, .y=0x6b, .sp=0xde, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x4f}, {.addr=0xc45a, .value=0x44}, {.addr=0xc45b, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xc45c, .a=0xd7, .x=0xa0, .y=0x6b, .sp=0xde, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x4f}, {.addr=0xc45a, .value=0x44}, {.addr=0xc45b, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc45a, .value=0x44, .type=IO_READ},
        {.addr=0xc45b, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0113) {
    const struct CPU_State initial_cpu = {.pc=0x3c39, .a=0xab, .x=0x8c, .y=0xc5, .sp=0x27, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xe3}, {.addr=0x3c39, .value=0x44}, {.addr=0x3c3a, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x3c3b, .a=0x48, .x=0x8c, .y=0xc5, .sp=0x27, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xe3}, {.addr=0x3c39, .value=0x44}, {.addr=0x3c3a, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c39, .value=0x44, .type=IO_READ},
        {.addr=0x3c3a, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0114) {
    const struct CPU_State initial_cpu = {.pc=0x8465, .a=0x3c, .x=0xf5, .y=0x6c, .sp=0x72, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0xd1}, {.addr=0x8465, .value=0x44}, {.addr=0x8466, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x8467, .a=0xed, .x=0xf5, .y=0x6c, .sp=0x72, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0xd1}, {.addr=0x8465, .value=0x44}, {.addr=0x8466, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x8465, .value=0x44, .type=IO_READ},
        {.addr=0x8466, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0115) {
    const struct CPU_State initial_cpu = {.pc=0xe926, .a=0x4e, .x=0x78, .y=0x97, .sp=0x34, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x53}, {.addr=0xe926, .value=0x44}, {.addr=0xe927, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xe928, .a=0x1d, .x=0x78, .y=0x97, .sp=0x34, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x53}, {.addr=0xe926, .value=0x44}, {.addr=0xe927, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe926, .value=0x44, .type=IO_READ},
        {.addr=0xe927, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0116) {
    const struct CPU_State initial_cpu = {.pc=0xb32f, .a=0x50, .x=0x9e, .y=0xec, .sp=0x8e, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x46}, {.addr=0xb32f, .value=0x44}, {.addr=0xb330, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xb331, .a=0x16, .x=0x9e, .y=0xec, .sp=0x8e, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x46}, {.addr=0xb32f, .value=0x44}, {.addr=0xb330, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb32f, .value=0x44, .type=IO_READ},
        {.addr=0xb330, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0117) {
    const struct CPU_State initial_cpu = {.pc=0xc430, .a=0xae, .x=0xda, .y=0x5a, .sp=0xc5, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x0e}, {.addr=0xc430, .value=0x44}, {.addr=0xc431, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xc432, .a=0xa0, .x=0xda, .y=0x5a, .sp=0xc5, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x0e}, {.addr=0xc430, .value=0x44}, {.addr=0xc431, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xc430, .value=0x44, .type=IO_READ},
        {.addr=0xc431, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0118) {
    const struct CPU_State initial_cpu = {.pc=0x4f49, .a=0x3a, .x=0xa2, .y=0x04, .sp=0x9c, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x9c}, {.addr=0x4f49, .value=0x44}, {.addr=0x4f4a, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x4f4b, .a=0xa6, .x=0xa2, .y=0x04, .sp=0x9c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x9c}, {.addr=0x4f49, .value=0x44}, {.addr=0x4f4a, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f49, .value=0x44, .type=IO_READ},
        {.addr=0x4f4a, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0119) {
    const struct CPU_State initial_cpu = {.pc=0x442d, .a=0x94, .x=0x22, .y=0xc8, .sp=0x01, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x70}, {.addr=0x442d, .value=0x44}, {.addr=0x442e, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x442f, .a=0xe4, .x=0x22, .y=0xc8, .sp=0x01, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x70}, {.addr=0x442d, .value=0x44}, {.addr=0x442e, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x442d, .value=0x44, .type=IO_READ},
        {.addr=0x442e, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011A) {
    const struct CPU_State initial_cpu = {.pc=0x7b87, .a=0x1b, .x=0xf9, .y=0x7f, .sp=0x7e, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x10}, {.addr=0x7b87, .value=0x44}, {.addr=0x7b88, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x7b89, .a=0x0b, .x=0xf9, .y=0x7f, .sp=0x7e, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x10}, {.addr=0x7b87, .value=0x44}, {.addr=0x7b88, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b87, .value=0x44, .type=IO_READ},
        {.addr=0x7b88, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011B) {
    const struct CPU_State initial_cpu = {.pc=0x0a59, .a=0x9c, .x=0x5e, .y=0x91, .sp=0x43, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x3e}, {.addr=0x0a59, .value=0x44}, {.addr=0x0a5a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x0a5b, .a=0xa2, .x=0x5e, .y=0x91, .sp=0x43, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x3e}, {.addr=0x0a59, .value=0x44}, {.addr=0x0a5a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a59, .value=0x44, .type=IO_READ},
        {.addr=0x0a5a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011C) {
    const struct CPU_State initial_cpu = {.pc=0x5e80, .a=0xe1, .x=0xdd, .y=0xd1, .sp=0xbb, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x60}, {.addr=0x5e80, .value=0x44}, {.addr=0x5e81, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x5e82, .a=0x81, .x=0xdd, .y=0xd1, .sp=0xbb, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x60}, {.addr=0x5e80, .value=0x44}, {.addr=0x5e81, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e80, .value=0x44, .type=IO_READ},
        {.addr=0x5e81, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011D) {
    const struct CPU_State initial_cpu = {.pc=0x967d, .a=0x1a, .x=0xcd, .y=0xcb, .sp=0xaf, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x88}, {.addr=0x967d, .value=0x44}, {.addr=0x967e, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x967f, .a=0x92, .x=0xcd, .y=0xcb, .sp=0xaf, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x88}, {.addr=0x967d, .value=0x44}, {.addr=0x967e, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x967d, .value=0x44, .type=IO_READ},
        {.addr=0x967e, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb3d8, .a=0x91, .x=0xc0, .y=0x23, .sp=0xb5, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xe4}, {.addr=0xb3d8, .value=0x44}, {.addr=0xb3d9, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xb3da, .a=0x75, .x=0xc0, .y=0x23, .sp=0xb5, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xe4}, {.addr=0xb3d8, .value=0x44}, {.addr=0xb3d9, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3d8, .value=0x44, .type=IO_READ},
        {.addr=0xb3d9, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_011F) {
    const struct CPU_State initial_cpu = {.pc=0xd343, .a=0x6c, .x=0x8a, .y=0x8d, .sp=0xd2, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x98}, {.addr=0xd343, .value=0x44}, {.addr=0xd344, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xd345, .a=0xf4, .x=0x8a, .y=0x8d, .sp=0xd2, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x98}, {.addr=0xd343, .value=0x44}, {.addr=0xd344, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd343, .value=0x44, .type=IO_READ},
        {.addr=0xd344, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0120) {
    const struct CPU_State initial_cpu = {.pc=0xe202, .a=0xce, .x=0xfa, .y=0x53, .sp=0xfb, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x99}, {.addr=0xe202, .value=0x44}, {.addr=0xe203, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0x57, .x=0xfa, .y=0x53, .sp=0xfb, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x99}, {.addr=0xe202, .value=0x44}, {.addr=0xe203, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xe202, .value=0x44, .type=IO_READ},
        {.addr=0xe203, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0121) {
    const struct CPU_State initial_cpu = {.pc=0x4f0d, .a=0x69, .x=0xf7, .y=0xec, .sp=0x7f, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0xd0}, {.addr=0x4f0d, .value=0x44}, {.addr=0x4f0e, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x4f0f, .a=0xb9, .x=0xf7, .y=0xec, .sp=0x7f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0xd0}, {.addr=0x4f0d, .value=0x44}, {.addr=0x4f0e, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f0d, .value=0x44, .type=IO_READ},
        {.addr=0x4f0e, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0122) {
    const struct CPU_State initial_cpu = {.pc=0xf074, .a=0x9e, .x=0xc9, .y=0x78, .sp=0xe1, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x56}, {.addr=0xf074, .value=0x44}, {.addr=0xf075, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xf076, .a=0xc8, .x=0xc9, .y=0x78, .sp=0xe1, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x56}, {.addr=0xf074, .value=0x44}, {.addr=0xf075, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf074, .value=0x44, .type=IO_READ},
        {.addr=0xf075, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0123) {
    const struct CPU_State initial_cpu = {.pc=0x40e1, .a=0x9d, .x=0x01, .y=0x8c, .sp=0xf8, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x2a}, {.addr=0x40e1, .value=0x44}, {.addr=0x40e2, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x40e3, .a=0xb7, .x=0x01, .y=0x8c, .sp=0xf8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x2a}, {.addr=0x40e1, .value=0x44}, {.addr=0x40e2, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e1, .value=0x44, .type=IO_READ},
        {.addr=0x40e2, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0124) {
    const struct CPU_State initial_cpu = {.pc=0x8fff, .a=0x30, .x=0xdf, .y=0xcd, .sp=0xd4, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xc0}, {.addr=0x8fff, .value=0x44}, {.addr=0x9000, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x9001, .a=0xf0, .x=0xdf, .y=0xcd, .sp=0xd4, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xc0}, {.addr=0x8fff, .value=0x44}, {.addr=0x9000, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fff, .value=0x44, .type=IO_READ},
        {.addr=0x9000, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0125) {
    const struct CPU_State initial_cpu = {.pc=0x3128, .a=0xb3, .x=0x0e, .y=0xff, .sp=0xd5, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xf8}, {.addr=0x3128, .value=0x44}, {.addr=0x3129, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x312a, .a=0x4b, .x=0x0e, .y=0xff, .sp=0xd5, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xf8}, {.addr=0x3128, .value=0x44}, {.addr=0x3129, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x3128, .value=0x44, .type=IO_READ},
        {.addr=0x3129, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0126) {
    const struct CPU_State initial_cpu = {.pc=0xee64, .a=0xef, .x=0xc2, .y=0xc2, .sp=0x5c, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x65}, {.addr=0xee64, .value=0x44}, {.addr=0xee65, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xee66, .a=0x8a, .x=0xc2, .y=0xc2, .sp=0x5c, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x65}, {.addr=0xee64, .value=0x44}, {.addr=0xee65, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xee64, .value=0x44, .type=IO_READ},
        {.addr=0xee65, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0127) {
    const struct CPU_State initial_cpu = {.pc=0xae21, .a=0x8d, .x=0x38, .y=0x96, .sp=0x7c, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xd1}, {.addr=0xae21, .value=0x44}, {.addr=0xae22, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xae23, .a=0x5c, .x=0x38, .y=0x96, .sp=0x7c, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xd1}, {.addr=0xae21, .value=0x44}, {.addr=0xae22, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xae21, .value=0x44, .type=IO_READ},
        {.addr=0xae22, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc1ed, .a=0x6c, .x=0x88, .y=0xfb, .sp=0x13, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xdc}, {.addr=0xc1ed, .value=0x44}, {.addr=0xc1ee, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xc1ef, .a=0xb0, .x=0x88, .y=0xfb, .sp=0x13, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xdc}, {.addr=0xc1ed, .value=0x44}, {.addr=0xc1ee, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1ed, .value=0x44, .type=IO_READ},
        {.addr=0xc1ee, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0129) {
    const struct CPU_State initial_cpu = {.pc=0x0a88, .a=0xec, .x=0xed, .y=0xbe, .sp=0x0d, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xc8}, {.addr=0x0a88, .value=0x44}, {.addr=0x0a89, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x0a8a, .a=0x24, .x=0xed, .y=0xbe, .sp=0x0d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xc8}, {.addr=0x0a88, .value=0x44}, {.addr=0x0a89, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a88, .value=0x44, .type=IO_READ},
        {.addr=0x0a89, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4eed, .a=0xea, .x=0x20, .y=0x57, .sp=0x60, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x17}, {.addr=0x4eed, .value=0x44}, {.addr=0x4eee, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x4eef, .a=0xfd, .x=0x20, .y=0x57, .sp=0x60, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x17}, {.addr=0x4eed, .value=0x44}, {.addr=0x4eee, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x4eed, .value=0x44, .type=IO_READ},
        {.addr=0x4eee, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1e64, .a=0xff, .x=0x11, .y=0xfc, .sp=0x39, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xb6}, {.addr=0x1e64, .value=0x44}, {.addr=0x1e65, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x1e66, .a=0x49, .x=0x11, .y=0xfc, .sp=0x39, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xb6}, {.addr=0x1e64, .value=0x44}, {.addr=0x1e65, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e64, .value=0x44, .type=IO_READ},
        {.addr=0x1e65, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_012D) {
    const struct CPU_State initial_cpu = {.pc=0x9510, .a=0x25, .x=0x46, .y=0x6b, .sp=0xd3, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xbe}, {.addr=0x9510, .value=0x44}, {.addr=0x9511, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x9512, .a=0x9b, .x=0x46, .y=0x6b, .sp=0xd3, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xbe}, {.addr=0x9510, .value=0x44}, {.addr=0x9511, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x9510, .value=0x44, .type=IO_READ},
        {.addr=0x9511, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_012E) {
    const struct CPU_State initial_cpu = {.pc=0x8cd7, .a=0x80, .x=0x56, .y=0x92, .sp=0xeb, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x82}, {.addr=0x8cd7, .value=0x44}, {.addr=0x8cd8, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x8cd9, .a=0x02, .x=0x56, .y=0x92, .sp=0xeb, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x82}, {.addr=0x8cd7, .value=0x44}, {.addr=0x8cd8, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cd7, .value=0x44, .type=IO_READ},
        {.addr=0x8cd8, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2d49, .a=0xf3, .x=0xdb, .y=0x6d, .sp=0x74, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xdd}, {.addr=0x2d49, .value=0x44}, {.addr=0x2d4a, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x2d4b, .a=0x2e, .x=0xdb, .y=0x6d, .sp=0x74, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xdd}, {.addr=0x2d49, .value=0x44}, {.addr=0x2d4a, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d49, .value=0x44, .type=IO_READ},
        {.addr=0x2d4a, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0130) {
    const struct CPU_State initial_cpu = {.pc=0x7b65, .a=0x1a, .x=0x30, .y=0xe8, .sp=0x5c, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xa8}, {.addr=0x7b65, .value=0x44}, {.addr=0x7b66, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x7b67, .a=0xb2, .x=0x30, .y=0xe8, .sp=0x5c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xa8}, {.addr=0x7b65, .value=0x44}, {.addr=0x7b66, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b65, .value=0x44, .type=IO_READ},
        {.addr=0x7b66, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0131) {
    const struct CPU_State initial_cpu = {.pc=0x9761, .a=0x9b, .x=0x5e, .y=0x02, .sp=0xf3, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xe1}, {.addr=0x9761, .value=0x44}, {.addr=0x9762, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x9763, .a=0x7a, .x=0x5e, .y=0x02, .sp=0xf3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xe1}, {.addr=0x9761, .value=0x44}, {.addr=0x9762, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9761, .value=0x44, .type=IO_READ},
        {.addr=0x9762, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0132) {
    const struct CPU_State initial_cpu = {.pc=0x3427, .a=0x1a, .x=0x51, .y=0xc8, .sp=0x15, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x76}, {.addr=0x3427, .value=0x44}, {.addr=0x3428, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x3429, .a=0x6c, .x=0x51, .y=0xc8, .sp=0x15, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x76}, {.addr=0x3427, .value=0x44}, {.addr=0x3428, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x3427, .value=0x44, .type=IO_READ},
        {.addr=0x3428, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0133) {
    const struct CPU_State initial_cpu = {.pc=0x040e, .a=0xcd, .x=0xb9, .y=0x2e, .sp=0x85, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0xfb}, {.addr=0x040e, .value=0x44}, {.addr=0x040f, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x0410, .a=0x36, .x=0xb9, .y=0x2e, .sp=0x85, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0xfb}, {.addr=0x040e, .value=0x44}, {.addr=0x040f, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x040e, .value=0x44, .type=IO_READ},
        {.addr=0x040f, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0134) {
    const struct CPU_State initial_cpu = {.pc=0x294f, .a=0x36, .x=0x2a, .y=0x59, .sp=0xcc, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x6f}, {.addr=0x294f, .value=0x44}, {.addr=0x2950, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x2951, .a=0x59, .x=0x2a, .y=0x59, .sp=0xcc, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x6f}, {.addr=0x294f, .value=0x44}, {.addr=0x2950, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x294f, .value=0x44, .type=IO_READ},
        {.addr=0x2950, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0135) {
    const struct CPU_State initial_cpu = {.pc=0xb639, .a=0x0b, .x=0xe2, .y=0xdc, .sp=0x44, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x3d}, {.addr=0xb639, .value=0x44}, {.addr=0xb63a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xb63b, .a=0x36, .x=0xe2, .y=0xdc, .sp=0x44, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x3d}, {.addr=0xb639, .value=0x44}, {.addr=0xb63a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb639, .value=0x44, .type=IO_READ},
        {.addr=0xb63a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0136) {
    const struct CPU_State initial_cpu = {.pc=0xecf8, .a=0x45, .x=0x82, .y=0x72, .sp=0x24, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x5b}, {.addr=0xecf8, .value=0x44}, {.addr=0xecf9, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xecfa, .a=0x1e, .x=0x82, .y=0x72, .sp=0x24, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x5b}, {.addr=0xecf8, .value=0x44}, {.addr=0xecf9, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xecf8, .value=0x44, .type=IO_READ},
        {.addr=0xecf9, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0137) {
    const struct CPU_State initial_cpu = {.pc=0x2b78, .a=0xb3, .x=0x85, .y=0x21, .sp=0xe3, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xd7}, {.addr=0x2b78, .value=0x44}, {.addr=0x2b79, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x2b7a, .a=0x64, .x=0x85, .y=0x21, .sp=0xe3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xd7}, {.addr=0x2b78, .value=0x44}, {.addr=0x2b79, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b78, .value=0x44, .type=IO_READ},
        {.addr=0x2b79, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0138) {
    const struct CPU_State initial_cpu = {.pc=0x17c9, .a=0x28, .x=0x55, .y=0xe3, .sp=0x49, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0x0d}, {.addr=0x17c9, .value=0x44}, {.addr=0x17ca, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x17cb, .a=0x25, .x=0x55, .y=0xe3, .sp=0x49, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0x0d}, {.addr=0x17c9, .value=0x44}, {.addr=0x17ca, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x17c9, .value=0x44, .type=IO_READ},
        {.addr=0x17ca, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0139) {
    const struct CPU_State initial_cpu = {.pc=0xeb6d, .a=0x9b, .x=0x0a, .y=0x23, .sp=0x10, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x81}, {.addr=0xeb6d, .value=0x44}, {.addr=0xeb6e, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xeb6f, .a=0x1a, .x=0x0a, .y=0x23, .sp=0x10, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x81}, {.addr=0xeb6d, .value=0x44}, {.addr=0xeb6e, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb6d, .value=0x44, .type=IO_READ},
        {.addr=0xeb6e, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013A) {
    const struct CPU_State initial_cpu = {.pc=0x0149, .a=0x8d, .x=0x41, .y=0x89, .sp=0x5a, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x31}, {.addr=0x0149, .value=0x44}, {.addr=0x014a, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x014b, .a=0xbc, .x=0x41, .y=0x89, .sp=0x5a, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x31}, {.addr=0x0149, .value=0x44}, {.addr=0x014a, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0149, .value=0x44, .type=IO_READ},
        {.addr=0x014a, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013B) {
    const struct CPU_State initial_cpu = {.pc=0x7818, .a=0x2e, .x=0x86, .y=0x2d, .sp=0x36, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xcf}, {.addr=0x7818, .value=0x44}, {.addr=0x7819, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x781a, .a=0xe1, .x=0x86, .y=0x2d, .sp=0x36, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xcf}, {.addr=0x7818, .value=0x44}, {.addr=0x7819, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x7818, .value=0x44, .type=IO_READ},
        {.addr=0x7819, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013C) {
    const struct CPU_State initial_cpu = {.pc=0x0899, .a=0xd5, .x=0x7e, .y=0xdb, .sp=0xf3, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x65}, {.addr=0x0899, .value=0x44}, {.addr=0x089a, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x089b, .a=0xb0, .x=0x7e, .y=0xdb, .sp=0xf3, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x65}, {.addr=0x0899, .value=0x44}, {.addr=0x089a, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x0899, .value=0x44, .type=IO_READ},
        {.addr=0x089a, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013D) {
    const struct CPU_State initial_cpu = {.pc=0x391b, .a=0xb8, .x=0x5f, .y=0x28, .sp=0xa7, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x99}, {.addr=0x391b, .value=0x44}, {.addr=0x391c, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x391d, .a=0x21, .x=0x5f, .y=0x28, .sp=0xa7, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x99}, {.addr=0x391b, .value=0x44}, {.addr=0x391c, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x391b, .value=0x44, .type=IO_READ},
        {.addr=0x391c, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013E) {
    const struct CPU_State initial_cpu = {.pc=0xb95f, .a=0x98, .x=0x80, .y=0x17, .sp=0x47, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x54}, {.addr=0xb95f, .value=0x44}, {.addr=0xb960, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xb961, .a=0xcc, .x=0x80, .y=0x17, .sp=0x47, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x54}, {.addr=0xb95f, .value=0x44}, {.addr=0xb960, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xb95f, .value=0x44, .type=IO_READ},
        {.addr=0xb960, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_013F) {
    const struct CPU_State initial_cpu = {.pc=0xe438, .a=0xe4, .x=0x94, .y=0x79, .sp=0x09, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x43}, {.addr=0xe438, .value=0x44}, {.addr=0xe439, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xe43a, .a=0xa7, .x=0x94, .y=0x79, .sp=0x09, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x43}, {.addr=0xe438, .value=0x44}, {.addr=0xe439, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe438, .value=0x44, .type=IO_READ},
        {.addr=0xe439, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5008, .a=0x52, .x=0x5b, .y=0x2d, .sp=0x54, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xf0}, {.addr=0x5008, .value=0x44}, {.addr=0x5009, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x500a, .a=0xa2, .x=0x5b, .y=0x2d, .sp=0x54, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xf0}, {.addr=0x5008, .value=0x44}, {.addr=0x5009, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x5008, .value=0x44, .type=IO_READ},
        {.addr=0x5009, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0141) {
    const struct CPU_State initial_cpu = {.pc=0x355c, .a=0x86, .x=0x9d, .y=0x0a, .sp=0xce, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xc7}, {.addr=0x355c, .value=0x44}, {.addr=0x355d, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x355e, .a=0x41, .x=0x9d, .y=0x0a, .sp=0xce, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xc7}, {.addr=0x355c, .value=0x44}, {.addr=0x355d, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x355c, .value=0x44, .type=IO_READ},
        {.addr=0x355d, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0142) {
    const struct CPU_State initial_cpu = {.pc=0x0849, .a=0x59, .x=0xfe, .y=0xf8, .sp=0xa3, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x3f}, {.addr=0x0849, .value=0x44}, {.addr=0x084a, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x084b, .a=0x66, .x=0xfe, .y=0xf8, .sp=0xa3, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x3f}, {.addr=0x0849, .value=0x44}, {.addr=0x084a, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0849, .value=0x44, .type=IO_READ},
        {.addr=0x084a, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8127, .a=0xa4, .x=0x10, .y=0x51, .sp=0x40, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x5d}, {.addr=0x8127, .value=0x44}, {.addr=0x8128, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x8129, .a=0xf9, .x=0x10, .y=0x51, .sp=0x40, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x5d}, {.addr=0x8127, .value=0x44}, {.addr=0x8128, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x8127, .value=0x44, .type=IO_READ},
        {.addr=0x8128, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0144) {
    const struct CPU_State initial_cpu = {.pc=0x2abd, .a=0x5f, .x=0xda, .y=0xbf, .sp=0x80, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xf9}, {.addr=0x2abd, .value=0x44}, {.addr=0x2abe, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x2abf, .a=0xa6, .x=0xda, .y=0xbf, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xf9}, {.addr=0x2abd, .value=0x44}, {.addr=0x2abe, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2abd, .value=0x44, .type=IO_READ},
        {.addr=0x2abe, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0145) {
    const struct CPU_State initial_cpu = {.pc=0xde19, .a=0x98, .x=0x8b, .y=0xb5, .sp=0x4c, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x89}, {.addr=0xde19, .value=0x44}, {.addr=0xde1a, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xde1b, .a=0x11, .x=0x8b, .y=0xb5, .sp=0x4c, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x89}, {.addr=0xde19, .value=0x44}, {.addr=0xde1a, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xde19, .value=0x44, .type=IO_READ},
        {.addr=0xde1a, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0146) {
    const struct CPU_State initial_cpu = {.pc=0xa1a9, .a=0xf3, .x=0x4d, .y=0x27, .sp=0xb6, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x78}, {.addr=0xa1a9, .value=0x44}, {.addr=0xa1aa, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xa1ab, .a=0x8b, .x=0x4d, .y=0x27, .sp=0xb6, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x78}, {.addr=0xa1a9, .value=0x44}, {.addr=0xa1aa, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1a9, .value=0x44, .type=IO_READ},
        {.addr=0xa1aa, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0147) {
    const struct CPU_State initial_cpu = {.pc=0x8a53, .a=0xfc, .x=0xa9, .y=0x3c, .sp=0x3f, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x79}, {.addr=0x8a53, .value=0x44}, {.addr=0x8a54, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x8a55, .a=0x85, .x=0xa9, .y=0x3c, .sp=0x3f, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x79}, {.addr=0x8a53, .value=0x44}, {.addr=0x8a54, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a53, .value=0x44, .type=IO_READ},
        {.addr=0x8a54, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0148) {
    const struct CPU_State initial_cpu = {.pc=0xbb66, .a=0xb2, .x=0x10, .y=0x6c, .sp=0x1a, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x2d}, {.addr=0xbb66, .value=0x44}, {.addr=0xbb67, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xbb68, .a=0x9f, .x=0x10, .y=0x6c, .sp=0x1a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x2d}, {.addr=0xbb66, .value=0x44}, {.addr=0xbb67, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb66, .value=0x44, .type=IO_READ},
        {.addr=0xbb67, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0149) {
    const struct CPU_State initial_cpu = {.pc=0x8f25, .a=0xa8, .x=0x48, .y=0xb2, .sp=0x27, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x16}, {.addr=0x8f25, .value=0x44}, {.addr=0x8f26, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x8f27, .a=0xbe, .x=0x48, .y=0xb2, .sp=0x27, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x16}, {.addr=0x8f25, .value=0x44}, {.addr=0x8f26, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f25, .value=0x44, .type=IO_READ},
        {.addr=0x8f26, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014A) {
    const struct CPU_State initial_cpu = {.pc=0x284a, .a=0x81, .x=0x96, .y=0xe0, .sp=0x43, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x2b}, {.addr=0x284a, .value=0x44}, {.addr=0x284b, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x284c, .a=0xaa, .x=0x96, .y=0xe0, .sp=0x43, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x2b}, {.addr=0x284a, .value=0x44}, {.addr=0x284b, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x284a, .value=0x44, .type=IO_READ},
        {.addr=0x284b, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014B) {
    const struct CPU_State initial_cpu = {.pc=0x443a, .a=0x6a, .x=0x70, .y=0x46, .sp=0xe3, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x7e}, {.addr=0x443a, .value=0x44}, {.addr=0x443b, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x443c, .a=0x14, .x=0x70, .y=0x46, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x7e}, {.addr=0x443a, .value=0x44}, {.addr=0x443b, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x443a, .value=0x44, .type=IO_READ},
        {.addr=0x443b, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014C) {
    const struct CPU_State initial_cpu = {.pc=0x675d, .a=0x0a, .x=0xe4, .y=0x25, .sp=0x55, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x7e}, {.addr=0x675d, .value=0x44}, {.addr=0x675e, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x675f, .a=0x74, .x=0xe4, .y=0x25, .sp=0x55, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x7e}, {.addr=0x675d, .value=0x44}, {.addr=0x675e, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x675d, .value=0x44, .type=IO_READ},
        {.addr=0x675e, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014D) {
    const struct CPU_State initial_cpu = {.pc=0x5655, .a=0xc2, .x=0xc2, .y=0x30, .sp=0x4b, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x91}, {.addr=0x5655, .value=0x44}, {.addr=0x5656, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x5657, .a=0x53, .x=0xc2, .y=0x30, .sp=0x4b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x91}, {.addr=0x5655, .value=0x44}, {.addr=0x5656, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5655, .value=0x44, .type=IO_READ},
        {.addr=0x5656, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014E) {
    const struct CPU_State initial_cpu = {.pc=0xede9, .a=0x32, .x=0x18, .y=0xf2, .sp=0xcc, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x3c}, {.addr=0xede9, .value=0x44}, {.addr=0xedea, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xedeb, .a=0x0e, .x=0x18, .y=0xf2, .sp=0xcc, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x3c}, {.addr=0xede9, .value=0x44}, {.addr=0xedea, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xede9, .value=0x44, .type=IO_READ},
        {.addr=0xedea, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_014F) {
    const struct CPU_State initial_cpu = {.pc=0xf938, .a=0x37, .x=0x7f, .y=0xff, .sp=0xda, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x2f}, {.addr=0xf938, .value=0x44}, {.addr=0xf939, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xf93a, .a=0x18, .x=0x7f, .y=0xff, .sp=0xda, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x2f}, {.addr=0xf938, .value=0x44}, {.addr=0xf939, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xf938, .value=0x44, .type=IO_READ},
        {.addr=0xf939, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0150) {
    const struct CPU_State initial_cpu = {.pc=0x2ee2, .a=0x20, .x=0x7c, .y=0x12, .sp=0xa3, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x47}, {.addr=0x2ee2, .value=0x44}, {.addr=0x2ee3, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x2ee4, .a=0x67, .x=0x7c, .y=0x12, .sp=0xa3, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x47}, {.addr=0x2ee2, .value=0x44}, {.addr=0x2ee3, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ee2, .value=0x44, .type=IO_READ},
        {.addr=0x2ee3, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0151) {
    const struct CPU_State initial_cpu = {.pc=0xf251, .a=0xa7, .x=0x7e, .y=0x44, .sp=0xf0, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x70}, {.addr=0xf251, .value=0x44}, {.addr=0xf252, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xf253, .a=0xd7, .x=0x7e, .y=0x44, .sp=0xf0, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x70}, {.addr=0xf251, .value=0x44}, {.addr=0xf252, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xf251, .value=0x44, .type=IO_READ},
        {.addr=0xf252, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb67f, .a=0x4d, .x=0x3a, .y=0x66, .sp=0xc1, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x7d}, {.addr=0xb67f, .value=0x44}, {.addr=0xb680, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xb681, .a=0x30, .x=0x3a, .y=0x66, .sp=0xc1, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x7d}, {.addr=0xb67f, .value=0x44}, {.addr=0xb680, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xb67f, .value=0x44, .type=IO_READ},
        {.addr=0xb680, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0153) {
    const struct CPU_State initial_cpu = {.pc=0xd335, .a=0x88, .x=0x83, .y=0xc3, .sp=0x75, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xdb}, {.addr=0xd335, .value=0x44}, {.addr=0xd336, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xd337, .a=0x53, .x=0x83, .y=0xc3, .sp=0x75, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xdb}, {.addr=0xd335, .value=0x44}, {.addr=0xd336, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xd335, .value=0x44, .type=IO_READ},
        {.addr=0xd336, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0154) {
    const struct CPU_State initial_cpu = {.pc=0x9613, .a=0xb2, .x=0x10, .y=0x11, .sp=0x7d, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x61}, {.addr=0x9613, .value=0x44}, {.addr=0x9614, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x9615, .a=0xd3, .x=0x10, .y=0x11, .sp=0x7d, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x61}, {.addr=0x9613, .value=0x44}, {.addr=0x9614, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x9613, .value=0x44, .type=IO_READ},
        {.addr=0x9614, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0155) {
    const struct CPU_State initial_cpu = {.pc=0x253b, .a=0xb2, .x=0x57, .y=0x3d, .sp=0x86, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xd0}, {.addr=0x253b, .value=0x44}, {.addr=0x253c, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x253d, .a=0x62, .x=0x57, .y=0x3d, .sp=0x86, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xd0}, {.addr=0x253b, .value=0x44}, {.addr=0x253c, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x253b, .value=0x44, .type=IO_READ},
        {.addr=0x253c, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0156) {
    const struct CPU_State initial_cpu = {.pc=0xff40, .a=0xcc, .x=0xf9, .y=0x64, .sp=0x33, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x33}, {.addr=0xff40, .value=0x44}, {.addr=0xff41, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xff42, .a=0xff, .x=0xf9, .y=0x64, .sp=0x33, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x33}, {.addr=0xff40, .value=0x44}, {.addr=0xff41, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xff40, .value=0x44, .type=IO_READ},
        {.addr=0xff41, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0157) {
    const struct CPU_State initial_cpu = {.pc=0x8470, .a=0xe2, .x=0x35, .y=0xa9, .sp=0x56, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xef}, {.addr=0x8470, .value=0x44}, {.addr=0x8471, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x8472, .a=0x0d, .x=0x35, .y=0xa9, .sp=0x56, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xef}, {.addr=0x8470, .value=0x44}, {.addr=0x8471, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x8470, .value=0x44, .type=IO_READ},
        {.addr=0x8471, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0158) {
    const struct CPU_State initial_cpu = {.pc=0xcb0c, .a=0x90, .x=0x83, .y=0x57, .sp=0x5e, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x95}, {.addr=0xcb0c, .value=0x44}, {.addr=0xcb0d, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xcb0e, .a=0x05, .x=0x83, .y=0x57, .sp=0x5e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x95}, {.addr=0xcb0c, .value=0x44}, {.addr=0xcb0d, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb0c, .value=0x44, .type=IO_READ},
        {.addr=0xcb0d, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0159) {
    const struct CPU_State initial_cpu = {.pc=0xeb93, .a=0xa6, .x=0x48, .y=0xca, .sp=0xa4, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xa2}, {.addr=0xeb93, .value=0x44}, {.addr=0xeb94, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xeb95, .a=0x04, .x=0x48, .y=0xca, .sp=0xa4, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xa2}, {.addr=0xeb93, .value=0x44}, {.addr=0xeb94, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb93, .value=0x44, .type=IO_READ},
        {.addr=0xeb94, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015A) {
    const struct CPU_State initial_cpu = {.pc=0x0695, .a=0x53, .x=0x2e, .y=0x76, .sp=0xf8, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x2f}, {.addr=0x0695, .value=0x44}, {.addr=0x0696, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x0697, .a=0x7c, .x=0x2e, .y=0x76, .sp=0xf8, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x2f}, {.addr=0x0695, .value=0x44}, {.addr=0x0696, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x0695, .value=0x44, .type=IO_READ},
        {.addr=0x0696, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015B) {
    const struct CPU_State initial_cpu = {.pc=0xcac9, .a=0x10, .x=0x7f, .y=0xf2, .sp=0x1f, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x94}, {.addr=0xcac9, .value=0x44}, {.addr=0xcaca, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xcacb, .a=0x84, .x=0x7f, .y=0xf2, .sp=0x1f, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x94}, {.addr=0xcac9, .value=0x44}, {.addr=0xcaca, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xcac9, .value=0x44, .type=IO_READ},
        {.addr=0xcaca, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015C) {
    const struct CPU_State initial_cpu = {.pc=0xf0c2, .a=0x8c, .x=0xaf, .y=0x45, .sp=0xa4, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x23}, {.addr=0xf0c2, .value=0x44}, {.addr=0xf0c3, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xf0c4, .a=0xaf, .x=0xaf, .y=0x45, .sp=0xa4, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x23}, {.addr=0xf0c2, .value=0x44}, {.addr=0xf0c3, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0c2, .value=0x44, .type=IO_READ},
        {.addr=0xf0c3, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd367, .a=0x16, .x=0x0f, .y=0xdd, .sp=0xf9, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x26}, {.addr=0xd367, .value=0x44}, {.addr=0xd368, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xd369, .a=0x30, .x=0x0f, .y=0xdd, .sp=0xf9, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x26}, {.addr=0xd367, .value=0x44}, {.addr=0xd368, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd367, .value=0x44, .type=IO_READ},
        {.addr=0xd368, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015E) {
    const struct CPU_State initial_cpu = {.pc=0x87f6, .a=0x68, .x=0x6b, .y=0x8a, .sp=0xfb, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xea}, {.addr=0x87f6, .value=0x44}, {.addr=0x87f7, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x87f8, .a=0x82, .x=0x6b, .y=0x8a, .sp=0xfb, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xea}, {.addr=0x87f6, .value=0x44}, {.addr=0x87f7, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x87f6, .value=0x44, .type=IO_READ},
        {.addr=0x87f7, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_015F) {
    const struct CPU_State initial_cpu = {.pc=0xa29f, .a=0x2d, .x=0x5f, .y=0x92, .sp=0xd8, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x31}, {.addr=0xa29f, .value=0x44}, {.addr=0xa2a0, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xa2a1, .a=0x1c, .x=0x5f, .y=0x92, .sp=0xd8, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x31}, {.addr=0xa29f, .value=0x44}, {.addr=0xa2a0, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xa29f, .value=0x44, .type=IO_READ},
        {.addr=0xa2a0, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0160) {
    const struct CPU_State initial_cpu = {.pc=0x2225, .a=0xa0, .x=0xed, .y=0x6d, .sp=0xa7, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x41}, {.addr=0x2225, .value=0x44}, {.addr=0x2226, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x2227, .a=0xe1, .x=0xed, .y=0x6d, .sp=0xa7, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x41}, {.addr=0x2225, .value=0x44}, {.addr=0x2226, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2225, .value=0x44, .type=IO_READ},
        {.addr=0x2226, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0161) {
    const struct CPU_State initial_cpu = {.pc=0x04a6, .a=0x80, .x=0xc7, .y=0x55, .sp=0x28, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x75}, {.addr=0x04a6, .value=0x44}, {.addr=0x04a7, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x04a8, .a=0xf5, .x=0xc7, .y=0x55, .sp=0x28, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x75}, {.addr=0x04a6, .value=0x44}, {.addr=0x04a7, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x04a6, .value=0x44, .type=IO_READ},
        {.addr=0x04a7, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0162) {
    const struct CPU_State initial_cpu = {.pc=0x6f21, .a=0x32, .x=0x25, .y=0x57, .sp=0x83, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x25}, {.addr=0x6f21, .value=0x44}, {.addr=0x6f22, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x6f23, .a=0x17, .x=0x25, .y=0x57, .sp=0x83, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x25}, {.addr=0x6f21, .value=0x44}, {.addr=0x6f22, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f21, .value=0x44, .type=IO_READ},
        {.addr=0x6f22, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0163) {
    const struct CPU_State initial_cpu = {.pc=0xbaa9, .a=0xfc, .x=0x43, .y=0x18, .sp=0x02, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x26}, {.addr=0xbaa9, .value=0x44}, {.addr=0xbaaa, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xbaab, .a=0xda, .x=0x43, .y=0x18, .sp=0x02, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x26}, {.addr=0xbaa9, .value=0x44}, {.addr=0xbaaa, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbaa9, .value=0x44, .type=IO_READ},
        {.addr=0xbaaa, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0164) {
    const struct CPU_State initial_cpu = {.pc=0x329c, .a=0x32, .x=0x3d, .y=0xc8, .sp=0xee, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x98}, {.addr=0x329c, .value=0x44}, {.addr=0x329d, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x329e, .a=0xaa, .x=0x3d, .y=0xc8, .sp=0xee, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x98}, {.addr=0x329c, .value=0x44}, {.addr=0x329d, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x329c, .value=0x44, .type=IO_READ},
        {.addr=0x329d, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0165) {
    const struct CPU_State initial_cpu = {.pc=0x65a3, .a=0x46, .x=0xe6, .y=0x3d, .sp=0x38, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xc1}, {.addr=0x65a3, .value=0x44}, {.addr=0x65a4, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x65a5, .a=0x87, .x=0xe6, .y=0x3d, .sp=0x38, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xc1}, {.addr=0x65a3, .value=0x44}, {.addr=0x65a4, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x65a3, .value=0x44, .type=IO_READ},
        {.addr=0x65a4, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0166) {
    const struct CPU_State initial_cpu = {.pc=0xe889, .a=0x99, .x=0xec, .y=0x30, .sp=0x0f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x40}, {.addr=0xe889, .value=0x44}, {.addr=0xe88a, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xe88b, .a=0xd9, .x=0xec, .y=0x30, .sp=0x0f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x40}, {.addr=0xe889, .value=0x44}, {.addr=0xe88a, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xe889, .value=0x44, .type=IO_READ},
        {.addr=0xe88a, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0167) {
    const struct CPU_State initial_cpu = {.pc=0xc517, .a=0x6f, .x=0x84, .y=0x28, .sp=0x73, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x27}, {.addr=0xc517, .value=0x44}, {.addr=0xc518, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xc519, .a=0x48, .x=0x84, .y=0x28, .sp=0x73, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x27}, {.addr=0xc517, .value=0x44}, {.addr=0xc518, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xc517, .value=0x44, .type=IO_READ},
        {.addr=0xc518, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0168) {
    const struct CPU_State initial_cpu = {.pc=0xac05, .a=0xb8, .x=0x79, .y=0x6d, .sp=0xd2, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x31}, {.addr=0xac05, .value=0x44}, {.addr=0xac06, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xac07, .a=0x89, .x=0x79, .y=0x6d, .sp=0xd2, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x31}, {.addr=0xac05, .value=0x44}, {.addr=0xac06, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xac05, .value=0x44, .type=IO_READ},
        {.addr=0xac06, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0169) {
    const struct CPU_State initial_cpu = {.pc=0x82b6, .a=0x3d, .x=0x58, .y=0xd5, .sp=0x2b, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x4c}, {.addr=0x82b6, .value=0x44}, {.addr=0x82b7, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x82b8, .a=0x71, .x=0x58, .y=0xd5, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x4c}, {.addr=0x82b6, .value=0x44}, {.addr=0x82b7, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x82b6, .value=0x44, .type=IO_READ},
        {.addr=0x82b7, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016A) {
    const struct CPU_State initial_cpu = {.pc=0x1cb0, .a=0xa0, .x=0x1e, .y=0x5a, .sp=0x7a, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x10}, {.addr=0x1cb0, .value=0x44}, {.addr=0x1cb1, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x1cb2, .a=0xb0, .x=0x1e, .y=0x5a, .sp=0x7a, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x10}, {.addr=0x1cb0, .value=0x44}, {.addr=0x1cb1, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cb0, .value=0x44, .type=IO_READ},
        {.addr=0x1cb1, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016B) {
    const struct CPU_State initial_cpu = {.pc=0x8ffd, .a=0x1c, .x=0xd4, .y=0xfa, .sp=0x43, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x3e}, {.addr=0x8ffd, .value=0x44}, {.addr=0x8ffe, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x8fff, .a=0x22, .x=0xd4, .y=0xfa, .sp=0x43, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x3e}, {.addr=0x8ffd, .value=0x44}, {.addr=0x8ffe, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ffd, .value=0x44, .type=IO_READ},
        {.addr=0x8ffe, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016C) {
    const struct CPU_State initial_cpu = {.pc=0xb8c6, .a=0x34, .x=0x7b, .y=0x64, .sp=0xea, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xdb}, {.addr=0xb8c6, .value=0x44}, {.addr=0xb8c7, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xb8c8, .a=0xef, .x=0x7b, .y=0x64, .sp=0xea, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xdb}, {.addr=0xb8c6, .value=0x44}, {.addr=0xb8c7, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8c6, .value=0x44, .type=IO_READ},
        {.addr=0xb8c7, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016D) {
    const struct CPU_State initial_cpu = {.pc=0xb6f8, .a=0x01, .x=0x09, .y=0xed, .sp=0xa2, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x21}, {.addr=0xb6f8, .value=0x44}, {.addr=0xb6f9, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xb6fa, .a=0x20, .x=0x09, .y=0xed, .sp=0xa2, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x21}, {.addr=0xb6f8, .value=0x44}, {.addr=0xb6f9, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6f8, .value=0x44, .type=IO_READ},
        {.addr=0xb6f9, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016E) {
    const struct CPU_State initial_cpu = {.pc=0xddf6, .a=0x69, .x=0xdb, .y=0xa9, .sp=0x91, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x9a}, {.addr=0xddf6, .value=0x44}, {.addr=0xddf7, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xddf8, .a=0xf3, .x=0xdb, .y=0xa9, .sp=0x91, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x9a}, {.addr=0xddf6, .value=0x44}, {.addr=0xddf7, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xddf6, .value=0x44, .type=IO_READ},
        {.addr=0xddf7, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_016F) {
    const struct CPU_State initial_cpu = {.pc=0xd392, .a=0xf3, .x=0xc8, .y=0xdf, .sp=0xfa, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x33}, {.addr=0xd392, .value=0x44}, {.addr=0xd393, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xd394, .a=0xc0, .x=0xc8, .y=0xdf, .sp=0xfa, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x33}, {.addr=0xd392, .value=0x44}, {.addr=0xd393, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd392, .value=0x44, .type=IO_READ},
        {.addr=0xd393, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0170) {
    const struct CPU_State initial_cpu = {.pc=0x64b7, .a=0xf3, .x=0x8c, .y=0x36, .sp=0xab, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x19}, {.addr=0x64b7, .value=0x44}, {.addr=0x64b8, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x64b9, .a=0xea, .x=0x8c, .y=0x36, .sp=0xab, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x19}, {.addr=0x64b7, .value=0x44}, {.addr=0x64b8, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x64b7, .value=0x44, .type=IO_READ},
        {.addr=0x64b8, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0171) {
    const struct CPU_State initial_cpu = {.pc=0xfb6e, .a=0xe5, .x=0x0a, .y=0xb2, .sp=0x93, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x49}, {.addr=0xfb6e, .value=0x44}, {.addr=0xfb6f, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xfb70, .a=0xac, .x=0x0a, .y=0xb2, .sp=0x93, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x49}, {.addr=0xfb6e, .value=0x44}, {.addr=0xfb6f, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb6e, .value=0x44, .type=IO_READ},
        {.addr=0xfb6f, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0172) {
    const struct CPU_State initial_cpu = {.pc=0xa218, .a=0x70, .x=0x81, .y=0xc5, .sp=0x60, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xa8}, {.addr=0xa218, .value=0x44}, {.addr=0xa219, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xa21a, .a=0xd8, .x=0x81, .y=0xc5, .sp=0x60, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xa8}, {.addr=0xa218, .value=0x44}, {.addr=0xa219, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xa218, .value=0x44, .type=IO_READ},
        {.addr=0xa219, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0173) {
    const struct CPU_State initial_cpu = {.pc=0x01ea, .a=0x57, .x=0x65, .y=0x76, .sp=0xf3, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x5d}, {.addr=0x01ea, .value=0x44}, {.addr=0x01eb, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0x0a, .x=0x65, .y=0x76, .sp=0xf3, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x5d}, {.addr=0x01ea, .value=0x44}, {.addr=0x01eb, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x01ea, .value=0x44, .type=IO_READ},
        {.addr=0x01eb, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0174) {
    const struct CPU_State initial_cpu = {.pc=0x9f1a, .a=0x29, .x=0xcf, .y=0x51, .sp=0xf9, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x51}, {.addr=0x9f1a, .value=0x44}, {.addr=0x9f1b, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x9f1c, .a=0x78, .x=0xcf, .y=0x51, .sp=0xf9, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x51}, {.addr=0x9f1a, .value=0x44}, {.addr=0x9f1b, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f1a, .value=0x44, .type=IO_READ},
        {.addr=0x9f1b, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0175) {
    const struct CPU_State initial_cpu = {.pc=0x6076, .a=0x9d, .x=0x1b, .y=0xc4, .sp=0x24, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x52}, {.addr=0x6076, .value=0x44}, {.addr=0x6077, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x6078, .a=0xcf, .x=0x1b, .y=0xc4, .sp=0x24, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x52}, {.addr=0x6076, .value=0x44}, {.addr=0x6077, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6076, .value=0x44, .type=IO_READ},
        {.addr=0x6077, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0176) {
    const struct CPU_State initial_cpu = {.pc=0xf97a, .a=0x71, .x=0x57, .y=0xe1, .sp=0xe1, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x0c}, {.addr=0xf97a, .value=0x44}, {.addr=0xf97b, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xf97c, .a=0x7d, .x=0x57, .y=0xe1, .sp=0xe1, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x0c}, {.addr=0xf97a, .value=0x44}, {.addr=0xf97b, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xf97a, .value=0x44, .type=IO_READ},
        {.addr=0xf97b, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0177) {
    const struct CPU_State initial_cpu = {.pc=0xa6f7, .a=0x87, .x=0xa5, .y=0x26, .sp=0xb7, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x09}, {.addr=0xa6f7, .value=0x44}, {.addr=0xa6f8, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xa6f9, .a=0x8e, .x=0xa5, .y=0x26, .sp=0xb7, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x09}, {.addr=0xa6f7, .value=0x44}, {.addr=0xa6f8, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6f7, .value=0x44, .type=IO_READ},
        {.addr=0xa6f8, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0178) {
    const struct CPU_State initial_cpu = {.pc=0x1983, .a=0x22, .x=0xd3, .y=0x9a, .sp=0xfb, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x22}, {.addr=0x1983, .value=0x44}, {.addr=0x1984, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x1985, .a=0x00, .x=0xd3, .y=0x9a, .sp=0xfb, .status=0x17};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x22}, {.addr=0x1983, .value=0x44}, {.addr=0x1984, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x1983, .value=0x44, .type=IO_READ},
        {.addr=0x1984, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0179) {
    const struct CPU_State initial_cpu = {.pc=0x15a7, .a=0x71, .x=0x4d, .y=0xd6, .sp=0xe0, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x99}, {.addr=0x15a7, .value=0x44}, {.addr=0x15a8, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x15a9, .a=0xe8, .x=0x4d, .y=0xd6, .sp=0xe0, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x99}, {.addr=0x15a7, .value=0x44}, {.addr=0x15a8, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x15a7, .value=0x44, .type=IO_READ},
        {.addr=0x15a8, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017A) {
    const struct CPU_State initial_cpu = {.pc=0xdeeb, .a=0x18, .x=0x4f, .y=0xc8, .sp=0xe8, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x31}, {.addr=0xdeeb, .value=0x44}, {.addr=0xdeec, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xdeed, .a=0x29, .x=0x4f, .y=0xc8, .sp=0xe8, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x31}, {.addr=0xdeeb, .value=0x44}, {.addr=0xdeec, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeeb, .value=0x44, .type=IO_READ},
        {.addr=0xdeec, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017B) {
    const struct CPU_State initial_cpu = {.pc=0xbe67, .a=0xae, .x=0xcd, .y=0xd4, .sp=0x29, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x6f}, {.addr=0xbe67, .value=0x44}, {.addr=0xbe68, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xbe69, .a=0xc1, .x=0xcd, .y=0xd4, .sp=0x29, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x6f}, {.addr=0xbe67, .value=0x44}, {.addr=0xbe68, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe67, .value=0x44, .type=IO_READ},
        {.addr=0xbe68, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd419, .a=0xa8, .x=0x97, .y=0x7e, .sp=0x16, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x18}, {.addr=0xd419, .value=0x44}, {.addr=0xd41a, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xd41b, .a=0xb0, .x=0x97, .y=0x7e, .sp=0x16, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x18}, {.addr=0xd419, .value=0x44}, {.addr=0xd41a, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd419, .value=0x44, .type=IO_READ},
        {.addr=0xd41a, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017D) {
    const struct CPU_State initial_cpu = {.pc=0x7ca3, .a=0x37, .x=0x6f, .y=0x9c, .sp=0x2f, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x3b}, {.addr=0x7ca3, .value=0x44}, {.addr=0x7ca4, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x7ca5, .a=0x0c, .x=0x6f, .y=0x9c, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x3b}, {.addr=0x7ca3, .value=0x44}, {.addr=0x7ca4, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ca3, .value=0x44, .type=IO_READ},
        {.addr=0x7ca4, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017E) {
    const struct CPU_State initial_cpu = {.pc=0x3362, .a=0x15, .x=0x69, .y=0xd9, .sp=0x1b, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x5e}, {.addr=0x3362, .value=0x44}, {.addr=0x3363, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x3364, .a=0x4b, .x=0x69, .y=0xd9, .sp=0x1b, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x5e}, {.addr=0x3362, .value=0x44}, {.addr=0x3363, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3362, .value=0x44, .type=IO_READ},
        {.addr=0x3363, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_017F) {
    const struct CPU_State initial_cpu = {.pc=0xe1d7, .a=0x0e, .x=0x80, .y=0xf7, .sp=0x4c, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x4b}, {.addr=0xe1d7, .value=0x44}, {.addr=0xe1d8, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xe1d9, .a=0x45, .x=0x80, .y=0xf7, .sp=0x4c, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x4b}, {.addr=0xe1d7, .value=0x44}, {.addr=0xe1d8, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1d7, .value=0x44, .type=IO_READ},
        {.addr=0xe1d8, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0180) {
    const struct CPU_State initial_cpu = {.pc=0x9a66, .a=0xe7, .x=0x2d, .y=0x88, .sp=0x4e, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x71}, {.addr=0x9a66, .value=0x44}, {.addr=0x9a67, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x9a68, .a=0x96, .x=0x2d, .y=0x88, .sp=0x4e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x71}, {.addr=0x9a66, .value=0x44}, {.addr=0x9a67, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a66, .value=0x44, .type=IO_READ},
        {.addr=0x9a67, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0181) {
    const struct CPU_State initial_cpu = {.pc=0xf4a3, .a=0x4a, .x=0x6c, .y=0xdb, .sp=0x17, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x9c}, {.addr=0xf4a3, .value=0x44}, {.addr=0xf4a4, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xf4a5, .a=0xd6, .x=0x6c, .y=0xdb, .sp=0x17, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x9c}, {.addr=0xf4a3, .value=0x44}, {.addr=0xf4a4, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4a3, .value=0x44, .type=IO_READ},
        {.addr=0xf4a4, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0182) {
    const struct CPU_State initial_cpu = {.pc=0x4104, .a=0x19, .x=0xc4, .y=0x33, .sp=0x99, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x86}, {.addr=0x4104, .value=0x44}, {.addr=0x4105, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x4106, .a=0x9f, .x=0xc4, .y=0x33, .sp=0x99, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x86}, {.addr=0x4104, .value=0x44}, {.addr=0x4105, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x4104, .value=0x44, .type=IO_READ},
        {.addr=0x4105, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0183) {
    const struct CPU_State initial_cpu = {.pc=0xee47, .a=0x48, .x=0x4c, .y=0xc7, .sp=0xef, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x7a}, {.addr=0xee47, .value=0x44}, {.addr=0xee48, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0x32, .x=0x4c, .y=0xc7, .sp=0xef, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x7a}, {.addr=0xee47, .value=0x44}, {.addr=0xee48, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xee47, .value=0x44, .type=IO_READ},
        {.addr=0xee48, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0184) {
    const struct CPU_State initial_cpu = {.pc=0xf265, .a=0xf3, .x=0xee, .y=0x90, .sp=0x50, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x9b}, {.addr=0xf265, .value=0x44}, {.addr=0xf266, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xf267, .a=0x68, .x=0xee, .y=0x90, .sp=0x50, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x9b}, {.addr=0xf265, .value=0x44}, {.addr=0xf266, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf265, .value=0x44, .type=IO_READ},
        {.addr=0xf266, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0185) {
    const struct CPU_State initial_cpu = {.pc=0xd649, .a=0xbf, .x=0x2a, .y=0xfd, .sp=0xa9, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xe4}, {.addr=0xd649, .value=0x44}, {.addr=0xd64a, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xd64b, .a=0x5b, .x=0x2a, .y=0xfd, .sp=0xa9, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xe4}, {.addr=0xd649, .value=0x44}, {.addr=0xd64a, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xd649, .value=0x44, .type=IO_READ},
        {.addr=0xd64a, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0186) {
    const struct CPU_State initial_cpu = {.pc=0xe03e, .a=0x83, .x=0xd3, .y=0x40, .sp=0xf0, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xce}, {.addr=0xe03e, .value=0x44}, {.addr=0xe03f, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xe040, .a=0x4d, .x=0xd3, .y=0x40, .sp=0xf0, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xce}, {.addr=0xe03e, .value=0x44}, {.addr=0xe03f, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xe03e, .value=0x44, .type=IO_READ},
        {.addr=0xe03f, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0187) {
    const struct CPU_State initial_cpu = {.pc=0x187a, .a=0x52, .x=0x54, .y=0x72, .sp=0x65, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xaf}, {.addr=0x187a, .value=0x44}, {.addr=0x187b, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x187c, .a=0xfd, .x=0x54, .y=0x72, .sp=0x65, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xaf}, {.addr=0x187a, .value=0x44}, {.addr=0x187b, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x187a, .value=0x44, .type=IO_READ},
        {.addr=0x187b, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4495, .a=0x6a, .x=0xe0, .y=0x20, .sp=0x36, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xaa}, {.addr=0x4495, .value=0x44}, {.addr=0x4496, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x4497, .a=0xc0, .x=0xe0, .y=0x20, .sp=0x36, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xaa}, {.addr=0x4495, .value=0x44}, {.addr=0x4496, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4495, .value=0x44, .type=IO_READ},
        {.addr=0x4496, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0189) {
    const struct CPU_State initial_cpu = {.pc=0x3b57, .a=0xb7, .x=0x99, .y=0x66, .sp=0x23, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x5b}, {.addr=0x3b57, .value=0x44}, {.addr=0x3b58, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x3b59, .a=0xec, .x=0x99, .y=0x66, .sp=0x23, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x5b}, {.addr=0x3b57, .value=0x44}, {.addr=0x3b58, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b57, .value=0x44, .type=IO_READ},
        {.addr=0x3b58, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018A) {
    const struct CPU_State initial_cpu = {.pc=0xc18c, .a=0x2e, .x=0xf9, .y=0x1e, .sp=0x1f, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xd7}, {.addr=0xc18c, .value=0x44}, {.addr=0xc18d, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xc18e, .a=0xf9, .x=0xf9, .y=0x1e, .sp=0x1f, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xd7}, {.addr=0xc18c, .value=0x44}, {.addr=0xc18d, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc18c, .value=0x44, .type=IO_READ},
        {.addr=0xc18d, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018B) {
    const struct CPU_State initial_cpu = {.pc=0x0625, .a=0x5f, .x=0xda, .y=0xa1, .sp=0xf0, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x57}, {.addr=0x0625, .value=0x44}, {.addr=0x0626, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x0627, .a=0x08, .x=0xda, .y=0xa1, .sp=0xf0, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x57}, {.addr=0x0625, .value=0x44}, {.addr=0x0626, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x0625, .value=0x44, .type=IO_READ},
        {.addr=0x0626, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018C) {
    const struct CPU_State initial_cpu = {.pc=0x51be, .a=0x32, .x=0x4b, .y=0xb8, .sp=0xb6, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x72}, {.addr=0x51be, .value=0x44}, {.addr=0x51bf, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x51c0, .a=0x40, .x=0x4b, .y=0xb8, .sp=0xb6, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x72}, {.addr=0x51be, .value=0x44}, {.addr=0x51bf, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x51be, .value=0x44, .type=IO_READ},
        {.addr=0x51bf, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018D) {
    const struct CPU_State initial_cpu = {.pc=0xacf3, .a=0x0d, .x=0x87, .y=0xf4, .sp=0x01, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x52}, {.addr=0xacf3, .value=0x44}, {.addr=0xacf4, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xacf5, .a=0x5f, .x=0x87, .y=0xf4, .sp=0x01, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x52}, {.addr=0xacf3, .value=0x44}, {.addr=0xacf4, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xacf3, .value=0x44, .type=IO_READ},
        {.addr=0xacf4, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7511, .a=0x6e, .x=0xc1, .y=0x4f, .sp=0x0a, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xe3}, {.addr=0x7511, .value=0x44}, {.addr=0x7512, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x7513, .a=0x8d, .x=0xc1, .y=0x4f, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xe3}, {.addr=0x7511, .value=0x44}, {.addr=0x7512, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x7511, .value=0x44, .type=IO_READ},
        {.addr=0x7512, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_018F) {
    const struct CPU_State initial_cpu = {.pc=0x6d49, .a=0xd1, .x=0x50, .y=0x11, .sp=0x13, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xab}, {.addr=0x6d49, .value=0x44}, {.addr=0x6d4a, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x6d4b, .a=0x7a, .x=0x50, .y=0x11, .sp=0x13, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xab}, {.addr=0x6d49, .value=0x44}, {.addr=0x6d4a, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d49, .value=0x44, .type=IO_READ},
        {.addr=0x6d4a, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0190) {
    const struct CPU_State initial_cpu = {.pc=0xb7ea, .a=0x7b, .x=0xc7, .y=0x32, .sp=0x34, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x18}, {.addr=0xb7ea, .value=0x44}, {.addr=0xb7eb, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xb7ec, .a=0x63, .x=0xc7, .y=0x32, .sp=0x34, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x18}, {.addr=0xb7ea, .value=0x44}, {.addr=0xb7eb, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7ea, .value=0x44, .type=IO_READ},
        {.addr=0xb7eb, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0191) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0x0d, .x=0x15, .y=0xf2, .sp=0x2f, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x92}, {.addr=0x775f, .value=0x44}, {.addr=0x7760, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x7761, .a=0x9f, .x=0x15, .y=0xf2, .sp=0x2f, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x92}, {.addr=0x775f, .value=0x44}, {.addr=0x7760, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0x44, .type=IO_READ},
        {.addr=0x7760, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0192) {
    const struct CPU_State initial_cpu = {.pc=0xd03e, .a=0xad, .x=0x64, .y=0xa1, .sp=0xb8, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0xed}, {.addr=0xd03e, .value=0x44}, {.addr=0xd03f, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xd040, .a=0x40, .x=0x64, .y=0xa1, .sp=0xb8, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0xed}, {.addr=0xd03e, .value=0x44}, {.addr=0xd03f, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd03e, .value=0x44, .type=IO_READ},
        {.addr=0xd03f, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0193) {
    const struct CPU_State initial_cpu = {.pc=0x339f, .a=0x8b, .x=0x24, .y=0x7e, .sp=0xee, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x21}, {.addr=0x339f, .value=0x44}, {.addr=0x33a0, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x33a1, .a=0xaa, .x=0x24, .y=0x7e, .sp=0xee, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x21}, {.addr=0x339f, .value=0x44}, {.addr=0x33a0, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x339f, .value=0x44, .type=IO_READ},
        {.addr=0x33a0, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0194) {
    const struct CPU_State initial_cpu = {.pc=0x8a47, .a=0xea, .x=0xc0, .y=0xc2, .sp=0xd0, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x31}, {.addr=0x8a47, .value=0x44}, {.addr=0x8a48, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x8a49, .a=0xdb, .x=0xc0, .y=0xc2, .sp=0xd0, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x31}, {.addr=0x8a47, .value=0x44}, {.addr=0x8a48, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a47, .value=0x44, .type=IO_READ},
        {.addr=0x8a48, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0195) {
    const struct CPU_State initial_cpu = {.pc=0xed9c, .a=0x1e, .x=0x9f, .y=0x75, .sp=0xe7, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x1f}, {.addr=0xed9c, .value=0x44}, {.addr=0xed9d, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xed9e, .a=0x01, .x=0x9f, .y=0x75, .sp=0xe7, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x1f}, {.addr=0xed9c, .value=0x44}, {.addr=0xed9d, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xed9c, .value=0x44, .type=IO_READ},
        {.addr=0xed9d, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0196) {
    const struct CPU_State initial_cpu = {.pc=0x2f58, .a=0x89, .x=0xe0, .y=0xb9, .sp=0xeb, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xd0}, {.addr=0x2f58, .value=0x44}, {.addr=0x2f59, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x2f5a, .a=0x59, .x=0xe0, .y=0xb9, .sp=0xeb, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xd0}, {.addr=0x2f58, .value=0x44}, {.addr=0x2f59, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f58, .value=0x44, .type=IO_READ},
        {.addr=0x2f59, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0197) {
    const struct CPU_State initial_cpu = {.pc=0x47d2, .a=0xa8, .x=0x9f, .y=0xd3, .sp=0xc7, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x5a}, {.addr=0x47d2, .value=0x44}, {.addr=0x47d3, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x47d4, .a=0xf2, .x=0x9f, .y=0xd3, .sp=0xc7, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x5a}, {.addr=0x47d2, .value=0x44}, {.addr=0x47d3, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x47d2, .value=0x44, .type=IO_READ},
        {.addr=0x47d3, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0198) {
    const struct CPU_State initial_cpu = {.pc=0x8c9c, .a=0x3a, .x=0xf1, .y=0x37, .sp=0xf7, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x13}, {.addr=0x8c9c, .value=0x44}, {.addr=0x8c9d, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x8c9e, .a=0x29, .x=0xf1, .y=0x37, .sp=0xf7, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x13}, {.addr=0x8c9c, .value=0x44}, {.addr=0x8c9d, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c9c, .value=0x44, .type=IO_READ},
        {.addr=0x8c9d, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7eff, .a=0x4b, .x=0xa7, .y=0x26, .sp=0x6a, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x16}, {.addr=0x7eff, .value=0x44}, {.addr=0x7f00, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x7f01, .a=0x5d, .x=0xa7, .y=0x26, .sp=0x6a, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x16}, {.addr=0x7eff, .value=0x44}, {.addr=0x7f00, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eff, .value=0x44, .type=IO_READ},
        {.addr=0x7f00, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019A) {
    const struct CPU_State initial_cpu = {.pc=0x0597, .a=0xb0, .x=0x8b, .y=0x67, .sp=0xae, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xa6}, {.addr=0x0597, .value=0x44}, {.addr=0x0598, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x0599, .a=0x16, .x=0x8b, .y=0x67, .sp=0xae, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xa6}, {.addr=0x0597, .value=0x44}, {.addr=0x0598, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0597, .value=0x44, .type=IO_READ},
        {.addr=0x0598, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019B) {
    const struct CPU_State initial_cpu = {.pc=0x34f7, .a=0x99, .x=0x4d, .y=0x6b, .sp=0xd8, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xa7}, {.addr=0x34f7, .value=0x44}, {.addr=0x34f8, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x34f9, .a=0x3e, .x=0x4d, .y=0x6b, .sp=0xd8, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xa7}, {.addr=0x34f7, .value=0x44}, {.addr=0x34f8, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x34f7, .value=0x44, .type=IO_READ},
        {.addr=0x34f8, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019C) {
    const struct CPU_State initial_cpu = {.pc=0x2636, .a=0x93, .x=0x9a, .y=0xb8, .sp=0xde, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0xb1}, {.addr=0x2636, .value=0x44}, {.addr=0x2637, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x2638, .a=0x22, .x=0x9a, .y=0xb8, .sp=0xde, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0xb1}, {.addr=0x2636, .value=0x44}, {.addr=0x2637, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2636, .value=0x44, .type=IO_READ},
        {.addr=0x2637, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019D) {
    const struct CPU_State initial_cpu = {.pc=0xa44d, .a=0x50, .x=0xe7, .y=0x35, .sp=0x0b, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x4c}, {.addr=0xa44d, .value=0x44}, {.addr=0xa44e, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xa44f, .a=0x1c, .x=0xe7, .y=0x35, .sp=0x0b, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x4c}, {.addr=0xa44d, .value=0x44}, {.addr=0xa44e, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xa44d, .value=0x44, .type=IO_READ},
        {.addr=0xa44e, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019E) {
    const struct CPU_State initial_cpu = {.pc=0xffef, .a=0xe2, .x=0xba, .y=0xb6, .sp=0x1e, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x35}, {.addr=0xffef, .value=0x44}, {.addr=0xfff0, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xfff1, .a=0xd7, .x=0xba, .y=0xb6, .sp=0x1e, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x35}, {.addr=0xffef, .value=0x44}, {.addr=0xfff0, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xffef, .value=0x44, .type=IO_READ},
        {.addr=0xfff0, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8dd9, .a=0xff, .x=0x75, .y=0xf8, .sp=0x3f, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x51}, {.addr=0x8dd9, .value=0x44}, {.addr=0x8dda, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x8ddb, .a=0xae, .x=0x75, .y=0xf8, .sp=0x3f, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x51}, {.addr=0x8dd9, .value=0x44}, {.addr=0x8dda, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dd9, .value=0x44, .type=IO_READ},
        {.addr=0x8dda, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x4ba6, .a=0x00, .x=0x7f, .y=0x27, .sp=0x58, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x0e}, {.addr=0x4ba6, .value=0x44}, {.addr=0x4ba7, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x4ba8, .a=0x0e, .x=0x7f, .y=0x27, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x0e}, {.addr=0x4ba6, .value=0x44}, {.addr=0x4ba7, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ba6, .value=0x44, .type=IO_READ},
        {.addr=0x4ba7, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xfeec, .a=0x94, .x=0xe9, .y=0x31, .sp=0x32, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x56}, {.addr=0xfeec, .value=0x44}, {.addr=0xfeed, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xfeee, .a=0xc2, .x=0xe9, .y=0x31, .sp=0x32, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x56}, {.addr=0xfeec, .value=0x44}, {.addr=0xfeed, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfeec, .value=0x44, .type=IO_READ},
        {.addr=0xfeed, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x69de, .a=0x59, .x=0xe3, .y=0x2f, .sp=0xe2, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x05}, {.addr=0x69de, .value=0x44}, {.addr=0x69df, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x69e0, .a=0x5c, .x=0xe3, .y=0x2f, .sp=0xe2, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x05}, {.addr=0x69de, .value=0x44}, {.addr=0x69df, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x69de, .value=0x44, .type=IO_READ},
        {.addr=0x69df, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x3ca4, .a=0xb1, .x=0xfa, .y=0x4f, .sp=0x86, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xc9}, {.addr=0x3ca4, .value=0x44}, {.addr=0x3ca5, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca6, .a=0x78, .x=0xfa, .y=0x4f, .sp=0x86, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xc9}, {.addr=0x3ca4, .value=0x44}, {.addr=0x3ca5, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca4, .value=0x44, .type=IO_READ},
        {.addr=0x3ca5, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x12f0, .a=0x38, .x=0x30, .y=0x25, .sp=0xf4, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xcc}, {.addr=0x12f0, .value=0x44}, {.addr=0x12f1, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x12f2, .a=0xf4, .x=0x30, .y=0x25, .sp=0xf4, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xcc}, {.addr=0x12f0, .value=0x44}, {.addr=0x12f1, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x12f0, .value=0x44, .type=IO_READ},
        {.addr=0x12f1, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x05e5, .a=0xdb, .x=0x52, .y=0x9b, .sp=0x3c, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x8c}, {.addr=0x05e5, .value=0x44}, {.addr=0x05e6, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x05e7, .a=0x57, .x=0x52, .y=0x9b, .sp=0x3c, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x8c}, {.addr=0x05e5, .value=0x44}, {.addr=0x05e6, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x05e5, .value=0x44, .type=IO_READ},
        {.addr=0x05e6, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x1d02, .a=0x15, .x=0x9c, .y=0x21, .sp=0xb6, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xbe}, {.addr=0x1d02, .value=0x44}, {.addr=0x1d03, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x1d04, .a=0xab, .x=0x9c, .y=0x21, .sp=0xb6, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xbe}, {.addr=0x1d02, .value=0x44}, {.addr=0x1d03, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d02, .value=0x44, .type=IO_READ},
        {.addr=0x1d03, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x0fcc, .a=0xa0, .x=0x61, .y=0xe0, .sp=0x45, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x3a}, {.addr=0x0fcc, .value=0x44}, {.addr=0x0fcd, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x0fce, .a=0x9a, .x=0x61, .y=0xe0, .sp=0x45, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x3a}, {.addr=0x0fcc, .value=0x44}, {.addr=0x0fcd, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fcc, .value=0x44, .type=IO_READ},
        {.addr=0x0fcd, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xc8d4, .a=0xc2, .x=0x60, .y=0x96, .sp=0x9e, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x3f}, {.addr=0xc8d4, .value=0x44}, {.addr=0xc8d5, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xc8d6, .a=0xfd, .x=0x60, .y=0x96, .sp=0x9e, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x3f}, {.addr=0xc8d4, .value=0x44}, {.addr=0xc8d5, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8d4, .value=0x44, .type=IO_READ},
        {.addr=0xc8d5, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x45b1, .a=0xca, .x=0x65, .y=0xd9, .sp=0xb7, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xfc}, {.addr=0x45b1, .value=0x44}, {.addr=0x45b2, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x45b3, .a=0x36, .x=0x65, .y=0xd9, .sp=0xb7, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xfc}, {.addr=0x45b1, .value=0x44}, {.addr=0x45b2, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x45b1, .value=0x44, .type=IO_READ},
        {.addr=0x45b2, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xd2c5, .a=0x1f, .x=0x1b, .y=0xe8, .sp=0x81, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xf4}, {.addr=0xd2c5, .value=0x44}, {.addr=0xd2c6, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xd2c7, .a=0xeb, .x=0x1b, .y=0xe8, .sp=0x81, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xf4}, {.addr=0xd2c5, .value=0x44}, {.addr=0xd2c6, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2c5, .value=0x44, .type=IO_READ},
        {.addr=0xd2c6, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x90cb, .a=0x21, .x=0x5c, .y=0x81, .sp=0x9a, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xbb}, {.addr=0x90cb, .value=0x44}, {.addr=0x90cc, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x90cd, .a=0x9a, .x=0x5c, .y=0x81, .sp=0x9a, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xbb}, {.addr=0x90cb, .value=0x44}, {.addr=0x90cc, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x90cb, .value=0x44, .type=IO_READ},
        {.addr=0x90cc, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdbad, .a=0x12, .x=0xda, .y=0xe3, .sp=0x9f, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xaa}, {.addr=0xdbad, .value=0x44}, {.addr=0xdbae, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xdbaf, .a=0xb8, .x=0xda, .y=0xe3, .sp=0x9f, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xaa}, {.addr=0xdbad, .value=0x44}, {.addr=0xdbae, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbad, .value=0x44, .type=IO_READ},
        {.addr=0xdbae, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x8144, .a=0xb6, .x=0x7f, .y=0x45, .sp=0x05, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x8f}, {.addr=0x8144, .value=0x44}, {.addr=0x8145, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x8146, .a=0x39, .x=0x7f, .y=0x45, .sp=0x05, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x8f}, {.addr=0x8144, .value=0x44}, {.addr=0x8145, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8144, .value=0x44, .type=IO_READ},
        {.addr=0x8145, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xe106, .a=0x4c, .x=0x46, .y=0x3d, .sp=0xec, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xdc}, {.addr=0xe106, .value=0x44}, {.addr=0xe107, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xe108, .a=0x90, .x=0x46, .y=0x3d, .sp=0xec, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xdc}, {.addr=0xe106, .value=0x44}, {.addr=0xe107, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe106, .value=0x44, .type=IO_READ},
        {.addr=0xe107, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x425a, .a=0xfc, .x=0xaf, .y=0x1e, .sp=0x33, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xa0}, {.addr=0x425a, .value=0x44}, {.addr=0x425b, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x425c, .a=0x5c, .x=0xaf, .y=0x1e, .sp=0x33, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xa0}, {.addr=0x425a, .value=0x44}, {.addr=0x425b, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x425a, .value=0x44, .type=IO_READ},
        {.addr=0x425b, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf087, .a=0xb5, .x=0xc4, .y=0xbb, .sp=0xa4, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x94}, {.addr=0xf087, .value=0x44}, {.addr=0xf088, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xf089, .a=0x21, .x=0xc4, .y=0xbb, .sp=0xa4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x94}, {.addr=0xf087, .value=0x44}, {.addr=0xf088, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xf087, .value=0x44, .type=IO_READ},
        {.addr=0xf088, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4c2b, .a=0xf6, .x=0x52, .y=0x7c, .sp=0xe8, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xde}, {.addr=0x4c2b, .value=0x44}, {.addr=0x4c2c, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x4c2d, .a=0x28, .x=0x52, .y=0x7c, .sp=0xe8, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xde}, {.addr=0x4c2b, .value=0x44}, {.addr=0x4c2c, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c2b, .value=0x44, .type=IO_READ},
        {.addr=0x4c2c, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xb9ce, .a=0xa9, .x=0xfa, .y=0x22, .sp=0xbb, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x2d}, {.addr=0xb9ce, .value=0x44}, {.addr=0xb9cf, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xb9d0, .a=0x84, .x=0xfa, .y=0x22, .sp=0xbb, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x2d}, {.addr=0xb9ce, .value=0x44}, {.addr=0xb9cf, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9ce, .value=0x44, .type=IO_READ},
        {.addr=0xb9cf, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0037, .a=0xc2, .x=0x3d, .y=0xfb, .sp=0xc9, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x44}, {.addr=0x0038, .value=0xb0}, {.addr=0x01b0, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x0039, .a=0xe9, .x=0x3d, .y=0xfb, .sp=0xc9, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x44}, {.addr=0x0038, .value=0xb0}, {.addr=0x01b0, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0037, .value=0x44, .type=IO_READ},
        {.addr=0x0038, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x9eca, .a=0x06, .x=0x7e, .y=0xfd, .sp=0x35, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xad}, {.addr=0x9eca, .value=0x44}, {.addr=0x9ecb, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x9ecc, .a=0xab, .x=0x7e, .y=0xfd, .sp=0x35, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xad}, {.addr=0x9eca, .value=0x44}, {.addr=0x9ecb, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9eca, .value=0x44, .type=IO_READ},
        {.addr=0x9ecb, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x3b42, .a=0x70, .x=0x75, .y=0x3f, .sp=0x92, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x31}, {.addr=0x3b42, .value=0x44}, {.addr=0x3b43, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x3b44, .a=0x41, .x=0x75, .y=0x3f, .sp=0x92, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x31}, {.addr=0x3b42, .value=0x44}, {.addr=0x3b43, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b42, .value=0x44, .type=IO_READ},
        {.addr=0x3b43, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xc3e2, .a=0xcc, .x=0xed, .y=0x10, .sp=0xde, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x09}, {.addr=0xc3e2, .value=0x44}, {.addr=0xc3e3, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xc3e4, .a=0xc5, .x=0xed, .y=0x10, .sp=0xde, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x09}, {.addr=0xc3e2, .value=0x44}, {.addr=0xc3e3, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3e2, .value=0x44, .type=IO_READ},
        {.addr=0xc3e3, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xc786, .a=0x78, .x=0x77, .y=0x7c, .sp=0xfd, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x13}, {.addr=0xc786, .value=0x44}, {.addr=0xc787, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xc788, .a=0x6b, .x=0x77, .y=0x7c, .sp=0xfd, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x13}, {.addr=0xc786, .value=0x44}, {.addr=0xc787, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xc786, .value=0x44, .type=IO_READ},
        {.addr=0xc787, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xd139, .a=0xa3, .x=0xcd, .y=0x5d, .sp=0x9d, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xd8}, {.addr=0xd139, .value=0x44}, {.addr=0xd13a, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xd13b, .a=0x7b, .x=0xcd, .y=0x5d, .sp=0x9d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xd8}, {.addr=0xd139, .value=0x44}, {.addr=0xd13a, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xd139, .value=0x44, .type=IO_READ},
        {.addr=0xd13a, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xe5c5, .a=0x5c, .x=0xc6, .y=0x6b, .sp=0x7f, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x89}, {.addr=0xe5c5, .value=0x44}, {.addr=0xe5c6, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xe5c7, .a=0xd5, .x=0xc6, .y=0x6b, .sp=0x7f, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x89}, {.addr=0xe5c5, .value=0x44}, {.addr=0xe5c6, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5c5, .value=0x44, .type=IO_READ},
        {.addr=0xe5c6, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xdd3c, .a=0x3c, .x=0x2a, .y=0xf2, .sp=0x46, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x19}, {.addr=0xdd3c, .value=0x44}, {.addr=0xdd3d, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xdd3e, .a=0x25, .x=0x2a, .y=0xf2, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x19}, {.addr=0xdd3c, .value=0x44}, {.addr=0xdd3d, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd3c, .value=0x44, .type=IO_READ},
        {.addr=0xdd3d, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xec5b, .a=0xcc, .x=0x5b, .y=0x93, .sp=0xd7, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x46}, {.addr=0xec5b, .value=0x44}, {.addr=0xec5c, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xec5d, .a=0x8a, .x=0x5b, .y=0x93, .sp=0xd7, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x46}, {.addr=0xec5b, .value=0x44}, {.addr=0xec5c, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xec5b, .value=0x44, .type=IO_READ},
        {.addr=0xec5c, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xaa6f, .a=0xe3, .x=0x53, .y=0x16, .sp=0xcb, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xc0}, {.addr=0xaa6f, .value=0x44}, {.addr=0xaa70, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xaa71, .a=0x23, .x=0x53, .y=0x16, .sp=0xcb, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xc0}, {.addr=0xaa6f, .value=0x44}, {.addr=0xaa70, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa6f, .value=0x44, .type=IO_READ},
        {.addr=0xaa70, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xeb7d, .a=0x75, .x=0x01, .y=0x62, .sp=0xb7, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x85}, {.addr=0xeb7d, .value=0x44}, {.addr=0xeb7e, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xeb7f, .a=0xf0, .x=0x01, .y=0x62, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x85}, {.addr=0xeb7d, .value=0x44}, {.addr=0xeb7e, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb7d, .value=0x44, .type=IO_READ},
        {.addr=0xeb7e, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x6535, .a=0xa3, .x=0xc6, .y=0x5e, .sp=0xbe, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x1d}, {.addr=0x6535, .value=0x44}, {.addr=0x6536, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6537, .a=0xbe, .x=0xc6, .y=0x5e, .sp=0xbe, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x1d}, {.addr=0x6535, .value=0x44}, {.addr=0x6536, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6535, .value=0x44, .type=IO_READ},
        {.addr=0x6536, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xfe8a, .a=0x05, .x=0xa3, .y=0xee, .sp=0x6e, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x71}, {.addr=0xfe8a, .value=0x44}, {.addr=0xfe8b, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xfe8c, .a=0x74, .x=0xa3, .y=0xee, .sp=0x6e, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x71}, {.addr=0xfe8a, .value=0x44}, {.addr=0xfe8b, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe8a, .value=0x44, .type=IO_READ},
        {.addr=0xfe8b, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x3e5b, .a=0x9f, .x=0x99, .y=0xd3, .sp=0xba, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x61}, {.addr=0x3e5b, .value=0x44}, {.addr=0x3e5c, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x3e5d, .a=0xfe, .x=0x99, .y=0xd3, .sp=0xba, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x61}, {.addr=0x3e5b, .value=0x44}, {.addr=0x3e5c, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e5b, .value=0x44, .type=IO_READ},
        {.addr=0x3e5c, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbc7e, .a=0x84, .x=0x74, .y=0xf0, .sp=0x1e, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xce}, {.addr=0xbc7e, .value=0x44}, {.addr=0xbc7f, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xbc80, .a=0x4a, .x=0x74, .y=0xf0, .sp=0x1e, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xce}, {.addr=0xbc7e, .value=0x44}, {.addr=0xbc7f, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc7e, .value=0x44, .type=IO_READ},
        {.addr=0xbc7f, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xeb36, .a=0x0c, .x=0x3a, .y=0x79, .sp=0x3e, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x4b}, {.addr=0xeb36, .value=0x44}, {.addr=0xeb37, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xeb38, .a=0x47, .x=0x3a, .y=0x79, .sp=0x3e, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x4b}, {.addr=0xeb36, .value=0x44}, {.addr=0xeb37, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb36, .value=0x44, .type=IO_READ},
        {.addr=0xeb37, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x2c5b, .a=0x9c, .x=0x65, .y=0x93, .sp=0x2a, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xf4}, {.addr=0x2c5b, .value=0x44}, {.addr=0x2c5c, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x2c5d, .a=0x68, .x=0x65, .y=0x93, .sp=0x2a, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xf4}, {.addr=0x2c5b, .value=0x44}, {.addr=0x2c5c, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c5b, .value=0x44, .type=IO_READ},
        {.addr=0x2c5c, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x4f6d, .a=0x57, .x=0xec, .y=0xa0, .sp=0x53, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x0c}, {.addr=0x4f6d, .value=0x44}, {.addr=0x4f6e, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x4f6f, .a=0x5b, .x=0xec, .y=0xa0, .sp=0x53, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x0c}, {.addr=0x4f6d, .value=0x44}, {.addr=0x4f6e, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f6d, .value=0x44, .type=IO_READ},
        {.addr=0x4f6e, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x9d9d, .a=0xa3, .x=0x13, .y=0xbe, .sp=0xf5, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xc0}, {.addr=0x9d9d, .value=0x44}, {.addr=0x9d9e, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x9d9f, .a=0x63, .x=0x13, .y=0xbe, .sp=0xf5, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xc0}, {.addr=0x9d9d, .value=0x44}, {.addr=0x9d9e, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d9d, .value=0x44, .type=IO_READ},
        {.addr=0x9d9e, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xdab3, .a=0xa2, .x=0x0e, .y=0x6a, .sp=0x39, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0xe7}, {.addr=0xdab3, .value=0x44}, {.addr=0xdab4, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xdab5, .a=0x45, .x=0x0e, .y=0x6a, .sp=0x39, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0xe7}, {.addr=0xdab3, .value=0x44}, {.addr=0xdab4, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdab3, .value=0x44, .type=IO_READ},
        {.addr=0xdab4, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf7d4, .a=0x5e, .x=0x0b, .y=0x45, .sp=0x87, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x47}, {.addr=0xf7d4, .value=0x44}, {.addr=0xf7d5, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xf7d6, .a=0x19, .x=0x0b, .y=0x45, .sp=0x87, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x47}, {.addr=0xf7d4, .value=0x44}, {.addr=0xf7d5, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7d4, .value=0x44, .type=IO_READ},
        {.addr=0xf7d5, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x2544, .a=0x78, .x=0x6f, .y=0xee, .sp=0x73, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xba}, {.addr=0x2544, .value=0x44}, {.addr=0x2545, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x2546, .a=0xc2, .x=0x6f, .y=0xee, .sp=0x73, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xba}, {.addr=0x2544, .value=0x44}, {.addr=0x2545, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x2544, .value=0x44, .type=IO_READ},
        {.addr=0x2545, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8ce7, .a=0x60, .x=0xce, .y=0xa4, .sp=0xfb, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xe6}, {.addr=0x8ce7, .value=0x44}, {.addr=0x8ce8, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x8ce9, .a=0x86, .x=0xce, .y=0xa4, .sp=0xfb, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xe6}, {.addr=0x8ce7, .value=0x44}, {.addr=0x8ce8, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ce7, .value=0x44, .type=IO_READ},
        {.addr=0x8ce8, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x1333, .a=0x28, .x=0x8f, .y=0x42, .sp=0xdf, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x43}, {.addr=0x1333, .value=0x44}, {.addr=0x1334, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x1335, .a=0x6b, .x=0x8f, .y=0x42, .sp=0xdf, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x43}, {.addr=0x1333, .value=0x44}, {.addr=0x1334, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x1333, .value=0x44, .type=IO_READ},
        {.addr=0x1334, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xc544, .a=0x2a, .x=0x9f, .y=0x6c, .sp=0xe8, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xae}, {.addr=0xc544, .value=0x44}, {.addr=0xc545, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xc546, .a=0x84, .x=0x9f, .y=0x6c, .sp=0xe8, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xae}, {.addr=0xc544, .value=0x44}, {.addr=0xc545, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xc544, .value=0x44, .type=IO_READ},
        {.addr=0xc545, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x9a90, .a=0xa2, .x=0x76, .y=0x3d, .sp=0x0f, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x91}, {.addr=0x9a90, .value=0x44}, {.addr=0x9a91, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x9a92, .a=0x33, .x=0x76, .y=0x3d, .sp=0x0f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x91}, {.addr=0x9a90, .value=0x44}, {.addr=0x9a91, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a90, .value=0x44, .type=IO_READ},
        {.addr=0x9a91, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xc48a, .a=0xfb, .x=0x60, .y=0x7d, .sp=0x95, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x05}, {.addr=0xc48a, .value=0x44}, {.addr=0xc48b, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xc48c, .a=0xfe, .x=0x60, .y=0x7d, .sp=0x95, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x05}, {.addr=0xc48a, .value=0x44}, {.addr=0xc48b, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc48a, .value=0x44, .type=IO_READ},
        {.addr=0xc48b, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb98a, .a=0x9f, .x=0xa2, .y=0xf2, .sp=0x27, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xb3}, {.addr=0xb98a, .value=0x44}, {.addr=0xb98b, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xb98c, .a=0x2c, .x=0xa2, .y=0xf2, .sp=0x27, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xb3}, {.addr=0xb98a, .value=0x44}, {.addr=0xb98b, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xb98a, .value=0x44, .type=IO_READ},
        {.addr=0xb98b, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x678a, .a=0xca, .x=0xcd, .y=0x9a, .sp=0x58, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0xf9}, {.addr=0x678a, .value=0x44}, {.addr=0x678b, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x678c, .a=0x33, .x=0xcd, .y=0x9a, .sp=0x58, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0xf9}, {.addr=0x678a, .value=0x44}, {.addr=0x678b, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x678a, .value=0x44, .type=IO_READ},
        {.addr=0x678b, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xcdde, .a=0x39, .x=0x53, .y=0x59, .sp=0xc7, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x96}, {.addr=0xcdde, .value=0x44}, {.addr=0xcddf, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xcde0, .a=0xaf, .x=0x53, .y=0x59, .sp=0xc7, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x96}, {.addr=0xcdde, .value=0x44}, {.addr=0xcddf, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdde, .value=0x44, .type=IO_READ},
        {.addr=0xcddf, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x4a39, .a=0x59, .x=0xe0, .y=0xee, .sp=0x05, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x74}, {.addr=0x4a39, .value=0x44}, {.addr=0x4a3a, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x4a3b, .a=0x2d, .x=0xe0, .y=0xee, .sp=0x05, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x74}, {.addr=0x4a39, .value=0x44}, {.addr=0x4a3a, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a39, .value=0x44, .type=IO_READ},
        {.addr=0x4a3a, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x66cd, .a=0x77, .x=0x76, .y=0xa4, .sp=0x0e, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x17}, {.addr=0x66cd, .value=0x44}, {.addr=0x66ce, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x66cf, .a=0x60, .x=0x76, .y=0xa4, .sp=0x0e, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x17}, {.addr=0x66cd, .value=0x44}, {.addr=0x66ce, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x66cd, .value=0x44, .type=IO_READ},
        {.addr=0x66ce, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xd231, .a=0x30, .x=0xc2, .y=0x28, .sp=0x07, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xbe}, {.addr=0xd231, .value=0x44}, {.addr=0xd232, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd233, .a=0x8e, .x=0xc2, .y=0x28, .sp=0x07, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xbe}, {.addr=0xd231, .value=0x44}, {.addr=0xd232, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd231, .value=0x44, .type=IO_READ},
        {.addr=0xd232, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xa585, .a=0x15, .x=0xa7, .y=0xed, .sp=0x3c, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0xa585, .value=0x44}, {.addr=0xa586, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xa587, .a=0xc7, .x=0xa7, .y=0xed, .sp=0x3c, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0xa585, .value=0x44}, {.addr=0xa586, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa585, .value=0x44, .type=IO_READ},
        {.addr=0xa586, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x012b, .a=0x37, .x=0x4e, .y=0xdc, .sp=0xb9, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x44}, {.addr=0x012c, .value=0xd4}, {.addr=0x01d4, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x012d, .a=0xf8, .x=0x4e, .y=0xdc, .sp=0xb9, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x44}, {.addr=0x012c, .value=0xd4}, {.addr=0x01d4, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x012b, .value=0x44, .type=IO_READ},
        {.addr=0x012c, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xf617, .a=0x93, .x=0x41, .y=0x65, .sp=0x7f, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xfc}, {.addr=0xf617, .value=0x44}, {.addr=0xf618, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xf619, .a=0x6f, .x=0x41, .y=0x65, .sp=0x7f, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xfc}, {.addr=0xf617, .value=0x44}, {.addr=0xf618, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf617, .value=0x44, .type=IO_READ},
        {.addr=0xf618, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x5063, .a=0x0c, .x=0xde, .y=0xa8, .sp=0x5a, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xf6}, {.addr=0x5063, .value=0x44}, {.addr=0x5064, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x5065, .a=0xfa, .x=0xde, .y=0xa8, .sp=0x5a, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xf6}, {.addr=0x5063, .value=0x44}, {.addr=0x5064, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x5063, .value=0x44, .type=IO_READ},
        {.addr=0x5064, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x6eab, .a=0x8e, .x=0x46, .y=0x20, .sp=0xad, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x48}, {.addr=0x6eab, .value=0x44}, {.addr=0x6eac, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x6ead, .a=0xc6, .x=0x46, .y=0x20, .sp=0xad, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x48}, {.addr=0x6eab, .value=0x44}, {.addr=0x6eac, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6eab, .value=0x44, .type=IO_READ},
        {.addr=0x6eac, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2135, .a=0xf4, .x=0xcb, .y=0x69, .sp=0xfc, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x9a}, {.addr=0x2135, .value=0x44}, {.addr=0x2136, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x2137, .a=0x6e, .x=0xcb, .y=0x69, .sp=0xfc, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x9a}, {.addr=0x2135, .value=0x44}, {.addr=0x2136, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2135, .value=0x44, .type=IO_READ},
        {.addr=0x2136, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x7ee5, .a=0x52, .x=0xa3, .y=0x8d, .sp=0x95, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x35}, {.addr=0x7ee5, .value=0x44}, {.addr=0x7ee6, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee7, .a=0x67, .x=0xa3, .y=0x8d, .sp=0x95, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x35}, {.addr=0x7ee5, .value=0x44}, {.addr=0x7ee6, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee5, .value=0x44, .type=IO_READ},
        {.addr=0x7ee6, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x78e9, .a=0xe3, .x=0x4a, .y=0xa5, .sp=0xd2, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x62}, {.addr=0x78e9, .value=0x44}, {.addr=0x78ea, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x78eb, .a=0x81, .x=0x4a, .y=0xa5, .sp=0xd2, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x62}, {.addr=0x78e9, .value=0x44}, {.addr=0x78ea, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x78e9, .value=0x44, .type=IO_READ},
        {.addr=0x78ea, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x28b9, .a=0x4f, .x=0x93, .y=0x18, .sp=0xf1, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x2f}, {.addr=0x28b9, .value=0x44}, {.addr=0x28ba, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x28bb, .a=0x60, .x=0x93, .y=0x18, .sp=0xf1, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x2f}, {.addr=0x28b9, .value=0x44}, {.addr=0x28ba, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x28b9, .value=0x44, .type=IO_READ},
        {.addr=0x28ba, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x26cc, .a=0xf9, .x=0xfd, .y=0xad, .sp=0x93, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x1f}, {.addr=0x26cc, .value=0x44}, {.addr=0x26cd, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x26ce, .a=0xe6, .x=0xfd, .y=0xad, .sp=0x93, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x1f}, {.addr=0x26cc, .value=0x44}, {.addr=0x26cd, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x26cc, .value=0x44, .type=IO_READ},
        {.addr=0x26cd, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x1763, .a=0xda, .x=0x7a, .y=0x6a, .sp=0xc1, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x84}, {.addr=0x1763, .value=0x44}, {.addr=0x1764, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x1765, .a=0x5e, .x=0x7a, .y=0x6a, .sp=0xc1, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x84}, {.addr=0x1763, .value=0x44}, {.addr=0x1764, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1763, .value=0x44, .type=IO_READ},
        {.addr=0x1764, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xf11b, .a=0x64, .x=0x01, .y=0x0d, .sp=0xef, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xe4}, {.addr=0xf11b, .value=0x44}, {.addr=0xf11c, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xf11d, .a=0x80, .x=0x01, .y=0x0d, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xe4}, {.addr=0xf11b, .value=0x44}, {.addr=0xf11c, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf11b, .value=0x44, .type=IO_READ},
        {.addr=0xf11c, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xdaf3, .a=0x79, .x=0x75, .y=0x03, .sp=0x22, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xcf}, {.addr=0xdaf3, .value=0x44}, {.addr=0xdaf4, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xdaf5, .a=0xb6, .x=0x75, .y=0x03, .sp=0x22, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xcf}, {.addr=0xdaf3, .value=0x44}, {.addr=0xdaf4, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xdaf3, .value=0x44, .type=IO_READ},
        {.addr=0xdaf4, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x016a, .a=0xa4, .x=0x42, .y=0x9d, .sp=0x57, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x80}, {.addr=0x016a, .value=0x44}, {.addr=0x016b, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x016c, .a=0x24, .x=0x42, .y=0x9d, .sp=0x57, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x80}, {.addr=0x016a, .value=0x44}, {.addr=0x016b, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x016a, .value=0x44, .type=IO_READ},
        {.addr=0x016b, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xb623, .a=0xc2, .x=0x98, .y=0x63, .sp=0x5d, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xc5}, {.addr=0xb623, .value=0x44}, {.addr=0xb624, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xb625, .a=0x07, .x=0x98, .y=0x63, .sp=0x5d, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xc5}, {.addr=0xb623, .value=0x44}, {.addr=0xb624, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb623, .value=0x44, .type=IO_READ},
        {.addr=0xb624, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x1bf2, .a=0x10, .x=0x76, .y=0x02, .sp=0x0a, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x6c}, {.addr=0x1bf2, .value=0x44}, {.addr=0x1bf3, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x1bf4, .a=0x7c, .x=0x76, .y=0x02, .sp=0x0a, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x6c}, {.addr=0x1bf2, .value=0x44}, {.addr=0x1bf3, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bf2, .value=0x44, .type=IO_READ},
        {.addr=0x1bf3, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xdd7a, .a=0x0f, .x=0x1a, .y=0xb9, .sp=0x4d, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x48}, {.addr=0xdd7a, .value=0x44}, {.addr=0xdd7b, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xdd7c, .a=0x47, .x=0x1a, .y=0xb9, .sp=0x4d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x48}, {.addr=0xdd7a, .value=0x44}, {.addr=0xdd7b, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd7a, .value=0x44, .type=IO_READ},
        {.addr=0xdd7b, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe446, .a=0x5e, .x=0x86, .y=0x9d, .sp=0xa8, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xe0}, {.addr=0xe446, .value=0x44}, {.addr=0xe447, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xe448, .a=0xbe, .x=0x86, .y=0x9d, .sp=0xa8, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xe0}, {.addr=0xe446, .value=0x44}, {.addr=0xe447, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe446, .value=0x44, .type=IO_READ},
        {.addr=0xe447, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x66b4, .a=0xb8, .x=0xd1, .y=0x5a, .sp=0x8a, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x4f}, {.addr=0x66b4, .value=0x44}, {.addr=0x66b5, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x66b6, .a=0xf7, .x=0xd1, .y=0x5a, .sp=0x8a, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x4f}, {.addr=0x66b4, .value=0x44}, {.addr=0x66b5, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x66b4, .value=0x44, .type=IO_READ},
        {.addr=0x66b5, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x7b03, .a=0xef, .x=0xcb, .y=0xe8, .sp=0x28, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x91}, {.addr=0x7b03, .value=0x44}, {.addr=0x7b04, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x7b05, .a=0x7e, .x=0xcb, .y=0xe8, .sp=0x28, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x91}, {.addr=0x7b03, .value=0x44}, {.addr=0x7b04, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b03, .value=0x44, .type=IO_READ},
        {.addr=0x7b04, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x1aaa, .a=0x4d, .x=0xdf, .y=0x5d, .sp=0x7c, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x91}, {.addr=0x1aaa, .value=0x44}, {.addr=0x1aab, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x1aac, .a=0xdc, .x=0xdf, .y=0x5d, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x91}, {.addr=0x1aaa, .value=0x44}, {.addr=0x1aab, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aaa, .value=0x44, .type=IO_READ},
        {.addr=0x1aab, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x5110, .a=0xb5, .x=0x81, .y=0xfc, .sp=0x3c, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xad}, {.addr=0x5110, .value=0x44}, {.addr=0x5111, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x5112, .a=0x18, .x=0x81, .y=0xfc, .sp=0x3c, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xad}, {.addr=0x5110, .value=0x44}, {.addr=0x5111, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5110, .value=0x44, .type=IO_READ},
        {.addr=0x5111, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x5956, .a=0x46, .x=0xf9, .y=0x11, .sp=0x1f, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x33}, {.addr=0x5956, .value=0x44}, {.addr=0x5957, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x5958, .a=0x75, .x=0xf9, .y=0x11, .sp=0x1f, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x33}, {.addr=0x5956, .value=0x44}, {.addr=0x5957, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5956, .value=0x44, .type=IO_READ},
        {.addr=0x5957, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x4e6d, .a=0x4e, .x=0xc3, .y=0x96, .sp=0x4a, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x1c}, {.addr=0x4e6d, .value=0x44}, {.addr=0x4e6e, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x4e6f, .a=0x52, .x=0xc3, .y=0x96, .sp=0x4a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x1c}, {.addr=0x4e6d, .value=0x44}, {.addr=0x4e6e, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e6d, .value=0x44, .type=IO_READ},
        {.addr=0x4e6e, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x5701, .a=0xda, .x=0xb4, .y=0x56, .sp=0x19, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x8b}, {.addr=0x5701, .value=0x44}, {.addr=0x5702, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x5703, .a=0x51, .x=0xb4, .y=0x56, .sp=0x19, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x8b}, {.addr=0x5701, .value=0x44}, {.addr=0x5702, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x5701, .value=0x44, .type=IO_READ},
        {.addr=0x5702, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xa22a, .a=0xe6, .x=0x92, .y=0x7b, .sp=0x0d, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x72}, {.addr=0xa22a, .value=0x44}, {.addr=0xa22b, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xa22c, .a=0x94, .x=0x92, .y=0x7b, .sp=0x0d, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x72}, {.addr=0xa22a, .value=0x44}, {.addr=0xa22b, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xa22a, .value=0x44, .type=IO_READ},
        {.addr=0xa22b, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xc8bf, .a=0xdb, .x=0x8f, .y=0xd9, .sp=0xf6, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x6c}, {.addr=0xc8bf, .value=0x44}, {.addr=0xc8c0, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xc8c1, .a=0xb7, .x=0x8f, .y=0xd9, .sp=0xf6, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x6c}, {.addr=0xc8bf, .value=0x44}, {.addr=0xc8c0, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8bf, .value=0x44, .type=IO_READ},
        {.addr=0xc8c0, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x4584, .a=0x62, .x=0x08, .y=0x08, .sp=0x49, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x18}, {.addr=0x4584, .value=0x44}, {.addr=0x4585, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x4586, .a=0x7a, .x=0x08, .y=0x08, .sp=0x49, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x18}, {.addr=0x4584, .value=0x44}, {.addr=0x4585, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x4584, .value=0x44, .type=IO_READ},
        {.addr=0x4585, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x3697, .a=0x2a, .x=0xa0, .y=0xbc, .sp=0x1f, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x09}, {.addr=0x3697, .value=0x44}, {.addr=0x3698, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x3699, .a=0x23, .x=0xa0, .y=0xbc, .sp=0x1f, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x09}, {.addr=0x3697, .value=0x44}, {.addr=0x3698, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x3697, .value=0x44, .type=IO_READ},
        {.addr=0x3698, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x4b9b, .a=0xe8, .x=0x5e, .y=0x36, .sp=0x09, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xd9}, {.addr=0x4b9b, .value=0x44}, {.addr=0x4b9c, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x4b9d, .a=0x31, .x=0x5e, .y=0x36, .sp=0x09, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xd9}, {.addr=0x4b9b, .value=0x44}, {.addr=0x4b9c, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b9b, .value=0x44, .type=IO_READ},
        {.addr=0x4b9c, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xdd73, .a=0x70, .x=0x7b, .y=0xc0, .sp=0xe7, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xff}, {.addr=0xdd73, .value=0x44}, {.addr=0xdd74, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xdd75, .a=0x8f, .x=0x7b, .y=0xc0, .sp=0xe7, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xff}, {.addr=0xdd73, .value=0x44}, {.addr=0xdd74, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd73, .value=0x44, .type=IO_READ},
        {.addr=0xdd74, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x8084, .a=0x18, .x=0x27, .y=0x00, .sp=0x72, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xa7}, {.addr=0x8084, .value=0x44}, {.addr=0x8085, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x8086, .a=0xbf, .x=0x27, .y=0x00, .sp=0x72, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xa7}, {.addr=0x8084, .value=0x44}, {.addr=0x8085, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x8084, .value=0x44, .type=IO_READ},
        {.addr=0x8085, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xf5aa, .a=0xfd, .x=0x3c, .y=0x5e, .sp=0x79, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x7a}, {.addr=0xf5aa, .value=0x44}, {.addr=0xf5ab, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xf5ac, .a=0x87, .x=0x3c, .y=0x5e, .sp=0x79, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x7a}, {.addr=0xf5aa, .value=0x44}, {.addr=0xf5ab, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5aa, .value=0x44, .type=IO_READ},
        {.addr=0xf5ab, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x3f06, .a=0x5d, .x=0x49, .y=0xcd, .sp=0xf7, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x8c}, {.addr=0x3f06, .value=0x44}, {.addr=0x3f07, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x3f08, .a=0xd1, .x=0x49, .y=0xcd, .sp=0xf7, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x8c}, {.addr=0x3f06, .value=0x44}, {.addr=0x3f07, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f06, .value=0x44, .type=IO_READ},
        {.addr=0x3f07, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xebc4, .a=0x70, .x=0x6e, .y=0x3f, .sp=0x13, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x0b}, {.addr=0xebc4, .value=0x44}, {.addr=0xebc5, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xebc6, .a=0x7b, .x=0x6e, .y=0x3f, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x0b}, {.addr=0xebc4, .value=0x44}, {.addr=0xebc5, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xebc4, .value=0x44, .type=IO_READ},
        {.addr=0xebc5, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x131f, .a=0x91, .x=0xb3, .y=0xf1, .sp=0x8a, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xbc}, {.addr=0x131f, .value=0x44}, {.addr=0x1320, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x1321, .a=0x2d, .x=0xb3, .y=0xf1, .sp=0x8a, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xbc}, {.addr=0x131f, .value=0x44}, {.addr=0x1320, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x131f, .value=0x44, .type=IO_READ},
        {.addr=0x1320, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x2a25, .a=0x2c, .x=0x86, .y=0x19, .sp=0xcf, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x0a}, {.addr=0x2a25, .value=0x44}, {.addr=0x2a26, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x2a27, .a=0x26, .x=0x86, .y=0x19, .sp=0xcf, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x0a}, {.addr=0x2a25, .value=0x44}, {.addr=0x2a26, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a25, .value=0x44, .type=IO_READ},
        {.addr=0x2a26, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3f9a, .a=0xca, .x=0x93, .y=0x5f, .sp=0xd9, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0xf5}, {.addr=0x3f9a, .value=0x44}, {.addr=0x3f9b, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x3f9c, .a=0x3f, .x=0x93, .y=0x5f, .sp=0xd9, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0xf5}, {.addr=0x3f9a, .value=0x44}, {.addr=0x3f9b, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f9a, .value=0x44, .type=IO_READ},
        {.addr=0x3f9b, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x1210, .a=0x2e, .x=0xef, .y=0x02, .sp=0x09, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x21}, {.addr=0x1210, .value=0x44}, {.addr=0x1211, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x1212, .a=0x0f, .x=0xef, .y=0x02, .sp=0x09, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x21}, {.addr=0x1210, .value=0x44}, {.addr=0x1211, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1210, .value=0x44, .type=IO_READ},
        {.addr=0x1211, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xb589, .a=0x62, .x=0x49, .y=0x89, .sp=0x50, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x78}, {.addr=0xb589, .value=0x44}, {.addr=0xb58a, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xb58b, .a=0x1a, .x=0x49, .y=0x89, .sp=0x50, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x78}, {.addr=0xb589, .value=0x44}, {.addr=0xb58a, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xb589, .value=0x44, .type=IO_READ},
        {.addr=0xb58a, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xbd86, .a=0x73, .x=0x9d, .y=0xb4, .sp=0x4b, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xf7}, {.addr=0xbd86, .value=0x44}, {.addr=0xbd87, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xbd88, .a=0x84, .x=0x9d, .y=0xb4, .sp=0x4b, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xf7}, {.addr=0xbd86, .value=0x44}, {.addr=0xbd87, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd86, .value=0x44, .type=IO_READ},
        {.addr=0xbd87, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x8da9, .a=0xb3, .x=0xec, .y=0xdf, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xa7}, {.addr=0x8da9, .value=0x44}, {.addr=0x8daa, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x8dab, .a=0x14, .x=0xec, .y=0xdf, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xa7}, {.addr=0x8da9, .value=0x44}, {.addr=0x8daa, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da9, .value=0x44, .type=IO_READ},
        {.addr=0x8daa, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2678, .a=0x52, .x=0xc4, .y=0x47, .sp=0x8f, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xe1}, {.addr=0x2678, .value=0x44}, {.addr=0x2679, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x267a, .a=0xb3, .x=0xc4, .y=0x47, .sp=0x8f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xe1}, {.addr=0x2678, .value=0x44}, {.addr=0x2679, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x2678, .value=0x44, .type=IO_READ},
        {.addr=0x2679, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0201) {
    const struct CPU_State initial_cpu = {.pc=0x9068, .a=0x8d, .x=0x4b, .y=0x16, .sp=0xd5, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x52}, {.addr=0x9068, .value=0x44}, {.addr=0x9069, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x906a, .a=0xdf, .x=0x4b, .y=0x16, .sp=0xd5, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x52}, {.addr=0x9068, .value=0x44}, {.addr=0x9069, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9068, .value=0x44, .type=IO_READ},
        {.addr=0x9069, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3663, .a=0xb7, .x=0x2a, .y=0xfa, .sp=0x73, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xc3}, {.addr=0x3663, .value=0x44}, {.addr=0x3664, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x3665, .a=0x74, .x=0x2a, .y=0xfa, .sp=0x73, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xc3}, {.addr=0x3663, .value=0x44}, {.addr=0x3664, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3663, .value=0x44, .type=IO_READ},
        {.addr=0x3664, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0203) {
    const struct CPU_State initial_cpu = {.pc=0xa25e, .a=0xf8, .x=0x89, .y=0x44, .sp=0xef, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x20}, {.addr=0xa25e, .value=0x44}, {.addr=0xa25f, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xa260, .a=0xd8, .x=0x89, .y=0x44, .sp=0xef, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x20}, {.addr=0xa25e, .value=0x44}, {.addr=0xa25f, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa25e, .value=0x44, .type=IO_READ},
        {.addr=0xa25f, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2eb7, .a=0xdd, .x=0xe5, .y=0x7c, .sp=0xdb, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xf2}, {.addr=0x2eb7, .value=0x44}, {.addr=0x2eb8, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x2eb9, .a=0x2f, .x=0xe5, .y=0x7c, .sp=0xdb, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xf2}, {.addr=0x2eb7, .value=0x44}, {.addr=0x2eb8, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eb7, .value=0x44, .type=IO_READ},
        {.addr=0x2eb8, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf4f0, .a=0xc6, .x=0x2f, .y=0xd7, .sp=0x20, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xd5}, {.addr=0xf4f0, .value=0x44}, {.addr=0xf4f1, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xf4f2, .a=0x13, .x=0x2f, .y=0xd7, .sp=0x20, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xd5}, {.addr=0xf4f0, .value=0x44}, {.addr=0xf4f1, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4f0, .value=0x44, .type=IO_READ},
        {.addr=0xf4f1, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0206) {
    const struct CPU_State initial_cpu = {.pc=0x6b15, .a=0x57, .x=0x08, .y=0x65, .sp=0xa1, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xaa}, {.addr=0x6b15, .value=0x44}, {.addr=0x6b16, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x6b17, .a=0xfd, .x=0x08, .y=0x65, .sp=0xa1, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xaa}, {.addr=0x6b15, .value=0x44}, {.addr=0x6b16, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b15, .value=0x44, .type=IO_READ},
        {.addr=0x6b16, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0207) {
    const struct CPU_State initial_cpu = {.pc=0xad34, .a=0xa3, .x=0xa0, .y=0x1f, .sp=0xf6, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x16}, {.addr=0xad34, .value=0x44}, {.addr=0xad35, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xad36, .a=0xb5, .x=0xa0, .y=0x1f, .sp=0xf6, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x16}, {.addr=0xad34, .value=0x44}, {.addr=0xad35, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xad34, .value=0x44, .type=IO_READ},
        {.addr=0xad35, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0208) {
    const struct CPU_State initial_cpu = {.pc=0x453b, .a=0xa9, .x=0x94, .y=0x59, .sp=0xe8, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xe0}, {.addr=0x453b, .value=0x44}, {.addr=0x453c, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x453d, .a=0x49, .x=0x94, .y=0x59, .sp=0xe8, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xe0}, {.addr=0x453b, .value=0x44}, {.addr=0x453c, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x453b, .value=0x44, .type=IO_READ},
        {.addr=0x453c, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0209) {
    const struct CPU_State initial_cpu = {.pc=0x3324, .a=0x88, .x=0xeb, .y=0xfd, .sp=0x11, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x99}, {.addr=0x3324, .value=0x44}, {.addr=0x3325, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x3326, .a=0x11, .x=0xeb, .y=0xfd, .sp=0x11, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x99}, {.addr=0x3324, .value=0x44}, {.addr=0x3325, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x3324, .value=0x44, .type=IO_READ},
        {.addr=0x3325, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_020A) {
    const struct CPU_State initial_cpu = {.pc=0x45a8, .a=0xe1, .x=0x5f, .y=0x72, .sp=0x45, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xd6}, {.addr=0x45a8, .value=0x44}, {.addr=0x45a9, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x45aa, .a=0x37, .x=0x5f, .y=0x72, .sp=0x45, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xd6}, {.addr=0x45a8, .value=0x44}, {.addr=0x45a9, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x45a8, .value=0x44, .type=IO_READ},
        {.addr=0x45a9, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_020B) {
    const struct CPU_State initial_cpu = {.pc=0xe9af, .a=0xce, .x=0xfc, .y=0xe9, .sp=0xb9, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0xb0}, {.addr=0xe9af, .value=0x44}, {.addr=0xe9b0, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xe9b1, .a=0x7e, .x=0xfc, .y=0xe9, .sp=0xb9, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0xb0}, {.addr=0xe9af, .value=0x44}, {.addr=0xe9b0, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9af, .value=0x44, .type=IO_READ},
        {.addr=0xe9b0, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_020C) {
    const struct CPU_State initial_cpu = {.pc=0x62b5, .a=0x32, .x=0x5f, .y=0x4f, .sp=0x1f, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xfa}, {.addr=0x62b5, .value=0x44}, {.addr=0x62b6, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x62b7, .a=0xc8, .x=0x5f, .y=0x4f, .sp=0x1f, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xfa}, {.addr=0x62b5, .value=0x44}, {.addr=0x62b6, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x62b5, .value=0x44, .type=IO_READ},
        {.addr=0x62b6, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_020D) {
    const struct CPU_State initial_cpu = {.pc=0x81ee, .a=0xbf, .x=0xd9, .y=0xbd, .sp=0x36, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x7f}, {.addr=0x81ee, .value=0x44}, {.addr=0x81ef, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x81f0, .a=0xc0, .x=0xd9, .y=0xbd, .sp=0x36, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x7f}, {.addr=0x81ee, .value=0x44}, {.addr=0x81ef, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x81ee, .value=0x44, .type=IO_READ},
        {.addr=0x81ef, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_020F) {
    const struct CPU_State initial_cpu = {.pc=0xa49e, .a=0x41, .x=0xfd, .y=0x61, .sp=0x86, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x71}, {.addr=0xa49e, .value=0x44}, {.addr=0xa49f, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xa4a0, .a=0x30, .x=0xfd, .y=0x61, .sp=0x86, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x71}, {.addr=0xa49e, .value=0x44}, {.addr=0xa49f, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xa49e, .value=0x44, .type=IO_READ},
        {.addr=0xa49f, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0210) {
    const struct CPU_State initial_cpu = {.pc=0x0189, .a=0xda, .x=0xa0, .y=0x0d, .sp=0x00, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x44}, {.addr=0x018a, .value=0xf4}, {.addr=0x01f4, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x018b, .a=0x98, .x=0xa0, .y=0x0d, .sp=0x00, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x44}, {.addr=0x018a, .value=0xf4}, {.addr=0x01f4, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0189, .value=0x44, .type=IO_READ},
        {.addr=0x018a, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0211) {
    const struct CPU_State initial_cpu = {.pc=0x5f9b, .a=0xee, .x=0xb7, .y=0xee, .sp=0xd6, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xed}, {.addr=0x5f9b, .value=0x44}, {.addr=0x5f9c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x5f9d, .a=0x03, .x=0xb7, .y=0xee, .sp=0xd6, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xed}, {.addr=0x5f9b, .value=0x44}, {.addr=0x5f9c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f9b, .value=0x44, .type=IO_READ},
        {.addr=0x5f9c, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0212) {
    const struct CPU_State initial_cpu = {.pc=0x5625, .a=0xbe, .x=0x37, .y=0xdd, .sp=0x94, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x50}, {.addr=0x5625, .value=0x44}, {.addr=0x5626, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x5627, .a=0xee, .x=0x37, .y=0xdd, .sp=0x94, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x50}, {.addr=0x5625, .value=0x44}, {.addr=0x5626, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5625, .value=0x44, .type=IO_READ},
        {.addr=0x5626, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0213) {
    const struct CPU_State initial_cpu = {.pc=0x7475, .a=0x04, .x=0x94, .y=0xb0, .sp=0x71, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x17}, {.addr=0x7475, .value=0x44}, {.addr=0x7476, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x7477, .a=0x13, .x=0x94, .y=0xb0, .sp=0x71, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x17}, {.addr=0x7475, .value=0x44}, {.addr=0x7476, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x7475, .value=0x44, .type=IO_READ},
        {.addr=0x7476, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0214) {
    const struct CPU_State initial_cpu = {.pc=0xbe3d, .a=0xd8, .x=0xea, .y=0x68, .sp=0x1a, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xd8}, {.addr=0xbe3d, .value=0x44}, {.addr=0xbe3e, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0xbe3f, .a=0x00, .x=0xea, .y=0x68, .sp=0x1a, .status=0x2a};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xd8}, {.addr=0xbe3d, .value=0x44}, {.addr=0xbe3e, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe3d, .value=0x44, .type=IO_READ},
        {.addr=0xbe3e, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0215) {
    const struct CPU_State initial_cpu = {.pc=0xfcdc, .a=0x36, .x=0x7f, .y=0x0f, .sp=0xf8, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x3a}, {.addr=0xfcdc, .value=0x44}, {.addr=0xfcdd, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xfcde, .a=0x0c, .x=0x7f, .y=0x0f, .sp=0xf8, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x3a}, {.addr=0xfcdc, .value=0x44}, {.addr=0xfcdd, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcdc, .value=0x44, .type=IO_READ},
        {.addr=0xfcdd, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0216) {
    const struct CPU_State initial_cpu = {.pc=0x2020, .a=0xe2, .x=0xa7, .y=0x57, .sp=0xc4, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xbb}, {.addr=0x2020, .value=0x44}, {.addr=0x2021, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x2022, .a=0x59, .x=0xa7, .y=0x57, .sp=0xc4, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xbb}, {.addr=0x2020, .value=0x44}, {.addr=0x2021, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2020, .value=0x44, .type=IO_READ},
        {.addr=0x2021, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0217) {
    const struct CPU_State initial_cpu = {.pc=0xcb11, .a=0x46, .x=0xef, .y=0xe8, .sp=0x8c, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x7e}, {.addr=0xcb11, .value=0x44}, {.addr=0xcb12, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xcb13, .a=0x38, .x=0xef, .y=0xe8, .sp=0x8c, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x7e}, {.addr=0xcb11, .value=0x44}, {.addr=0xcb12, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb11, .value=0x44, .type=IO_READ},
        {.addr=0xcb12, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0218) {
    const struct CPU_State initial_cpu = {.pc=0x647e, .a=0x36, .x=0x14, .y=0xab, .sp=0x52, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x31}, {.addr=0x647e, .value=0x44}, {.addr=0x647f, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x6480, .a=0x07, .x=0x14, .y=0xab, .sp=0x52, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x31}, {.addr=0x647e, .value=0x44}, {.addr=0x647f, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x647e, .value=0x44, .type=IO_READ},
        {.addr=0x647f, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0219) {
    const struct CPU_State initial_cpu = {.pc=0x6dc8, .a=0x55, .x=0xc3, .y=0xe0, .sp=0x61, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xe1}, {.addr=0x6dc8, .value=0x44}, {.addr=0x6dc9, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x6dca, .a=0xb4, .x=0xc3, .y=0xe0, .sp=0x61, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xe1}, {.addr=0x6dc8, .value=0x44}, {.addr=0x6dc9, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x6dc8, .value=0x44, .type=IO_READ},
        {.addr=0x6dc9, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021A) {
    const struct CPU_State initial_cpu = {.pc=0x57d7, .a=0x7f, .x=0x31, .y=0xb9, .sp=0x42, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x50}, {.addr=0x57d7, .value=0x44}, {.addr=0x57d8, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x57d9, .a=0x2f, .x=0x31, .y=0xb9, .sp=0x42, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x50}, {.addr=0x57d7, .value=0x44}, {.addr=0x57d8, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x57d7, .value=0x44, .type=IO_READ},
        {.addr=0x57d8, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021B) {
    const struct CPU_State initial_cpu = {.pc=0xdbce, .a=0x48, .x=0x28, .y=0x34, .sp=0x6e, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x59}, {.addr=0xdbce, .value=0x44}, {.addr=0xdbcf, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xdbd0, .a=0x11, .x=0x28, .y=0x34, .sp=0x6e, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x59}, {.addr=0xdbce, .value=0x44}, {.addr=0xdbcf, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbce, .value=0x44, .type=IO_READ},
        {.addr=0xdbcf, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021C) {
    const struct CPU_State initial_cpu = {.pc=0x5a53, .a=0x4c, .x=0xa7, .y=0xf2, .sp=0xb8, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x20}, {.addr=0x5a53, .value=0x44}, {.addr=0x5a54, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x5a55, .a=0x6c, .x=0xa7, .y=0xf2, .sp=0xb8, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x20}, {.addr=0x5a53, .value=0x44}, {.addr=0x5a54, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a53, .value=0x44, .type=IO_READ},
        {.addr=0x5a54, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021D) {
    const struct CPU_State initial_cpu = {.pc=0x40ca, .a=0x90, .x=0x89, .y=0x21, .sp=0x90, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x11}, {.addr=0x40ca, .value=0x44}, {.addr=0x40cb, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x40cc, .a=0x81, .x=0x89, .y=0x21, .sp=0x90, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x11}, {.addr=0x40ca, .value=0x44}, {.addr=0x40cb, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x40ca, .value=0x44, .type=IO_READ},
        {.addr=0x40cb, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7f27, .a=0xe7, .x=0x0c, .y=0x5a, .sp=0x6c, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x0f}, {.addr=0x7f27, .value=0x44}, {.addr=0x7f28, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x7f29, .a=0xe8, .x=0x0c, .y=0x5a, .sp=0x6c, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x0f}, {.addr=0x7f27, .value=0x44}, {.addr=0x7f28, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f27, .value=0x44, .type=IO_READ},
        {.addr=0x7f28, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_021F) {
    const struct CPU_State initial_cpu = {.pc=0xac9b, .a=0xb1, .x=0xb8, .y=0xea, .sp=0x6a, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xca}, {.addr=0xac9b, .value=0x44}, {.addr=0xac9c, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xac9d, .a=0x7b, .x=0xb8, .y=0xea, .sp=0x6a, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xca}, {.addr=0xac9b, .value=0x44}, {.addr=0xac9c, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xac9b, .value=0x44, .type=IO_READ},
        {.addr=0xac9c, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0220) {
    const struct CPU_State initial_cpu = {.pc=0x6e21, .a=0x40, .x=0x9c, .y=0x7f, .sp=0xdc, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x93}, {.addr=0x6e21, .value=0x44}, {.addr=0x6e22, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x6e23, .a=0xd3, .x=0x9c, .y=0x7f, .sp=0xdc, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x93}, {.addr=0x6e21, .value=0x44}, {.addr=0x6e22, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e21, .value=0x44, .type=IO_READ},
        {.addr=0x6e22, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0221) {
    const struct CPU_State initial_cpu = {.pc=0x5e60, .a=0x7c, .x=0x1f, .y=0x06, .sp=0x21, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xfe}, {.addr=0x5e60, .value=0x44}, {.addr=0x5e61, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x5e62, .a=0x82, .x=0x1f, .y=0x06, .sp=0x21, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xfe}, {.addr=0x5e60, .value=0x44}, {.addr=0x5e61, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e60, .value=0x44, .type=IO_READ},
        {.addr=0x5e61, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0222) {
    const struct CPU_State initial_cpu = {.pc=0x1f46, .a=0x47, .x=0x39, .y=0x83, .sp=0xff, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x60}, {.addr=0x1f46, .value=0x44}, {.addr=0x1f47, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x1f48, .a=0x27, .x=0x39, .y=0x83, .sp=0xff, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x60}, {.addr=0x1f46, .value=0x44}, {.addr=0x1f47, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f46, .value=0x44, .type=IO_READ},
        {.addr=0x1f47, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0223) {
    const struct CPU_State initial_cpu = {.pc=0x971a, .a=0xd0, .x=0x1f, .y=0xfc, .sp=0x4c, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x33}, {.addr=0x971a, .value=0x44}, {.addr=0x971b, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0xe3, .x=0x1f, .y=0xfc, .sp=0x4c, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x33}, {.addr=0x971a, .value=0x44}, {.addr=0x971b, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x971a, .value=0x44, .type=IO_READ},
        {.addr=0x971b, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0224) {
    const struct CPU_State initial_cpu = {.pc=0x706e, .a=0xd6, .x=0x29, .y=0x47, .sp=0x3e, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xa3}, {.addr=0x706e, .value=0x44}, {.addr=0x706f, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x7070, .a=0x75, .x=0x29, .y=0x47, .sp=0x3e, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xa3}, {.addr=0x706e, .value=0x44}, {.addr=0x706f, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x706e, .value=0x44, .type=IO_READ},
        {.addr=0x706f, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0225) {
    const struct CPU_State initial_cpu = {.pc=0xf612, .a=0x4b, .x=0x36, .y=0xd9, .sp=0x8c, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xf3}, {.addr=0xf612, .value=0x44}, {.addr=0xf613, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xf614, .a=0xb8, .x=0x36, .y=0xd9, .sp=0x8c, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xf3}, {.addr=0xf612, .value=0x44}, {.addr=0xf613, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xf612, .value=0x44, .type=IO_READ},
        {.addr=0xf613, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0226) {
    const struct CPU_State initial_cpu = {.pc=0xf80d, .a=0x55, .x=0x09, .y=0xcc, .sp=0xde, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xdc}, {.addr=0xf80d, .value=0x44}, {.addr=0xf80e, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xf80f, .a=0x89, .x=0x09, .y=0xcc, .sp=0xde, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xdc}, {.addr=0xf80d, .value=0x44}, {.addr=0xf80e, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf80d, .value=0x44, .type=IO_READ},
        {.addr=0xf80e, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0227) {
    const struct CPU_State initial_cpu = {.pc=0xbf2e, .a=0x57, .x=0x1c, .y=0x81, .sp=0xfa, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x1c}, {.addr=0xbf2e, .value=0x44}, {.addr=0xbf2f, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xbf30, .a=0x4b, .x=0x1c, .y=0x81, .sp=0xfa, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x1c}, {.addr=0xbf2e, .value=0x44}, {.addr=0xbf2f, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf2e, .value=0x44, .type=IO_READ},
        {.addr=0xbf2f, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0228) {
    const struct CPU_State initial_cpu = {.pc=0x1d28, .a=0xb2, .x=0x0b, .y=0x0a, .sp=0xf5, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x39}, {.addr=0x1d28, .value=0x44}, {.addr=0x1d29, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x1d2a, .a=0x8b, .x=0x0b, .y=0x0a, .sp=0xf5, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x39}, {.addr=0x1d28, .value=0x44}, {.addr=0x1d29, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d28, .value=0x44, .type=IO_READ},
        {.addr=0x1d29, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0229) {
    const struct CPU_State initial_cpu = {.pc=0x9de2, .a=0xbf, .x=0x33, .y=0x67, .sp=0xb8, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x8a}, {.addr=0x9de2, .value=0x44}, {.addr=0x9de3, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x9de4, .a=0x35, .x=0x33, .y=0x67, .sp=0xb8, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x8a}, {.addr=0x9de2, .value=0x44}, {.addr=0x9de3, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x9de2, .value=0x44, .type=IO_READ},
        {.addr=0x9de3, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_022A) {
    const struct CPU_State initial_cpu = {.pc=0xac0d, .a=0x94, .x=0x31, .y=0x08, .sp=0x0d, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xf7}, {.addr=0xac0d, .value=0x44}, {.addr=0xac0e, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xac0f, .a=0x63, .x=0x31, .y=0x08, .sp=0x0d, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xf7}, {.addr=0xac0d, .value=0x44}, {.addr=0xac0e, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xac0d, .value=0x44, .type=IO_READ},
        {.addr=0xac0e, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_022B) {
    const struct CPU_State initial_cpu = {.pc=0x2b6a, .a=0xa5, .x=0x43, .y=0xb0, .sp=0x74, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x65}, {.addr=0x2b6a, .value=0x44}, {.addr=0x2b6b, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x2b6c, .a=0xc0, .x=0x43, .y=0xb0, .sp=0x74, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x65}, {.addr=0x2b6a, .value=0x44}, {.addr=0x2b6b, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b6a, .value=0x44, .type=IO_READ},
        {.addr=0x2b6b, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_022C) {
    const struct CPU_State initial_cpu = {.pc=0xb84e, .a=0xb9, .x=0xc5, .y=0x25, .sp=0xed, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x47}, {.addr=0xb84e, .value=0x44}, {.addr=0xb84f, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xb850, .a=0xfe, .x=0xc5, .y=0x25, .sp=0xed, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x47}, {.addr=0xb84e, .value=0x44}, {.addr=0xb84f, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84e, .value=0x44, .type=IO_READ},
        {.addr=0xb84f, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_022E) {
    const struct CPU_State initial_cpu = {.pc=0xbb06, .a=0x22, .x=0xde, .y=0xb3, .sp=0xbe, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x77}, {.addr=0xbb06, .value=0x44}, {.addr=0xbb07, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xbb08, .a=0x55, .x=0xde, .y=0xb3, .sp=0xbe, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x77}, {.addr=0xbb06, .value=0x44}, {.addr=0xbb07, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb06, .value=0x44, .type=IO_READ},
        {.addr=0xbb07, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_022F) {
    const struct CPU_State initial_cpu = {.pc=0x089c, .a=0x11, .x=0x45, .y=0x3a, .sp=0xb4, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0xf5}, {.addr=0x089c, .value=0x44}, {.addr=0x089d, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x089e, .a=0xe4, .x=0x45, .y=0x3a, .sp=0xb4, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0xf5}, {.addr=0x089c, .value=0x44}, {.addr=0x089d, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x089c, .value=0x44, .type=IO_READ},
        {.addr=0x089d, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0230) {
    const struct CPU_State initial_cpu = {.pc=0xdb08, .a=0x8d, .x=0x40, .y=0x66, .sp=0xa6, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x8a}, {.addr=0xdb08, .value=0x44}, {.addr=0xdb09, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xdb0a, .a=0x07, .x=0x40, .y=0x66, .sp=0xa6, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x8a}, {.addr=0xdb08, .value=0x44}, {.addr=0xdb09, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb08, .value=0x44, .type=IO_READ},
        {.addr=0xdb09, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0231) {
    const struct CPU_State initial_cpu = {.pc=0x83d2, .a=0xe4, .x=0xe8, .y=0x4f, .sp=0x6b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xba}, {.addr=0x83d2, .value=0x44}, {.addr=0x83d3, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x83d4, .a=0x5e, .x=0xe8, .y=0x4f, .sp=0x6b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xba}, {.addr=0x83d2, .value=0x44}, {.addr=0x83d3, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x83d2, .value=0x44, .type=IO_READ},
        {.addr=0x83d3, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0232) {
    const struct CPU_State initial_cpu = {.pc=0xdbc0, .a=0xaa, .x=0x4d, .y=0x95, .sp=0x1f, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x16}, {.addr=0xdbc0, .value=0x44}, {.addr=0xdbc1, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xdbc2, .a=0xbc, .x=0x4d, .y=0x95, .sp=0x1f, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x16}, {.addr=0xdbc0, .value=0x44}, {.addr=0xdbc1, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbc0, .value=0x44, .type=IO_READ},
        {.addr=0xdbc1, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0233) {
    const struct CPU_State initial_cpu = {.pc=0xa631, .a=0x5d, .x=0xcd, .y=0x84, .sp=0x8d, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x03}, {.addr=0xa631, .value=0x44}, {.addr=0xa632, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xa633, .a=0x5e, .x=0xcd, .y=0x84, .sp=0x8d, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x03}, {.addr=0xa631, .value=0x44}, {.addr=0xa632, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa631, .value=0x44, .type=IO_READ},
        {.addr=0xa632, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0234) {
    const struct CPU_State initial_cpu = {.pc=0xc466, .a=0x29, .x=0x80, .y=0xb3, .sp=0x9a, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xbd}, {.addr=0xc466, .value=0x44}, {.addr=0xc467, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xc468, .a=0x94, .x=0x80, .y=0xb3, .sp=0x9a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xbd}, {.addr=0xc466, .value=0x44}, {.addr=0xc467, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc466, .value=0x44, .type=IO_READ},
        {.addr=0xc467, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0235) {
    const struct CPU_State initial_cpu = {.pc=0xb023, .a=0xc7, .x=0xc4, .y=0x01, .sp=0x4b, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x32}, {.addr=0xb023, .value=0x44}, {.addr=0xb024, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xb025, .a=0xf5, .x=0xc4, .y=0x01, .sp=0x4b, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x32}, {.addr=0xb023, .value=0x44}, {.addr=0xb024, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb023, .value=0x44, .type=IO_READ},
        {.addr=0xb024, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0785, .a=0x51, .x=0x38, .y=0x95, .sp=0xd2, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x83}, {.addr=0x0785, .value=0x44}, {.addr=0x0786, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x0787, .a=0xd2, .x=0x38, .y=0x95, .sp=0xd2, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x83}, {.addr=0x0785, .value=0x44}, {.addr=0x0786, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0785, .value=0x44, .type=IO_READ},
        {.addr=0x0786, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6f7f, .a=0xda, .x=0xe1, .y=0xb9, .sp=0x1e, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xfc}, {.addr=0x6f7f, .value=0x44}, {.addr=0x6f80, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x6f81, .a=0x26, .x=0xe1, .y=0xb9, .sp=0x1e, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xfc}, {.addr=0x6f7f, .value=0x44}, {.addr=0x6f80, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f7f, .value=0x44, .type=IO_READ},
        {.addr=0x6f80, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0238) {
    const struct CPU_State initial_cpu = {.pc=0x8d32, .a=0x3c, .x=0x6b, .y=0xed, .sp=0xfa, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0xd9}, {.addr=0x8d32, .value=0x44}, {.addr=0x8d33, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x8d34, .a=0xe5, .x=0x6b, .y=0xed, .sp=0xfa, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0xd9}, {.addr=0x8d32, .value=0x44}, {.addr=0x8d33, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d32, .value=0x44, .type=IO_READ},
        {.addr=0x8d33, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023A) {
    const struct CPU_State initial_cpu = {.pc=0xfb85, .a=0x90, .x=0x8a, .y=0x7c, .sp=0x72, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x2d}, {.addr=0xfb85, .value=0x44}, {.addr=0xfb86, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xfb87, .a=0xbd, .x=0x8a, .y=0x7c, .sp=0x72, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x2d}, {.addr=0xfb85, .value=0x44}, {.addr=0xfb86, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb85, .value=0x44, .type=IO_READ},
        {.addr=0xfb86, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023B) {
    const struct CPU_State initial_cpu = {.pc=0x5051, .a=0x16, .x=0x9e, .y=0xfd, .sp=0x0a, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x0e}, {.addr=0x5051, .value=0x44}, {.addr=0x5052, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x5053, .a=0x18, .x=0x9e, .y=0xfd, .sp=0x0a, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x0e}, {.addr=0x5051, .value=0x44}, {.addr=0x5052, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5051, .value=0x44, .type=IO_READ},
        {.addr=0x5052, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023C) {
    const struct CPU_State initial_cpu = {.pc=0x046d, .a=0x74, .x=0xa4, .y=0x77, .sp=0x52, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xfc}, {.addr=0x046d, .value=0x44}, {.addr=0x046e, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x046f, .a=0x88, .x=0xa4, .y=0x77, .sp=0x52, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xfc}, {.addr=0x046d, .value=0x44}, {.addr=0x046e, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x046d, .value=0x44, .type=IO_READ},
        {.addr=0x046e, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023D) {
    const struct CPU_State initial_cpu = {.pc=0x1a19, .a=0x86, .x=0x5c, .y=0xe3, .sp=0xde, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x06}, {.addr=0x1a19, .value=0x44}, {.addr=0x1a1a, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x1a1b, .a=0x80, .x=0x5c, .y=0xe3, .sp=0xde, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x06}, {.addr=0x1a19, .value=0x44}, {.addr=0x1a1a, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a19, .value=0x44, .type=IO_READ},
        {.addr=0x1a1a, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023E) {
    const struct CPU_State initial_cpu = {.pc=0x3628, .a=0x6e, .x=0x92, .y=0xf0, .sp=0x48, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x6f}, {.addr=0x3628, .value=0x44}, {.addr=0x3629, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x362a, .a=0x01, .x=0x92, .y=0xf0, .sp=0x48, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x6f}, {.addr=0x3628, .value=0x44}, {.addr=0x3629, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3628, .value=0x44, .type=IO_READ},
        {.addr=0x3629, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_023F) {
    const struct CPU_State initial_cpu = {.pc=0xce77, .a=0x89, .x=0x73, .y=0x62, .sp=0xff, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xd0}, {.addr=0xce77, .value=0x44}, {.addr=0xce78, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xce79, .a=0x59, .x=0x73, .y=0x62, .sp=0xff, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xd0}, {.addr=0xce77, .value=0x44}, {.addr=0xce78, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xce77, .value=0x44, .type=IO_READ},
        {.addr=0xce78, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0240) {
    const struct CPU_State initial_cpu = {.pc=0x43cf, .a=0x8e, .x=0x98, .y=0x59, .sp=0x97, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x49}, {.addr=0x43cf, .value=0x44}, {.addr=0x43d0, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x43d1, .a=0xc7, .x=0x98, .y=0x59, .sp=0x97, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x49}, {.addr=0x43cf, .value=0x44}, {.addr=0x43d0, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x43cf, .value=0x44, .type=IO_READ},
        {.addr=0x43d0, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0241) {
    const struct CPU_State initial_cpu = {.pc=0x3e6a, .a=0x05, .x=0x46, .y=0x2c, .sp=0x6c, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xbf}, {.addr=0x3e6a, .value=0x44}, {.addr=0x3e6b, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3e6c, .a=0xba, .x=0x46, .y=0x2c, .sp=0x6c, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xbf}, {.addr=0x3e6a, .value=0x44}, {.addr=0x3e6b, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e6a, .value=0x44, .type=IO_READ},
        {.addr=0x3e6b, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0243) {
    const struct CPU_State initial_cpu = {.pc=0x969f, .a=0x68, .x=0x73, .y=0x7a, .sp=0xe7, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x78}, {.addr=0x969f, .value=0x44}, {.addr=0x96a0, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x96a1, .a=0x10, .x=0x73, .y=0x7a, .sp=0xe7, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x78}, {.addr=0x969f, .value=0x44}, {.addr=0x96a0, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x969f, .value=0x44, .type=IO_READ},
        {.addr=0x96a0, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0244) {
    const struct CPU_State initial_cpu = {.pc=0xb5b5, .a=0xe9, .x=0x0f, .y=0x2f, .sp=0x4e, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xb3}, {.addr=0xb5b5, .value=0x44}, {.addr=0xb5b6, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xb5b7, .a=0x5a, .x=0x0f, .y=0x2f, .sp=0x4e, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xb3}, {.addr=0xb5b5, .value=0x44}, {.addr=0xb5b6, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5b5, .value=0x44, .type=IO_READ},
        {.addr=0xb5b6, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0245) {
    const struct CPU_State initial_cpu = {.pc=0x5ca3, .a=0x35, .x=0x7a, .y=0x27, .sp=0xc8, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xd9}, {.addr=0x5ca3, .value=0x44}, {.addr=0x5ca4, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x5ca5, .a=0xec, .x=0x7a, .y=0x27, .sp=0xc8, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xd9}, {.addr=0x5ca3, .value=0x44}, {.addr=0x5ca4, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ca3, .value=0x44, .type=IO_READ},
        {.addr=0x5ca4, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0246) {
    const struct CPU_State initial_cpu = {.pc=0x8e04, .a=0xd8, .x=0x97, .y=0xb6, .sp=0x87, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xdd}, {.addr=0x8e04, .value=0x44}, {.addr=0x8e05, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x8e06, .a=0x05, .x=0x97, .y=0xb6, .sp=0x87, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xdd}, {.addr=0x8e04, .value=0x44}, {.addr=0x8e05, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e04, .value=0x44, .type=IO_READ},
        {.addr=0x8e05, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0247) {
    const struct CPU_State initial_cpu = {.pc=0x744c, .a=0xbb, .x=0x9c, .y=0xec, .sp=0x7e, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x84}, {.addr=0x744c, .value=0x44}, {.addr=0x744d, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x744e, .a=0x3f, .x=0x9c, .y=0xec, .sp=0x7e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x84}, {.addr=0x744c, .value=0x44}, {.addr=0x744d, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x744c, .value=0x44, .type=IO_READ},
        {.addr=0x744d, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0248) {
    const struct CPU_State initial_cpu = {.pc=0xef83, .a=0x0d, .x=0x62, .y=0xd5, .sp=0x53, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x0b}, {.addr=0xef83, .value=0x44}, {.addr=0xef84, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xef85, .a=0x06, .x=0x62, .y=0xd5, .sp=0x53, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x0b}, {.addr=0xef83, .value=0x44}, {.addr=0xef84, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xef83, .value=0x44, .type=IO_READ},
        {.addr=0xef84, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0249) {
    const struct CPU_State initial_cpu = {.pc=0xe554, .a=0x91, .x=0xf4, .y=0xa6, .sp=0x34, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x1c}, {.addr=0xe554, .value=0x44}, {.addr=0xe555, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xe556, .a=0x8d, .x=0xf4, .y=0xa6, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x1c}, {.addr=0xe554, .value=0x44}, {.addr=0xe555, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe554, .value=0x44, .type=IO_READ},
        {.addr=0xe555, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024A) {
    const struct CPU_State initial_cpu = {.pc=0xb9bd, .a=0xc9, .x=0x11, .y=0x51, .sp=0x2f, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xcf}, {.addr=0xb9bd, .value=0x44}, {.addr=0xb9be, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xb9bf, .a=0x06, .x=0x11, .y=0x51, .sp=0x2f, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xcf}, {.addr=0xb9bd, .value=0x44}, {.addr=0xb9be, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9bd, .value=0x44, .type=IO_READ},
        {.addr=0xb9be, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024B) {
    const struct CPU_State initial_cpu = {.pc=0xe379, .a=0x79, .x=0x6c, .y=0x97, .sp=0x89, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0xbd}, {.addr=0xe379, .value=0x44}, {.addr=0xe37a, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xe37b, .a=0xc4, .x=0x6c, .y=0x97, .sp=0x89, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0xbd}, {.addr=0xe379, .value=0x44}, {.addr=0xe37a, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xe379, .value=0x44, .type=IO_READ},
        {.addr=0xe37a, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024C) {
    const struct CPU_State initial_cpu = {.pc=0x253c, .a=0x6c, .x=0x89, .y=0x71, .sp=0x97, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x6f}, {.addr=0x253c, .value=0x44}, {.addr=0x253d, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x253e, .a=0x03, .x=0x89, .y=0x71, .sp=0x97, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x6f}, {.addr=0x253c, .value=0x44}, {.addr=0x253d, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x253c, .value=0x44, .type=IO_READ},
        {.addr=0x253d, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024D) {
    const struct CPU_State initial_cpu = {.pc=0x7905, .a=0xcd, .x=0xe3, .y=0x85, .sp=0xce, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x8d}, {.addr=0x7905, .value=0x44}, {.addr=0x7906, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x7907, .a=0x40, .x=0xe3, .y=0x85, .sp=0xce, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x8d}, {.addr=0x7905, .value=0x44}, {.addr=0x7906, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x7905, .value=0x44, .type=IO_READ},
        {.addr=0x7906, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024E) {
    const struct CPU_State initial_cpu = {.pc=0xbf87, .a=0x75, .x=0x9b, .y=0x5f, .sp=0x7a, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0xcb}, {.addr=0xbf87, .value=0x44}, {.addr=0xbf88, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xbf89, .a=0xbe, .x=0x9b, .y=0x5f, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0xcb}, {.addr=0xbf87, .value=0x44}, {.addr=0xbf88, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf87, .value=0x44, .type=IO_READ},
        {.addr=0xbf88, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_024F) {
    const struct CPU_State initial_cpu = {.pc=0x0b99, .a=0xcd, .x=0x80, .y=0xed, .sp=0xa0, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xe5}, {.addr=0x0b99, .value=0x44}, {.addr=0x0b9a, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x0b9b, .a=0x28, .x=0x80, .y=0xed, .sp=0xa0, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xe5}, {.addr=0x0b99, .value=0x44}, {.addr=0x0b9a, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b99, .value=0x44, .type=IO_READ},
        {.addr=0x0b9a, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0250) {
    const struct CPU_State initial_cpu = {.pc=0x5ad0, .a=0xae, .x=0x9f, .y=0x01, .sp=0x16, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xf5}, {.addr=0x5ad0, .value=0x44}, {.addr=0x5ad1, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x5ad2, .a=0x5b, .x=0x9f, .y=0x01, .sp=0x16, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xf5}, {.addr=0x5ad0, .value=0x44}, {.addr=0x5ad1, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ad0, .value=0x44, .type=IO_READ},
        {.addr=0x5ad1, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0251) {
    const struct CPU_State initial_cpu = {.pc=0xc371, .a=0x44, .x=0x0e, .y=0xde, .sp=0x34, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xd4}, {.addr=0xc371, .value=0x44}, {.addr=0xc372, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xc373, .a=0x90, .x=0x0e, .y=0xde, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xd4}, {.addr=0xc371, .value=0x44}, {.addr=0xc372, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc371, .value=0x44, .type=IO_READ},
        {.addr=0xc372, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0252) {
    const struct CPU_State initial_cpu = {.pc=0xb85f, .a=0x75, .x=0x4d, .y=0xe3, .sp=0x6d, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xc9}, {.addr=0xb85f, .value=0x44}, {.addr=0xb860, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xb861, .a=0xbc, .x=0x4d, .y=0xe3, .sp=0x6d, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xc9}, {.addr=0xb85f, .value=0x44}, {.addr=0xb860, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb85f, .value=0x44, .type=IO_READ},
        {.addr=0xb860, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0253) {
    const struct CPU_State initial_cpu = {.pc=0x8bc4, .a=0x02, .x=0x6d, .y=0xc7, .sp=0x7d, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x5b}, {.addr=0x8bc4, .value=0x44}, {.addr=0x8bc5, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x8bc6, .a=0x59, .x=0x6d, .y=0xc7, .sp=0x7d, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x5b}, {.addr=0x8bc4, .value=0x44}, {.addr=0x8bc5, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bc4, .value=0x44, .type=IO_READ},
        {.addr=0x8bc5, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0254) {
    const struct CPU_State initial_cpu = {.pc=0x3de9, .a=0xbc, .x=0x2f, .y=0x8d, .sp=0x7f, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x20}, {.addr=0x3de9, .value=0x44}, {.addr=0x3dea, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x3deb, .a=0x9c, .x=0x2f, .y=0x8d, .sp=0x7f, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x20}, {.addr=0x3de9, .value=0x44}, {.addr=0x3dea, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x3de9, .value=0x44, .type=IO_READ},
        {.addr=0x3dea, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0255) {
    const struct CPU_State initial_cpu = {.pc=0x263e, .a=0xa4, .x=0xdd, .y=0xcc, .sp=0x1a, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x05}, {.addr=0x263e, .value=0x44}, {.addr=0x263f, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x2640, .a=0xa1, .x=0xdd, .y=0xcc, .sp=0x1a, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x05}, {.addr=0x263e, .value=0x44}, {.addr=0x263f, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x263e, .value=0x44, .type=IO_READ},
        {.addr=0x263f, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0256) {
    const struct CPU_State initial_cpu = {.pc=0x40cc, .a=0x90, .x=0xa9, .y=0xb5, .sp=0x67, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x0b}, {.addr=0x40cc, .value=0x44}, {.addr=0x40cd, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x40ce, .a=0x9b, .x=0xa9, .y=0xb5, .sp=0x67, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x0b}, {.addr=0x40cc, .value=0x44}, {.addr=0x40cd, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x40cc, .value=0x44, .type=IO_READ},
        {.addr=0x40cd, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0257) {
    const struct CPU_State initial_cpu = {.pc=0xfef6, .a=0x05, .x=0xe1, .y=0x76, .sp=0x74, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x4a}, {.addr=0xfef6, .value=0x44}, {.addr=0xfef7, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xfef8, .a=0x4f, .x=0xe1, .y=0x76, .sp=0x74, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x4a}, {.addr=0xfef6, .value=0x44}, {.addr=0xfef7, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xfef6, .value=0x44, .type=IO_READ},
        {.addr=0xfef7, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0258) {
    const struct CPU_State initial_cpu = {.pc=0xc370, .a=0x00, .x=0x17, .y=0x24, .sp=0x5c, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x47}, {.addr=0xc370, .value=0x44}, {.addr=0xc371, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xc372, .a=0x47, .x=0x17, .y=0x24, .sp=0x5c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x47}, {.addr=0xc370, .value=0x44}, {.addr=0xc371, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc370, .value=0x44, .type=IO_READ},
        {.addr=0xc371, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0259) {
    const struct CPU_State initial_cpu = {.pc=0x00e5, .a=0x7f, .x=0xcc, .y=0xec, .sp=0x33, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x94}, {.addr=0x00e5, .value=0x44}, {.addr=0x00e6, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x00e7, .a=0xeb, .x=0xcc, .y=0xec, .sp=0x33, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x94}, {.addr=0x00e5, .value=0x44}, {.addr=0x00e6, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x00e5, .value=0x44, .type=IO_READ},
        {.addr=0x00e6, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025A) {
    const struct CPU_State initial_cpu = {.pc=0x164c, .a=0xa9, .x=0xff, .y=0xda, .sp=0xfc, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xba}, {.addr=0x164c, .value=0x44}, {.addr=0x164d, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x164e, .a=0x13, .x=0xff, .y=0xda, .sp=0xfc, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xba}, {.addr=0x164c, .value=0x44}, {.addr=0x164d, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x164c, .value=0x44, .type=IO_READ},
        {.addr=0x164d, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025B) {
    const struct CPU_State initial_cpu = {.pc=0x69e0, .a=0xba, .x=0xf6, .y=0xbf, .sp=0x5a, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xfa}, {.addr=0x69e0, .value=0x44}, {.addr=0x69e1, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x69e2, .a=0x40, .x=0xf6, .y=0xbf, .sp=0x5a, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xfa}, {.addr=0x69e0, .value=0x44}, {.addr=0x69e1, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x69e0, .value=0x44, .type=IO_READ},
        {.addr=0x69e1, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025C) {
    const struct CPU_State initial_cpu = {.pc=0x9102, .a=0x01, .x=0x43, .y=0x36, .sp=0x1c, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x9c}, {.addr=0x9102, .value=0x44}, {.addr=0x9103, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x9104, .a=0x9d, .x=0x43, .y=0x36, .sp=0x1c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x9c}, {.addr=0x9102, .value=0x44}, {.addr=0x9103, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x9102, .value=0x44, .type=IO_READ},
        {.addr=0x9103, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025D) {
    const struct CPU_State initial_cpu = {.pc=0x16cc, .a=0x90, .x=0x5c, .y=0xd3, .sp=0x31, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xe2}, {.addr=0x16cc, .value=0x44}, {.addr=0x16cd, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x16ce, .a=0x72, .x=0x5c, .y=0xd3, .sp=0x31, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xe2}, {.addr=0x16cc, .value=0x44}, {.addr=0x16cd, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x16cc, .value=0x44, .type=IO_READ},
        {.addr=0x16cd, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025E) {
    const struct CPU_State initial_cpu = {.pc=0xa21b, .a=0x41, .x=0x4c, .y=0x1c, .sp=0x0c, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x30}, {.addr=0xa21b, .value=0x44}, {.addr=0xa21c, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xa21d, .a=0x71, .x=0x4c, .y=0x1c, .sp=0x0c, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x30}, {.addr=0xa21b, .value=0x44}, {.addr=0xa21c, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa21b, .value=0x44, .type=IO_READ},
        {.addr=0xa21c, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_025F) {
    const struct CPU_State initial_cpu = {.pc=0x6547, .a=0xd3, .x=0x09, .y=0x7c, .sp=0xe3, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x98}, {.addr=0x6547, .value=0x44}, {.addr=0x6548, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x6549, .a=0x4b, .x=0x09, .y=0x7c, .sp=0xe3, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x98}, {.addr=0x6547, .value=0x44}, {.addr=0x6548, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6547, .value=0x44, .type=IO_READ},
        {.addr=0x6548, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0261) {
    const struct CPU_State initial_cpu = {.pc=0x99f2, .a=0xfb, .x=0x27, .y=0xd0, .sp=0xa7, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xe9}, {.addr=0x99f2, .value=0x44}, {.addr=0x99f3, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x99f4, .a=0x12, .x=0x27, .y=0xd0, .sp=0xa7, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xe9}, {.addr=0x99f2, .value=0x44}, {.addr=0x99f3, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x99f2, .value=0x44, .type=IO_READ},
        {.addr=0x99f3, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7ffb, .a=0x61, .x=0x9e, .y=0xe3, .sp=0x01, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0xa0}, {.addr=0x7ffb, .value=0x44}, {.addr=0x7ffc, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x7ffd, .a=0xc1, .x=0x9e, .y=0xe3, .sp=0x01, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0xa0}, {.addr=0x7ffb, .value=0x44}, {.addr=0x7ffc, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ffb, .value=0x44, .type=IO_READ},
        {.addr=0x7ffc, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0263) {
    const struct CPU_State initial_cpu = {.pc=0x5c5b, .a=0x0b, .x=0x08, .y=0x71, .sp=0xeb, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x13}, {.addr=0x5c5b, .value=0x44}, {.addr=0x5c5c, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x5c5d, .a=0x18, .x=0x08, .y=0x71, .sp=0xeb, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x13}, {.addr=0x5c5b, .value=0x44}, {.addr=0x5c5c, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c5b, .value=0x44, .type=IO_READ},
        {.addr=0x5c5c, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0264) {
    const struct CPU_State initial_cpu = {.pc=0xc1c6, .a=0x4e, .x=0x81, .y=0x9b, .sp=0xa0, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x8d}, {.addr=0xc1c6, .value=0x44}, {.addr=0xc1c7, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xc1c8, .a=0xc3, .x=0x81, .y=0x9b, .sp=0xa0, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x8d}, {.addr=0xc1c6, .value=0x44}, {.addr=0xc1c7, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1c6, .value=0x44, .type=IO_READ},
        {.addr=0xc1c7, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6e73, .a=0x68, .x=0xd9, .y=0x0d, .sp=0xf2, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xe9}, {.addr=0x6e73, .value=0x44}, {.addr=0x6e74, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x6e75, .a=0x81, .x=0xd9, .y=0x0d, .sp=0xf2, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xe9}, {.addr=0x6e73, .value=0x44}, {.addr=0x6e74, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e73, .value=0x44, .type=IO_READ},
        {.addr=0x6e74, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0266) {
    const struct CPU_State initial_cpu = {.pc=0x4067, .a=0xcc, .x=0xa1, .y=0xdb, .sp=0xb8, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x2a}, {.addr=0x4067, .value=0x44}, {.addr=0x4068, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x4069, .a=0xe6, .x=0xa1, .y=0xdb, .sp=0xb8, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x2a}, {.addr=0x4067, .value=0x44}, {.addr=0x4068, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4067, .value=0x44, .type=IO_READ},
        {.addr=0x4068, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0267) {
    const struct CPU_State initial_cpu = {.pc=0x18e6, .a=0x3d, .x=0x4c, .y=0x67, .sp=0x8e, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xaf}, {.addr=0x18e6, .value=0x44}, {.addr=0x18e7, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x18e8, .a=0x92, .x=0x4c, .y=0x67, .sp=0x8e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xaf}, {.addr=0x18e6, .value=0x44}, {.addr=0x18e7, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x18e6, .value=0x44, .type=IO_READ},
        {.addr=0x18e7, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0268) {
    const struct CPU_State initial_cpu = {.pc=0x294c, .a=0xce, .x=0xc4, .y=0x4d, .sp=0x9d, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xf5}, {.addr=0x294c, .value=0x44}, {.addr=0x294d, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x294e, .a=0x3b, .x=0xc4, .y=0x4d, .sp=0x9d, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xf5}, {.addr=0x294c, .value=0x44}, {.addr=0x294d, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x294c, .value=0x44, .type=IO_READ},
        {.addr=0x294d, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0269) {
    const struct CPU_State initial_cpu = {.pc=0x6185, .a=0x4d, .x=0xca, .y=0x44, .sp=0xa3, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x44}, {.addr=0x6185, .value=0x44}, {.addr=0x6186, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x6187, .a=0x09, .x=0xca, .y=0x44, .sp=0xa3, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x44}, {.addr=0x6185, .value=0x44}, {.addr=0x6186, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6185, .value=0x44, .type=IO_READ},
        {.addr=0x6186, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026A) {
    const struct CPU_State initial_cpu = {.pc=0xc869, .a=0x91, .x=0x91, .y=0xee, .sp=0x8f, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xba}, {.addr=0xc869, .value=0x44}, {.addr=0xc86a, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xc86b, .a=0x2b, .x=0x91, .y=0xee, .sp=0x8f, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xba}, {.addr=0xc869, .value=0x44}, {.addr=0xc86a, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc869, .value=0x44, .type=IO_READ},
        {.addr=0xc86a, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026B) {
    const struct CPU_State initial_cpu = {.pc=0xbf96, .a=0x62, .x=0xd0, .y=0x2a, .sp=0xc2, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x8e}, {.addr=0xbf96, .value=0x44}, {.addr=0xbf97, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0xec, .x=0xd0, .y=0x2a, .sp=0xc2, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x8e}, {.addr=0xbf96, .value=0x44}, {.addr=0xbf97, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf96, .value=0x44, .type=IO_READ},
        {.addr=0xbf97, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026C) {
    const struct CPU_State initial_cpu = {.pc=0x66b6, .a=0x7b, .x=0x99, .y=0xd8, .sp=0x24, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x87}, {.addr=0x66b6, .value=0x44}, {.addr=0x66b7, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x66b8, .a=0xfc, .x=0x99, .y=0xd8, .sp=0x24, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x87}, {.addr=0x66b6, .value=0x44}, {.addr=0x66b7, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x66b6, .value=0x44, .type=IO_READ},
        {.addr=0x66b7, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026D) {
    const struct CPU_State initial_cpu = {.pc=0xeda2, .a=0x9f, .x=0x1e, .y=0x14, .sp=0x55, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x1d}, {.addr=0xeda2, .value=0x44}, {.addr=0xeda3, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xeda4, .a=0x82, .x=0x1e, .y=0x14, .sp=0x55, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x1d}, {.addr=0xeda2, .value=0x44}, {.addr=0xeda3, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xeda2, .value=0x44, .type=IO_READ},
        {.addr=0xeda3, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026E) {
    const struct CPU_State initial_cpu = {.pc=0x232a, .a=0xfb, .x=0xf2, .y=0x12, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x65}, {.addr=0x232a, .value=0x44}, {.addr=0x232b, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x232c, .a=0x9e, .x=0xf2, .y=0x12, .sp=0x09, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x65}, {.addr=0x232a, .value=0x44}, {.addr=0x232b, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x232a, .value=0x44, .type=IO_READ},
        {.addr=0x232b, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa2c3, .a=0xdf, .x=0x84, .y=0xf3, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x58}, {.addr=0xa2c3, .value=0x44}, {.addr=0xa2c4, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xa2c5, .a=0x87, .x=0x84, .y=0xf3, .sp=0x4b, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x58}, {.addr=0xa2c3, .value=0x44}, {.addr=0xa2c4, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2c3, .value=0x44, .type=IO_READ},
        {.addr=0xa2c4, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0270) {
    const struct CPU_State initial_cpu = {.pc=0xc9f6, .a=0x64, .x=0xb0, .y=0x98, .sp=0xaa, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x2f}, {.addr=0xc9f6, .value=0x44}, {.addr=0xc9f7, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xc9f8, .a=0x4b, .x=0xb0, .y=0x98, .sp=0xaa, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x2f}, {.addr=0xc9f6, .value=0x44}, {.addr=0xc9f7, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9f6, .value=0x44, .type=IO_READ},
        {.addr=0xc9f7, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0271) {
    const struct CPU_State initial_cpu = {.pc=0x0919, .a=0x69, .x=0x10, .y=0xbd, .sp=0x26, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xd0}, {.addr=0x0919, .value=0x44}, {.addr=0x091a, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x091b, .a=0xb9, .x=0x10, .y=0xbd, .sp=0x26, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xd0}, {.addr=0x0919, .value=0x44}, {.addr=0x091a, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0919, .value=0x44, .type=IO_READ},
        {.addr=0x091a, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0272) {
    const struct CPU_State initial_cpu = {.pc=0x2782, .a=0x7f, .x=0x91, .y=0xfa, .sp=0x5f, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xa7}, {.addr=0x2782, .value=0x44}, {.addr=0x2783, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x2784, .a=0xd8, .x=0x91, .y=0xfa, .sp=0x5f, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xa7}, {.addr=0x2782, .value=0x44}, {.addr=0x2783, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x2782, .value=0x44, .type=IO_READ},
        {.addr=0x2783, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0273) {
    const struct CPU_State initial_cpu = {.pc=0x6e78, .a=0xbb, .x=0xf2, .y=0x0d, .sp=0x19, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x6c}, {.addr=0x6e78, .value=0x44}, {.addr=0x6e79, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x6e7a, .a=0xd7, .x=0xf2, .y=0x0d, .sp=0x19, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x6c}, {.addr=0x6e78, .value=0x44}, {.addr=0x6e79, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e78, .value=0x44, .type=IO_READ},
        {.addr=0x6e79, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0274) {
    const struct CPU_State initial_cpu = {.pc=0xa7e3, .a=0x68, .x=0x09, .y=0x94, .sp=0x20, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x5c}, {.addr=0xa7e3, .value=0x44}, {.addr=0xa7e4, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e5, .a=0x34, .x=0x09, .y=0x94, .sp=0x20, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x5c}, {.addr=0xa7e3, .value=0x44}, {.addr=0xa7e4, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7e3, .value=0x44, .type=IO_READ},
        {.addr=0xa7e4, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0275) {
    const struct CPU_State initial_cpu = {.pc=0x2c53, .a=0x0f, .x=0x1b, .y=0x86, .sp=0x14, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x8f}, {.addr=0x2c53, .value=0x44}, {.addr=0x2c54, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x2c55, .a=0x80, .x=0x1b, .y=0x86, .sp=0x14, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x8f}, {.addr=0x2c53, .value=0x44}, {.addr=0x2c54, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c53, .value=0x44, .type=IO_READ},
        {.addr=0x2c54, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0276) {
    const struct CPU_State initial_cpu = {.pc=0x27db, .a=0x82, .x=0xcb, .y=0x56, .sp=0xca, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x3e}, {.addr=0x27db, .value=0x44}, {.addr=0x27dc, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x27dd, .a=0xbc, .x=0xcb, .y=0x56, .sp=0xca, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x3e}, {.addr=0x27db, .value=0x44}, {.addr=0x27dc, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x27db, .value=0x44, .type=IO_READ},
        {.addr=0x27dc, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0277) {
    const struct CPU_State initial_cpu = {.pc=0x1bbb, .a=0x3b, .x=0x17, .y=0xe6, .sp=0xc2, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x72}, {.addr=0x1bbb, .value=0x44}, {.addr=0x1bbc, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x1bbd, .a=0x49, .x=0x17, .y=0xe6, .sp=0xc2, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x72}, {.addr=0x1bbb, .value=0x44}, {.addr=0x1bbc, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bbb, .value=0x44, .type=IO_READ},
        {.addr=0x1bbc, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0278) {
    const struct CPU_State initial_cpu = {.pc=0x138d, .a=0x03, .x=0xa9, .y=0xad, .sp=0x16, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xb5}, {.addr=0x138d, .value=0x44}, {.addr=0x138e, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x138f, .a=0xb6, .x=0xa9, .y=0xad, .sp=0x16, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xb5}, {.addr=0x138d, .value=0x44}, {.addr=0x138e, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x138d, .value=0x44, .type=IO_READ},
        {.addr=0x138e, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0279) {
    const struct CPU_State initial_cpu = {.pc=0x390d, .a=0x1d, .x=0x6c, .y=0x39, .sp=0x46, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xd0}, {.addr=0x390d, .value=0x44}, {.addr=0x390e, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x390f, .a=0xcd, .x=0x6c, .y=0x39, .sp=0x46, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xd0}, {.addr=0x390d, .value=0x44}, {.addr=0x390e, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x390d, .value=0x44, .type=IO_READ},
        {.addr=0x390e, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb849, .a=0xb3, .x=0xb3, .y=0x8a, .sp=0x45, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x43}, {.addr=0xb849, .value=0x44}, {.addr=0xb84a, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xb84b, .a=0xf0, .x=0xb3, .y=0x8a, .sp=0x45, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x43}, {.addr=0xb849, .value=0x44}, {.addr=0xb84a, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xb849, .value=0x44, .type=IO_READ},
        {.addr=0xb84a, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_027B) {
    const struct CPU_State initial_cpu = {.pc=0x2cbb, .a=0xc2, .x=0x4f, .y=0xb9, .sp=0xc7, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x93}, {.addr=0x2cbb, .value=0x44}, {.addr=0x2cbc, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x2cbd, .a=0x51, .x=0x4f, .y=0xb9, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x93}, {.addr=0x2cbb, .value=0x44}, {.addr=0x2cbc, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cbb, .value=0x44, .type=IO_READ},
        {.addr=0x2cbc, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_027C) {
    const struct CPU_State initial_cpu = {.pc=0x495d, .a=0x67, .x=0x96, .y=0x77, .sp=0xad, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x58}, {.addr=0x495d, .value=0x44}, {.addr=0x495e, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x495f, .a=0x3f, .x=0x96, .y=0x77, .sp=0xad, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x58}, {.addr=0x495d, .value=0x44}, {.addr=0x495e, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x495d, .value=0x44, .type=IO_READ},
        {.addr=0x495e, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_027D) {
    const struct CPU_State initial_cpu = {.pc=0x915a, .a=0x36, .x=0x34, .y=0xfb, .sp=0x33, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x34}, {.addr=0x915a, .value=0x44}, {.addr=0x915b, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x915c, .a=0x02, .x=0x34, .y=0xfb, .sp=0x33, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x34}, {.addr=0x915a, .value=0x44}, {.addr=0x915b, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x915a, .value=0x44, .type=IO_READ},
        {.addr=0x915b, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_027E) {
    const struct CPU_State initial_cpu = {.pc=0x4750, .a=0x36, .x=0x3a, .y=0x76, .sp=0x7e, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x2a}, {.addr=0x4750, .value=0x44}, {.addr=0x4751, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x4752, .a=0x1c, .x=0x3a, .y=0x76, .sp=0x7e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x2a}, {.addr=0x4750, .value=0x44}, {.addr=0x4751, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4750, .value=0x44, .type=IO_READ},
        {.addr=0x4751, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0280) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0xa8, .x=0x20, .y=0x52, .sp=0x66, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xf6}, {.addr=0xb17e, .value=0x44}, {.addr=0xb17f, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xb180, .a=0x5e, .x=0x20, .y=0x52, .sp=0x66, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xf6}, {.addr=0xb17e, .value=0x44}, {.addr=0xb17f, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0x44, .type=IO_READ},
        {.addr=0xb17f, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0281) {
    const struct CPU_State initial_cpu = {.pc=0x2997, .a=0xcf, .x=0x2c, .y=0x69, .sp=0xc7, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x02}, {.addr=0x2997, .value=0x44}, {.addr=0x2998, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x2999, .a=0xcd, .x=0x2c, .y=0x69, .sp=0xc7, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x02}, {.addr=0x2997, .value=0x44}, {.addr=0x2998, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x2997, .value=0x44, .type=IO_READ},
        {.addr=0x2998, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0282) {
    const struct CPU_State initial_cpu = {.pc=0xd9a9, .a=0xb7, .x=0x40, .y=0x22, .sp=0x5f, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xde}, {.addr=0xd9a9, .value=0x44}, {.addr=0xd9aa, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xd9ab, .a=0x69, .x=0x40, .y=0x22, .sp=0x5f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xde}, {.addr=0xd9a9, .value=0x44}, {.addr=0xd9aa, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9a9, .value=0x44, .type=IO_READ},
        {.addr=0xd9aa, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0283) {
    const struct CPU_State initial_cpu = {.pc=0xf5d1, .a=0x96, .x=0xd3, .y=0x0e, .sp=0x08, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xd0}, {.addr=0xf5d1, .value=0x44}, {.addr=0xf5d2, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xf5d3, .a=0x46, .x=0xd3, .y=0x0e, .sp=0x08, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xd0}, {.addr=0xf5d1, .value=0x44}, {.addr=0xf5d2, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5d1, .value=0x44, .type=IO_READ},
        {.addr=0xf5d2, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0284) {
    const struct CPU_State initial_cpu = {.pc=0xbd28, .a=0xab, .x=0xba, .y=0x91, .sp=0x5c, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x0a}, {.addr=0xbd28, .value=0x44}, {.addr=0xbd29, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xbd2a, .a=0xa1, .x=0xba, .y=0x91, .sp=0x5c, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x0a}, {.addr=0xbd28, .value=0x44}, {.addr=0xbd29, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd28, .value=0x44, .type=IO_READ},
        {.addr=0xbd29, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0285) {
    const struct CPU_State initial_cpu = {.pc=0xd891, .a=0x93, .x=0xa7, .y=0x98, .sp=0x38, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xac}, {.addr=0xd891, .value=0x44}, {.addr=0xd892, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xd893, .a=0x3f, .x=0xa7, .y=0x98, .sp=0x38, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xac}, {.addr=0xd891, .value=0x44}, {.addr=0xd892, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xd891, .value=0x44, .type=IO_READ},
        {.addr=0xd892, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0286) {
    const struct CPU_State initial_cpu = {.pc=0x9229, .a=0xb9, .x=0x51, .y=0xa0, .sp=0x45, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xfe}, {.addr=0x9229, .value=0x44}, {.addr=0x922a, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x922b, .a=0x47, .x=0x51, .y=0xa0, .sp=0x45, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xfe}, {.addr=0x9229, .value=0x44}, {.addr=0x922a, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x9229, .value=0x44, .type=IO_READ},
        {.addr=0x922a, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0287) {
    const struct CPU_State initial_cpu = {.pc=0x0b75, .a=0x0c, .x=0xee, .y=0x4d, .sp=0x76, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xe1}, {.addr=0x0b75, .value=0x44}, {.addr=0x0b76, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x0b77, .a=0xed, .x=0xee, .y=0x4d, .sp=0x76, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xe1}, {.addr=0x0b75, .value=0x44}, {.addr=0x0b76, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b75, .value=0x44, .type=IO_READ},
        {.addr=0x0b76, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0288) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0xba, .x=0xec, .y=0xf9, .sp=0xd3, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xb4}, {.addr=0x727b, .value=0x44}, {.addr=0x727c, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x727d, .a=0x0e, .x=0xec, .y=0xf9, .sp=0xd3, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xb4}, {.addr=0x727b, .value=0x44}, {.addr=0x727c, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0x44, .type=IO_READ},
        {.addr=0x727c, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0289) {
    const struct CPU_State initial_cpu = {.pc=0xe847, .a=0xc3, .x=0x72, .y=0x73, .sp=0xf5, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x1b}, {.addr=0xe847, .value=0x44}, {.addr=0xe848, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xe849, .a=0xd8, .x=0x72, .y=0x73, .sp=0xf5, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x1b}, {.addr=0xe847, .value=0x44}, {.addr=0xe848, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xe847, .value=0x44, .type=IO_READ},
        {.addr=0xe848, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_028B) {
    const struct CPU_State initial_cpu = {.pc=0xfcd0, .a=0x99, .x=0x3b, .y=0xd3, .sp=0x8d, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x96}, {.addr=0xfcd0, .value=0x44}, {.addr=0xfcd1, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd2, .a=0x0f, .x=0x3b, .y=0xd3, .sp=0x8d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x96}, {.addr=0xfcd0, .value=0x44}, {.addr=0xfcd1, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd0, .value=0x44, .type=IO_READ},
        {.addr=0xfcd1, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_028C) {
    const struct CPU_State initial_cpu = {.pc=0xb14f, .a=0x98, .x=0x38, .y=0xbe, .sp=0x57, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x9f}, {.addr=0xb14f, .value=0x44}, {.addr=0xb150, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xb151, .a=0x07, .x=0x38, .y=0xbe, .sp=0x57, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x9f}, {.addr=0xb14f, .value=0x44}, {.addr=0xb150, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb14f, .value=0x44, .type=IO_READ},
        {.addr=0xb150, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_028D) {
    const struct CPU_State initial_cpu = {.pc=0xb394, .a=0x89, .x=0x57, .y=0xfd, .sp=0x2f, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xe4}, {.addr=0xb394, .value=0x44}, {.addr=0xb395, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xb396, .a=0x6d, .x=0x57, .y=0xfd, .sp=0x2f, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xe4}, {.addr=0xb394, .value=0x44}, {.addr=0xb395, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb394, .value=0x44, .type=IO_READ},
        {.addr=0xb395, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_028E) {
    const struct CPU_State initial_cpu = {.pc=0xdcd4, .a=0xa1, .x=0xe3, .y=0x98, .sp=0xd6, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x19}, {.addr=0xdcd4, .value=0x44}, {.addr=0xdcd5, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xdcd6, .a=0xb8, .x=0xe3, .y=0x98, .sp=0xd6, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x19}, {.addr=0xdcd4, .value=0x44}, {.addr=0xdcd5, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcd4, .value=0x44, .type=IO_READ},
        {.addr=0xdcd5, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_028F) {
    const struct CPU_State initial_cpu = {.pc=0xfac9, .a=0x37, .x=0x7c, .y=0xbc, .sp=0xac, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x09}, {.addr=0xfac9, .value=0x44}, {.addr=0xfaca, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xfacb, .a=0x3e, .x=0x7c, .y=0xbc, .sp=0xac, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x09}, {.addr=0xfac9, .value=0x44}, {.addr=0xfaca, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xfac9, .value=0x44, .type=IO_READ},
        {.addr=0xfaca, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0290) {
    const struct CPU_State initial_cpu = {.pc=0x7f49, .a=0xed, .x=0x29, .y=0x68, .sp=0x77, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x2d}, {.addr=0x7f49, .value=0x44}, {.addr=0x7f4a, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x7f4b, .a=0xc0, .x=0x29, .y=0x68, .sp=0x77, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x2d}, {.addr=0x7f49, .value=0x44}, {.addr=0x7f4a, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f49, .value=0x44, .type=IO_READ},
        {.addr=0x7f4a, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0291) {
    const struct CPU_State initial_cpu = {.pc=0x37c8, .a=0xd8, .x=0xcf, .y=0x0c, .sp=0x46, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xe8}, {.addr=0x37c8, .value=0x44}, {.addr=0x37c9, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x37ca, .a=0x30, .x=0xcf, .y=0x0c, .sp=0x46, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xe8}, {.addr=0x37c8, .value=0x44}, {.addr=0x37c9, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x37c8, .value=0x44, .type=IO_READ},
        {.addr=0x37c9, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0292) {
    const struct CPU_State initial_cpu = {.pc=0x5de9, .a=0x53, .x=0xbf, .y=0x0f, .sp=0x6b, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x69}, {.addr=0x5de9, .value=0x44}, {.addr=0x5dea, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x5deb, .a=0x3a, .x=0xbf, .y=0x0f, .sp=0x6b, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x69}, {.addr=0x5de9, .value=0x44}, {.addr=0x5dea, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x5de9, .value=0x44, .type=IO_READ},
        {.addr=0x5dea, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0293) {
    const struct CPU_State initial_cpu = {.pc=0x4b6d, .a=0x69, .x=0xe2, .y=0x05, .sp=0xe1, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x0b}, {.addr=0x4b6d, .value=0x44}, {.addr=0x4b6e, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x4b6f, .a=0x62, .x=0xe2, .y=0x05, .sp=0xe1, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x0b}, {.addr=0x4b6d, .value=0x44}, {.addr=0x4b6e, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b6d, .value=0x44, .type=IO_READ},
        {.addr=0x4b6e, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9c0a, .a=0xc3, .x=0xa7, .y=0xe2, .sp=0xf4, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x3e}, {.addr=0x9c0a, .value=0x44}, {.addr=0x9c0b, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x9c0c, .a=0xfd, .x=0xa7, .y=0xe2, .sp=0xf4, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x3e}, {.addr=0x9c0a, .value=0x44}, {.addr=0x9c0b, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c0a, .value=0x44, .type=IO_READ},
        {.addr=0x9c0b, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9b2b, .a=0x79, .x=0x4b, .y=0x9f, .sp=0x91, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x8f}, {.addr=0x9b2b, .value=0x44}, {.addr=0x9b2c, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x9b2d, .a=0xf6, .x=0x4b, .y=0x9f, .sp=0x91, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x8f}, {.addr=0x9b2b, .value=0x44}, {.addr=0x9b2c, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b2b, .value=0x44, .type=IO_READ},
        {.addr=0x9b2c, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0296) {
    const struct CPU_State initial_cpu = {.pc=0x5f58, .a=0xce, .x=0x12, .y=0x1e, .sp=0x56, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0xc9}, {.addr=0x5f58, .value=0x44}, {.addr=0x5f59, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x5f5a, .a=0x07, .x=0x12, .y=0x1e, .sp=0x56, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0xc9}, {.addr=0x5f58, .value=0x44}, {.addr=0x5f59, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f58, .value=0x44, .type=IO_READ},
        {.addr=0x5f59, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0297) {
    const struct CPU_State initial_cpu = {.pc=0x5cb6, .a=0xfa, .x=0xc8, .y=0x9f, .sp=0x91, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x42}, {.addr=0x5cb6, .value=0x44}, {.addr=0x5cb7, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x5cb8, .a=0xb8, .x=0xc8, .y=0x9f, .sp=0x91, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x42}, {.addr=0x5cb6, .value=0x44}, {.addr=0x5cb7, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cb6, .value=0x44, .type=IO_READ},
        {.addr=0x5cb7, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0298) {
    const struct CPU_State initial_cpu = {.pc=0x63c3, .a=0xcd, .x=0x09, .y=0xe1, .sp=0x7f, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x80}, {.addr=0x63c3, .value=0x44}, {.addr=0x63c4, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x63c5, .a=0x4d, .x=0x09, .y=0xe1, .sp=0x7f, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x80}, {.addr=0x63c3, .value=0x44}, {.addr=0x63c4, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x63c3, .value=0x44, .type=IO_READ},
        {.addr=0x63c4, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0299) {
    const struct CPU_State initial_cpu = {.pc=0xa20f, .a=0xba, .x=0xa4, .y=0x7d, .sp=0x13, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x71}, {.addr=0xa20f, .value=0x44}, {.addr=0xa210, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xa211, .a=0xcb, .x=0xa4, .y=0x7d, .sp=0x13, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x71}, {.addr=0xa20f, .value=0x44}, {.addr=0xa210, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xa20f, .value=0x44, .type=IO_READ},
        {.addr=0xa210, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029A) {
    const struct CPU_State initial_cpu = {.pc=0x5b55, .a=0xfd, .x=0x5d, .y=0x51, .sp=0x0c, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x58}, {.addr=0x5b55, .value=0x44}, {.addr=0x5b56, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0xa5, .x=0x5d, .y=0x51, .sp=0x0c, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x58}, {.addr=0x5b55, .value=0x44}, {.addr=0x5b56, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b55, .value=0x44, .type=IO_READ},
        {.addr=0x5b56, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029B) {
    const struct CPU_State initial_cpu = {.pc=0x0360, .a=0xfd, .x=0xa2, .y=0xd0, .sp=0xd8, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xd4}, {.addr=0x0360, .value=0x44}, {.addr=0x0361, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x0362, .a=0x29, .x=0xa2, .y=0xd0, .sp=0xd8, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xd4}, {.addr=0x0360, .value=0x44}, {.addr=0x0361, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x0360, .value=0x44, .type=IO_READ},
        {.addr=0x0361, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc452, .a=0x3f, .x=0x4c, .y=0xb2, .sp=0xe0, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x3f}, {.addr=0xc452, .value=0x44}, {.addr=0xc453, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xc454, .a=0x00, .x=0x4c, .y=0xb2, .sp=0xe0, .status=0x12};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x3f}, {.addr=0xc452, .value=0x44}, {.addr=0xc453, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xc452, .value=0x44, .type=IO_READ},
        {.addr=0xc453, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029D) {
    const struct CPU_State initial_cpu = {.pc=0x94f7, .a=0x16, .x=0x13, .y=0x6d, .sp=0x37, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x21}, {.addr=0x94f7, .value=0x44}, {.addr=0x94f8, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x94f9, .a=0x37, .x=0x13, .y=0x6d, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x21}, {.addr=0x94f7, .value=0x44}, {.addr=0x94f8, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x94f7, .value=0x44, .type=IO_READ},
        {.addr=0x94f8, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029E) {
    const struct CPU_State initial_cpu = {.pc=0xbae4, .a=0x83, .x=0xd4, .y=0x0a, .sp=0x5f, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xab}, {.addr=0xbae4, .value=0x44}, {.addr=0xbae5, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xbae6, .a=0x28, .x=0xd4, .y=0x0a, .sp=0x5f, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xab}, {.addr=0xbae4, .value=0x44}, {.addr=0xbae5, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xbae4, .value=0x44, .type=IO_READ},
        {.addr=0xbae5, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_029F) {
    const struct CPU_State initial_cpu = {.pc=0xf03f, .a=0x90, .x=0x3b, .y=0x87, .sp=0x4e, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x39}, {.addr=0xf03f, .value=0x44}, {.addr=0xf040, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xf041, .a=0xa9, .x=0x3b, .y=0x87, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x39}, {.addr=0xf03f, .value=0x44}, {.addr=0xf040, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xf03f, .value=0x44, .type=IO_READ},
        {.addr=0xf040, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xbe25, .a=0x88, .x=0x77, .y=0xa9, .sp=0x9f, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x3c}, {.addr=0xbe25, .value=0x44}, {.addr=0xbe26, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xbe27, .a=0xb4, .x=0x77, .y=0xa9, .sp=0x9f, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x3c}, {.addr=0xbe25, .value=0x44}, {.addr=0xbe26, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe25, .value=0x44, .type=IO_READ},
        {.addr=0xbe26, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x7763, .a=0xdc, .x=0x50, .y=0xdc, .sp=0xd0, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x29}, {.addr=0x7763, .value=0x44}, {.addr=0x7764, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x7765, .a=0xf5, .x=0x50, .y=0xdc, .sp=0xd0, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x29}, {.addr=0x7763, .value=0x44}, {.addr=0x7764, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7763, .value=0x44, .type=IO_READ},
        {.addr=0x7764, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x42f9, .a=0xb3, .x=0x59, .y=0xed, .sp=0xbb, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x4b}, {.addr=0x42f9, .value=0x44}, {.addr=0x42fa, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x42fb, .a=0xf8, .x=0x59, .y=0xed, .sp=0xbb, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x4b}, {.addr=0x42f9, .value=0x44}, {.addr=0x42fa, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f9, .value=0x44, .type=IO_READ},
        {.addr=0x42fa, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x5f94, .a=0x52, .x=0x59, .y=0xef, .sp=0x32, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x55}, {.addr=0x5f94, .value=0x44}, {.addr=0x5f95, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x5f96, .a=0x07, .x=0x59, .y=0xef, .sp=0x32, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x55}, {.addr=0x5f94, .value=0x44}, {.addr=0x5f95, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f94, .value=0x44, .type=IO_READ},
        {.addr=0x5f95, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x6c66, .a=0xd4, .x=0x74, .y=0x3b, .sp=0x5b, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xa7}, {.addr=0x6c66, .value=0x44}, {.addr=0x6c67, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x6c68, .a=0x73, .x=0x74, .y=0x3b, .sp=0x5b, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xa7}, {.addr=0x6c66, .value=0x44}, {.addr=0x6c67, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c66, .value=0x44, .type=IO_READ},
        {.addr=0x6c67, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x012b, .a=0xa9, .x=0xaf, .y=0xa3, .sp=0x3b, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x44}, {.addr=0x012c, .value=0xfa}, {.addr=0x01fa, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x012d, .a=0x86, .x=0xaf, .y=0xa3, .sp=0x3b, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x44}, {.addr=0x012c, .value=0xfa}, {.addr=0x01fa, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x012b, .value=0x44, .type=IO_READ},
        {.addr=0x012c, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xa7a7, .a=0x75, .x=0x43, .y=0xd5, .sp=0x86, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xdf}, {.addr=0xa7a7, .value=0x44}, {.addr=0xa7a8, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xa7a9, .a=0xaa, .x=0x43, .y=0xd5, .sp=0x86, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xdf}, {.addr=0xa7a7, .value=0x44}, {.addr=0xa7a8, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7a7, .value=0x44, .type=IO_READ},
        {.addr=0xa7a8, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xd35e, .a=0x56, .x=0x18, .y=0x16, .sp=0x19, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xd6}, {.addr=0xd35e, .value=0x44}, {.addr=0xd35f, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xd360, .a=0x80, .x=0x18, .y=0x16, .sp=0x19, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xd6}, {.addr=0xd35e, .value=0x44}, {.addr=0xd35f, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd35e, .value=0x44, .type=IO_READ},
        {.addr=0xd35f, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xc038, .a=0x3a, .x=0xf4, .y=0x46, .sp=0xbc, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xfd}, {.addr=0xc038, .value=0x44}, {.addr=0xc039, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xc03a, .a=0xc7, .x=0xf4, .y=0x46, .sp=0xbc, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xfd}, {.addr=0xc038, .value=0x44}, {.addr=0xc039, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc038, .value=0x44, .type=IO_READ},
        {.addr=0xc039, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x42c1, .a=0x28, .x=0xd9, .y=0x58, .sp=0x89, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x0a}, {.addr=0x42c1, .value=0x44}, {.addr=0x42c2, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x42c3, .a=0x22, .x=0xd9, .y=0x58, .sp=0x89, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x0a}, {.addr=0x42c1, .value=0x44}, {.addr=0x42c2, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x42c1, .value=0x44, .type=IO_READ},
        {.addr=0x42c2, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb73d, .a=0x31, .x=0xf3, .y=0x80, .sp=0x02, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xcf}, {.addr=0xb73d, .value=0x44}, {.addr=0xb73e, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xb73f, .a=0xfe, .x=0xf3, .y=0x80, .sp=0x02, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xcf}, {.addr=0xb73d, .value=0x44}, {.addr=0xb73e, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xb73d, .value=0x44, .type=IO_READ},
        {.addr=0xb73e, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4e97, .a=0x35, .x=0xf6, .y=0xc0, .sp=0x6f, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xcc}, {.addr=0x4e97, .value=0x44}, {.addr=0x4e98, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x4e99, .a=0xf9, .x=0xf6, .y=0xc0, .sp=0x6f, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xcc}, {.addr=0x4e97, .value=0x44}, {.addr=0x4e98, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e97, .value=0x44, .type=IO_READ},
        {.addr=0x4e98, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xbd09, .a=0x6e, .x=0xca, .y=0x87, .sp=0x61, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x91}, {.addr=0xbd09, .value=0x44}, {.addr=0xbd0a, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xbd0b, .a=0xff, .x=0xca, .y=0x87, .sp=0x61, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x91}, {.addr=0xbd09, .value=0x44}, {.addr=0xbd0a, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd09, .value=0x44, .type=IO_READ},
        {.addr=0xbd0a, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xd46a, .a=0xb0, .x=0x61, .y=0xeb, .sp=0xfc, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x21}, {.addr=0xd46a, .value=0x44}, {.addr=0xd46b, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xd46c, .a=0x91, .x=0x61, .y=0xeb, .sp=0xfc, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x21}, {.addr=0xd46a, .value=0x44}, {.addr=0xd46b, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd46a, .value=0x44, .type=IO_READ},
        {.addr=0xd46b, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xa00e, .a=0x33, .x=0x65, .y=0xef, .sp=0xec, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xac}, {.addr=0xa00e, .value=0x44}, {.addr=0xa00f, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xa010, .a=0x9f, .x=0x65, .y=0xef, .sp=0xec, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xac}, {.addr=0xa00e, .value=0x44}, {.addr=0xa00f, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa00e, .value=0x44, .type=IO_READ},
        {.addr=0xa00f, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xd87d, .a=0x9e, .x=0x92, .y=0x9c, .sp=0x5e, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xa7}, {.addr=0xd87d, .value=0x44}, {.addr=0xd87e, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xd87f, .a=0x39, .x=0x92, .y=0x9c, .sp=0x5e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xa7}, {.addr=0xd87d, .value=0x44}, {.addr=0xd87e, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd87d, .value=0x44, .type=IO_READ},
        {.addr=0xd87e, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1334, .a=0x92, .x=0xba, .y=0xf3, .sp=0xc6, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x44}, {.addr=0x1334, .value=0x44}, {.addr=0x1335, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x1336, .a=0xd6, .x=0xba, .y=0xf3, .sp=0xc6, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x44}, {.addr=0x1334, .value=0x44}, {.addr=0x1335, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x1334, .value=0x44, .type=IO_READ},
        {.addr=0x1335, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x0e05, .a=0xc5, .x=0x20, .y=0x94, .sp=0x52, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x60}, {.addr=0x0e05, .value=0x44}, {.addr=0x0e06, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x0e07, .a=0xa5, .x=0x20, .y=0x94, .sp=0x52, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x60}, {.addr=0x0e05, .value=0x44}, {.addr=0x0e06, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e05, .value=0x44, .type=IO_READ},
        {.addr=0x0e06, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x7591, .a=0x84, .x=0x7f, .y=0x63, .sp=0x95, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x9e}, {.addr=0x7591, .value=0x44}, {.addr=0x7592, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x7593, .a=0x1a, .x=0x7f, .y=0x63, .sp=0x95, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x9e}, {.addr=0x7591, .value=0x44}, {.addr=0x7592, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7591, .value=0x44, .type=IO_READ},
        {.addr=0x7592, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x11f1, .a=0x22, .x=0xff, .y=0x9c, .sp=0xfd, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x92}, {.addr=0x11f1, .value=0x44}, {.addr=0x11f2, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x11f3, .a=0xb0, .x=0xff, .y=0x9c, .sp=0xfd, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x92}, {.addr=0x11f1, .value=0x44}, {.addr=0x11f2, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x11f1, .value=0x44, .type=IO_READ},
        {.addr=0x11f2, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdc28, .a=0x6b, .x=0x04, .y=0xbc, .sp=0x81, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x4a}, {.addr=0xdc28, .value=0x44}, {.addr=0xdc29, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xdc2a, .a=0x21, .x=0x04, .y=0xbc, .sp=0x81, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x4a}, {.addr=0xdc28, .value=0x44}, {.addr=0xdc29, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc28, .value=0x44, .type=IO_READ},
        {.addr=0xdc29, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x5c62, .a=0x3b, .x=0x93, .y=0x2f, .sp=0x76, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x18}, {.addr=0x5c62, .value=0x44}, {.addr=0x5c63, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0x23, .x=0x93, .y=0x2f, .sp=0x76, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x18}, {.addr=0x5c62, .value=0x44}, {.addr=0x5c63, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c62, .value=0x44, .type=IO_READ},
        {.addr=0x5c63, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9838, .a=0xee, .x=0x8f, .y=0x82, .sp=0x0c, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x41}, {.addr=0x9838, .value=0x44}, {.addr=0x9839, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x983a, .a=0xaf, .x=0x8f, .y=0x82, .sp=0x0c, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x41}, {.addr=0x9838, .value=0x44}, {.addr=0x9839, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x9838, .value=0x44, .type=IO_READ},
        {.addr=0x9839, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x06bb, .a=0x04, .x=0xa2, .y=0x42, .sp=0x8c, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x2c}, {.addr=0x06bb, .value=0x44}, {.addr=0x06bc, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x06bd, .a=0x28, .x=0xa2, .y=0x42, .sp=0x8c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x2c}, {.addr=0x06bb, .value=0x44}, {.addr=0x06bc, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x06bb, .value=0x44, .type=IO_READ},
        {.addr=0x06bc, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xbce4, .a=0x7b, .x=0xb3, .y=0xd6, .sp=0xff, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x80}, {.addr=0xbce4, .value=0x44}, {.addr=0xbce5, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xbce6, .a=0xfb, .x=0xb3, .y=0xd6, .sp=0xff, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x80}, {.addr=0xbce4, .value=0x44}, {.addr=0xbce5, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xbce4, .value=0x44, .type=IO_READ},
        {.addr=0xbce5, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xc516, .a=0xb1, .x=0x53, .y=0xc1, .sp=0x03, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x46}, {.addr=0xc516, .value=0x44}, {.addr=0xc517, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xc518, .a=0xf7, .x=0x53, .y=0xc1, .sp=0x03, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x46}, {.addr=0xc516, .value=0x44}, {.addr=0xc517, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc516, .value=0x44, .type=IO_READ},
        {.addr=0xc517, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x5582, .a=0xb2, .x=0x67, .y=0x35, .sp=0xd0, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x06}, {.addr=0x5582, .value=0x44}, {.addr=0x5583, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x5584, .a=0xb4, .x=0x67, .y=0x35, .sp=0xd0, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x06}, {.addr=0x5582, .value=0x44}, {.addr=0x5583, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5582, .value=0x44, .type=IO_READ},
        {.addr=0x5583, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x4133, .a=0x94, .x=0x08, .y=0x95, .sp=0xe2, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x9a}, {.addr=0x4133, .value=0x44}, {.addr=0x4134, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x4135, .a=0x0e, .x=0x08, .y=0x95, .sp=0xe2, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x9a}, {.addr=0x4133, .value=0x44}, {.addr=0x4134, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4133, .value=0x44, .type=IO_READ},
        {.addr=0x4134, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x1139, .a=0xbf, .x=0x46, .y=0x42, .sp=0xc5, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x8f}, {.addr=0x1139, .value=0x44}, {.addr=0x113a, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x113b, .a=0x30, .x=0x46, .y=0x42, .sp=0xc5, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x8f}, {.addr=0x1139, .value=0x44}, {.addr=0x113a, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1139, .value=0x44, .type=IO_READ},
        {.addr=0x113a, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x4303, .a=0xee, .x=0x58, .y=0x8a, .sp=0x80, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xa2}, {.addr=0x4303, .value=0x44}, {.addr=0x4304, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x4305, .a=0x4c, .x=0x58, .y=0x8a, .sp=0x80, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xa2}, {.addr=0x4303, .value=0x44}, {.addr=0x4304, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4303, .value=0x44, .type=IO_READ},
        {.addr=0x4304, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x1c64, .a=0xa8, .x=0xb7, .y=0x23, .sp=0x01, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x79}, {.addr=0x1c64, .value=0x44}, {.addr=0x1c65, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x1c66, .a=0xd1, .x=0xb7, .y=0x23, .sp=0x01, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x79}, {.addr=0x1c64, .value=0x44}, {.addr=0x1c65, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c64, .value=0x44, .type=IO_READ},
        {.addr=0x1c65, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x3f83, .a=0xea, .x=0x62, .y=0x3b, .sp=0xc3, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xb9}, {.addr=0x3f83, .value=0x44}, {.addr=0x3f84, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x3f85, .a=0x53, .x=0x62, .y=0x3b, .sp=0xc3, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xb9}, {.addr=0x3f83, .value=0x44}, {.addr=0x3f84, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f83, .value=0x44, .type=IO_READ},
        {.addr=0x3f84, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x67d8, .a=0xfa, .x=0xd6, .y=0x1d, .sp=0x10, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xf1}, {.addr=0x67d8, .value=0x44}, {.addr=0x67d9, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x67da, .a=0x0b, .x=0xd6, .y=0x1d, .sp=0x10, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xf1}, {.addr=0x67d8, .value=0x44}, {.addr=0x67d9, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x67d8, .value=0x44, .type=IO_READ},
        {.addr=0x67d9, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x7d44, .a=0xee, .x=0x8a, .y=0x14, .sp=0xfd, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xcf}, {.addr=0x7d44, .value=0x44}, {.addr=0x7d45, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x7d46, .a=0x21, .x=0x8a, .y=0x14, .sp=0xfd, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xcf}, {.addr=0x7d44, .value=0x44}, {.addr=0x7d45, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d44, .value=0x44, .type=IO_READ},
        {.addr=0x7d45, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x68af, .a=0xf1, .x=0x87, .y=0x6f, .sp=0x7c, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x3a}, {.addr=0x68af, .value=0x44}, {.addr=0x68b0, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x68b1, .a=0xcb, .x=0x87, .y=0x6f, .sp=0x7c, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x3a}, {.addr=0x68af, .value=0x44}, {.addr=0x68b0, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x68af, .value=0x44, .type=IO_READ},
        {.addr=0x68b0, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xfb59, .a=0xea, .x=0x97, .y=0x7f, .sp=0xbc, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x98}, {.addr=0xfb59, .value=0x44}, {.addr=0xfb5a, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xfb5b, .a=0x72, .x=0x97, .y=0x7f, .sp=0xbc, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x98}, {.addr=0xfb59, .value=0x44}, {.addr=0xfb5a, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb59, .value=0x44, .type=IO_READ},
        {.addr=0xfb5a, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x244b, .a=0x4a, .x=0x3c, .y=0x78, .sp=0x7c, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x35}, {.addr=0x244b, .value=0x44}, {.addr=0x244c, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x244d, .a=0x7f, .x=0x3c, .y=0x78, .sp=0x7c, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x35}, {.addr=0x244b, .value=0x44}, {.addr=0x244c, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x244b, .value=0x44, .type=IO_READ},
        {.addr=0x244c, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xcf42, .a=0x39, .x=0x1a, .y=0x02, .sp=0xfc, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x93}, {.addr=0xcf42, .value=0x44}, {.addr=0xcf43, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0xcf44, .a=0xaa, .x=0x1a, .y=0x02, .sp=0xfc, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x93}, {.addr=0xcf42, .value=0x44}, {.addr=0xcf43, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf42, .value=0x44, .type=IO_READ},
        {.addr=0xcf43, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xebe2, .a=0x88, .x=0xb8, .y=0xfe, .sp=0x0b, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x89}, {.addr=0xebe2, .value=0x44}, {.addr=0xebe3, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xebe4, .a=0x01, .x=0xb8, .y=0xfe, .sp=0x0b, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x89}, {.addr=0xebe2, .value=0x44}, {.addr=0xebe3, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xebe2, .value=0x44, .type=IO_READ},
        {.addr=0xebe3, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xdfe5, .a=0x8f, .x=0x53, .y=0xdc, .sp=0xfa, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x6a}, {.addr=0xdfe5, .value=0x44}, {.addr=0xdfe6, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xdfe7, .a=0xe5, .x=0x53, .y=0xdc, .sp=0xfa, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x6a}, {.addr=0xdfe5, .value=0x44}, {.addr=0xdfe6, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfe5, .value=0x44, .type=IO_READ},
        {.addr=0xdfe6, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7847, .a=0x52, .x=0x2d, .y=0x83, .sp=0xfd, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xc5}, {.addr=0x7847, .value=0x44}, {.addr=0x7848, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x7849, .a=0x97, .x=0x2d, .y=0x83, .sp=0xfd, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xc5}, {.addr=0x7847, .value=0x44}, {.addr=0x7848, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7847, .value=0x44, .type=IO_READ},
        {.addr=0x7848, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x622d, .a=0xdd, .x=0x66, .y=0x57, .sp=0xf0, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x7b}, {.addr=0x622d, .value=0x44}, {.addr=0x622e, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x622f, .a=0xa6, .x=0x66, .y=0x57, .sp=0xf0, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x7b}, {.addr=0x622d, .value=0x44}, {.addr=0x622e, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x622d, .value=0x44, .type=IO_READ},
        {.addr=0x622e, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xa9a5, .a=0xd0, .x=0xc4, .y=0xe6, .sp=0xe8, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x37}, {.addr=0xa9a5, .value=0x44}, {.addr=0xa9a6, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xa9a7, .a=0xe7, .x=0xc4, .y=0xe6, .sp=0xe8, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x37}, {.addr=0xa9a5, .value=0x44}, {.addr=0xa9a6, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9a5, .value=0x44, .type=IO_READ},
        {.addr=0xa9a6, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x9acf, .a=0xed, .x=0xdc, .y=0x79, .sp=0x88, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xf8}, {.addr=0x9acf, .value=0x44}, {.addr=0x9ad0, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x9ad1, .a=0x15, .x=0xdc, .y=0x79, .sp=0x88, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xf8}, {.addr=0x9acf, .value=0x44}, {.addr=0x9ad0, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9acf, .value=0x44, .type=IO_READ},
        {.addr=0x9ad0, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x9796, .a=0x86, .x=0xf9, .y=0x20, .sp=0x6a, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x2b}, {.addr=0x9796, .value=0x44}, {.addr=0x9797, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x9798, .a=0xad, .x=0xf9, .y=0x20, .sp=0x6a, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x2b}, {.addr=0x9796, .value=0x44}, {.addr=0x9797, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9796, .value=0x44, .type=IO_READ},
        {.addr=0x9797, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xa58c, .a=0xf1, .x=0xe8, .y=0xb7, .sp=0x24, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x43}, {.addr=0xa58c, .value=0x44}, {.addr=0xa58d, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xa58e, .a=0xb2, .x=0xe8, .y=0xb7, .sp=0x24, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x43}, {.addr=0xa58c, .value=0x44}, {.addr=0xa58d, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xa58c, .value=0x44, .type=IO_READ},
        {.addr=0xa58d, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x7885, .a=0xc2, .x=0x2c, .y=0x51, .sp=0x6c, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xe9}, {.addr=0x7885, .value=0x44}, {.addr=0x7886, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x7887, .a=0x2b, .x=0x2c, .y=0x51, .sp=0x6c, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xe9}, {.addr=0x7885, .value=0x44}, {.addr=0x7886, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7885, .value=0x44, .type=IO_READ},
        {.addr=0x7886, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x6de7, .a=0xe0, .x=0xc2, .y=0x40, .sp=0x79, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x8e}, {.addr=0x6de7, .value=0x44}, {.addr=0x6de8, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x6de9, .a=0x6e, .x=0xc2, .y=0x40, .sp=0x79, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x8e}, {.addr=0x6de7, .value=0x44}, {.addr=0x6de8, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6de7, .value=0x44, .type=IO_READ},
        {.addr=0x6de8, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xf148, .a=0x96, .x=0x76, .y=0x93, .sp=0x13, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x29}, {.addr=0xf148, .value=0x44}, {.addr=0xf149, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xf14a, .a=0xbf, .x=0x76, .y=0x93, .sp=0x13, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x29}, {.addr=0xf148, .value=0x44}, {.addr=0xf149, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xf148, .value=0x44, .type=IO_READ},
        {.addr=0xf149, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc188, .a=0x82, .x=0x0c, .y=0xac, .sp=0xe1, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x17}, {.addr=0xc188, .value=0x44}, {.addr=0xc189, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xc18a, .a=0x95, .x=0x0c, .y=0xac, .sp=0xe1, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x17}, {.addr=0xc188, .value=0x44}, {.addr=0xc189, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc188, .value=0x44, .type=IO_READ},
        {.addr=0xc189, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x33e8, .a=0x37, .x=0xf1, .y=0x75, .sp=0xd6, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x1b}, {.addr=0x33e8, .value=0x44}, {.addr=0x33e9, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x33ea, .a=0x2c, .x=0xf1, .y=0x75, .sp=0xd6, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x1b}, {.addr=0x33e8, .value=0x44}, {.addr=0x33e9, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x33e8, .value=0x44, .type=IO_READ},
        {.addr=0x33e9, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x99a4, .a=0x76, .x=0xf9, .y=0xb5, .sp=0x8a, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x1d}, {.addr=0x99a4, .value=0x44}, {.addr=0x99a5, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x99a6, .a=0x6b, .x=0xf9, .y=0xb5, .sp=0x8a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x1d}, {.addr=0x99a4, .value=0x44}, {.addr=0x99a5, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x99a4, .value=0x44, .type=IO_READ},
        {.addr=0x99a5, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x5539, .a=0x53, .x=0xb0, .y=0x82, .sp=0x24, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x9f}, {.addr=0x5539, .value=0x44}, {.addr=0x553a, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x553b, .a=0xcc, .x=0xb0, .y=0x82, .sp=0x24, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x9f}, {.addr=0x5539, .value=0x44}, {.addr=0x553a, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x5539, .value=0x44, .type=IO_READ},
        {.addr=0x553a, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x5dff, .a=0x85, .x=0xba, .y=0x20, .sp=0xcb, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x80}, {.addr=0x5dff, .value=0x44}, {.addr=0x5e00, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x5e01, .a=0x05, .x=0xba, .y=0x20, .sp=0xcb, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x80}, {.addr=0x5dff, .value=0x44}, {.addr=0x5e00, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dff, .value=0x44, .type=IO_READ},
        {.addr=0x5e00, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xf32a, .a=0xb6, .x=0x5e, .y=0x4d, .sp=0xa0, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x24}, {.addr=0xf32a, .value=0x44}, {.addr=0xf32b, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xf32c, .a=0x92, .x=0x5e, .y=0x4d, .sp=0xa0, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x24}, {.addr=0xf32a, .value=0x44}, {.addr=0xf32b, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf32a, .value=0x44, .type=IO_READ},
        {.addr=0xf32b, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x90b0, .a=0xee, .x=0x84, .y=0x63, .sp=0x1f, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x7c}, {.addr=0x90b0, .value=0x44}, {.addr=0x90b1, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x90b2, .a=0x92, .x=0x84, .y=0x63, .sp=0x1f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x7c}, {.addr=0x90b0, .value=0x44}, {.addr=0x90b1, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x90b0, .value=0x44, .type=IO_READ},
        {.addr=0x90b1, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x649c, .a=0xc8, .x=0xcb, .y=0x1f, .sp=0xcd, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xf8}, {.addr=0x649c, .value=0x44}, {.addr=0x649d, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x649e, .a=0x30, .x=0xcb, .y=0x1f, .sp=0xcd, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xf8}, {.addr=0x649c, .value=0x44}, {.addr=0x649d, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x649c, .value=0x44, .type=IO_READ},
        {.addr=0x649d, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xd72f, .a=0x00, .x=0xc4, .y=0x77, .sp=0x5f, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xca}, {.addr=0xd72f, .value=0x44}, {.addr=0xd730, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xd731, .a=0xca, .x=0xc4, .y=0x77, .sp=0x5f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xca}, {.addr=0xd72f, .value=0x44}, {.addr=0xd730, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xd72f, .value=0x44, .type=IO_READ},
        {.addr=0xd730, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x91df, .a=0x7b, .x=0x73, .y=0x06, .sp=0xb2, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x77}, {.addr=0x91df, .value=0x44}, {.addr=0x91e0, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x91e1, .a=0x0c, .x=0x73, .y=0x06, .sp=0xb2, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x77}, {.addr=0x91df, .value=0x44}, {.addr=0x91e0, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x91df, .value=0x44, .type=IO_READ},
        {.addr=0x91e0, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xbe0c, .a=0xb5, .x=0xb0, .y=0xee, .sp=0x4e, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x31}, {.addr=0xbe0c, .value=0x44}, {.addr=0xbe0d, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xbe0e, .a=0x84, .x=0xb0, .y=0xee, .sp=0x4e, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x31}, {.addr=0xbe0c, .value=0x44}, {.addr=0xbe0d, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe0c, .value=0x44, .type=IO_READ},
        {.addr=0xbe0d, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x8039, .a=0x50, .x=0x45, .y=0x30, .sp=0xf2, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x8c}, {.addr=0x8039, .value=0x44}, {.addr=0x803a, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x803b, .a=0xdc, .x=0x45, .y=0x30, .sp=0xf2, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x8c}, {.addr=0x8039, .value=0x44}, {.addr=0x803a, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8039, .value=0x44, .type=IO_READ},
        {.addr=0x803a, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x713e, .a=0xf7, .x=0x9e, .y=0xce, .sp=0x56, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xe1}, {.addr=0x713e, .value=0x44}, {.addr=0x713f, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x7140, .a=0x16, .x=0x9e, .y=0xce, .sp=0x56, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xe1}, {.addr=0x713e, .value=0x44}, {.addr=0x713f, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x713e, .value=0x44, .type=IO_READ},
        {.addr=0x713f, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x55e3, .a=0xce, .x=0x9c, .y=0x43, .sp=0xf8, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x9f}, {.addr=0x55e3, .value=0x44}, {.addr=0x55e4, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x55e5, .a=0x51, .x=0x9c, .y=0x43, .sp=0xf8, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x9f}, {.addr=0x55e3, .value=0x44}, {.addr=0x55e4, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x55e3, .value=0x44, .type=IO_READ},
        {.addr=0x55e4, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x8e18, .a=0x30, .x=0x3a, .y=0x33, .sp=0x78, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xa5}, {.addr=0x8e18, .value=0x44}, {.addr=0x8e19, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x8e1a, .a=0x95, .x=0x3a, .y=0x33, .sp=0x78, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xa5}, {.addr=0x8e18, .value=0x44}, {.addr=0x8e19, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e18, .value=0x44, .type=IO_READ},
        {.addr=0x8e19, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x2d89, .a=0x0c, .x=0xd2, .y=0x71, .sp=0x9e, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x62}, {.addr=0x2d89, .value=0x44}, {.addr=0x2d8a, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x2d8b, .a=0x6e, .x=0xd2, .y=0x71, .sp=0x9e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x62}, {.addr=0x2d89, .value=0x44}, {.addr=0x2d8a, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d89, .value=0x44, .type=IO_READ},
        {.addr=0x2d8a, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa746, .a=0x1c, .x=0xe7, .y=0x82, .sp=0x74, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x68}, {.addr=0xa746, .value=0x44}, {.addr=0xa747, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa748, .a=0x74, .x=0xe7, .y=0x82, .sp=0x74, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x68}, {.addr=0xa746, .value=0x44}, {.addr=0xa747, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa746, .value=0x44, .type=IO_READ},
        {.addr=0xa747, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x8e28, .a=0xe6, .x=0x49, .y=0xe3, .sp=0x0b, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x30}, {.addr=0x8e28, .value=0x44}, {.addr=0x8e29, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x8e2a, .a=0xd6, .x=0x49, .y=0xe3, .sp=0x0b, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x30}, {.addr=0x8e28, .value=0x44}, {.addr=0x8e29, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e28, .value=0x44, .type=IO_READ},
        {.addr=0x8e29, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x6a9b, .a=0xd9, .x=0xb5, .y=0x0f, .sp=0x3a, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x98}, {.addr=0x6a9b, .value=0x44}, {.addr=0x6a9c, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x6a9d, .a=0x41, .x=0xb5, .y=0x0f, .sp=0x3a, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x98}, {.addr=0x6a9b, .value=0x44}, {.addr=0x6a9c, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a9b, .value=0x44, .type=IO_READ},
        {.addr=0x6a9c, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xd34d, .a=0xaf, .x=0x49, .y=0x46, .sp=0xf9, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0xf0}, {.addr=0xd34d, .value=0x44}, {.addr=0xd34e, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0xd34f, .a=0x5f, .x=0x49, .y=0x46, .sp=0xf9, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0xf0}, {.addr=0xd34d, .value=0x44}, {.addr=0xd34e, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd34d, .value=0x44, .type=IO_READ},
        {.addr=0xd34e, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb336, .a=0xc0, .x=0xe0, .y=0xbd, .sp=0x68, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xca}, {.addr=0xb336, .value=0x44}, {.addr=0xb337, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xb338, .a=0x0a, .x=0xe0, .y=0xbd, .sp=0x68, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xca}, {.addr=0xb336, .value=0x44}, {.addr=0xb337, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb336, .value=0x44, .type=IO_READ},
        {.addr=0xb337, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xb12f, .a=0x49, .x=0xb9, .y=0xc5, .sp=0xa8, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x88}, {.addr=0xb12f, .value=0x44}, {.addr=0xb130, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xb131, .a=0xc1, .x=0xb9, .y=0xc5, .sp=0xa8, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x88}, {.addr=0xb12f, .value=0x44}, {.addr=0xb130, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb12f, .value=0x44, .type=IO_READ},
        {.addr=0xb130, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x3bf4, .a=0xff, .x=0x49, .y=0xe3, .sp=0x5c, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0xbb}, {.addr=0x3bf4, .value=0x44}, {.addr=0x3bf5, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x3bf6, .a=0x44, .x=0x49, .y=0xe3, .sp=0x5c, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0xbb}, {.addr=0x3bf4, .value=0x44}, {.addr=0x3bf5, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bf4, .value=0x44, .type=IO_READ},
        {.addr=0x3bf5, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x1f22, .a=0x48, .x=0xe1, .y=0x4a, .sp=0x7a, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x5e}, {.addr=0x1f22, .value=0x44}, {.addr=0x1f23, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x1f24, .a=0x16, .x=0xe1, .y=0x4a, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x5e}, {.addr=0x1f22, .value=0x44}, {.addr=0x1f23, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f22, .value=0x44, .type=IO_READ},
        {.addr=0x1f23, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x95c7, .a=0x58, .x=0x83, .y=0x29, .sp=0x6f, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x3c}, {.addr=0x95c7, .value=0x44}, {.addr=0x95c8, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x95c9, .a=0x64, .x=0x83, .y=0x29, .sp=0x6f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x3c}, {.addr=0x95c7, .value=0x44}, {.addr=0x95c8, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x95c7, .value=0x44, .type=IO_READ},
        {.addr=0x95c8, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x5f41, .a=0x95, .x=0xe2, .y=0x99, .sp=0x4d, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x25}, {.addr=0x5f41, .value=0x44}, {.addr=0x5f42, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x5f43, .a=0xb0, .x=0xe2, .y=0x99, .sp=0x4d, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x25}, {.addr=0x5f41, .value=0x44}, {.addr=0x5f42, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f41, .value=0x44, .type=IO_READ},
        {.addr=0x5f42, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x05fd, .a=0x0b, .x=0x1e, .y=0x50, .sp=0x4e, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x9f}, {.addr=0x05fd, .value=0x44}, {.addr=0x05fe, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x05ff, .a=0x94, .x=0x1e, .y=0x50, .sp=0x4e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x9f}, {.addr=0x05fd, .value=0x44}, {.addr=0x05fe, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x05fd, .value=0x44, .type=IO_READ},
        {.addr=0x05fe, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x9e3f, .a=0xf5, .x=0xca, .y=0x55, .sp=0xfd, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xba}, {.addr=0x9e3f, .value=0x44}, {.addr=0x9e40, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x9e41, .a=0x4f, .x=0xca, .y=0x55, .sp=0xfd, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xba}, {.addr=0x9e3f, .value=0x44}, {.addr=0x9e40, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e3f, .value=0x44, .type=IO_READ},
        {.addr=0x9e40, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x61ee, .a=0x79, .x=0x8b, .y=0x2d, .sp=0xab, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xd0}, {.addr=0x61ee, .value=0x44}, {.addr=0x61ef, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x61f0, .a=0xa9, .x=0x8b, .y=0x2d, .sp=0xab, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xd0}, {.addr=0x61ee, .value=0x44}, {.addr=0x61ef, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x61ee, .value=0x44, .type=IO_READ},
        {.addr=0x61ef, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2a8b, .a=0x9a, .x=0xab, .y=0x8e, .sp=0xe6, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x90}, {.addr=0x2a8b, .value=0x44}, {.addr=0x2a8c, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x2a8d, .a=0x0a, .x=0xab, .y=0x8e, .sp=0xe6, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x90}, {.addr=0x2a8b, .value=0x44}, {.addr=0x2a8c, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a8b, .value=0x44, .type=IO_READ},
        {.addr=0x2a8c, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xf37e, .a=0x2f, .x=0x6a, .y=0x47, .sp=0x81, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x13}, {.addr=0xf37e, .value=0x44}, {.addr=0xf37f, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf380, .a=0x3c, .x=0x6a, .y=0x47, .sp=0x81, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x13}, {.addr=0xf37e, .value=0x44}, {.addr=0xf37f, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf37e, .value=0x44, .type=IO_READ},
        {.addr=0xf37f, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x3bfa, .a=0x0b, .x=0x54, .y=0xc7, .sp=0x77, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xf6}, {.addr=0x3bfa, .value=0x44}, {.addr=0x3bfb, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x3bfc, .a=0xfd, .x=0x54, .y=0xc7, .sp=0x77, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xf6}, {.addr=0x3bfa, .value=0x44}, {.addr=0x3bfb, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bfa, .value=0x44, .type=IO_READ},
        {.addr=0x3bfb, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x2edb, .a=0xae, .x=0x61, .y=0xe5, .sp=0x29, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xb8}, {.addr=0x2edb, .value=0x44}, {.addr=0x2edc, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x2edd, .a=0x16, .x=0x61, .y=0xe5, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xb8}, {.addr=0x2edb, .value=0x44}, {.addr=0x2edc, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x2edb, .value=0x44, .type=IO_READ},
        {.addr=0x2edc, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0a2b, .a=0x77, .x=0xb4, .y=0x2f, .sp=0xcc, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x28}, {.addr=0x0a2b, .value=0x44}, {.addr=0x0a2c, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x0a2d, .a=0x5f, .x=0xb4, .y=0x2f, .sp=0xcc, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x28}, {.addr=0x0a2b, .value=0x44}, {.addr=0x0a2c, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a2b, .value=0x44, .type=IO_READ},
        {.addr=0x0a2c, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xcfb6, .a=0x34, .x=0x09, .y=0x1f, .sp=0x3b, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xa7}, {.addr=0xcfb6, .value=0x44}, {.addr=0xcfb7, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xcfb8, .a=0x93, .x=0x09, .y=0x1f, .sp=0x3b, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xa7}, {.addr=0xcfb6, .value=0x44}, {.addr=0xcfb7, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfb6, .value=0x44, .type=IO_READ},
        {.addr=0xcfb7, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x1386, .a=0xf5, .x=0xda, .y=0xab, .sp=0xf1, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xb6}, {.addr=0x1386, .value=0x44}, {.addr=0x1387, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x1388, .a=0x43, .x=0xda, .y=0xab, .sp=0xf1, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xb6}, {.addr=0x1386, .value=0x44}, {.addr=0x1387, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x1386, .value=0x44, .type=IO_READ},
        {.addr=0x1387, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x6c44, .a=0x98, .x=0x86, .y=0xfd, .sp=0xdf, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x3f}, {.addr=0x6c44, .value=0x44}, {.addr=0x6c45, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x6c46, .a=0xa7, .x=0x86, .y=0xfd, .sp=0xdf, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x3f}, {.addr=0x6c44, .value=0x44}, {.addr=0x6c45, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c44, .value=0x44, .type=IO_READ},
        {.addr=0x6c45, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x4615, .a=0xea, .x=0xd9, .y=0x3a, .sp=0xc0, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x92}, {.addr=0x4615, .value=0x44}, {.addr=0x4616, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x4617, .a=0x78, .x=0xd9, .y=0x3a, .sp=0xc0, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x92}, {.addr=0x4615, .value=0x44}, {.addr=0x4616, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4615, .value=0x44, .type=IO_READ},
        {.addr=0x4616, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xc6d5, .a=0xe3, .x=0x4d, .y=0x02, .sp=0x62, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x09}, {.addr=0xc6d5, .value=0x44}, {.addr=0xc6d6, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xc6d7, .a=0xea, .x=0x4d, .y=0x02, .sp=0x62, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x09}, {.addr=0xc6d5, .value=0x44}, {.addr=0xc6d6, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6d5, .value=0x44, .type=IO_READ},
        {.addr=0xc6d6, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xbc8f, .a=0x1e, .x=0x1c, .y=0x29, .sp=0x42, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xa9}, {.addr=0xbc8f, .value=0x44}, {.addr=0xbc90, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xbc91, .a=0xb7, .x=0x1c, .y=0x29, .sp=0x42, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xa9}, {.addr=0xbc8f, .value=0x44}, {.addr=0xbc90, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc8f, .value=0x44, .type=IO_READ},
        {.addr=0xbc90, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x44d2, .a=0xa1, .x=0xe8, .y=0x7c, .sp=0x00, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0xd9}, {.addr=0x44d2, .value=0x44}, {.addr=0x44d3, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x44d4, .a=0x78, .x=0xe8, .y=0x7c, .sp=0x00, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0xd9}, {.addr=0x44d2, .value=0x44}, {.addr=0x44d3, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x44d2, .value=0x44, .type=IO_READ},
        {.addr=0x44d3, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x59cc, .a=0xd9, .x=0xb6, .y=0x47, .sp=0x6e, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x2a}, {.addr=0x59cc, .value=0x44}, {.addr=0x59cd, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x59ce, .a=0xf3, .x=0xb6, .y=0x47, .sp=0x6e, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x2a}, {.addr=0x59cc, .value=0x44}, {.addr=0x59cd, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x59cc, .value=0x44, .type=IO_READ},
        {.addr=0x59cd, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xfe69, .a=0x14, .x=0xe9, .y=0xe2, .sp=0xc8, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xc6}, {.addr=0xfe69, .value=0x44}, {.addr=0xfe6a, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xfe6b, .a=0xd2, .x=0xe9, .y=0xe2, .sp=0xc8, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xc6}, {.addr=0xfe69, .value=0x44}, {.addr=0xfe6a, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe69, .value=0x44, .type=IO_READ},
        {.addr=0xfe6a, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x2c3f, .a=0x0e, .x=0x63, .y=0x81, .sp=0x95, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x97}, {.addr=0x2c3f, .value=0x44}, {.addr=0x2c40, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x2c41, .a=0x99, .x=0x63, .y=0x81, .sp=0x95, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x97}, {.addr=0x2c3f, .value=0x44}, {.addr=0x2c40, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c3f, .value=0x44, .type=IO_READ},
        {.addr=0x2c40, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x4403, .a=0x5a, .x=0x36, .y=0x1b, .sp=0x98, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x89}, {.addr=0x4403, .value=0x44}, {.addr=0x4404, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x4405, .a=0xd3, .x=0x36, .y=0x1b, .sp=0x98, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x89}, {.addr=0x4403, .value=0x44}, {.addr=0x4404, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4403, .value=0x44, .type=IO_READ},
        {.addr=0x4404, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x75af, .a=0x36, .x=0xae, .y=0x3d, .sp=0x12, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0xec}, {.addr=0x75af, .value=0x44}, {.addr=0x75b0, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x75b1, .a=0xda, .x=0xae, .y=0x3d, .sp=0x12, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0xec}, {.addr=0x75af, .value=0x44}, {.addr=0x75b0, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x75af, .value=0x44, .type=IO_READ},
        {.addr=0x75b0, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0300) {
    const struct CPU_State initial_cpu = {.pc=0x5887, .a=0x2d, .x=0x83, .y=0x31, .sp=0x9b, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xcc}, {.addr=0x5887, .value=0x44}, {.addr=0x5888, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x5889, .a=0xe1, .x=0x83, .y=0x31, .sp=0x9b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xcc}, {.addr=0x5887, .value=0x44}, {.addr=0x5888, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x5887, .value=0x44, .type=IO_READ},
        {.addr=0x5888, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0301) {
    const struct CPU_State initial_cpu = {.pc=0xcd40, .a=0x8b, .x=0x4b, .y=0xfb, .sp=0xac, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x72}, {.addr=0xcd40, .value=0x44}, {.addr=0xcd41, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xcd42, .a=0xf9, .x=0x4b, .y=0xfb, .sp=0xac, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x72}, {.addr=0xcd40, .value=0x44}, {.addr=0xcd41, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd40, .value=0x44, .type=IO_READ},
        {.addr=0xcd41, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0302) {
    const struct CPU_State initial_cpu = {.pc=0xe569, .a=0xca, .x=0x08, .y=0xb7, .sp=0x46, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x85}, {.addr=0xe569, .value=0x44}, {.addr=0xe56a, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xe56b, .a=0x4f, .x=0x08, .y=0xb7, .sp=0x46, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x85}, {.addr=0xe569, .value=0x44}, {.addr=0xe56a, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xe569, .value=0x44, .type=IO_READ},
        {.addr=0xe56a, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0303) {
    const struct CPU_State initial_cpu = {.pc=0x1499, .a=0xa3, .x=0x3d, .y=0x4d, .sp=0xcb, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x40}, {.addr=0x1499, .value=0x44}, {.addr=0x149a, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x149b, .a=0xe3, .x=0x3d, .y=0x4d, .sp=0xcb, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x40}, {.addr=0x1499, .value=0x44}, {.addr=0x149a, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x1499, .value=0x44, .type=IO_READ},
        {.addr=0x149a, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0304) {
    const struct CPU_State initial_cpu = {.pc=0x1633, .a=0x85, .x=0x1c, .y=0xf6, .sp=0x6c, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xa8}, {.addr=0x1633, .value=0x44}, {.addr=0x1634, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x1635, .a=0x2d, .x=0x1c, .y=0xf6, .sp=0x6c, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xa8}, {.addr=0x1633, .value=0x44}, {.addr=0x1634, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x1633, .value=0x44, .type=IO_READ},
        {.addr=0x1634, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0305) {
    const struct CPU_State initial_cpu = {.pc=0x27aa, .a=0x72, .x=0x51, .y=0x64, .sp=0xfe, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0xf1}, {.addr=0x27aa, .value=0x44}, {.addr=0x27ab, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x27ac, .a=0x83, .x=0x51, .y=0x64, .sp=0xfe, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0xf1}, {.addr=0x27aa, .value=0x44}, {.addr=0x27ab, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x27aa, .value=0x44, .type=IO_READ},
        {.addr=0x27ab, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0306) {
    const struct CPU_State initial_cpu = {.pc=0xab7e, .a=0xf0, .x=0x53, .y=0x8f, .sp=0xfd, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x3c}, {.addr=0xab7e, .value=0x44}, {.addr=0xab7f, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xab80, .a=0xcc, .x=0x53, .y=0x8f, .sp=0xfd, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x3c}, {.addr=0xab7e, .value=0x44}, {.addr=0xab7f, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xab7e, .value=0x44, .type=IO_READ},
        {.addr=0xab7f, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4933, .a=0x28, .x=0x99, .y=0x04, .sp=0xf6, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xd5}, {.addr=0x4933, .value=0x44}, {.addr=0x4934, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x4935, .a=0xfd, .x=0x99, .y=0x04, .sp=0xf6, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xd5}, {.addr=0x4933, .value=0x44}, {.addr=0x4934, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4933, .value=0x44, .type=IO_READ},
        {.addr=0x4934, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0308) {
    const struct CPU_State initial_cpu = {.pc=0x78dd, .a=0x7c, .x=0xd6, .y=0x9e, .sp=0xf3, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x99}, {.addr=0x78dd, .value=0x44}, {.addr=0x78de, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x78df, .a=0xe5, .x=0xd6, .y=0x9e, .sp=0xf3, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x99}, {.addr=0x78dd, .value=0x44}, {.addr=0x78de, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x78dd, .value=0x44, .type=IO_READ},
        {.addr=0x78de, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0309) {
    const struct CPU_State initial_cpu = {.pc=0x9014, .a=0xfe, .x=0x78, .y=0x43, .sp=0x5b, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x8a}, {.addr=0x9014, .value=0x44}, {.addr=0x9015, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x9016, .a=0x74, .x=0x78, .y=0x43, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x8a}, {.addr=0x9014, .value=0x44}, {.addr=0x9015, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x9014, .value=0x44, .type=IO_READ},
        {.addr=0x9015, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030A) {
    const struct CPU_State initial_cpu = {.pc=0x2be6, .a=0x4a, .x=0xca, .y=0x33, .sp=0x42, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x55}, {.addr=0x2be6, .value=0x44}, {.addr=0x2be7, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x2be8, .a=0x1f, .x=0xca, .y=0x33, .sp=0x42, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x55}, {.addr=0x2be6, .value=0x44}, {.addr=0x2be7, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x2be6, .value=0x44, .type=IO_READ},
        {.addr=0x2be7, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030B) {
    const struct CPU_State initial_cpu = {.pc=0x6c26, .a=0x6f, .x=0xaf, .y=0x0a, .sp=0x06, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x9c}, {.addr=0x6c26, .value=0x44}, {.addr=0x6c27, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x6c28, .a=0xf3, .x=0xaf, .y=0x0a, .sp=0x06, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x9c}, {.addr=0x6c26, .value=0x44}, {.addr=0x6c27, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c26, .value=0x44, .type=IO_READ},
        {.addr=0x6c27, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030C) {
    const struct CPU_State initial_cpu = {.pc=0x3756, .a=0xfe, .x=0xe8, .y=0x98, .sp=0x75, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x9c}, {.addr=0x3756, .value=0x44}, {.addr=0x3757, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x3758, .a=0x62, .x=0xe8, .y=0x98, .sp=0x75, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x9c}, {.addr=0x3756, .value=0x44}, {.addr=0x3757, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3756, .value=0x44, .type=IO_READ},
        {.addr=0x3757, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5554, .a=0x4c, .x=0x0f, .y=0xb0, .sp=0x2d, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xd7}, {.addr=0x5554, .value=0x44}, {.addr=0x5555, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x5556, .a=0x9b, .x=0x0f, .y=0xb0, .sp=0x2d, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xd7}, {.addr=0x5554, .value=0x44}, {.addr=0x5555, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5554, .value=0x44, .type=IO_READ},
        {.addr=0x5555, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030E) {
    const struct CPU_State initial_cpu = {.pc=0x5eee, .a=0xd4, .x=0xad, .y=0x51, .sp=0x3c, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xc5}, {.addr=0x5eee, .value=0x44}, {.addr=0x5eef, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x5ef0, .a=0x11, .x=0xad, .y=0x51, .sp=0x3c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xc5}, {.addr=0x5eee, .value=0x44}, {.addr=0x5eef, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eee, .value=0x44, .type=IO_READ},
        {.addr=0x5eef, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_030F) {
    const struct CPU_State initial_cpu = {.pc=0x23e7, .a=0x54, .x=0x2d, .y=0x64, .sp=0x4a, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xd7}, {.addr=0x23e7, .value=0x44}, {.addr=0x23e8, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x23e9, .a=0x83, .x=0x2d, .y=0x64, .sp=0x4a, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xd7}, {.addr=0x23e7, .value=0x44}, {.addr=0x23e8, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x23e7, .value=0x44, .type=IO_READ},
        {.addr=0x23e8, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0310) {
    const struct CPU_State initial_cpu = {.pc=0xc1e0, .a=0x6f, .x=0x03, .y=0x56, .sp=0x4e, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x33}, {.addr=0xc1e0, .value=0x44}, {.addr=0xc1e1, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xc1e2, .a=0x5c, .x=0x03, .y=0x56, .sp=0x4e, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x33}, {.addr=0xc1e0, .value=0x44}, {.addr=0xc1e1, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1e0, .value=0x44, .type=IO_READ},
        {.addr=0xc1e1, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0311) {
    const struct CPU_State initial_cpu = {.pc=0xdc96, .a=0xf9, .x=0x77, .y=0x87, .sp=0x2e, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x68}, {.addr=0xdc96, .value=0x44}, {.addr=0xdc97, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xdc98, .a=0x91, .x=0x77, .y=0x87, .sp=0x2e, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x68}, {.addr=0xdc96, .value=0x44}, {.addr=0xdc97, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc96, .value=0x44, .type=IO_READ},
        {.addr=0xdc97, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc847, .a=0xb4, .x=0x94, .y=0x83, .sp=0xbf, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x49}, {.addr=0xc847, .value=0x44}, {.addr=0xc848, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xc849, .a=0xfd, .x=0x94, .y=0x83, .sp=0xbf, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x49}, {.addr=0xc847, .value=0x44}, {.addr=0xc848, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xc847, .value=0x44, .type=IO_READ},
        {.addr=0xc848, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0313) {
    const struct CPU_State initial_cpu = {.pc=0xbf4a, .a=0x21, .x=0xca, .y=0x89, .sp=0xf3, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xf6}, {.addr=0xbf4a, .value=0x44}, {.addr=0xbf4b, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xbf4c, .a=0xd7, .x=0xca, .y=0x89, .sp=0xf3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xf6}, {.addr=0xbf4a, .value=0x44}, {.addr=0xbf4b, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf4a, .value=0x44, .type=IO_READ},
        {.addr=0xbf4b, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0314) {
    const struct CPU_State initial_cpu = {.pc=0xa056, .a=0x29, .x=0x62, .y=0xc2, .sp=0xd1, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x96}, {.addr=0xa056, .value=0x44}, {.addr=0xa057, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa058, .a=0xbf, .x=0x62, .y=0xc2, .sp=0xd1, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x96}, {.addr=0xa056, .value=0x44}, {.addr=0xa057, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa056, .value=0x44, .type=IO_READ},
        {.addr=0xa057, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0315) {
    const struct CPU_State initial_cpu = {.pc=0x69c7, .a=0xd5, .x=0x6f, .y=0x4b, .sp=0x45, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x8b}, {.addr=0x69c7, .value=0x44}, {.addr=0x69c8, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x69c9, .a=0x5e, .x=0x6f, .y=0x4b, .sp=0x45, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x8b}, {.addr=0x69c7, .value=0x44}, {.addr=0x69c8, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x69c7, .value=0x44, .type=IO_READ},
        {.addr=0x69c8, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0316) {
    const struct CPU_State initial_cpu = {.pc=0x992f, .a=0x8b, .x=0xea, .y=0x31, .sp=0xaa, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x0d}, {.addr=0x992f, .value=0x44}, {.addr=0x9930, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x9931, .a=0x86, .x=0xea, .y=0x31, .sp=0xaa, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x0d}, {.addr=0x992f, .value=0x44}, {.addr=0x9930, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x992f, .value=0x44, .type=IO_READ},
        {.addr=0x9930, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0317) {
    const struct CPU_State initial_cpu = {.pc=0xa8b7, .a=0xaa, .x=0x46, .y=0x23, .sp=0x77, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xf1}, {.addr=0xa8b7, .value=0x44}, {.addr=0xa8b8, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xa8b9, .a=0x5b, .x=0x46, .y=0x23, .sp=0x77, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xf1}, {.addr=0xa8b7, .value=0x44}, {.addr=0xa8b8, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8b7, .value=0x44, .type=IO_READ},
        {.addr=0xa8b8, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0318) {
    const struct CPU_State initial_cpu = {.pc=0xeb6f, .a=0x9b, .x=0x84, .y=0x67, .sp=0x98, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x05}, {.addr=0xeb6f, .value=0x44}, {.addr=0xeb70, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xeb71, .a=0x9e, .x=0x84, .y=0x67, .sp=0x98, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x05}, {.addr=0xeb6f, .value=0x44}, {.addr=0xeb70, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb6f, .value=0x44, .type=IO_READ},
        {.addr=0xeb70, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0319) {
    const struct CPU_State initial_cpu = {.pc=0x8b1e, .a=0x88, .x=0xe7, .y=0x50, .sp=0x2c, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xa0}, {.addr=0x8b1e, .value=0x44}, {.addr=0x8b1f, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x8b20, .a=0x28, .x=0xe7, .y=0x50, .sp=0x2c, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xa0}, {.addr=0x8b1e, .value=0x44}, {.addr=0x8b1f, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b1e, .value=0x44, .type=IO_READ},
        {.addr=0x8b1f, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031A) {
    const struct CPU_State initial_cpu = {.pc=0x4aac, .a=0xf3, .x=0x93, .y=0xf1, .sp=0x92, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x08}, {.addr=0x4aac, .value=0x44}, {.addr=0x4aad, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x4aae, .a=0xfb, .x=0x93, .y=0xf1, .sp=0x92, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x08}, {.addr=0x4aac, .value=0x44}, {.addr=0x4aad, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aac, .value=0x44, .type=IO_READ},
        {.addr=0x4aad, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031B) {
    const struct CPU_State initial_cpu = {.pc=0xac6a, .a=0x36, .x=0x8f, .y=0xef, .sp=0x75, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x8c}, {.addr=0xac6a, .value=0x44}, {.addr=0xac6b, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xac6c, .a=0xba, .x=0x8f, .y=0xef, .sp=0x75, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x8c}, {.addr=0xac6a, .value=0x44}, {.addr=0xac6b, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xac6a, .value=0x44, .type=IO_READ},
        {.addr=0xac6b, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031C) {
    const struct CPU_State initial_cpu = {.pc=0xff67, .a=0xf3, .x=0x59, .y=0x51, .sp=0xac, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x7a}, {.addr=0xff67, .value=0x44}, {.addr=0xff68, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xff69, .a=0x89, .x=0x59, .y=0x51, .sp=0xac, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x7a}, {.addr=0xff67, .value=0x44}, {.addr=0xff68, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xff67, .value=0x44, .type=IO_READ},
        {.addr=0xff68, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031D) {
    const struct CPU_State initial_cpu = {.pc=0xfca2, .a=0x54, .x=0x7c, .y=0xb7, .sp=0xa5, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xbd}, {.addr=0xfca2, .value=0x44}, {.addr=0xfca3, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xfca4, .a=0xe9, .x=0x7c, .y=0xb7, .sp=0xa5, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xbd}, {.addr=0xfca2, .value=0x44}, {.addr=0xfca3, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xfca2, .value=0x44, .type=IO_READ},
        {.addr=0xfca3, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031E) {
    const struct CPU_State initial_cpu = {.pc=0xf111, .a=0x58, .x=0xc3, .y=0x82, .sp=0x69, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x66}, {.addr=0xf111, .value=0x44}, {.addr=0xf112, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xf113, .a=0x3e, .x=0xc3, .y=0x82, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x66}, {.addr=0xf111, .value=0x44}, {.addr=0xf112, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xf111, .value=0x44, .type=IO_READ},
        {.addr=0xf112, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_031F) {
    const struct CPU_State initial_cpu = {.pc=0xdc0e, .a=0xb7, .x=0x8a, .y=0x4a, .sp=0xaf, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xe4}, {.addr=0xdc0e, .value=0x44}, {.addr=0xdc0f, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xdc10, .a=0x53, .x=0x8a, .y=0x4a, .sp=0xaf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xe4}, {.addr=0xdc0e, .value=0x44}, {.addr=0xdc0f, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc0e, .value=0x44, .type=IO_READ},
        {.addr=0xdc0f, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0320) {
    const struct CPU_State initial_cpu = {.pc=0x0d9b, .a=0x98, .x=0x15, .y=0x84, .sp=0x16, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xbc}, {.addr=0x0d9b, .value=0x44}, {.addr=0x0d9c, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x0d9d, .a=0x24, .x=0x15, .y=0x84, .sp=0x16, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xbc}, {.addr=0x0d9b, .value=0x44}, {.addr=0x0d9c, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d9b, .value=0x44, .type=IO_READ},
        {.addr=0x0d9c, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0321) {
    const struct CPU_State initial_cpu = {.pc=0xbde5, .a=0x87, .x=0x4c, .y=0x1b, .sp=0x6a, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xfd}, {.addr=0xbde5, .value=0x44}, {.addr=0xbde6, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xbde7, .a=0x7a, .x=0x4c, .y=0x1b, .sp=0x6a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xfd}, {.addr=0xbde5, .value=0x44}, {.addr=0xbde6, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xbde5, .value=0x44, .type=IO_READ},
        {.addr=0xbde6, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0322) {
    const struct CPU_State initial_cpu = {.pc=0x972d, .a=0xee, .x=0x49, .y=0x22, .sp=0xdd, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x76}, {.addr=0x972d, .value=0x44}, {.addr=0x972e, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x972f, .a=0x98, .x=0x49, .y=0x22, .sp=0xdd, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x76}, {.addr=0x972d, .value=0x44}, {.addr=0x972e, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x972d, .value=0x44, .type=IO_READ},
        {.addr=0x972e, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0323) {
    const struct CPU_State initial_cpu = {.pc=0x68c6, .a=0xc9, .x=0x15, .y=0x7d, .sp=0x24, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xf7}, {.addr=0x68c6, .value=0x44}, {.addr=0x68c7, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x68c8, .a=0x3e, .x=0x15, .y=0x7d, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xf7}, {.addr=0x68c6, .value=0x44}, {.addr=0x68c7, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x68c6, .value=0x44, .type=IO_READ},
        {.addr=0x68c7, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0325) {
    const struct CPU_State initial_cpu = {.pc=0x2f3f, .a=0x30, .x=0xc5, .y=0x19, .sp=0x5b, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x18}, {.addr=0x2f3f, .value=0x44}, {.addr=0x2f40, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x2f41, .a=0x28, .x=0xc5, .y=0x19, .sp=0x5b, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x18}, {.addr=0x2f3f, .value=0x44}, {.addr=0x2f40, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f3f, .value=0x44, .type=IO_READ},
        {.addr=0x2f40, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0326) {
    const struct CPU_State initial_cpu = {.pc=0x8aa3, .a=0xac, .x=0x45, .y=0x72, .sp=0x8f, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xaf}, {.addr=0x8aa3, .value=0x44}, {.addr=0x8aa4, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x8aa5, .a=0x03, .x=0x45, .y=0x72, .sp=0x8f, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xaf}, {.addr=0x8aa3, .value=0x44}, {.addr=0x8aa4, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aa3, .value=0x44, .type=IO_READ},
        {.addr=0x8aa4, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0327) {
    const struct CPU_State initial_cpu = {.pc=0x5de8, .a=0x16, .x=0x5e, .y=0x23, .sp=0x1d, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xe9}, {.addr=0x5de8, .value=0x44}, {.addr=0x5de9, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x5dea, .a=0xff, .x=0x5e, .y=0x23, .sp=0x1d, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xe9}, {.addr=0x5de8, .value=0x44}, {.addr=0x5de9, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5de8, .value=0x44, .type=IO_READ},
        {.addr=0x5de9, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3b09, .a=0xfa, .x=0xda, .y=0xa5, .sp=0xc7, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x91}, {.addr=0x3b09, .value=0x44}, {.addr=0x3b0a, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x3b0b, .a=0x6b, .x=0xda, .y=0xa5, .sp=0xc7, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x91}, {.addr=0x3b09, .value=0x44}, {.addr=0x3b0a, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b09, .value=0x44, .type=IO_READ},
        {.addr=0x3b0a, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_032A) {
    const struct CPU_State initial_cpu = {.pc=0x8ad7, .a=0x33, .x=0x24, .y=0x91, .sp=0x83, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xe2}, {.addr=0x8ad7, .value=0x44}, {.addr=0x8ad8, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x8ad9, .a=0xd1, .x=0x24, .y=0x91, .sp=0x83, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xe2}, {.addr=0x8ad7, .value=0x44}, {.addr=0x8ad8, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ad7, .value=0x44, .type=IO_READ},
        {.addr=0x8ad8, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_032B) {
    const struct CPU_State initial_cpu = {.pc=0x23b2, .a=0xb6, .x=0x04, .y=0x0a, .sp=0xf7, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x26}, {.addr=0x23b2, .value=0x44}, {.addr=0x23b3, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x23b4, .a=0x90, .x=0x04, .y=0x0a, .sp=0xf7, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x26}, {.addr=0x23b2, .value=0x44}, {.addr=0x23b3, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x23b2, .value=0x44, .type=IO_READ},
        {.addr=0x23b3, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_032C) {
    const struct CPU_State initial_cpu = {.pc=0x96bb, .a=0x9f, .x=0x95, .y=0x6b, .sp=0xe6, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x46}, {.addr=0x96bb, .value=0x44}, {.addr=0x96bc, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x96bd, .a=0xd9, .x=0x95, .y=0x6b, .sp=0xe6, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x46}, {.addr=0x96bb, .value=0x44}, {.addr=0x96bc, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x96bb, .value=0x44, .type=IO_READ},
        {.addr=0x96bc, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_032D) {
    const struct CPU_State initial_cpu = {.pc=0x7edb, .a=0x66, .x=0x93, .y=0xa7, .sp=0x6a, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xcd}, {.addr=0x7edb, .value=0x44}, {.addr=0x7edc, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x7edd, .a=0xab, .x=0x93, .y=0xa7, .sp=0x6a, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xcd}, {.addr=0x7edb, .value=0x44}, {.addr=0x7edc, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x7edb, .value=0x44, .type=IO_READ},
        {.addr=0x7edc, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_032E) {
    const struct CPU_State initial_cpu = {.pc=0x7017, .a=0x66, .x=0x34, .y=0x17, .sp=0x01, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xc1}, {.addr=0x7017, .value=0x44}, {.addr=0x7018, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x7019, .a=0xa7, .x=0x34, .y=0x17, .sp=0x01, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xc1}, {.addr=0x7017, .value=0x44}, {.addr=0x7018, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7017, .value=0x44, .type=IO_READ},
        {.addr=0x7018, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0330) {
    const struct CPU_State initial_cpu = {.pc=0xbad5, .a=0x7d, .x=0x9b, .y=0xaf, .sp=0x4f, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x60}, {.addr=0xbad5, .value=0x44}, {.addr=0xbad6, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xbad7, .a=0x1d, .x=0x9b, .y=0xaf, .sp=0x4f, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x60}, {.addr=0xbad5, .value=0x44}, {.addr=0xbad6, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xbad5, .value=0x44, .type=IO_READ},
        {.addr=0xbad6, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0331) {
    const struct CPU_State initial_cpu = {.pc=0x6f1a, .a=0xfb, .x=0x70, .y=0xbc, .sp=0xbb, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xc3}, {.addr=0x6f1a, .value=0x44}, {.addr=0x6f1b, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x6f1c, .a=0x38, .x=0x70, .y=0xbc, .sp=0xbb, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xc3}, {.addr=0x6f1a, .value=0x44}, {.addr=0x6f1b, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f1a, .value=0x44, .type=IO_READ},
        {.addr=0x6f1b, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0332) {
    const struct CPU_State initial_cpu = {.pc=0xf361, .a=0x9b, .x=0x65, .y=0xdd, .sp=0x55, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x5c}, {.addr=0xf361, .value=0x44}, {.addr=0xf362, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xf363, .a=0xc7, .x=0x65, .y=0xdd, .sp=0x55, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x5c}, {.addr=0xf361, .value=0x44}, {.addr=0xf362, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xf361, .value=0x44, .type=IO_READ},
        {.addr=0xf362, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4944, .a=0x1e, .x=0x4c, .y=0x45, .sp=0xed, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x2e}, {.addr=0x4944, .value=0x44}, {.addr=0x4945, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x4946, .a=0x30, .x=0x4c, .y=0x45, .sp=0xed, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x2e}, {.addr=0x4944, .value=0x44}, {.addr=0x4945, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4944, .value=0x44, .type=IO_READ},
        {.addr=0x4945, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0334) {
    const struct CPU_State initial_cpu = {.pc=0x1269, .a=0xc1, .x=0xb6, .y=0x59, .sp=0xef, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xf7}, {.addr=0x1269, .value=0x44}, {.addr=0x126a, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x126b, .a=0x36, .x=0xb6, .y=0x59, .sp=0xef, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xf7}, {.addr=0x1269, .value=0x44}, {.addr=0x126a, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1269, .value=0x44, .type=IO_READ},
        {.addr=0x126a, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0335) {
    const struct CPU_State initial_cpu = {.pc=0x2170, .a=0xe9, .x=0x75, .y=0x06, .sp=0xd7, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x97}, {.addr=0x2170, .value=0x44}, {.addr=0x2171, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x2172, .a=0x7e, .x=0x75, .y=0x06, .sp=0xd7, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x97}, {.addr=0x2170, .value=0x44}, {.addr=0x2171, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x2170, .value=0x44, .type=IO_READ},
        {.addr=0x2171, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0336) {
    const struct CPU_State initial_cpu = {.pc=0x1e86, .a=0x0d, .x=0x2e, .y=0x23, .sp=0x36, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xca}, {.addr=0x1e86, .value=0x44}, {.addr=0x1e87, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x1e88, .a=0xc7, .x=0x2e, .y=0x23, .sp=0x36, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xca}, {.addr=0x1e86, .value=0x44}, {.addr=0x1e87, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e86, .value=0x44, .type=IO_READ},
        {.addr=0x1e87, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0337) {
    const struct CPU_State initial_cpu = {.pc=0xb5a9, .a=0xd0, .x=0x4d, .y=0x74, .sp=0x18, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x36}, {.addr=0xb5a9, .value=0x44}, {.addr=0xb5aa, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xb5ab, .a=0xe6, .x=0x4d, .y=0x74, .sp=0x18, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x36}, {.addr=0xb5a9, .value=0x44}, {.addr=0xb5aa, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5a9, .value=0x44, .type=IO_READ},
        {.addr=0xb5aa, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0338) {
    const struct CPU_State initial_cpu = {.pc=0x72dd, .a=0x4b, .x=0x17, .y=0xbe, .sp=0xbc, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xef}, {.addr=0x72dd, .value=0x44}, {.addr=0x72de, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x72df, .a=0xa4, .x=0x17, .y=0xbe, .sp=0xbc, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xef}, {.addr=0x72dd, .value=0x44}, {.addr=0x72de, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x72dd, .value=0x44, .type=IO_READ},
        {.addr=0x72de, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0339) {
    const struct CPU_State initial_cpu = {.pc=0x1ff1, .a=0x5f, .x=0xa7, .y=0x15, .sp=0x18, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x34}, {.addr=0x1ff1, .value=0x44}, {.addr=0x1ff2, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x1ff3, .a=0x6b, .x=0xa7, .y=0x15, .sp=0x18, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x34}, {.addr=0x1ff1, .value=0x44}, {.addr=0x1ff2, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ff1, .value=0x44, .type=IO_READ},
        {.addr=0x1ff2, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_033A) {
    const struct CPU_State initial_cpu = {.pc=0xb346, .a=0xe5, .x=0x32, .y=0x16, .sp=0x32, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x64}, {.addr=0xb346, .value=0x44}, {.addr=0xb347, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0xb348, .a=0x81, .x=0x32, .y=0x16, .sp=0x32, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x64}, {.addr=0xb346, .value=0x44}, {.addr=0xb347, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb346, .value=0x44, .type=IO_READ},
        {.addr=0xb347, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_033B) {
    const struct CPU_State initial_cpu = {.pc=0xee4a, .a=0xea, .x=0xa4, .y=0x8f, .sp=0x45, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xec}, {.addr=0xee4a, .value=0x44}, {.addr=0xee4b, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xee4c, .a=0x06, .x=0xa4, .y=0x8f, .sp=0x45, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xec}, {.addr=0xee4a, .value=0x44}, {.addr=0xee4b, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xee4a, .value=0x44, .type=IO_READ},
        {.addr=0xee4b, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_033C) {
    const struct CPU_State initial_cpu = {.pc=0xff24, .a=0x6c, .x=0x8a, .y=0xfe, .sp=0x46, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x5d}, {.addr=0xff24, .value=0x44}, {.addr=0xff25, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xff26, .a=0x31, .x=0x8a, .y=0xfe, .sp=0x46, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x5d}, {.addr=0xff24, .value=0x44}, {.addr=0xff25, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xff24, .value=0x44, .type=IO_READ},
        {.addr=0xff25, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_033D) {
    const struct CPU_State initial_cpu = {.pc=0x700f, .a=0x30, .x=0xf0, .y=0xdf, .sp=0x68, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0xed}, {.addr=0x700f, .value=0x44}, {.addr=0x7010, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x7011, .a=0xdd, .x=0xf0, .y=0xdf, .sp=0x68, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0xed}, {.addr=0x700f, .value=0x44}, {.addr=0x7010, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x700f, .value=0x44, .type=IO_READ},
        {.addr=0x7010, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_033E) {
    const struct CPU_State initial_cpu = {.pc=0xf4f2, .a=0x8c, .x=0xa6, .y=0xa0, .sp=0x29, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xdb}, {.addr=0xf4f2, .value=0x44}, {.addr=0xf4f3, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xf4f4, .a=0x57, .x=0xa6, .y=0xa0, .sp=0x29, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xdb}, {.addr=0xf4f2, .value=0x44}, {.addr=0xf4f3, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4f2, .value=0x44, .type=IO_READ},
        {.addr=0xf4f3, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0340) {
    const struct CPU_State initial_cpu = {.pc=0xd865, .a=0x01, .x=0x2c, .y=0x29, .sp=0xa2, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x89}, {.addr=0xd865, .value=0x44}, {.addr=0xd866, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xd867, .a=0x88, .x=0x2c, .y=0x29, .sp=0xa2, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x89}, {.addr=0xd865, .value=0x44}, {.addr=0xd866, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xd865, .value=0x44, .type=IO_READ},
        {.addr=0xd866, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0341) {
    const struct CPU_State initial_cpu = {.pc=0x664d, .a=0xfa, .x=0xae, .y=0x34, .sp=0xc2, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x0e}, {.addr=0x664d, .value=0x44}, {.addr=0x664e, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x664f, .a=0xf4, .x=0xae, .y=0x34, .sp=0xc2, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x0e}, {.addr=0x664d, .value=0x44}, {.addr=0x664e, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x664d, .value=0x44, .type=IO_READ},
        {.addr=0x664e, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0342) {
    const struct CPU_State initial_cpu = {.pc=0x10c6, .a=0x70, .x=0x95, .y=0xe5, .sp=0x11, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xb1}, {.addr=0x10c6, .value=0x44}, {.addr=0x10c7, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x10c8, .a=0xc1, .x=0x95, .y=0xe5, .sp=0x11, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xb1}, {.addr=0x10c6, .value=0x44}, {.addr=0x10c7, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x10c6, .value=0x44, .type=IO_READ},
        {.addr=0x10c7, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0343) {
    const struct CPU_State initial_cpu = {.pc=0xaccd, .a=0x8d, .x=0x8a, .y=0x41, .sp=0x0b, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x8f}, {.addr=0xaccd, .value=0x44}, {.addr=0xacce, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xaccf, .a=0x02, .x=0x8a, .y=0x41, .sp=0x0b, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x8f}, {.addr=0xaccd, .value=0x44}, {.addr=0xacce, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xaccd, .value=0x44, .type=IO_READ},
        {.addr=0xacce, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0344) {
    const struct CPU_State initial_cpu = {.pc=0xa688, .a=0x17, .x=0x11, .y=0xa9, .sp=0x6d, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0xad}, {.addr=0xa688, .value=0x44}, {.addr=0xa689, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xa68a, .a=0xba, .x=0x11, .y=0xa9, .sp=0x6d, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0xad}, {.addr=0xa688, .value=0x44}, {.addr=0xa689, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa688, .value=0x44, .type=IO_READ},
        {.addr=0xa689, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb09f, .a=0x94, .x=0x10, .y=0x77, .sp=0x50, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x35}, {.addr=0xb09f, .value=0x44}, {.addr=0xb0a0, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xb0a1, .a=0xa1, .x=0x10, .y=0x77, .sp=0x50, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x35}, {.addr=0xb09f, .value=0x44}, {.addr=0xb0a0, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb09f, .value=0x44, .type=IO_READ},
        {.addr=0xb0a0, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0346) {
    const struct CPU_State initial_cpu = {.pc=0xb532, .a=0xe4, .x=0x70, .y=0xbc, .sp=0x0c, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xd5}, {.addr=0xb532, .value=0x44}, {.addr=0xb533, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xb534, .a=0x31, .x=0x70, .y=0xbc, .sp=0x0c, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xd5}, {.addr=0xb532, .value=0x44}, {.addr=0xb533, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xb532, .value=0x44, .type=IO_READ},
        {.addr=0xb533, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6c80, .a=0xf4, .x=0xf6, .y=0xbf, .sp=0x8c, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x8c}, {.addr=0x6c80, .value=0x44}, {.addr=0x6c81, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x6c82, .a=0x78, .x=0xf6, .y=0xbf, .sp=0x8c, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x8c}, {.addr=0x6c80, .value=0x44}, {.addr=0x6c81, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c80, .value=0x44, .type=IO_READ},
        {.addr=0x6c81, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0348) {
    const struct CPU_State initial_cpu = {.pc=0xf19b, .a=0xbd, .x=0xef, .y=0xf8, .sp=0x6b, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xe4}, {.addr=0xf19b, .value=0x44}, {.addr=0xf19c, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xf19d, .a=0x59, .x=0xef, .y=0xf8, .sp=0x6b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xe4}, {.addr=0xf19b, .value=0x44}, {.addr=0xf19c, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xf19b, .value=0x44, .type=IO_READ},
        {.addr=0xf19c, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0349) {
    const struct CPU_State initial_cpu = {.pc=0xb40c, .a=0x2f, .x=0x25, .y=0x2c, .sp=0xf4, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xe3}, {.addr=0xb40c, .value=0x44}, {.addr=0xb40d, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xb40e, .a=0xcc, .x=0x25, .y=0x2c, .sp=0xf4, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xe3}, {.addr=0xb40c, .value=0x44}, {.addr=0xb40d, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb40c, .value=0x44, .type=IO_READ},
        {.addr=0xb40d, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034A) {
    const struct CPU_State initial_cpu = {.pc=0xaf89, .a=0x34, .x=0x72, .y=0x5e, .sp=0x40, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xd6}, {.addr=0xaf89, .value=0x44}, {.addr=0xaf8a, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xaf8b, .a=0xe2, .x=0x72, .y=0x5e, .sp=0x40, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xd6}, {.addr=0xaf89, .value=0x44}, {.addr=0xaf8a, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf89, .value=0x44, .type=IO_READ},
        {.addr=0xaf8a, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034B) {
    const struct CPU_State initial_cpu = {.pc=0x3ebb, .a=0xb3, .x=0xac, .y=0x2d, .sp=0x8f, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xbd}, {.addr=0x3ebb, .value=0x44}, {.addr=0x3ebc, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x3ebd, .a=0x0e, .x=0xac, .y=0x2d, .sp=0x8f, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xbd}, {.addr=0x3ebb, .value=0x44}, {.addr=0x3ebc, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ebb, .value=0x44, .type=IO_READ},
        {.addr=0x3ebc, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034C) {
    const struct CPU_State initial_cpu = {.pc=0x454e, .a=0xfa, .x=0xa0, .y=0xcb, .sp=0x5e, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x7b}, {.addr=0x454e, .value=0x44}, {.addr=0x454f, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x4550, .a=0x81, .x=0xa0, .y=0xcb, .sp=0x5e, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x7b}, {.addr=0x454e, .value=0x44}, {.addr=0x454f, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x454e, .value=0x44, .type=IO_READ},
        {.addr=0x454f, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034D) {
    const struct CPU_State initial_cpu = {.pc=0x59ea, .a=0xf0, .x=0x1b, .y=0xc5, .sp=0x7f, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x90}, {.addr=0x59ea, .value=0x44}, {.addr=0x59eb, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x59ec, .a=0x60, .x=0x1b, .y=0xc5, .sp=0x7f, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x90}, {.addr=0x59ea, .value=0x44}, {.addr=0x59eb, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x59ea, .value=0x44, .type=IO_READ},
        {.addr=0x59eb, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034E) {
    const struct CPU_State initial_cpu = {.pc=0x44ca, .a=0x2d, .x=0x06, .y=0xb1, .sp=0x92, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xc4}, {.addr=0x44ca, .value=0x44}, {.addr=0x44cb, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x44cc, .a=0xe9, .x=0x06, .y=0xb1, .sp=0x92, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xc4}, {.addr=0x44ca, .value=0x44}, {.addr=0x44cb, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x44ca, .value=0x44, .type=IO_READ},
        {.addr=0x44cb, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_034F) {
    const struct CPU_State initial_cpu = {.pc=0xa707, .a=0x26, .x=0x45, .y=0x7e, .sp=0x61, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x0d}, {.addr=0xa707, .value=0x44}, {.addr=0xa708, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xa709, .a=0x2b, .x=0x45, .y=0x7e, .sp=0x61, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x0d}, {.addr=0xa707, .value=0x44}, {.addr=0xa708, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa707, .value=0x44, .type=IO_READ},
        {.addr=0xa708, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0350) {
    const struct CPU_State initial_cpu = {.pc=0x1c12, .a=0x8b, .x=0x34, .y=0x98, .sp=0xd5, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x77}, {.addr=0x1c12, .value=0x44}, {.addr=0x1c13, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x1c14, .a=0xfc, .x=0x34, .y=0x98, .sp=0xd5, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x77}, {.addr=0x1c12, .value=0x44}, {.addr=0x1c13, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c12, .value=0x44, .type=IO_READ},
        {.addr=0x1c13, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0351) {
    const struct CPU_State initial_cpu = {.pc=0x7837, .a=0x59, .x=0x36, .y=0xb2, .sp=0x1a, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xbc}, {.addr=0x7837, .value=0x44}, {.addr=0x7838, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x7839, .a=0xe5, .x=0x36, .y=0xb2, .sp=0x1a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xbc}, {.addr=0x7837, .value=0x44}, {.addr=0x7838, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7837, .value=0x44, .type=IO_READ},
        {.addr=0x7838, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0352) {
    const struct CPU_State initial_cpu = {.pc=0x2c64, .a=0x12, .x=0x70, .y=0xf7, .sp=0x57, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xf1}, {.addr=0x2c64, .value=0x44}, {.addr=0x2c65, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2c66, .a=0xe3, .x=0x70, .y=0xf7, .sp=0x57, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xf1}, {.addr=0x2c64, .value=0x44}, {.addr=0x2c65, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c64, .value=0x44, .type=IO_READ},
        {.addr=0x2c65, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0353) {
    const struct CPU_State initial_cpu = {.pc=0x1171, .a=0x22, .x=0xf6, .y=0x14, .sp=0xdd, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xe7}, {.addr=0x1171, .value=0x44}, {.addr=0x1172, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x1173, .a=0xc5, .x=0xf6, .y=0x14, .sp=0xdd, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xe7}, {.addr=0x1171, .value=0x44}, {.addr=0x1172, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x1171, .value=0x44, .type=IO_READ},
        {.addr=0x1172, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0355) {
    const struct CPU_State initial_cpu = {.pc=0xf9d0, .a=0x0e, .x=0x76, .y=0x64, .sp=0xf9, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x2e}, {.addr=0xf9d0, .value=0x44}, {.addr=0xf9d1, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xf9d2, .a=0x20, .x=0x76, .y=0x64, .sp=0xf9, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x2e}, {.addr=0xf9d0, .value=0x44}, {.addr=0xf9d1, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9d0, .value=0x44, .type=IO_READ},
        {.addr=0xf9d1, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0356) {
    const struct CPU_State initial_cpu = {.pc=0x578e, .a=0x98, .x=0xf8, .y=0xa6, .sp=0x53, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x19}, {.addr=0x578e, .value=0x44}, {.addr=0x578f, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x5790, .a=0x81, .x=0xf8, .y=0xa6, .sp=0x53, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x19}, {.addr=0x578e, .value=0x44}, {.addr=0x578f, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x578e, .value=0x44, .type=IO_READ},
        {.addr=0x578f, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0357) {
    const struct CPU_State initial_cpu = {.pc=0xb3fa, .a=0xcf, .x=0xc3, .y=0xb9, .sp=0x09, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x77}, {.addr=0xb3fa, .value=0x44}, {.addr=0xb3fb, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xb3fc, .a=0xb8, .x=0xc3, .y=0xb9, .sp=0x09, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x77}, {.addr=0xb3fa, .value=0x44}, {.addr=0xb3fb, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3fa, .value=0x44, .type=IO_READ},
        {.addr=0xb3fb, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0358) {
    const struct CPU_State initial_cpu = {.pc=0xea64, .a=0xca, .x=0x04, .y=0x04, .sp=0x0f, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xd0}, {.addr=0xea64, .value=0x44}, {.addr=0xea65, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xea66, .a=0x1a, .x=0x04, .y=0x04, .sp=0x0f, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xd0}, {.addr=0xea64, .value=0x44}, {.addr=0xea65, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xea64, .value=0x44, .type=IO_READ},
        {.addr=0xea65, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0359) {
    const struct CPU_State initial_cpu = {.pc=0x175d, .a=0x18, .x=0xe0, .y=0xba, .sp=0xb8, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xea}, {.addr=0x175d, .value=0x44}, {.addr=0x175e, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x175f, .a=0xf2, .x=0xe0, .y=0xba, .sp=0xb8, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xea}, {.addr=0x175d, .value=0x44}, {.addr=0x175e, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x175d, .value=0x44, .type=IO_READ},
        {.addr=0x175e, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_035A) {
    const struct CPU_State initial_cpu = {.pc=0x1587, .a=0x25, .x=0xb8, .y=0xc7, .sp=0x42, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x89}, {.addr=0x1587, .value=0x44}, {.addr=0x1588, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x1589, .a=0xac, .x=0xb8, .y=0xc7, .sp=0x42, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x89}, {.addr=0x1587, .value=0x44}, {.addr=0x1588, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x1587, .value=0x44, .type=IO_READ},
        {.addr=0x1588, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_035B) {
    const struct CPU_State initial_cpu = {.pc=0xd15b, .a=0xa6, .x=0x86, .y=0x9f, .sp=0x10, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xe0}, {.addr=0xd15b, .value=0x44}, {.addr=0xd15c, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xd15d, .a=0x46, .x=0x86, .y=0x9f, .sp=0x10, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xe0}, {.addr=0xd15b, .value=0x44}, {.addr=0xd15c, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd15b, .value=0x44, .type=IO_READ},
        {.addr=0xd15c, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_035C) {
    const struct CPU_State initial_cpu = {.pc=0x213a, .a=0xef, .x=0xe4, .y=0x26, .sp=0xbe, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x1b}, {.addr=0x213a, .value=0x44}, {.addr=0x213b, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0xf4, .x=0xe4, .y=0x26, .sp=0xbe, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x1b}, {.addr=0x213a, .value=0x44}, {.addr=0x213b, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x213a, .value=0x44, .type=IO_READ},
        {.addr=0x213b, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa167, .a=0x61, .x=0x65, .y=0xb6, .sp=0xe9, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x5c}, {.addr=0xa167, .value=0x44}, {.addr=0xa168, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xa169, .a=0x3d, .x=0x65, .y=0xb6, .sp=0xe9, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x5c}, {.addr=0xa167, .value=0x44}, {.addr=0xa168, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xa167, .value=0x44, .type=IO_READ},
        {.addr=0xa168, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_035F) {
    const struct CPU_State initial_cpu = {.pc=0x83e1, .a=0x55, .x=0x3e, .y=0xdb, .sp=0xca, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xa0}, {.addr=0x83e1, .value=0x44}, {.addr=0x83e2, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x83e3, .a=0xf5, .x=0x3e, .y=0xdb, .sp=0xca, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xa0}, {.addr=0x83e1, .value=0x44}, {.addr=0x83e2, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x83e1, .value=0x44, .type=IO_READ},
        {.addr=0x83e2, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0361) {
    const struct CPU_State initial_cpu = {.pc=0x2f94, .a=0xce, .x=0x64, .y=0x04, .sp=0x3c, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x0d}, {.addr=0x2f94, .value=0x44}, {.addr=0x2f95, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x2f96, .a=0xc3, .x=0x64, .y=0x04, .sp=0x3c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x0d}, {.addr=0x2f94, .value=0x44}, {.addr=0x2f95, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f94, .value=0x44, .type=IO_READ},
        {.addr=0x2f95, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0362) {
    const struct CPU_State initial_cpu = {.pc=0xd0e8, .a=0xab, .x=0x9b, .y=0xc2, .sp=0x92, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x20}, {.addr=0xd0e8, .value=0x44}, {.addr=0xd0e9, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0x8b, .x=0x9b, .y=0xc2, .sp=0x92, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x20}, {.addr=0xd0e8, .value=0x44}, {.addr=0xd0e9, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0e8, .value=0x44, .type=IO_READ},
        {.addr=0xd0e9, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0363) {
    const struct CPU_State initial_cpu = {.pc=0xe36e, .a=0x76, .x=0x41, .y=0x0c, .sp=0x42, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x22}, {.addr=0xe36e, .value=0x44}, {.addr=0xe36f, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xe370, .a=0x54, .x=0x41, .y=0x0c, .sp=0x42, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x22}, {.addr=0xe36e, .value=0x44}, {.addr=0xe36f, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe36e, .value=0x44, .type=IO_READ},
        {.addr=0xe36f, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8deb, .a=0xe6, .x=0xd6, .y=0xac, .sp=0xd8, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xa2}, {.addr=0x8deb, .value=0x44}, {.addr=0x8dec, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x8ded, .a=0x44, .x=0xd6, .y=0xac, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xa2}, {.addr=0x8deb, .value=0x44}, {.addr=0x8dec, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8deb, .value=0x44, .type=IO_READ},
        {.addr=0x8dec, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0365) {
    const struct CPU_State initial_cpu = {.pc=0x7897, .a=0x17, .x=0xa0, .y=0xbb, .sp=0xce, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x4e}, {.addr=0x7897, .value=0x44}, {.addr=0x7898, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x7899, .a=0x59, .x=0xa0, .y=0xbb, .sp=0xce, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x4e}, {.addr=0x7897, .value=0x44}, {.addr=0x7898, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x7897, .value=0x44, .type=IO_READ},
        {.addr=0x7898, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0366) {
    const struct CPU_State initial_cpu = {.pc=0x498c, .a=0x82, .x=0x7c, .y=0xa9, .sp=0xc4, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x13}, {.addr=0x498c, .value=0x44}, {.addr=0x498d, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x498e, .a=0x91, .x=0x7c, .y=0xa9, .sp=0xc4, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x13}, {.addr=0x498c, .value=0x44}, {.addr=0x498d, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x498c, .value=0x44, .type=IO_READ},
        {.addr=0x498d, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0367) {
    const struct CPU_State initial_cpu = {.pc=0xafe7, .a=0x9b, .x=0xb8, .y=0xef, .sp=0x76, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xcf}, {.addr=0xafe7, .value=0x44}, {.addr=0xafe8, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xafe9, .a=0x54, .x=0xb8, .y=0xef, .sp=0x76, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xcf}, {.addr=0xafe7, .value=0x44}, {.addr=0xafe8, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xafe7, .value=0x44, .type=IO_READ},
        {.addr=0xafe8, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0368) {
    const struct CPU_State initial_cpu = {.pc=0x1cff, .a=0x98, .x=0x70, .y=0x2e, .sp=0xae, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x65}, {.addr=0x1cff, .value=0x44}, {.addr=0x1d00, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x1d01, .a=0xfd, .x=0x70, .y=0x2e, .sp=0xae, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x65}, {.addr=0x1cff, .value=0x44}, {.addr=0x1d00, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cff, .value=0x44, .type=IO_READ},
        {.addr=0x1d00, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0369) {
    const struct CPU_State initial_cpu = {.pc=0x1aa6, .a=0xef, .x=0xb1, .y=0xf0, .sp=0x43, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x36}, {.addr=0x1aa6, .value=0x44}, {.addr=0x1aa7, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x1aa8, .a=0xd9, .x=0xb1, .y=0xf0, .sp=0x43, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x36}, {.addr=0x1aa6, .value=0x44}, {.addr=0x1aa7, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aa6, .value=0x44, .type=IO_READ},
        {.addr=0x1aa7, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_036A) {
    const struct CPU_State initial_cpu = {.pc=0x90a7, .a=0xe1, .x=0xc3, .y=0xd5, .sp=0x9b, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x16}, {.addr=0x90a7, .value=0x44}, {.addr=0x90a8, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x90a9, .a=0xf7, .x=0xc3, .y=0xd5, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x16}, {.addr=0x90a7, .value=0x44}, {.addr=0x90a8, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x90a7, .value=0x44, .type=IO_READ},
        {.addr=0x90a8, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_036B) {
    const struct CPU_State initial_cpu = {.pc=0xa8a4, .a=0x0c, .x=0xf3, .y=0xff, .sp=0xb0, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x3a}, {.addr=0xa8a4, .value=0x44}, {.addr=0xa8a5, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xa8a6, .a=0x36, .x=0xf3, .y=0xff, .sp=0xb0, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x3a}, {.addr=0xa8a4, .value=0x44}, {.addr=0xa8a5, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8a4, .value=0x44, .type=IO_READ},
        {.addr=0xa8a5, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_036C) {
    const struct CPU_State initial_cpu = {.pc=0x5b87, .a=0x08, .x=0xef, .y=0xc8, .sp=0x5d, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xb3}, {.addr=0x5b87, .value=0x44}, {.addr=0x5b88, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x5b89, .a=0xbb, .x=0xef, .y=0xc8, .sp=0x5d, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xb3}, {.addr=0x5b87, .value=0x44}, {.addr=0x5b88, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b87, .value=0x44, .type=IO_READ},
        {.addr=0x5b88, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_036D) {
    const struct CPU_State initial_cpu = {.pc=0x4ec8, .a=0x1c, .x=0xe1, .y=0xb3, .sp=0xe3, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x22}, {.addr=0x4ec8, .value=0x44}, {.addr=0x4ec9, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x4eca, .a=0x3e, .x=0xe1, .y=0xb3, .sp=0xe3, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x22}, {.addr=0x4ec8, .value=0x44}, {.addr=0x4ec9, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ec8, .value=0x44, .type=IO_READ},
        {.addr=0x4ec9, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_036E) {
    const struct CPU_State initial_cpu = {.pc=0x6817, .a=0x82, .x=0xa3, .y=0x15, .sp=0x49, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xa0}, {.addr=0x6817, .value=0x44}, {.addr=0x6818, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x6819, .a=0x22, .x=0xa3, .y=0x15, .sp=0x49, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xa0}, {.addr=0x6817, .value=0x44}, {.addr=0x6818, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x6817, .value=0x44, .type=IO_READ},
        {.addr=0x6818, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0370) {
    const struct CPU_State initial_cpu = {.pc=0x4263, .a=0x47, .x=0x49, .y=0x3e, .sp=0x73, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0xfe}, {.addr=0x4263, .value=0x44}, {.addr=0x4264, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x4265, .a=0xb9, .x=0x49, .y=0x3e, .sp=0x73, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0xfe}, {.addr=0x4263, .value=0x44}, {.addr=0x4264, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x4263, .value=0x44, .type=IO_READ},
        {.addr=0x4264, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0371) {
    const struct CPU_State initial_cpu = {.pc=0x489e, .a=0x14, .x=0x32, .y=0x6f, .sp=0x6d, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x2f}, {.addr=0x489e, .value=0x44}, {.addr=0x489f, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x48a0, .a=0x3b, .x=0x32, .y=0x6f, .sp=0x6d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x2f}, {.addr=0x489e, .value=0x44}, {.addr=0x489f, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x489e, .value=0x44, .type=IO_READ},
        {.addr=0x489f, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0372) {
    const struct CPU_State initial_cpu = {.pc=0xcde3, .a=0x7a, .x=0xf6, .y=0x63, .sp=0x82, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xa9}, {.addr=0xcde3, .value=0x44}, {.addr=0xcde4, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xcde5, .a=0xd3, .x=0xf6, .y=0x63, .sp=0x82, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xa9}, {.addr=0xcde3, .value=0x44}, {.addr=0xcde4, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xcde3, .value=0x44, .type=IO_READ},
        {.addr=0xcde4, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0373) {
    const struct CPU_State initial_cpu = {.pc=0x1033, .a=0x28, .x=0x09, .y=0x89, .sp=0x55, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xb1}, {.addr=0x1033, .value=0x44}, {.addr=0x1034, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x1035, .a=0x99, .x=0x09, .y=0x89, .sp=0x55, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xb1}, {.addr=0x1033, .value=0x44}, {.addr=0x1034, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1033, .value=0x44, .type=IO_READ},
        {.addr=0x1034, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0374) {
    const struct CPU_State initial_cpu = {.pc=0x2c93, .a=0x4a, .x=0x9f, .y=0x5b, .sp=0xc8, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x7a}, {.addr=0x2c93, .value=0x44}, {.addr=0x2c94, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x2c95, .a=0x30, .x=0x9f, .y=0x5b, .sp=0xc8, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x7a}, {.addr=0x2c93, .value=0x44}, {.addr=0x2c94, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c93, .value=0x44, .type=IO_READ},
        {.addr=0x2c94, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0375) {
    const struct CPU_State initial_cpu = {.pc=0x6edb, .a=0xc5, .x=0x68, .y=0xa7, .sp=0xcc, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xd8}, {.addr=0x6edb, .value=0x44}, {.addr=0x6edc, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x6edd, .a=0x1d, .x=0x68, .y=0xa7, .sp=0xcc, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xd8}, {.addr=0x6edb, .value=0x44}, {.addr=0x6edc, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x6edb, .value=0x44, .type=IO_READ},
        {.addr=0x6edc, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0376) {
    const struct CPU_State initial_cpu = {.pc=0x454a, .a=0x1c, .x=0x26, .y=0x7e, .sp=0xb9, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xfd}, {.addr=0x454a, .value=0x44}, {.addr=0x454b, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x454c, .a=0xe1, .x=0x26, .y=0x7e, .sp=0xb9, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xfd}, {.addr=0x454a, .value=0x44}, {.addr=0x454b, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x454a, .value=0x44, .type=IO_READ},
        {.addr=0x454b, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6faa, .a=0x5d, .x=0x99, .y=0x56, .sp=0x09, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x92}, {.addr=0x6faa, .value=0x44}, {.addr=0x6fab, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x6fac, .a=0xcf, .x=0x99, .y=0x56, .sp=0x09, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x92}, {.addr=0x6faa, .value=0x44}, {.addr=0x6fab, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6faa, .value=0x44, .type=IO_READ},
        {.addr=0x6fab, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0378) {
    const struct CPU_State initial_cpu = {.pc=0x4a8b, .a=0x02, .x=0x56, .y=0x39, .sp=0x02, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x55}, {.addr=0x4a8b, .value=0x44}, {.addr=0x4a8c, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x4a8d, .a=0x57, .x=0x56, .y=0x39, .sp=0x02, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x55}, {.addr=0x4a8b, .value=0x44}, {.addr=0x4a8c, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a8b, .value=0x44, .type=IO_READ},
        {.addr=0x4a8c, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0379) {
    const struct CPU_State initial_cpu = {.pc=0xe04d, .a=0xad, .x=0x31, .y=0x82, .sp=0xad, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x14}, {.addr=0xe04d, .value=0x44}, {.addr=0xe04e, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xe04f, .a=0xb9, .x=0x31, .y=0x82, .sp=0xad, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x14}, {.addr=0xe04d, .value=0x44}, {.addr=0xe04e, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe04d, .value=0x44, .type=IO_READ},
        {.addr=0xe04e, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037A) {
    const struct CPU_State initial_cpu = {.pc=0xfd4e, .a=0xd3, .x=0x08, .y=0x85, .sp=0xc7, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x4e}, {.addr=0xfd4e, .value=0x44}, {.addr=0xfd4f, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xfd50, .a=0x9d, .x=0x08, .y=0x85, .sp=0xc7, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x4e}, {.addr=0xfd4e, .value=0x44}, {.addr=0xfd4f, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd4e, .value=0x44, .type=IO_READ},
        {.addr=0xfd4f, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037B) {
    const struct CPU_State initial_cpu = {.pc=0xcc8b, .a=0x69, .x=0x4a, .y=0x62, .sp=0x56, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xae}, {.addr=0xcc8b, .value=0x44}, {.addr=0xcc8c, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xcc8d, .a=0xc7, .x=0x4a, .y=0x62, .sp=0x56, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xae}, {.addr=0xcc8b, .value=0x44}, {.addr=0xcc8c, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc8b, .value=0x44, .type=IO_READ},
        {.addr=0xcc8c, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037C) {
    const struct CPU_State initial_cpu = {.pc=0x5265, .a=0x59, .x=0x13, .y=0x01, .sp=0x18, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xc2}, {.addr=0x5265, .value=0x44}, {.addr=0x5266, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x5267, .a=0x9b, .x=0x13, .y=0x01, .sp=0x18, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xc2}, {.addr=0x5265, .value=0x44}, {.addr=0x5266, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5265, .value=0x44, .type=IO_READ},
        {.addr=0x5266, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037D) {
    const struct CPU_State initial_cpu = {.pc=0xda62, .a=0x11, .x=0xab, .y=0x6f, .sp=0x99, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x85}, {.addr=0xda62, .value=0x44}, {.addr=0xda63, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xda64, .a=0x94, .x=0xab, .y=0x6f, .sp=0x99, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x85}, {.addr=0xda62, .value=0x44}, {.addr=0xda63, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xda62, .value=0x44, .type=IO_READ},
        {.addr=0xda63, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037E) {
    const struct CPU_State initial_cpu = {.pc=0x8ba3, .a=0x85, .x=0xe8, .y=0x4d, .sp=0xb0, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x66}, {.addr=0x8ba3, .value=0x44}, {.addr=0x8ba4, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x8ba5, .a=0xe3, .x=0xe8, .y=0x4d, .sp=0xb0, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x66}, {.addr=0x8ba3, .value=0x44}, {.addr=0x8ba4, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ba3, .value=0x44, .type=IO_READ},
        {.addr=0x8ba4, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_037F) {
    const struct CPU_State initial_cpu = {.pc=0xf261, .a=0x17, .x=0xc2, .y=0x36, .sp=0xf2, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x38}, {.addr=0xf261, .value=0x44}, {.addr=0xf262, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xf263, .a=0x2f, .x=0xc2, .y=0x36, .sp=0xf2, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x38}, {.addr=0xf261, .value=0x44}, {.addr=0xf262, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xf261, .value=0x44, .type=IO_READ},
        {.addr=0xf262, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0380) {
    const struct CPU_State initial_cpu = {.pc=0xf090, .a=0x68, .x=0x4e, .y=0x99, .sp=0xb6, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x22}, {.addr=0xf090, .value=0x44}, {.addr=0xf091, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xf092, .a=0x4a, .x=0x4e, .y=0x99, .sp=0xb6, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x22}, {.addr=0xf090, .value=0x44}, {.addr=0xf091, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf090, .value=0x44, .type=IO_READ},
        {.addr=0xf091, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb628, .a=0xdb, .x=0x9a, .y=0xab, .sp=0x68, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xb3}, {.addr=0xb628, .value=0x44}, {.addr=0xb629, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xb62a, .a=0x68, .x=0x9a, .y=0xab, .sp=0x68, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xb3}, {.addr=0xb628, .value=0x44}, {.addr=0xb629, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb628, .value=0x44, .type=IO_READ},
        {.addr=0xb629, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0382) {
    const struct CPU_State initial_cpu = {.pc=0x00d9, .a=0x92, .x=0x1d, .y=0x56, .sp=0xad, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x44}, {.addr=0x00da, .value=0x0c}, {.addr=0x010c, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x00db, .a=0xe8, .x=0x1d, .y=0x56, .sp=0xad, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x44}, {.addr=0x00da, .value=0x0c}, {.addr=0x010c, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x00d9, .value=0x44, .type=IO_READ},
        {.addr=0x00da, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0383) {
    const struct CPU_State initial_cpu = {.pc=0x1e28, .a=0xe5, .x=0xf2, .y=0x86, .sp=0x64, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xe5}, {.addr=0x1e28, .value=0x44}, {.addr=0x1e29, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x1e2a, .a=0x00, .x=0xf2, .y=0x86, .sp=0x64, .status=0x17};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xe5}, {.addr=0x1e28, .value=0x44}, {.addr=0x1e29, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e28, .value=0x44, .type=IO_READ},
        {.addr=0x1e29, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0384) {
    const struct CPU_State initial_cpu = {.pc=0x3f5d, .a=0x7d, .x=0xdd, .y=0xe4, .sp=0x0d, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x0b}, {.addr=0x3f5d, .value=0x44}, {.addr=0x3f5e, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x3f5f, .a=0x76, .x=0xdd, .y=0xe4, .sp=0x0d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x0b}, {.addr=0x3f5d, .value=0x44}, {.addr=0x3f5e, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f5d, .value=0x44, .type=IO_READ},
        {.addr=0x3f5e, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2f52, .a=0x9b, .x=0x7a, .y=0x73, .sp=0xb2, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xe5}, {.addr=0x2f52, .value=0x44}, {.addr=0x2f53, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x2f54, .a=0x7e, .x=0x7a, .y=0x73, .sp=0xb2, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xe5}, {.addr=0x2f52, .value=0x44}, {.addr=0x2f53, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f52, .value=0x44, .type=IO_READ},
        {.addr=0x2f53, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0386) {
    const struct CPU_State initial_cpu = {.pc=0x5ed0, .a=0xb2, .x=0x04, .y=0x0c, .sp=0x8c, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x62}, {.addr=0x5ed0, .value=0x44}, {.addr=0x5ed1, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x5ed2, .a=0xd0, .x=0x04, .y=0x0c, .sp=0x8c, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x62}, {.addr=0x5ed0, .value=0x44}, {.addr=0x5ed1, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ed0, .value=0x44, .type=IO_READ},
        {.addr=0x5ed1, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0387) {
    const struct CPU_State initial_cpu = {.pc=0x44b2, .a=0x5b, .x=0x0f, .y=0x6d, .sp=0x73, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x0d}, {.addr=0x44b2, .value=0x44}, {.addr=0x44b3, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x44b4, .a=0x56, .x=0x0f, .y=0x6d, .sp=0x73, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x0d}, {.addr=0x44b2, .value=0x44}, {.addr=0x44b3, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x44b2, .value=0x44, .type=IO_READ},
        {.addr=0x44b3, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0388) {
    const struct CPU_State initial_cpu = {.pc=0x2b21, .a=0x86, .x=0xb6, .y=0x4f, .sp=0xd2, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xa7}, {.addr=0x2b21, .value=0x44}, {.addr=0x2b22, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x2b23, .a=0x21, .x=0xb6, .y=0x4f, .sp=0xd2, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xa7}, {.addr=0x2b21, .value=0x44}, {.addr=0x2b22, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b21, .value=0x44, .type=IO_READ},
        {.addr=0x2b22, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0389) {
    const struct CPU_State initial_cpu = {.pc=0x45eb, .a=0x37, .x=0x8e, .y=0x24, .sp=0x94, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x51}, {.addr=0x45eb, .value=0x44}, {.addr=0x45ec, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x45ed, .a=0x66, .x=0x8e, .y=0x24, .sp=0x94, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x51}, {.addr=0x45eb, .value=0x44}, {.addr=0x45ec, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x45eb, .value=0x44, .type=IO_READ},
        {.addr=0x45ec, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038A) {
    const struct CPU_State initial_cpu = {.pc=0x8117, .a=0x55, .x=0x39, .y=0x7f, .sp=0x62, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xa2}, {.addr=0x8117, .value=0x44}, {.addr=0x8118, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x8119, .a=0xf7, .x=0x39, .y=0x7f, .sp=0x62, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xa2}, {.addr=0x8117, .value=0x44}, {.addr=0x8118, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x8117, .value=0x44, .type=IO_READ},
        {.addr=0x8118, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038B) {
    const struct CPU_State initial_cpu = {.pc=0x23db, .a=0xec, .x=0x0f, .y=0xc0, .sp=0x4a, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xf2}, {.addr=0x23db, .value=0x44}, {.addr=0x23dc, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x23dd, .a=0x1e, .x=0x0f, .y=0xc0, .sp=0x4a, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xf2}, {.addr=0x23db, .value=0x44}, {.addr=0x23dc, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x23db, .value=0x44, .type=IO_READ},
        {.addr=0x23dc, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2309, .a=0x3c, .x=0xde, .y=0xf6, .sp=0x3b, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xf3}, {.addr=0x2309, .value=0x44}, {.addr=0x230a, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x230b, .a=0xcf, .x=0xde, .y=0xf6, .sp=0x3b, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xf3}, {.addr=0x2309, .value=0x44}, {.addr=0x230a, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2309, .value=0x44, .type=IO_READ},
        {.addr=0x230a, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2383, .a=0xc4, .x=0x04, .y=0x73, .sp=0xef, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x9e}, {.addr=0x2383, .value=0x44}, {.addr=0x2384, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x2385, .a=0x5a, .x=0x04, .y=0x73, .sp=0xef, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x9e}, {.addr=0x2383, .value=0x44}, {.addr=0x2384, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x2383, .value=0x44, .type=IO_READ},
        {.addr=0x2384, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038E) {
    const struct CPU_State initial_cpu = {.pc=0xa67f, .a=0x67, .x=0xa3, .y=0x8f, .sp=0xd8, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x35}, {.addr=0xa67f, .value=0x44}, {.addr=0xa680, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xa681, .a=0x52, .x=0xa3, .y=0x8f, .sp=0xd8, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x35}, {.addr=0xa67f, .value=0x44}, {.addr=0xa680, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xa67f, .value=0x44, .type=IO_READ},
        {.addr=0xa680, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_038F) {
    const struct CPU_State initial_cpu = {.pc=0xddeb, .a=0x76, .x=0xc9, .y=0x32, .sp=0x5c, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x6f}, {.addr=0xddeb, .value=0x44}, {.addr=0xddec, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0xdded, .a=0x19, .x=0xc9, .y=0x32, .sp=0x5c, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x6f}, {.addr=0xddeb, .value=0x44}, {.addr=0xddec, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0xddeb, .value=0x44, .type=IO_READ},
        {.addr=0xddec, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0390) {
    const struct CPU_State initial_cpu = {.pc=0x5d64, .a=0x7c, .x=0x5b, .y=0x5f, .sp=0x9d, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x6c}, {.addr=0x5d64, .value=0x44}, {.addr=0x5d65, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x5d66, .a=0x10, .x=0x5b, .y=0x5f, .sp=0x9d, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x6c}, {.addr=0x5d64, .value=0x44}, {.addr=0x5d65, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d64, .value=0x44, .type=IO_READ},
        {.addr=0x5d65, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0391) {
    const struct CPU_State initial_cpu = {.pc=0x7952, .a=0xeb, .x=0xdc, .y=0x53, .sp=0xd5, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xad}, {.addr=0x7952, .value=0x44}, {.addr=0x7953, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x7954, .a=0x46, .x=0xdc, .y=0x53, .sp=0xd5, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xad}, {.addr=0x7952, .value=0x44}, {.addr=0x7953, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x7952, .value=0x44, .type=IO_READ},
        {.addr=0x7953, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0392) {
    const struct CPU_State initial_cpu = {.pc=0xf8ea, .a=0x9b, .x=0x5a, .y=0x74, .sp=0xd3, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xe2}, {.addr=0xf8ea, .value=0x44}, {.addr=0xf8eb, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xf8ec, .a=0x79, .x=0x5a, .y=0x74, .sp=0xd3, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xe2}, {.addr=0xf8ea, .value=0x44}, {.addr=0xf8eb, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8ea, .value=0x44, .type=IO_READ},
        {.addr=0xf8eb, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0393) {
    const struct CPU_State initial_cpu = {.pc=0xcd81, .a=0x1b, .x=0x89, .y=0xe9, .sp=0xf0, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xaf}, {.addr=0xcd81, .value=0x44}, {.addr=0xcd82, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xcd83, .a=0xb4, .x=0x89, .y=0xe9, .sp=0xf0, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xaf}, {.addr=0xcd81, .value=0x44}, {.addr=0xcd82, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd81, .value=0x44, .type=IO_READ},
        {.addr=0xcd82, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0394) {
    const struct CPU_State initial_cpu = {.pc=0x0b31, .a=0x62, .x=0x21, .y=0x91, .sp=0xd2, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xb1}, {.addr=0x0b31, .value=0x44}, {.addr=0x0b32, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x0b33, .a=0xd3, .x=0x21, .y=0x91, .sp=0xd2, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xb1}, {.addr=0x0b31, .value=0x44}, {.addr=0x0b32, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b31, .value=0x44, .type=IO_READ},
        {.addr=0x0b32, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0395) {
    const struct CPU_State initial_cpu = {.pc=0xaf98, .a=0x65, .x=0x8f, .y=0xf4, .sp=0x7c, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xd4}, {.addr=0xaf98, .value=0x44}, {.addr=0xaf99, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xaf9a, .a=0xb1, .x=0x8f, .y=0xf4, .sp=0x7c, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xd4}, {.addr=0xaf98, .value=0x44}, {.addr=0xaf99, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf98, .value=0x44, .type=IO_READ},
        {.addr=0xaf99, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0396) {
    const struct CPU_State initial_cpu = {.pc=0x2b01, .a=0x32, .x=0x60, .y=0xc9, .sp=0x9d, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xd1}, {.addr=0x2b01, .value=0x44}, {.addr=0x2b02, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x2b03, .a=0xe3, .x=0x60, .y=0xc9, .sp=0x9d, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xd1}, {.addr=0x2b01, .value=0x44}, {.addr=0x2b02, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b01, .value=0x44, .type=IO_READ},
        {.addr=0x2b02, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0397) {
    const struct CPU_State initial_cpu = {.pc=0xd8e6, .a=0x9e, .x=0x1d, .y=0x4e, .sp=0x75, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xe3}, {.addr=0xd8e6, .value=0x44}, {.addr=0xd8e7, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xd8e8, .a=0x7d, .x=0x1d, .y=0x4e, .sp=0x75, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xe3}, {.addr=0xd8e6, .value=0x44}, {.addr=0xd8e7, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8e6, .value=0x44, .type=IO_READ},
        {.addr=0xd8e7, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0398) {
    const struct CPU_State initial_cpu = {.pc=0x72b4, .a=0x13, .x=0x19, .y=0xc8, .sp=0x31, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xc9}, {.addr=0x72b4, .value=0x44}, {.addr=0x72b5, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x72b6, .a=0xda, .x=0x19, .y=0xc8, .sp=0x31, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xc9}, {.addr=0x72b4, .value=0x44}, {.addr=0x72b5, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x72b4, .value=0x44, .type=IO_READ},
        {.addr=0x72b5, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_0399) {
    const struct CPU_State initial_cpu = {.pc=0x6248, .a=0x7c, .x=0x7e, .y=0x49, .sp=0x41, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x1f}, {.addr=0x6248, .value=0x44}, {.addr=0x6249, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x624a, .a=0x63, .x=0x7e, .y=0x49, .sp=0x41, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x1f}, {.addr=0x6248, .value=0x44}, {.addr=0x6249, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x6248, .value=0x44, .type=IO_READ},
        {.addr=0x6249, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039A) {
    const struct CPU_State initial_cpu = {.pc=0x5171, .a=0x1d, .x=0x90, .y=0xbd, .sp=0x56, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x9f}, {.addr=0x5171, .value=0x44}, {.addr=0x5172, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x5173, .a=0x82, .x=0x90, .y=0xbd, .sp=0x56, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x9f}, {.addr=0x5171, .value=0x44}, {.addr=0x5172, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x5171, .value=0x44, .type=IO_READ},
        {.addr=0x5172, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039B) {
    const struct CPU_State initial_cpu = {.pc=0xa787, .a=0x31, .x=0xdb, .y=0x6e, .sp=0x58, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x83}, {.addr=0xa787, .value=0x44}, {.addr=0xa788, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xa789, .a=0xb2, .x=0xdb, .y=0x6e, .sp=0x58, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x83}, {.addr=0xa787, .value=0x44}, {.addr=0xa788, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa787, .value=0x44, .type=IO_READ},
        {.addr=0xa788, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039C) {
    const struct CPU_State initial_cpu = {.pc=0x3ce9, .a=0xde, .x=0xbd, .y=0x10, .sp=0xda, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x5b}, {.addr=0x3ce9, .value=0x44}, {.addr=0x3cea, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x3ceb, .a=0x85, .x=0xbd, .y=0x10, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x5b}, {.addr=0x3ce9, .value=0x44}, {.addr=0x3cea, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ce9, .value=0x44, .type=IO_READ},
        {.addr=0x3cea, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039D) {
    const struct CPU_State initial_cpu = {.pc=0xb583, .a=0x38, .x=0xaa, .y=0x03, .sp=0x4f, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x75}, {.addr=0xb583, .value=0x44}, {.addr=0xb584, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xb585, .a=0x4d, .x=0xaa, .y=0x03, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x75}, {.addr=0xb583, .value=0x44}, {.addr=0xb584, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb583, .value=0x44, .type=IO_READ},
        {.addr=0xb584, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4c81, .a=0x6c, .x=0x95, .y=0x2c, .sp=0x4f, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x20}, {.addr=0x4c81, .value=0x44}, {.addr=0x4c82, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x4c83, .a=0x4c, .x=0x95, .y=0x2c, .sp=0x4f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x20}, {.addr=0x4c81, .value=0x44}, {.addr=0x4c82, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c81, .value=0x44, .type=IO_READ},
        {.addr=0x4c82, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_039F) {
    const struct CPU_State initial_cpu = {.pc=0xd333, .a=0xe8, .x=0x8b, .y=0x79, .sp=0x82, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x73}, {.addr=0xd333, .value=0x44}, {.addr=0xd334, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xd335, .a=0x9b, .x=0x8b, .y=0x79, .sp=0x82, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x73}, {.addr=0xd333, .value=0x44}, {.addr=0xd334, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd333, .value=0x44, .type=IO_READ},
        {.addr=0xd334, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xbfff, .a=0xd2, .x=0x79, .y=0xbc, .sp=0x15, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x72}, {.addr=0xbfff, .value=0x44}, {.addr=0xc000, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xc001, .a=0xa0, .x=0x79, .y=0xbc, .sp=0x15, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x72}, {.addr=0xbfff, .value=0x44}, {.addr=0xc000, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfff, .value=0x44, .type=IO_READ},
        {.addr=0xc000, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x8ac6, .a=0xd0, .x=0x14, .y=0x10, .sp=0xa4, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x8b}, {.addr=0x8ac6, .value=0x44}, {.addr=0x8ac7, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x8ac8, .a=0x5b, .x=0x14, .y=0x10, .sp=0xa4, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x8b}, {.addr=0x8ac6, .value=0x44}, {.addr=0x8ac7, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ac6, .value=0x44, .type=IO_READ},
        {.addr=0x8ac7, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x325f, .a=0x5b, .x=0x02, .y=0x2a, .sp=0x18, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xb6}, {.addr=0x325f, .value=0x44}, {.addr=0x3260, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x3261, .a=0xed, .x=0x02, .y=0x2a, .sp=0x18, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xb6}, {.addr=0x325f, .value=0x44}, {.addr=0x3260, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x325f, .value=0x44, .type=IO_READ},
        {.addr=0x3260, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xa9b3, .a=0x84, .x=0x6f, .y=0x46, .sp=0x06, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x26}, {.addr=0xa9b3, .value=0x44}, {.addr=0xa9b4, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xa9b5, .a=0xa2, .x=0x6f, .y=0x46, .sp=0x06, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x26}, {.addr=0xa9b3, .value=0x44}, {.addr=0xa9b4, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9b3, .value=0x44, .type=IO_READ},
        {.addr=0xa9b4, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x41ae, .a=0x58, .x=0x8c, .y=0x08, .sp=0xc3, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xc5}, {.addr=0x41ae, .value=0x44}, {.addr=0x41af, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x41b0, .a=0x9d, .x=0x8c, .y=0x08, .sp=0xc3, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xc5}, {.addr=0x41ae, .value=0x44}, {.addr=0x41af, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x41ae, .value=0x44, .type=IO_READ},
        {.addr=0x41af, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x99ef, .a=0x77, .x=0x09, .y=0xae, .sp=0xdc, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xbf}, {.addr=0x99ef, .value=0x44}, {.addr=0x99f0, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x99f1, .a=0xc8, .x=0x09, .y=0xae, .sp=0xdc, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xbf}, {.addr=0x99ef, .value=0x44}, {.addr=0x99f0, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x99ef, .value=0x44, .type=IO_READ},
        {.addr=0x99f0, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3047, .a=0xc0, .x=0x5d, .y=0xb6, .sp=0x09, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x1f}, {.addr=0x3047, .value=0x44}, {.addr=0x3048, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x3049, .a=0xdf, .x=0x5d, .y=0xb6, .sp=0x09, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x1f}, {.addr=0x3047, .value=0x44}, {.addr=0x3048, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3047, .value=0x44, .type=IO_READ},
        {.addr=0x3048, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x1a12, .a=0x6c, .x=0xbd, .y=0x64, .sp=0x61, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x1a12, .value=0x44}, {.addr=0x1a13, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x1a14, .a=0xaa, .x=0xbd, .y=0x64, .sp=0x61, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x1a12, .value=0x44}, {.addr=0x1a13, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a12, .value=0x44, .type=IO_READ},
        {.addr=0x1a13, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x9815, .a=0x54, .x=0x92, .y=0x1a, .sp=0x92, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0xe1}, {.addr=0x9815, .value=0x44}, {.addr=0x9816, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x9817, .a=0xb5, .x=0x92, .y=0x1a, .sp=0x92, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0xe1}, {.addr=0x9815, .value=0x44}, {.addr=0x9816, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x9815, .value=0x44, .type=IO_READ},
        {.addr=0x9816, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd90c, .a=0x62, .x=0x44, .y=0x6f, .sp=0x04, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xcc}, {.addr=0xd90c, .value=0x44}, {.addr=0xd90d, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xd90e, .a=0xae, .x=0x44, .y=0x6f, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xcc}, {.addr=0xd90c, .value=0x44}, {.addr=0xd90d, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd90c, .value=0x44, .type=IO_READ},
        {.addr=0xd90d, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x3525, .a=0xb1, .x=0x16, .y=0x47, .sp=0xe7, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x21}, {.addr=0x3525, .value=0x44}, {.addr=0x3526, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x3527, .a=0x90, .x=0x16, .y=0x47, .sp=0xe7, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x21}, {.addr=0x3525, .value=0x44}, {.addr=0x3526, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3525, .value=0x44, .type=IO_READ},
        {.addr=0x3526, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x5b59, .a=0x2e, .x=0x3d, .y=0x18, .sp=0x46, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x9c}, {.addr=0x5b59, .value=0x44}, {.addr=0x5b5a, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x5b5b, .a=0xb2, .x=0x3d, .y=0x18, .sp=0x46, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x9c}, {.addr=0x5b59, .value=0x44}, {.addr=0x5b5a, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b59, .value=0x44, .type=IO_READ},
        {.addr=0x5b5a, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xc1da, .a=0x69, .x=0x63, .y=0x00, .sp=0xfa, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x71}, {.addr=0xc1da, .value=0x44}, {.addr=0xc1db, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xc1dc, .a=0x18, .x=0x63, .y=0x00, .sp=0xfa, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x71}, {.addr=0xc1da, .value=0x44}, {.addr=0xc1db, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1da, .value=0x44, .type=IO_READ},
        {.addr=0xc1db, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xb0a4, .a=0x41, .x=0xdf, .y=0x0a, .sp=0x3f, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x32}, {.addr=0xb0a4, .value=0x44}, {.addr=0xb0a5, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xb0a6, .a=0x73, .x=0xdf, .y=0x0a, .sp=0x3f, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x32}, {.addr=0xb0a4, .value=0x44}, {.addr=0xb0a5, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0a4, .value=0x44, .type=IO_READ},
        {.addr=0xb0a5, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x9f88, .a=0x44, .x=0xcd, .y=0x03, .sp=0xfb, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x77}, {.addr=0x9f88, .value=0x44}, {.addr=0x9f89, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x9f8a, .a=0x33, .x=0xcd, .y=0x03, .sp=0xfb, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x77}, {.addr=0x9f88, .value=0x44}, {.addr=0x9f89, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f88, .value=0x44, .type=IO_READ},
        {.addr=0x9f89, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x7ebb, .a=0x31, .x=0x84, .y=0x51, .sp=0x73, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x71}, {.addr=0x7ebb, .value=0x44}, {.addr=0x7ebc, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x7ebd, .a=0x40, .x=0x84, .y=0x51, .sp=0x73, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x71}, {.addr=0x7ebb, .value=0x44}, {.addr=0x7ebc, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ebb, .value=0x44, .type=IO_READ},
        {.addr=0x7ebc, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x117b, .a=0x93, .x=0xf5, .y=0x40, .sp=0x6c, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x6d}, {.addr=0x117b, .value=0x44}, {.addr=0x117c, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x117d, .a=0xfe, .x=0xf5, .y=0x40, .sp=0x6c, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x6d}, {.addr=0x117b, .value=0x44}, {.addr=0x117c, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x117b, .value=0x44, .type=IO_READ},
        {.addr=0x117c, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xd69c, .a=0x4f, .x=0x1c, .y=0xe4, .sp=0x1e, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xc8}, {.addr=0xd69c, .value=0x44}, {.addr=0xd69d, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xd69e, .a=0x87, .x=0x1c, .y=0xe4, .sp=0x1e, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xc8}, {.addr=0xd69c, .value=0x44}, {.addr=0xd69d, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xd69c, .value=0x44, .type=IO_READ},
        {.addr=0xd69d, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xf7b5, .a=0x25, .x=0x67, .y=0xc2, .sp=0xda, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xd5}, {.addr=0xf7b5, .value=0x44}, {.addr=0xf7b6, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xf7b7, .a=0xf0, .x=0x67, .y=0xc2, .sp=0xda, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xd5}, {.addr=0xf7b5, .value=0x44}, {.addr=0xf7b6, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7b5, .value=0x44, .type=IO_READ},
        {.addr=0xf7b6, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x13e7, .a=0x85, .x=0x63, .y=0x90, .sp=0x30, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xc5}, {.addr=0x13e7, .value=0x44}, {.addr=0x13e8, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x13e9, .a=0x40, .x=0x63, .y=0x90, .sp=0x30, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xc5}, {.addr=0x13e7, .value=0x44}, {.addr=0x13e8, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x13e7, .value=0x44, .type=IO_READ},
        {.addr=0x13e8, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1ee2, .a=0x12, .x=0x9e, .y=0xc5, .sp=0x61, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x7b}, {.addr=0x1ee2, .value=0x44}, {.addr=0x1ee3, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x1ee4, .a=0x69, .x=0x9e, .y=0xc5, .sp=0x61, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x7b}, {.addr=0x1ee2, .value=0x44}, {.addr=0x1ee3, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ee2, .value=0x44, .type=IO_READ},
        {.addr=0x1ee3, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x7382, .a=0xbc, .x=0x2f, .y=0xb8, .sp=0x78, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x90}, {.addr=0x7382, .value=0x44}, {.addr=0x7383, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x7384, .a=0x2c, .x=0x2f, .y=0xb8, .sp=0x78, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x90}, {.addr=0x7382, .value=0x44}, {.addr=0x7383, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x7382, .value=0x44, .type=IO_READ},
        {.addr=0x7383, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x3440, .a=0x67, .x=0x24, .y=0xcf, .sp=0x96, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xbc}, {.addr=0x3440, .value=0x44}, {.addr=0x3441, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x3442, .a=0xdb, .x=0x24, .y=0xcf, .sp=0x96, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xbc}, {.addr=0x3440, .value=0x44}, {.addr=0x3441, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x3440, .value=0x44, .type=IO_READ},
        {.addr=0x3441, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x36e3, .a=0x06, .x=0xcc, .y=0xf8, .sp=0x5f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0xe4}, {.addr=0x36e3, .value=0x44}, {.addr=0x36e4, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x36e5, .a=0xe2, .x=0xcc, .y=0xf8, .sp=0x5f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0xe4}, {.addr=0x36e3, .value=0x44}, {.addr=0x36e4, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x36e3, .value=0x44, .type=IO_READ},
        {.addr=0x36e4, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x38ce, .a=0xb8, .x=0xf9, .y=0xe8, .sp=0x44, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x38}, {.addr=0x38ce, .value=0x44}, {.addr=0x38cf, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x38d0, .a=0x80, .x=0xf9, .y=0xe8, .sp=0x44, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x38}, {.addr=0x38ce, .value=0x44}, {.addr=0x38cf, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x38ce, .value=0x44, .type=IO_READ},
        {.addr=0x38cf, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xca3b, .a=0x0c, .x=0x05, .y=0x23, .sp=0x1b, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xed}, {.addr=0xca3b, .value=0x44}, {.addr=0xca3c, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xca3d, .a=0xe1, .x=0x05, .y=0x23, .sp=0x1b, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xed}, {.addr=0xca3b, .value=0x44}, {.addr=0xca3c, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xca3b, .value=0x44, .type=IO_READ},
        {.addr=0xca3c, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x3818, .a=0x72, .x=0x31, .y=0xe9, .sp=0xc7, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xb8}, {.addr=0x3818, .value=0x44}, {.addr=0x3819, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x381a, .a=0xca, .x=0x31, .y=0xe9, .sp=0xc7, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xb8}, {.addr=0x3818, .value=0x44}, {.addr=0x3819, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3818, .value=0x44, .type=IO_READ},
        {.addr=0x3819, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x70af, .a=0x37, .x=0xe7, .y=0x01, .sp=0xc8, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x23}, {.addr=0x70af, .value=0x44}, {.addr=0x70b0, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x70b1, .a=0x14, .x=0xe7, .y=0x01, .sp=0xc8, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x23}, {.addr=0x70af, .value=0x44}, {.addr=0x70b0, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x70af, .value=0x44, .type=IO_READ},
        {.addr=0x70b0, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xf973, .a=0x56, .x=0x12, .y=0x46, .sp=0x3a, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x73}, {.addr=0xf973, .value=0x44}, {.addr=0xf974, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xf975, .a=0x25, .x=0x12, .y=0x46, .sp=0x3a, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x73}, {.addr=0xf973, .value=0x44}, {.addr=0xf974, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf973, .value=0x44, .type=IO_READ},
        {.addr=0xf974, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xa3c4, .a=0x52, .x=0xa2, .y=0x99, .sp=0x82, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x2b}, {.addr=0xa3c4, .value=0x44}, {.addr=0xa3c5, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xa3c6, .a=0x79, .x=0xa2, .y=0x99, .sp=0x82, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x2b}, {.addr=0xa3c4, .value=0x44}, {.addr=0xa3c5, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3c4, .value=0x44, .type=IO_READ},
        {.addr=0xa3c5, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x480a, .a=0x64, .x=0x70, .y=0x39, .sp=0x9a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x0e}, {.addr=0x480a, .value=0x44}, {.addr=0x480b, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x480c, .a=0x6a, .x=0x70, .y=0x39, .sp=0x9a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x0e}, {.addr=0x480a, .value=0x44}, {.addr=0x480b, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x480a, .value=0x44, .type=IO_READ},
        {.addr=0x480b, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xb84b, .a=0x75, .x=0xb4, .y=0xb1, .sp=0xf3, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x16}, {.addr=0xb84b, .value=0x44}, {.addr=0xb84c, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xb84d, .a=0x63, .x=0xb4, .y=0xb1, .sp=0xf3, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x16}, {.addr=0xb84b, .value=0x44}, {.addr=0xb84c, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84b, .value=0x44, .type=IO_READ},
        {.addr=0xb84c, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x8023, .a=0x42, .x=0xc0, .y=0xdc, .sp=0xa0, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xb5}, {.addr=0x8023, .value=0x44}, {.addr=0x8024, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x8025, .a=0xf7, .x=0xc0, .y=0xdc, .sp=0xa0, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xb5}, {.addr=0x8023, .value=0x44}, {.addr=0x8024, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8023, .value=0x44, .type=IO_READ},
        {.addr=0x8024, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xe68e, .a=0x45, .x=0x1c, .y=0x14, .sp=0xf8, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x64}, {.addr=0xe68e, .value=0x44}, {.addr=0xe68f, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xe690, .a=0x21, .x=0x1c, .y=0x14, .sp=0xf8, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x64}, {.addr=0xe68e, .value=0x44}, {.addr=0xe68f, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe68e, .value=0x44, .type=IO_READ},
        {.addr=0xe68f, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x68c8, .a=0xda, .x=0xd7, .y=0x78, .sp=0x91, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xf0}, {.addr=0x68c8, .value=0x44}, {.addr=0x68c9, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x68ca, .a=0x2a, .x=0xd7, .y=0x78, .sp=0x91, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xf0}, {.addr=0x68c8, .value=0x44}, {.addr=0x68c9, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x68c8, .value=0x44, .type=IO_READ},
        {.addr=0x68c9, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x00ce, .a=0xea, .x=0xf4, .y=0x87, .sp=0x33, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x44}, {.addr=0x00cf, .value=0x26}, {.addr=0x0126, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x00d0, .a=0x33, .x=0xf4, .y=0x87, .sp=0x33, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x44}, {.addr=0x00cf, .value=0x26}, {.addr=0x0126, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x00ce, .value=0x44, .type=IO_READ},
        {.addr=0x00cf, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xa1c4, .a=0xbf, .x=0xed, .y=0xbf, .sp=0xc0, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x63}, {.addr=0xa1c4, .value=0x44}, {.addr=0xa1c5, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xa1c6, .a=0xdc, .x=0xed, .y=0xbf, .sp=0xc0, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x63}, {.addr=0xa1c4, .value=0x44}, {.addr=0xa1c5, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1c4, .value=0x44, .type=IO_READ},
        {.addr=0xa1c5, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf835, .a=0xfa, .x=0x06, .y=0xd3, .sp=0x66, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0xbf}, {.addr=0xf835, .value=0x44}, {.addr=0xf836, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xf837, .a=0x45, .x=0x06, .y=0xd3, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0xbf}, {.addr=0xf835, .value=0x44}, {.addr=0xf836, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf835, .value=0x44, .type=IO_READ},
        {.addr=0xf836, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xff7c, .a=0x31, .x=0x76, .y=0x12, .sp=0x4a, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x58}, {.addr=0xff7c, .value=0x44}, {.addr=0xff7d, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xff7e, .a=0x69, .x=0x76, .y=0x12, .sp=0x4a, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x58}, {.addr=0xff7c, .value=0x44}, {.addr=0xff7d, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xff7c, .value=0x44, .type=IO_READ},
        {.addr=0xff7d, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8bdb, .a=0x71, .x=0xb0, .y=0xda, .sp=0xd9, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x1e}, {.addr=0x8bdb, .value=0x44}, {.addr=0x8bdc, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x8bdd, .a=0x6f, .x=0xb0, .y=0xda, .sp=0xd9, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x1e}, {.addr=0x8bdb, .value=0x44}, {.addr=0x8bdc, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bdb, .value=0x44, .type=IO_READ},
        {.addr=0x8bdc, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xe7b8, .a=0xa8, .x=0xc3, .y=0x1f, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xfa}, {.addr=0xe7b8, .value=0x44}, {.addr=0xe7b9, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xe7ba, .a=0x52, .x=0xc3, .y=0x1f, .sp=0x13, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xfa}, {.addr=0xe7b8, .value=0x44}, {.addr=0xe7b9, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7b8, .value=0x44, .type=IO_READ},
        {.addr=0xe7b9, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7da3, .a=0xf9, .x=0x30, .y=0xff, .sp=0xc6, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xa8}, {.addr=0x7da3, .value=0x44}, {.addr=0x7da4, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x7da5, .a=0x51, .x=0x30, .y=0xff, .sp=0xc6, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xa8}, {.addr=0x7da3, .value=0x44}, {.addr=0x7da4, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7da3, .value=0x44, .type=IO_READ},
        {.addr=0x7da4, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x7c2e, .a=0x96, .x=0x28, .y=0x78, .sp=0x88, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xe4}, {.addr=0x7c2e, .value=0x44}, {.addr=0x7c2f, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7c30, .a=0x72, .x=0x28, .y=0x78, .sp=0x88, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xe4}, {.addr=0x7c2e, .value=0x44}, {.addr=0x7c2f, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c2e, .value=0x44, .type=IO_READ},
        {.addr=0x7c2f, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xa39d, .a=0x82, .x=0x7c, .y=0x55, .sp=0xf9, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x0b}, {.addr=0xa39d, .value=0x44}, {.addr=0xa39e, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xa39f, .a=0x89, .x=0x7c, .y=0x55, .sp=0xf9, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x0b}, {.addr=0xa39d, .value=0x44}, {.addr=0xa39e, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xa39d, .value=0x44, .type=IO_READ},
        {.addr=0xa39e, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x0dca, .a=0x7b, .x=0xb9, .y=0xc9, .sp=0x9d, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xa9}, {.addr=0x0dca, .value=0x44}, {.addr=0x0dcb, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x0dcc, .a=0xd2, .x=0xb9, .y=0xc9, .sp=0x9d, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xa9}, {.addr=0x0dca, .value=0x44}, {.addr=0x0dcb, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dca, .value=0x44, .type=IO_READ},
        {.addr=0x0dcb, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x3a9b, .a=0x96, .x=0x40, .y=0x2d, .sp=0x58, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x3f}, {.addr=0x3a9b, .value=0x44}, {.addr=0x3a9c, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x3a9d, .a=0xa9, .x=0x40, .y=0x2d, .sp=0x58, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x3f}, {.addr=0x3a9b, .value=0x44}, {.addr=0x3a9c, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a9b, .value=0x44, .type=IO_READ},
        {.addr=0x3a9c, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x00d0, .a=0x56, .x=0x58, .y=0x1e, .sp=0x7e, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x44}, {.addr=0x00d1, .value=0x3c}, {.addr=0x013c, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x00d2, .a=0xe2, .x=0x58, .y=0x1e, .sp=0x7e, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x44}, {.addr=0x00d1, .value=0x3c}, {.addr=0x013c, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x00d0, .value=0x44, .type=IO_READ},
        {.addr=0x00d1, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xfde3, .a=0x6c, .x=0x69, .y=0x0e, .sp=0xb2, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x90}, {.addr=0xfde3, .value=0x44}, {.addr=0xfde4, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xfde5, .a=0xfc, .x=0x69, .y=0x0e, .sp=0xb2, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x90}, {.addr=0xfde3, .value=0x44}, {.addr=0xfde4, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xfde3, .value=0x44, .type=IO_READ},
        {.addr=0xfde4, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xebdf, .a=0xa9, .x=0x56, .y=0x7e, .sp=0xcf, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x1c}, {.addr=0xebdf, .value=0x44}, {.addr=0xebe0, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xebe1, .a=0xb5, .x=0x56, .y=0x7e, .sp=0xcf, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x1c}, {.addr=0xebdf, .value=0x44}, {.addr=0xebe0, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xebdf, .value=0x44, .type=IO_READ},
        {.addr=0xebe0, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xe643, .a=0xc4, .x=0x42, .y=0x51, .sp=0x31, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x2b}, {.addr=0xe643, .value=0x44}, {.addr=0xe644, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xe645, .a=0xef, .x=0x42, .y=0x51, .sp=0x31, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x2b}, {.addr=0xe643, .value=0x44}, {.addr=0xe644, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xe643, .value=0x44, .type=IO_READ},
        {.addr=0xe644, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x2f18, .a=0xe9, .x=0x5c, .y=0x14, .sp=0xca, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x5b}, {.addr=0x2f18, .value=0x44}, {.addr=0x2f19, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x2f1a, .a=0xb2, .x=0x5c, .y=0x14, .sp=0xca, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x5b}, {.addr=0x2f18, .value=0x44}, {.addr=0x2f19, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f18, .value=0x44, .type=IO_READ},
        {.addr=0x2f19, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xe7c2, .a=0xc4, .x=0x5a, .y=0x48, .sp=0x86, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x6b}, {.addr=0xe7c2, .value=0x44}, {.addr=0xe7c3, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xe7c4, .a=0xaf, .x=0x5a, .y=0x48, .sp=0x86, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x6b}, {.addr=0xe7c2, .value=0x44}, {.addr=0xe7c3, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7c2, .value=0x44, .type=IO_READ},
        {.addr=0xe7c3, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x0f53, .a=0xd7, .x=0xb7, .y=0xd0, .sp=0x43, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x82}, {.addr=0x0f53, .value=0x44}, {.addr=0x0f54, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x0f55, .a=0x55, .x=0xb7, .y=0xd0, .sp=0x43, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x82}, {.addr=0x0f53, .value=0x44}, {.addr=0x0f54, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f53, .value=0x44, .type=IO_READ},
        {.addr=0x0f54, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xaec2, .a=0x6f, .x=0x3a, .y=0x69, .sp=0xe6, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x97}, {.addr=0xaec2, .value=0x44}, {.addr=0xaec3, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xaec4, .a=0xf8, .x=0x3a, .y=0x69, .sp=0xe6, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x97}, {.addr=0xaec2, .value=0x44}, {.addr=0xaec3, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xaec2, .value=0x44, .type=IO_READ},
        {.addr=0xaec3, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xb6d0, .a=0x80, .x=0xec, .y=0x99, .sp=0x4b, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x3c}, {.addr=0xb6d0, .value=0x44}, {.addr=0xb6d1, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xb6d2, .a=0xbc, .x=0xec, .y=0x99, .sp=0x4b, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x3c}, {.addr=0xb6d0, .value=0x44}, {.addr=0xb6d1, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6d0, .value=0x44, .type=IO_READ},
        {.addr=0xb6d1, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3544, .a=0x87, .x=0x3c, .y=0x29, .sp=0x44, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x71}, {.addr=0x3544, .value=0x44}, {.addr=0x3545, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x3546, .a=0xf6, .x=0x3c, .y=0x29, .sp=0x44, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x71}, {.addr=0x3544, .value=0x44}, {.addr=0x3545, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x3544, .value=0x44, .type=IO_READ},
        {.addr=0x3545, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xb898, .a=0x2e, .x=0x2a, .y=0xf7, .sp=0x67, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x29}, {.addr=0xb898, .value=0x44}, {.addr=0xb899, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xb89a, .a=0x07, .x=0x2a, .y=0xf7, .sp=0x67, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x29}, {.addr=0xb898, .value=0x44}, {.addr=0xb899, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xb898, .value=0x44, .type=IO_READ},
        {.addr=0xb899, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x4ad0, .a=0xce, .x=0x76, .y=0x5a, .sp=0x41, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xf8}, {.addr=0x4ad0, .value=0x44}, {.addr=0x4ad1, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x4ad2, .a=0x36, .x=0x76, .y=0x5a, .sp=0x41, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xf8}, {.addr=0x4ad0, .value=0x44}, {.addr=0x4ad1, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ad0, .value=0x44, .type=IO_READ},
        {.addr=0x4ad1, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xfbb9, .a=0x9d, .x=0x12, .y=0xdc, .sp=0xae, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xa8}, {.addr=0xfbb9, .value=0x44}, {.addr=0xfbba, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xfbbb, .a=0x35, .x=0x12, .y=0xdc, .sp=0xae, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xa8}, {.addr=0xfbb9, .value=0x44}, {.addr=0xfbba, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbb9, .value=0x44, .type=IO_READ},
        {.addr=0xfbba, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xc846, .a=0x3b, .x=0xb0, .y=0xec, .sp=0x58, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x12}, {.addr=0xc846, .value=0x44}, {.addr=0xc847, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xc848, .a=0x29, .x=0xb0, .y=0xec, .sp=0x58, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x12}, {.addr=0xc846, .value=0x44}, {.addr=0xc847, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xc846, .value=0x44, .type=IO_READ},
        {.addr=0xc847, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xf311, .a=0xe4, .x=0x9c, .y=0x5b, .sp=0xa1, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x6b}, {.addr=0xf311, .value=0x44}, {.addr=0xf312, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xf313, .a=0x8f, .x=0x9c, .y=0x5b, .sp=0xa1, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x6b}, {.addr=0xf311, .value=0x44}, {.addr=0xf312, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf311, .value=0x44, .type=IO_READ},
        {.addr=0xf312, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xfa42, .a=0x31, .x=0x4a, .y=0xde, .sp=0xeb, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xcd}, {.addr=0xfa42, .value=0x44}, {.addr=0xfa43, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xfa44, .a=0xfc, .x=0x4a, .y=0xde, .sp=0xeb, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xcd}, {.addr=0xfa42, .value=0x44}, {.addr=0xfa43, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa42, .value=0x44, .type=IO_READ},
        {.addr=0xfa43, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xe184, .a=0x4c, .x=0x84, .y=0x28, .sp=0x46, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x1e}, {.addr=0xe184, .value=0x44}, {.addr=0xe185, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xe186, .a=0x52, .x=0x84, .y=0x28, .sp=0x46, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x1e}, {.addr=0xe184, .value=0x44}, {.addr=0xe185, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe184, .value=0x44, .type=IO_READ},
        {.addr=0xe185, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x0930, .a=0x53, .x=0xd5, .y=0x00, .sp=0x4d, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x5d}, {.addr=0x0930, .value=0x44}, {.addr=0x0931, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x0932, .a=0x0e, .x=0xd5, .y=0x00, .sp=0x4d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x5d}, {.addr=0x0930, .value=0x44}, {.addr=0x0931, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0930, .value=0x44, .type=IO_READ},
        {.addr=0x0931, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xccf3, .a=0x8b, .x=0x06, .y=0x20, .sp=0x70, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xfb}, {.addr=0xccf3, .value=0x44}, {.addr=0xccf4, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xccf5, .a=0x70, .x=0x06, .y=0x20, .sp=0x70, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xfb}, {.addr=0xccf3, .value=0x44}, {.addr=0xccf4, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xccf3, .value=0x44, .type=IO_READ},
        {.addr=0xccf4, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xc23d, .a=0x87, .x=0x3e, .y=0xe6, .sp=0x81, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xfd}, {.addr=0xc23d, .value=0x44}, {.addr=0xc23e, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xc23f, .a=0x7a, .x=0x3e, .y=0xe6, .sp=0x81, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xfd}, {.addr=0xc23d, .value=0x44}, {.addr=0xc23e, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xc23d, .value=0x44, .type=IO_READ},
        {.addr=0xc23e, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x95ed, .a=0x5e, .x=0x3a, .y=0x3e, .sp=0xa3, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xbf}, {.addr=0x95ed, .value=0x44}, {.addr=0x95ee, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x95ef, .a=0xe1, .x=0x3a, .y=0x3e, .sp=0xa3, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xbf}, {.addr=0x95ed, .value=0x44}, {.addr=0x95ee, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x95ed, .value=0x44, .type=IO_READ},
        {.addr=0x95ee, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x0dab, .a=0xac, .x=0xb1, .y=0x0a, .sp=0x67, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xdd}, {.addr=0x0dab, .value=0x44}, {.addr=0x0dac, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x0dad, .a=0x71, .x=0xb1, .y=0x0a, .sp=0x67, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xdd}, {.addr=0x0dab, .value=0x44}, {.addr=0x0dac, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dab, .value=0x44, .type=IO_READ},
        {.addr=0x0dac, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_44, _44_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x6bfb, .a=0xf6, .x=0xf8, .y=0x79, .sp=0xc2, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xc5}, {.addr=0x6bfb, .value=0x44}, {.addr=0x6bfc, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x6bfd, .a=0x33, .x=0xf8, .y=0x79, .sp=0xc2, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xc5}, {.addr=0x6bfb, .value=0x44}, {.addr=0x6bfc, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bfb, .value=0x44, .type=IO_READ},
        {.addr=0x6bfc, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("44 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
